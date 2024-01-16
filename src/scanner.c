#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

typedef enum TokenType {
  DESCENDANT_OP,
  NO_WHITESPACE,
  SINGLE_QUOTED_STRING_SEGMENT,
  DOUBLE_QUOTED_STRING_SEGMENT,
  ERROR_SENTINEL
} TokenType;

void *tree_sitter_scss_external_scanner_create() { return NULL; }
void tree_sitter_scss_external_scanner_destroy(void *p) {}
void tree_sitter_scss_external_scanner_reset(void *p) {}
unsigned tree_sitter_scss_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_scss_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool scan_for_string_segment(TSLexer *lexer, char delimiter, TokenType stringTokenType) {
  char c = lexer->lookahead;
  bool escaped = false;
  int initialColumn = lexer->get_column(lexer);
  int lastEscape;
  int col;

  if (c == delimiter) {
    return false;
  }

  while (c) {
    if (lexer->eof(lexer)) {
      return false;
    }
    col = lexer->get_column(lexer);
    escaped = col == (lastEscape + 1);
    if (c == '\\') {
      lastEscape = col;
    }

    if (c == '#' && !escaped) {
      lexer->mark_end(lexer);
      lexer->result_symbol = stringTokenType;
      lexer->advance(lexer, false);
      if (lexer->lookahead == '{') {
        if ((col - initialColumn) > 2) {
          return true;
        } else {
          // This token _started_ with `#{`, so there's no preceding string.
          // This is an interpolation.
          return false;
        }
      }
    }

    if (c == delimiter && !escaped) {
      lexer->mark_end(lexer);
      lexer->result_symbol = stringTokenType;
      return true;
    }

    if (c == '\n' && !escaped) {
      // Parsing error. Newlines must be escaped in strings.
      return false;
    }

    lexer->advance(lexer, false);
    c = lexer->lookahead;
  }
  return false;
}

bool tree_sitter_scss_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  bool inErrorState = valid_symbols[ERROR_SENTINEL];
  if (!iswspace(lexer->lookahead) && valid_symbols[NO_WHITESPACE]) {
    lexer->result_symbol = NO_WHITESPACE;
    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[SINGLE_QUOTED_STRING_SEGMENT] && !inErrorState) {
    return scan_for_string_segment(lexer, '\'', SINGLE_QUOTED_STRING_SEGMENT);
  }

  if (valid_symbols[DOUBLE_QUOTED_STRING_SEGMENT] && !inErrorState) {
    return scan_for_string_segment(lexer, '"', DOUBLE_QUOTED_STRING_SEGMENT);
  }

  if (iswspace(lexer->lookahead) && valid_symbols[DESCENDANT_OP]) {
    lexer->result_symbol = DESCENDANT_OP;

    lexer->advance(lexer, true);
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }
    lexer->mark_end(lexer);

    if (
      lexer->lookahead == '#' ||
      lexer->lookahead == '.' ||
      lexer->lookahead == '[' ||
      lexer->lookahead == '-' ||
      lexer->lookahead == '*' ||
      lexer->lookahead == '&' ||
      iswalnum(lexer->lookahead)
    ) {
      return true;
    }

    if (lexer->lookahead == ':') {
      lexer->advance(lexer, false);
      if (iswspace(lexer->lookahead)) return false;
      for (;;) {
        if (
          lexer->lookahead == ';' ||
          lexer->lookahead == '}' ||
          lexer->eof(lexer)
        ) return false;
        if (lexer->lookahead == '{') {
          return true;
        }
        lexer->advance(lexer, false);
      }
    }
  }

  return false;
}
