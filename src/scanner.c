#include "tree_sitter/parser.h"
#include <wctype.h>
#include <stdio.h>

#define DEBUG 0

#if DEBUG == 1
#define PRINTF(...) printf(__VA_ARGS__)
#else
#define PRINTF(...)
#endif

typedef enum TokenType {
  DESCENDANT_OP,
  PSEUDO_CLASS_SELECTOR_COLON,
  NO_WHITESPACE,
  SINGLE_QUOTED_STRING_SEGMENT,
  DOUBLE_QUOTED_STRING_SEGMENT,
  APPLY_VALUE,
  VARIABLE_WITHOUT_REST,
  VARIABLE_WITH_REST,
  ERROR_SENTINEL
} TokenType;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

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
    // PRINTF("Considering char: %c at column: %i and delimiter: %c and escaped: %i\n", c, col, delimiter, escaped);
    if (c == '\\') {
      // Mark the position of this escape so that we know we'll be escaped the
      // next time through the loop.
      lastEscape = col;
    }

    if (c == delimiter && !escaped) {
      // PRINTF("&&& Found matching delimiter at col: %i\n", lexer->get_column(lexer));
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

bool scan_for_variable(TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->lookahead != '$') return false;
  PRINTF(
    "Starting var scan at: %i valid: with? %i without? %i\n",
    lexer->get_column(lexer),
    valid_symbols[VARIABLE_WITH_REST],
    valid_symbols[VARIABLE_WITHOUT_REST]
  );
  // We've already seen the `$`, so we can skip past it.
  lexer->advance(lexer, false);
  if (lexer->eof(lexer)) return false;

  char c = lexer->lookahead;
  // These are the characters that can validly begin a variable.
  if (iswalpha(c) || c == '-' || c == '_') {
    lexer->advance(lexer, false);
  } else {
    return false;
  }
  // At this point, we have a valid variable. Keep going until we reach a
  // character that isn't valid in a variable name.
  while (true) {
    if (lexer->eof(lexer)) return false;
    c = lexer->lookahead;
    // Numbers are allowed in variable names after the first character.
    if (!iswalnum(c) && c != '-' && c != '_') {
      break;
    }
    lexer->advance(lexer, false);
  }
  PRINTF("Marking end at: %i\n", lexer->get_column(lexer));
  lexer->mark_end(lexer);
  lexer->result_symbol = VARIABLE_WITHOUT_REST;

  // We know we have a variable now. But what comes after it? Let's look ahead
  // to make sure it's not a spread operator (`...`). Spread syntax is valid in
  // so few contexts that we treat a variable immediately before `...` as a
  // _separate symbol_.
  for (int i = 0; i < 3; i++) {
    if (lexer->lookahead != '.') {
      return valid_symbols[VARIABLE_WITHOUT_REST];
    }
    lexer->advance(lexer, false);
  }

  // Now we've seen exactly three dots. If the next character _isn't_ a dot,
  // then we've got a rest parameter.
  if (lexer->lookahead == '.') {
    // `....` isn't valid syntax. It'll cause a problem in a minute, but for
    // now let's just tell the parser this is an ordinary non-rest variable.
    return valid_symbols[VARIABLE_WITHOUT_REST];
  } else {
    // We have a valid spread operator ahead of us.
    lexer->result_symbol = VARIABLE_WITH_REST;
    return valid_symbols[VARIABLE_WITH_REST];
  }
}

bool tree_sitter_scss_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  PRINTF(
    "SCAN character: [%c] validity: %i, %i, %i, %i, %i, %i, %i, %i, %i\n",
    lexer->lookahead,
    valid_symbols[DESCENDANT_OP],
    valid_symbols[PSEUDO_CLASS_SELECTOR_COLON],
    valid_symbols[NO_WHITESPACE],
    valid_symbols[SINGLE_QUOTED_STRING_SEGMENT],
    valid_symbols[DOUBLE_QUOTED_STRING_SEGMENT],
    valid_symbols[APPLY_VALUE],
    valid_symbols[VARIABLE_WITH_REST],
    valid_symbols[VARIABLE_WITHOUT_REST],
    valid_symbols[ERROR_SENTINEL]
  );

  // We might want more nuanced behavior here in the future, but for now we'll
  // simply decline to use the external scanner during error recovery.
  if (valid_symbols[ERROR_SENTINEL]) return false;

  // First, consider the tokens for which whitespace is significant.
  if (!iswspace(lexer->lookahead) && valid_symbols[NO_WHITESPACE]) {
    lexer->result_symbol = NO_WHITESPACE;
    lexer->mark_end(lexer);
    return true;
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
      skip(lexer);
    }
    if (lexer->lookahead == ':') {
      advance(lexer);
      if (iswspace(lexer->lookahead) || lexer->lookahead == ':') {
        return false;
      }
      lexer->mark_end(lexer);
      // We need a `{` to be a pseudo class selector; `;` indicates a property.
      while (lexer->lookahead != ';' && lexer->lookahead != '}' && !lexer->eof(lexer)) {
        advance(lexer);
        if (lexer->lookahead == '{') {
          lexer->result_symbol = PSEUDO_CLASS_SELECTOR_COLON;
          return true;
        }
      }
      return false;
    }
  }

  // Now that we've ruled out any whitespace-significant tokens, we can advance
  // to the next non-whitespace character and consider everything else.
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == '$' && (valid_symbols[VARIABLE_WITH_REST] || valid_symbols[VARIABLE_WITHOUT_REST])) {
    return scan_for_variable(lexer, valid_symbols);
  }

  if (valid_symbols[SINGLE_QUOTED_STRING_SEGMENT]) {
    return scan_for_string_segment(lexer, '\'', SINGLE_QUOTED_STRING_SEGMENT);
  }

  if (valid_symbols[DOUBLE_QUOTED_STRING_SEGMENT]) {
    return scan_for_string_segment(lexer, '"', DOUBLE_QUOTED_STRING_SEGMENT);
  }

  if (valid_symbols[APPLY_VALUE]) {
    return scan_for_apply_value(lexer);
  }

  return false;
}
