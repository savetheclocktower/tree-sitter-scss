#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

typedef enum TokenType {
  DESCENDANT_OP,
  PSEUDO_CLASS_SELECTOR_COLON,
  NO_WHITESPACE,
  SINGLE_QUOTED_STRING_SEGMENT,
  DOUBLE_QUOTED_STRING_SEGMENT,
  APPLY_VALUE,
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
  // The column of the most recent backslash character. (Assigned an initial
  // value that can't possibly confuse us.)
  int lastEscape = -2;
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
    // printf("Considering char: %c at column: %i and delimiter: %c and escaped: %i\n", c, col, delimiter, escaped);
    if (c == '\\') {
      // Mark the position of this escape so that we know we'll be escaped the
      // next time through the loop.
      lastEscape = col;
    }

    if (c == delimiter && !escaped) {
      // printf("&&& Found matching delimiter at col: %i\n", lexer->get_column(lexer));
      lexer->mark_end(lexer);
      lexer->result_symbol = stringTokenType;
      return true;
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

    if (c == '\n' && !escaped) {
      // Parsing error. Newlines must be escaped in strings.
      return false;
    }

    lexer->advance(lexer, false);
    c = lexer->lookahead;
  }
  return false;
}

// @apply values (of PostCSS/Tailwind fame) are like a black hole. Any valid
// class name is a valid space-separated value. Exclamation points are ruled
// out here so we don't match `!important`, but not much else is.
bool scan_for_apply_value(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }
  if (lexer->lookahead == ';' || lexer->lookahead == '!') {
    return false;
  }
  while (!iswspace(lexer->lookahead) && lexer->lookahead != ';') {
    if (lexer->eof(lexer)) {
      return false;
    }
    if (lexer->lookahead == '!') {
      return false;
    }
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  lexer->result_symbol = APPLY_VALUE;
  return true;
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

  if (valid_symbols[APPLY_VALUE] && !inErrorState) {
    return scan_for_apply_value(lexer);
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

  if (valid_symbols[PSEUDO_CLASS_SELECTOR_COLON]) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }
    if (lexer->lookahead == ':') {
      lexer->advance(lexer, false);
      if (iswspace(lexer->lookahead) || lexer->lookahead == ':') {
        return false;
      }
      lexer->result_symbol = PSEUDO_CLASS_SELECTOR_COLON;
      return true;
    }
  }

  return false;
}
