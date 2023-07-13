#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 678
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 21
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_with = 15,
  anon_sym_as = 16,
  anon_sym_STAR = 17,
  aux_sym_use_alias_token1 = 18,
  anon_sym_ATforward = 19,
  anon_sym_ATapply = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_COLON = 23,
  anon_sym_ATmixin = 24,
  anon_sym_ATinclude = 25,
  anon_sym_LPAREN2 = 26,
  anon_sym_RPAREN2 = 27,
  anon_sym_PERCENT = 28,
  anon_sym_ATextend = 29,
  anon_sym_ATif = 30,
  anon_sym_ATelse = 31,
  anon_sym_if = 32,
  anon_sym_ATeach = 33,
  anon_sym_in = 34,
  anon_sym_ATfor = 35,
  anon_sym_through = 36,
  anon_sym_ATwhile = 37,
  anon_sym_ATfunction = 38,
  anon_sym_ATreturn = 39,
  anon_sym_ATat_DASHroot = 40,
  anon_sym_ATerror = 41,
  anon_sym_ATwarn = 42,
  anon_sym_ATdebug = 43,
  sym_nesting_selector = 44,
  anon_sym_DOT = 45,
  anon_sym_COLON_COLON = 46,
  anon_sym_POUND = 47,
  anon_sym_LBRACK = 48,
  anon_sym_EQ = 49,
  anon_sym_TILDE_EQ = 50,
  anon_sym_CARET_EQ = 51,
  anon_sym_PIPE_EQ = 52,
  anon_sym_STAR_EQ = 53,
  anon_sym_DOLLAR_EQ = 54,
  anon_sym_RBRACK = 55,
  anon_sym_GT = 56,
  anon_sym_TILDE = 57,
  anon_sym_PLUS = 58,
  anon_sym_local = 59,
  anon_sym_global = 60,
  sym_important = 61,
  sym_default = 62,
  anon_sym_and = 63,
  anon_sym_or = 64,
  anon_sym_not = 65,
  anon_sym_only = 66,
  anon_sym_selector = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  sym_null_value = 70,
  aux_sym_color_value_token1 = 71,
  sym_string_value = 72,
  sym_unquoted_string_value = 73,
  aux_sym_integer_value_token1 = 74,
  aux_sym_float_value_token1 = 75,
  sym_unit = 76,
  anon_sym_url = 77,
  anon_sym_DOT2 = 78,
  anon_sym_DASH = 79,
  anon_sym_SLASH = 80,
  anon_sym_EQ_EQ = 81,
  anon_sym_LT = 82,
  anon_sym_BANG_EQ = 83,
  anon_sym_LT_EQ = 84,
  anon_sym_GT_EQ = 85,
  sym_identifier = 86,
  sym_variable_identifier = 87,
  sym_at_keyword = 88,
  sym_comment = 89,
  sym_single_line_comment = 90,
  sym_plain_value = 91,
  sym__descendant_operator = 92,
  sym__no_whitespace = 93,
  sym_stylesheet = 94,
  sym_import_statement = 95,
  sym_media_statement = 96,
  sym_charset_statement = 97,
  sym_namespace_statement = 98,
  sym_keyframes_statement = 99,
  sym_keyframe_block_list = 100,
  sym_keyframe_block = 101,
  sym_from = 102,
  sym_supports_statement = 103,
  sym_at_rule = 104,
  sym_use_statement = 105,
  sym_use_alias = 106,
  sym_forward_statement = 107,
  sym_apply_statement = 108,
  sym_parameters = 109,
  sym_parameter = 110,
  sym_use_parameters = 111,
  sym_use_parameter = 112,
  sym_mixin_statement = 113,
  sym_include_statement = 114,
  sym_include_arguments = 115,
  sym_include_argument = 116,
  sym_placeholder_declaration_selector = 117,
  sym_placeholder = 118,
  sym_extend_statement = 119,
  sym_if_statement = 120,
  sym_if_clause = 121,
  sym_else_if_clause = 122,
  sym_else_clause = 123,
  sym_each_statement = 124,
  sym_for_statement = 125,
  sym_while_statement = 126,
  sym_function_statement = 127,
  sym_return_statement = 128,
  sym_at_root_statement = 129,
  sym_error_statement = 130,
  sym_warn_statement = 131,
  sym_debug_statement = 132,
  sym_rule_set = 133,
  sym_selectors = 134,
  sym_block = 135,
  sym__selector = 136,
  sym_universal_selector = 137,
  sym_placeholder_selector = 138,
  sym_class_selector = 139,
  sym_pseudo_class_selector = 140,
  sym_pseudo_element_selector = 141,
  sym_id_selector = 142,
  sym_attribute_selector = 143,
  sym_child_selector = 144,
  sym_descendant_selector = 145,
  sym_sibling_selector = 146,
  sym_adjacent_sibling_selector = 147,
  sym_pseudo_class_arguments = 148,
  sym_scope_annotation = 149,
  sym_declaration = 150,
  sym_last_declaration = 151,
  sym__query = 152,
  sym_feature_query = 153,
  sym_parenthesized_query = 154,
  sym_binary_query = 155,
  sym_unary_query = 156,
  sym_selector_query = 157,
  sym__value = 158,
  sym__value_allowed_in_url_function = 159,
  sym_boolean_value = 160,
  sym_parenthesized_value = 161,
  sym_map_value = 162,
  sym_map_pair = 163,
  sym_color_value = 164,
  sym_integer_value = 165,
  sym_float_value = 166,
  sym_call_expression = 167,
  sym_binary_expression = 168,
  sym_binary_expression_allowed_in_url_function = 169,
  sym_arguments = 170,
  sym_arguments_for_url = 171,
  aux_sym_stylesheet_repeat1 = 172,
  aux_sym_import_statement_repeat1 = 173,
  aux_sym_keyframe_block_list_repeat1 = 174,
  aux_sym_apply_statement_repeat1 = 175,
  aux_sym_parameters_repeat1 = 176,
  aux_sym_use_parameters_repeat1 = 177,
  aux_sym_include_arguments_repeat1 = 178,
  aux_sym_if_statement_repeat1 = 179,
  aux_sym_selectors_repeat1 = 180,
  aux_sym_block_repeat1 = 181,
  aux_sym_pseudo_class_arguments_repeat1 = 182,
  aux_sym_declaration_repeat1 = 183,
  aux_sym_map_value_repeat1 = 184,
  aux_sym_arguments_repeat1 = 185,
  aux_sym_arguments_for_url_repeat1 = 186,
  aux_sym_arguments_for_url_repeat2 = 187,
  alias_sym_argument_name = 188,
  alias_sym_argument_value = 189,
  alias_sym_attribute_name = 190,
  alias_sym_class_name = 191,
  alias_sym_condition = 192,
  alias_sym_default_value = 193,
  alias_sym_feature_name = 194,
  alias_sym_id_name = 195,
  alias_sym_key = 196,
  alias_sym_keyframes_name = 197,
  alias_sym_keyword_query = 198,
  alias_sym_module = 199,
  alias_sym_name = 200,
  alias_sym_namespace_name = 201,
  alias_sym_placeholder_name = 202,
  alias_sym_property_name = 203,
  alias_sym_tag_name = 204,
  alias_sym_through = 205,
  alias_sym_value = 206,
  alias_sym_variable = 207,
  alias_sym_variable_value = 208,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_STAR] = "*",
  [aux_sym_use_alias_token1] = "use_alias_token1",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_ATapply] = "@apply",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_local] = "local",
  [anon_sym_global] = "global",
  [sym_important] = "important",
  [sym_default] = "default",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_value] = "null_value",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [sym_unquoted_string_value] = "plain_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_url] = "function_name",
  [anon_sym_DOT2] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__no_whitespace] = "_no_whitespace",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_use_alias] = "use_alias",
  [sym_forward_statement] = "forward_statement",
  [sym_apply_statement] = "apply_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_use_parameters] = "use_parameters",
  [sym_use_parameter] = "use_parameter",
  [sym_mixin_statement] = "mixin_statement",
  [sym_include_statement] = "include_statement",
  [sym_include_arguments] = "arguments",
  [sym_include_argument] = "argument",
  [sym_placeholder_declaration_selector] = "placeholder_selector",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_placeholder_selector] = "placeholder_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_scope_annotation] = "scope_annotation",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym__value_allowed_in_url_function] = "_value_allowed_in_url_function",
  [sym_boolean_value] = "boolean_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_map_value] = "map_value",
  [sym_map_pair] = "map_pair",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_expression_allowed_in_url_function] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_arguments_for_url] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_apply_statement_repeat1] = "apply_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_use_parameters_repeat1] = "use_parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_map_value_repeat1] = "map_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_for_url_repeat1] = "arguments_for_url_repeat1",
  [aux_sym_arguments_for_url_repeat2] = "arguments_for_url_repeat2",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_module] = "module",
  [alias_sym_name] = "name",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_placeholder_name] = "placeholder_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_value] = "variable_value",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_use_alias_token1] = aux_sym_use_alias_token1,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_ATapply] = anon_sym_ATapply,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_global] = anon_sym_global,
  [sym_important] = sym_important,
  [sym_default] = sym_default,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_value] = sym_null_value,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [sym_unquoted_string_value] = sym_plain_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__no_whitespace] = sym__no_whitespace,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_use_alias] = sym_use_alias,
  [sym_forward_statement] = sym_forward_statement,
  [sym_apply_statement] = sym_apply_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_use_parameters] = sym_use_parameters,
  [sym_use_parameter] = sym_use_parameter,
  [sym_mixin_statement] = sym_mixin_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_include_arguments] = sym_arguments,
  [sym_include_argument] = sym_include_argument,
  [sym_placeholder_declaration_selector] = sym_placeholder_selector,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_placeholder_selector] = sym_placeholder_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_scope_annotation] = sym_scope_annotation,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym__value_allowed_in_url_function] = sym__value_allowed_in_url_function,
  [sym_boolean_value] = sym_boolean_value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_map_value] = sym_map_value,
  [sym_map_pair] = sym_map_pair,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_expression_allowed_in_url_function] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_arguments_for_url] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_apply_statement_repeat1] = aux_sym_apply_statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_use_parameters_repeat1] = aux_sym_use_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_map_value_repeat1] = aux_sym_map_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_for_url_repeat1] = aux_sym_arguments_for_url_repeat1,
  [aux_sym_arguments_for_url_repeat2] = aux_sym_arguments_for_url_repeat2,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_module] = alias_sym_module,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_placeholder_name] = alias_sym_placeholder_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_value] = alias_sym_variable_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_use_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__no_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_use_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_use_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_use_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder_declaration_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__value_allowed_in_url_function] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_map_value] = {
    .visible = true,
    .named = true,
  },
  [sym_map_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression_allowed_in_url_function] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_for_url] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_for_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_for_url_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_placeholder_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_key = 2,
  field_module = 3,
  field_name = 4,
  field_value = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [9] = {.index = 0, .length = 2},
  [21] = {.index = 2, .length = 2},
  [24] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 1},
    {field_name, 0},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_arguments, 4},
    {field_module, 0},
    {field_name, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_variable_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_class_name,
  },
  [6] = {
    [1] = alias_sym_placeholder_name,
  },
  [7] = {
    [1] = alias_sym_tag_name,
  },
  [8] = {
    [1] = alias_sym_id_name,
  },
  [9] = {
    [0] = anon_sym_url,
  },
  [10] = {
    [1] = alias_sym_keyframes_name,
  },
  [11] = {
    [1] = alias_sym_name,
  },
  [12] = {
    [1] = alias_sym_condition,
  },
  [13] = {
    [1] = alias_sym_attribute_name,
  },
  [14] = {
    [2] = alias_sym_class_name,
  },
  [15] = {
    [2] = alias_sym_tag_name,
  },
  [16] = {
    [2] = alias_sym_id_name,
  },
  [17] = {
    [1] = alias_sym_namespace_name,
  },
  [18] = {
    [0] = alias_sym_argument_value,
  },
  [19] = {
    [0] = alias_sym_property_name,
  },
  [20] = {
    [2] = alias_sym_attribute_name,
  },
  [22] = {
    [1] = alias_sym_value,
  },
  [23] = {
    [2] = alias_sym_condition,
  },
  [24] = {
    [0] = alias_sym_module,
    [3] = anon_sym_url,
  },
  [25] = {
    [1] = alias_sym_feature_name,
  },
  [26] = {
    [2] = alias_sym_default_value,
  },
  [27] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [28] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [29] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 6,
    sym__value,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_unquoted_string_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_unquoted_string_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_unquoted_string_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_single_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_single_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '_') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(136);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(549);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == '}') ADVANCE(431);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 138:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 139:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(303);
      END_STATE();
    case 140:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(141);
      END_STATE();
    case 142:
      if (eof) ADVANCE(146);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 143:
      if (eof) ADVANCE(146);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 144:
      if (eof) ADVANCE(146);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_use_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'w') ADVANCE(443);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(128);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(385);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_null_value);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(287);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(238);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(243);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(293);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(371);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(248);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(288);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 's') ADVANCE(286);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(285);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '/') ADVANCE(139);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '{') ADVANCE(128);
      if (!sym_unquoted_string_value_character_set_3(lookahead)) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(139);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(548);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == 'y') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(242);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(350);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(370);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(247);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(351);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(345);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 's') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(342);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(361);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(303);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(412);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(549);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(546);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(427);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '_') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == 'k') ADVANCE(469);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 'x') ADVANCE(534);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 'x') ADVANCE(534);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(477);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(535);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(467);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(515);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'x') ADVANCE(478);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(169);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(472);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(549);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 143},
  [2] = {.lex_state = 143},
  [3] = {.lex_state = 143},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 145},
  [19] = {.lex_state = 145},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 145},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 145},
  [32] = {.lex_state = 145},
  [33] = {.lex_state = 3, .external_lex_state = 2},
  [34] = {.lex_state = 145},
  [35] = {.lex_state = 145},
  [36] = {.lex_state = 145},
  [37] = {.lex_state = 143},
  [38] = {.lex_state = 143},
  [39] = {.lex_state = 143},
  [40] = {.lex_state = 143},
  [41] = {.lex_state = 143},
  [42] = {.lex_state = 143},
  [43] = {.lex_state = 143},
  [44] = {.lex_state = 143},
  [45] = {.lex_state = 143},
  [46] = {.lex_state = 143},
  [47] = {.lex_state = 143},
  [48] = {.lex_state = 143},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 143},
  [51] = {.lex_state = 143},
  [52] = {.lex_state = 143},
  [53] = {.lex_state = 143},
  [54] = {.lex_state = 143},
  [55] = {.lex_state = 143},
  [56] = {.lex_state = 143},
  [57] = {.lex_state = 143},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 143},
  [60] = {.lex_state = 143},
  [61] = {.lex_state = 143},
  [62] = {.lex_state = 143},
  [63] = {.lex_state = 143},
  [64] = {.lex_state = 143},
  [65] = {.lex_state = 143},
  [66] = {.lex_state = 143},
  [67] = {.lex_state = 143},
  [68] = {.lex_state = 143},
  [69] = {.lex_state = 143},
  [70] = {.lex_state = 143},
  [71] = {.lex_state = 143},
  [72] = {.lex_state = 143},
  [73] = {.lex_state = 143},
  [74] = {.lex_state = 143},
  [75] = {.lex_state = 143},
  [76] = {.lex_state = 143},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 143},
  [79] = {.lex_state = 143},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 143},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 143},
  [84] = {.lex_state = 143},
  [85] = {.lex_state = 143},
  [86] = {.lex_state = 143},
  [87] = {.lex_state = 143},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 143},
  [90] = {.lex_state = 143},
  [91] = {.lex_state = 143},
  [92] = {.lex_state = 143},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 28},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 26},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 9, .external_lex_state = 2},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 29},
  [289] = {.lex_state = 29},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 29},
  [292] = {.lex_state = 29},
  [293] = {.lex_state = 29},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 12, .external_lex_state = 2},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 12},
  [316] = {.lex_state = 13},
  [317] = {.lex_state = 15},
  [318] = {.lex_state = 12},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 15},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 15},
  [323] = {.lex_state = 15},
  [324] = {.lex_state = 15},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 15},
  [327] = {.lex_state = 15},
  [328] = {.lex_state = 15},
  [329] = {.lex_state = 15},
  [330] = {.lex_state = 15},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 15},
  [333] = {.lex_state = 15},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 15},
  [336] = {.lex_state = 15},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 143, .external_lex_state = 2},
  [339] = {.lex_state = 143, .external_lex_state = 2},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 143, .external_lex_state = 2},
  [342] = {.lex_state = 15},
  [343] = {.lex_state = 143, .external_lex_state = 2},
  [344] = {.lex_state = 17},
  [345] = {.lex_state = 29, .external_lex_state = 2},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 143, .external_lex_state = 2},
  [349] = {.lex_state = 143, .external_lex_state = 2},
  [350] = {.lex_state = 143, .external_lex_state = 2},
  [351] = {.lex_state = 143, .external_lex_state = 2},
  [352] = {.lex_state = 143, .external_lex_state = 2},
  [353] = {.lex_state = 143, .external_lex_state = 2},
  [354] = {.lex_state = 143, .external_lex_state = 2},
  [355] = {.lex_state = 143, .external_lex_state = 2},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 143, .external_lex_state = 2},
  [358] = {.lex_state = 143, .external_lex_state = 2},
  [359] = {.lex_state = 143, .external_lex_state = 2},
  [360] = {.lex_state = 143, .external_lex_state = 2},
  [361] = {.lex_state = 143, .external_lex_state = 2},
  [362] = {.lex_state = 143, .external_lex_state = 2},
  [363] = {.lex_state = 143, .external_lex_state = 2},
  [364] = {.lex_state = 143, .external_lex_state = 2},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 143, .external_lex_state = 2},
  [367] = {.lex_state = 143, .external_lex_state = 2},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 143, .external_lex_state = 2},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 143, .external_lex_state = 2},
  [373] = {.lex_state = 143, .external_lex_state = 2},
  [374] = {.lex_state = 143, .external_lex_state = 2},
  [375] = {.lex_state = 143, .external_lex_state = 2},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 9},
  [379] = {.lex_state = 9},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 143, .external_lex_state = 2},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 143, .external_lex_state = 2},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 17},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 17},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 17},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 9},
  [399] = {.lex_state = 143, .external_lex_state = 2},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 143, .external_lex_state = 2},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 9},
  [406] = {.lex_state = 17},
  [407] = {.lex_state = 17},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 17},
  [411] = {.lex_state = 17},
  [412] = {.lex_state = 17},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 9},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 9},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 9},
  [423] = {.lex_state = 143, .external_lex_state = 2},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 17},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 9},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 9},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 143, .external_lex_state = 2},
  [434] = {.lex_state = 9},
  [435] = {.lex_state = 9},
  [436] = {.lex_state = 9},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 9},
  [439] = {.lex_state = 143, .external_lex_state = 2},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 9},
  [444] = {.lex_state = 9},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 9},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 9},
  [451] = {.lex_state = 143, .external_lex_state = 2},
  [452] = {.lex_state = 129},
  [453] = {.lex_state = 129},
  [454] = {.lex_state = 129},
  [455] = {.lex_state = 129},
  [456] = {.lex_state = 129},
  [457] = {.lex_state = 28},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 30},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 30},
  [462] = {.lex_state = 28},
  [463] = {.lex_state = 9},
  [464] = {.lex_state = 9},
  [465] = {.lex_state = 9},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 9},
  [468] = {.lex_state = 9},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 9},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 143},
  [479] = {.lex_state = 9},
  [480] = {.lex_state = 129},
  [481] = {.lex_state = 143},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 129},
  [484] = {.lex_state = 23},
  [485] = {.lex_state = 143},
  [486] = {.lex_state = 23},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 143},
  [489] = {.lex_state = 129},
  [490] = {.lex_state = 143},
  [491] = {.lex_state = 23},
  [492] = {.lex_state = 143},
  [493] = {.lex_state = 129},
  [494] = {.lex_state = 143},
  [495] = {.lex_state = 143},
  [496] = {.lex_state = 30},
  [497] = {.lex_state = 23},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 143},
  [501] = {.lex_state = 143},
  [502] = {.lex_state = 143},
  [503] = {.lex_state = 143},
  [504] = {.lex_state = 30},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 143},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 143},
  [509] = {.lex_state = 9},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 143},
  [512] = {.lex_state = 143},
  [513] = {.lex_state = 143},
  [514] = {.lex_state = 40},
  [515] = {.lex_state = 143},
  [516] = {.lex_state = 23},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 40},
  [519] = {.lex_state = 143},
  [520] = {.lex_state = 143},
  [521] = {.lex_state = 143},
  [522] = {.lex_state = 143},
  [523] = {.lex_state = 143},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 143},
  [527] = {.lex_state = 143},
  [528] = {.lex_state = 143},
  [529] = {.lex_state = 40},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 143},
  [532] = {.lex_state = 40},
  [533] = {.lex_state = 23},
  [534] = {.lex_state = 143},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 143},
  [537] = {.lex_state = 143},
  [538] = {.lex_state = 143},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 143},
  [542] = {.lex_state = 23},
  [543] = {.lex_state = 143},
  [544] = {.lex_state = 143},
  [545] = {.lex_state = 143},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 23},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 143},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 143},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 143},
  [568] = {.lex_state = 33},
  [569] = {.lex_state = 33},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 143},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 12},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 143},
  [584] = {.lex_state = 23},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 143},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 143},
  [590] = {.lex_state = 23},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 9},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 9},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 23},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 29},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 9},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 9},
  [627] = {.lex_state = 29},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 29},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 29},
  [640] = {.lex_state = 29},
  [641] = {.lex_state = 29},
  [642] = {.lex_state = 29},
  [643] = {.lex_state = 29},
  [644] = {.lex_state = 29},
  [645] = {.lex_state = 29},
  [646] = {.lex_state = 29},
  [647] = {.lex_state = 29},
  [648] = {.lex_state = 29},
  [649] = {.lex_state = 29},
  [650] = {.lex_state = 143},
  [651] = {.lex_state = 9},
  [652] = {.lex_state = 143},
  [653] = {.lex_state = 29},
  [654] = {.lex_state = 29},
  [655] = {.lex_state = 29},
  [656] = {.lex_state = 29},
  [657] = {.lex_state = 29},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 29},
  [660] = {.lex_state = 29},
  [661] = {.lex_state = 29},
  [662] = {.lex_state = 29},
  [663] = {.lex_state = 29},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0, .external_lex_state = 3},
  [667] = {.lex_state = 0, .external_lex_state = 3},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 143},
  [670] = {.lex_state = 0, .external_lex_state = 3},
  [671] = {.lex_state = 0, .external_lex_state = 3},
  [672] = {.lex_state = 0, .external_lex_state = 3},
  [673] = {.lex_state = 143},
  [674] = {.lex_state = 143},
  [675] = {.lex_state = 29},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 143},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__no_whitespace = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__no_whitespace] = sym__no_whitespace,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__no_whitespace] = true,
  },
  [2] = {
    [ts_external_token__descendant_operator] = true,
  },
  [3] = {
    [ts_external_token__no_whitespace] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_ATapply] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ATextend] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATfor] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_ATwhile] = ACTIONS(1),
    [anon_sym_ATfunction] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATat_DASHroot] = ACTIONS(1),
    [anon_sym_ATerror] = ACTIONS(1),
    [anon_sym_ATwarn] = ACTIONS(1),
    [anon_sym_ATdebug] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [sym_default] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_value] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__no_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(631),
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_forward_statement] = STATE(3),
    [sym_apply_statement] = STATE(3),
    [sym_mixin_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_placeholder_declaration_selector] = STATE(552),
    [sym_placeholder] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(3),
    [aux_sym_stylesheet_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_ATapply] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(29),
    [anon_sym_ATinclude] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_ATif] = ACTIONS(35),
    [anon_sym_ATeach] = ACTIONS(37),
    [anon_sym_ATfor] = ACTIONS(39),
    [anon_sym_ATwhile] = ACTIONS(41),
    [anon_sym_ATfunction] = ACTIONS(43),
    [anon_sym_ATerror] = ACTIONS(45),
    [anon_sym_ATwarn] = ACTIONS(47),
    [anon_sym_ATdebug] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_forward_statement] = STATE(2),
    [sym_apply_statement] = STATE(2),
    [sym_mixin_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_placeholder_declaration_selector] = STATE(552),
    [sym_placeholder] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(2),
    [aux_sym_stylesheet_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_ATimport] = ACTIONS(71),
    [anon_sym_ATmedia] = ACTIONS(74),
    [anon_sym_ATcharset] = ACTIONS(77),
    [anon_sym_ATnamespace] = ACTIONS(80),
    [anon_sym_ATkeyframes] = ACTIONS(83),
    [aux_sym_keyframes_statement_token1] = ACTIONS(83),
    [anon_sym_ATsupports] = ACTIONS(86),
    [anon_sym_ATuse] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_ATforward] = ACTIONS(95),
    [anon_sym_ATapply] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_ATmixin] = ACTIONS(104),
    [anon_sym_ATinclude] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_ATif] = ACTIONS(113),
    [anon_sym_ATeach] = ACTIONS(116),
    [anon_sym_ATfor] = ACTIONS(119),
    [anon_sym_ATwhile] = ACTIONS(122),
    [anon_sym_ATfunction] = ACTIONS(125),
    [anon_sym_ATerror] = ACTIONS(128),
    [anon_sym_ATwarn] = ACTIONS(131),
    [anon_sym_ATdebug] = ACTIONS(134),
    [sym_nesting_selector] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_string_value] = ACTIONS(152),
    [sym_identifier] = ACTIONS(155),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_at_keyword] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_forward_statement] = STATE(2),
    [sym_apply_statement] = STATE(2),
    [sym_mixin_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_placeholder_declaration_selector] = STATE(552),
    [sym_placeholder] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(2),
    [aux_sym_stylesheet_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_ATapply] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(29),
    [anon_sym_ATinclude] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_ATif] = ACTIONS(35),
    [anon_sym_ATeach] = ACTIONS(37),
    [anon_sym_ATfor] = ACTIONS(39),
    [anon_sym_ATwhile] = ACTIONS(41),
    [anon_sym_ATfunction] = ACTIONS(43),
    [anon_sym_ATerror] = ACTIONS(45),
    [anon_sym_ATwarn] = ACTIONS(47),
    [anon_sym_ATdebug] = ACTIONS(49),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_mixin_statement] = STATE(10),
    [sym_include_statement] = STATE(10),
    [sym_extend_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_function_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_at_root_statement] = STATE(10),
    [sym_error_statement] = STATE(10),
    [sym_warn_statement] = STATE(10),
    [sym_debug_statement] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(10),
    [sym_last_declaration] = STATE(594),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(607),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_mixin_statement] = STATE(8),
    [sym_include_statement] = STATE(8),
    [sym_extend_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym_function_statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_at_root_statement] = STATE(8),
    [sym_error_statement] = STATE(8),
    [sym_warn_statement] = STATE(8),
    [sym_debug_statement] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(664),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(5),
    [sym_media_statement] = STATE(5),
    [sym_charset_statement] = STATE(5),
    [sym_namespace_statement] = STATE(5),
    [sym_keyframes_statement] = STATE(5),
    [sym_supports_statement] = STATE(5),
    [sym_at_rule] = STATE(5),
    [sym_mixin_statement] = STATE(5),
    [sym_include_statement] = STATE(5),
    [sym_extend_statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(5),
    [sym_for_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_function_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_at_root_statement] = STATE(5),
    [sym_error_statement] = STATE(5),
    [sym_warn_statement] = STATE(5),
    [sym_debug_statement] = STATE(5),
    [sym_rule_set] = STATE(5),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(5),
    [sym_last_declaration] = STATE(622),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(613),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(616),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(599),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(628),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(633),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_mixin_statement] = STATE(9),
    [sym_include_statement] = STATE(9),
    [sym_extend_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_while_statement] = STATE(9),
    [sym_function_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_at_root_statement] = STATE(9),
    [sym_error_statement] = STATE(9),
    [sym_warn_statement] = STATE(9),
    [sym_debug_statement] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(9),
    [sym_last_declaration] = STATE(611),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_ATimport] = ACTIONS(166),
    [anon_sym_ATmedia] = ACTIONS(168),
    [anon_sym_ATcharset] = ACTIONS(170),
    [anon_sym_ATnamespace] = ACTIONS(172),
    [anon_sym_ATkeyframes] = ACTIONS(174),
    [aux_sym_keyframes_statement_token1] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_ATsupports] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_ATmixin] = ACTIONS(180),
    [anon_sym_ATinclude] = ACTIONS(182),
    [anon_sym_ATextend] = ACTIONS(184),
    [anon_sym_ATif] = ACTIONS(186),
    [anon_sym_ATeach] = ACTIONS(188),
    [anon_sym_ATfor] = ACTIONS(190),
    [anon_sym_ATwhile] = ACTIONS(192),
    [anon_sym_ATfunction] = ACTIONS(194),
    [anon_sym_ATreturn] = ACTIONS(196),
    [anon_sym_ATat_DASHroot] = ACTIONS(198),
    [anon_sym_ATerror] = ACTIONS(200),
    [anon_sym_ATwarn] = ACTIONS(202),
    [anon_sym_ATdebug] = ACTIONS(204),
    [sym_nesting_selector] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_at_keyword] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_extend_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_at_root_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(573),
    [sym__selector] = STATE(360),
    [sym_universal_selector] = STATE(360),
    [sym_class_selector] = STATE(360),
    [sym_pseudo_class_selector] = STATE(360),
    [sym_pseudo_element_selector] = STATE(360),
    [sym_id_selector] = STATE(360),
    [sym_attribute_selector] = STATE(360),
    [sym_child_selector] = STATE(360),
    [sym_descendant_selector] = STATE(360),
    [sym_sibling_selector] = STATE(360),
    [sym_adjacent_sibling_selector] = STATE(360),
    [sym_declaration] = STATE(14),
    [aux_sym_block_repeat1] = STATE(14),
    [anon_sym_ATimport] = ACTIONS(230),
    [anon_sym_ATmedia] = ACTIONS(233),
    [anon_sym_ATcharset] = ACTIONS(236),
    [anon_sym_ATnamespace] = ACTIONS(239),
    [anon_sym_ATkeyframes] = ACTIONS(242),
    [aux_sym_keyframes_statement_token1] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_ATsupports] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_ATmixin] = ACTIONS(256),
    [anon_sym_ATinclude] = ACTIONS(259),
    [anon_sym_ATextend] = ACTIONS(262),
    [anon_sym_ATif] = ACTIONS(265),
    [anon_sym_ATeach] = ACTIONS(268),
    [anon_sym_ATfor] = ACTIONS(271),
    [anon_sym_ATwhile] = ACTIONS(274),
    [anon_sym_ATfunction] = ACTIONS(277),
    [anon_sym_ATreturn] = ACTIONS(280),
    [anon_sym_ATat_DASHroot] = ACTIONS(283),
    [anon_sym_ATerror] = ACTIONS(286),
    [anon_sym_ATwarn] = ACTIONS(289),
    [anon_sym_ATdebug] = ACTIONS(292),
    [sym_nesting_selector] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_COLON_COLON] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(307),
    [sym_string_value] = ACTIONS(310),
    [sym_identifier] = ACTIONS(313),
    [sym_variable_identifier] = ACTIONS(316),
    [sym_at_keyword] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_PERCENT,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      sym_string_value,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym_variable_identifier,
    STATE(438), 1,
      sym__value,
    STATE(439), 1,
      sym_class_selector,
    STATE(617), 1,
      sym_placeholder_selector,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(451), 10,
      sym__selector,
      sym_universal_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [89] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      sym_string_value,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym_variable_identifier,
    STATE(195), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(366), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [176] = 21,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      sym_string_value,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym_variable_identifier,
    STATE(209), 1,
      sym__value,
    STATE(211), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(399), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [260] = 6,
    ACTIONS(372), 1,
      anon_sym_ATelse,
    STATE(91), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(370), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [312] = 6,
    ACTIONS(372), 1,
      anon_sym_ATelse,
    STATE(44), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [364] = 6,
    ACTIONS(378), 1,
      anon_sym_ATelse,
    STATE(123), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(21), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(368), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(370), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [415] = 6,
    ACTIONS(378), 1,
      anon_sym_ATelse,
    STATE(121), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(30), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(374), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [466] = 5,
    ACTIONS(384), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(22), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(382), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [515] = 20,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      sym_important,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(164), 1,
      sym__value,
    STATE(174), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [594] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      sym_default,
    STATE(164), 1,
      sym__value,
    STATE(207), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [670] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(411), 1,
      sym_important,
    STATE(164), 1,
      sym__value,
    STATE(193), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [746] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      sym_default,
    STATE(164), 1,
      sym__value,
    STATE(208), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [822] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(419), 1,
      sym_default,
    STATE(164), 1,
      sym__value,
    STATE(188), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [898] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_important,
    STATE(164), 1,
      sym__value,
    STATE(206), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [974] = 19,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      sym_default,
    STATE(164), 1,
      sym__value,
    STATE(201), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1050] = 5,
    ACTIONS(427), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(30), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(380), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(382), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(432), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1184] = 8,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      anon_sym_DOT2,
    STATE(153), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(444), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(438), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(440), 7,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(442), 12,
      anon_sym_LPAREN,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [1237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(450), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(452), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1280] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(456), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1323] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1366] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(462), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(464), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1408] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(466), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(468), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1450] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(470), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(472), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1492] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(474), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(476), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1534] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(478), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(480), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(482), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(484), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1618] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(486), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(488), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1660] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(490), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(492), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1702] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(494), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(496), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1744] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(498), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(500), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1786] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(502), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(504), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1828] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(456), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1870] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(450), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(452), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(506), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(508), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1954] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(510), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(512), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1996] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(514), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(516), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2038] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(518), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(520), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(524), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2122] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(526), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(528), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2164] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(530), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(532), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2206] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(534), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(536), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2248] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(538), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(540), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(542), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(544), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2332] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(546), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(548), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2374] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(550), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(552), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(556), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2458] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(558), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(560), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2542] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(562), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(564), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2584] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(566), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(568), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(570), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(572), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2668] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(574), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(576), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(578), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(580), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2752] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(582), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(584), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(586), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(588), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(592), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2878] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(596), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(600), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3004] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(602), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(604), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(454), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(456), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3088] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(606), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(608), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3130] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(612), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3172] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(614), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(616), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3256] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3298] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(618), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(620), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3340] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(622), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(624), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(628), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3424] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(630), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(632), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3466] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(634), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(636), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3508] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(432), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(638), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(640), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3592] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(642), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(644), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3676] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(648), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATapply,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3718] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(454), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(456), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3759] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(526), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(528), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(614), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(616), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3841] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(554), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(556), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3882] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(582), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(584), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3923] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(574), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(576), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3964] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(570), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(572), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4005] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(462), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(464), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(642), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(644), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4087] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(606), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(608), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4128] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(602), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(604), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4169] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(598), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(600), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4210] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(652), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(650), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4251] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(656), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(654), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4292] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(566), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(568), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4333] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(514), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(516), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4374] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(502), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(504), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4415] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(660), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(658), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4456] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(460), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(586), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(588), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(634), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(636), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4579] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(630), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(632), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(542), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(544), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(618), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(620), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4702] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(436), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4743] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(538), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(540), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(466), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(468), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(534), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(536), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4866] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(490), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(492), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4907] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(646), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(648), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4948] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(376), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4989] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(478), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(480), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5030] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(470), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(472), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5071] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(474), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(476), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5112] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(482), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(484), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5153] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(524), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5194] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(610), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(612), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5235] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(518), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(520), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(510), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(512), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5317] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(506), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(508), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5358] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(494), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(496), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(558), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(560), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5440] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(530), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(532), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5481] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(498), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(500), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5522] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(578), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(580), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [5563] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(662), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(664), 8,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(668), 11,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5607] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      anon_sym_DOT2,
    STATE(153), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(440), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(442), 15,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5653] = 4,
    ACTIONS(674), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(672), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5693] = 4,
    ACTIONS(680), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(678), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5733] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(682), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(684), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(686), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(688), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(690), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(692), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(694), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(696), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(698), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(700), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5918] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(702), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(704), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5955] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(706), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(708), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [5992] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(710), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(712), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6029] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(714), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(716), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6066] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(718), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(720), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6103] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(724), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6140] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(726), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(728), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6177] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(732), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(736), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6251] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(738), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(740), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6288] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(742), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(744), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LPAREN2,
    ACTIONS(752), 1,
      anon_sym_DOT2,
    ACTIONS(754), 1,
      sym_single_line_comment,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(746), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(748), 16,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6370] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(758), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6407] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(760), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(762), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_variable_identifier,
    ACTIONS(668), 14,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_plain_value,
  [6481] = 16,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      sym_string_value,
    ACTIONS(784), 1,
      aux_sym_integer_value_token1,
    ACTIONS(787), 1,
      aux_sym_float_value_token1,
    ACTIONS(790), 1,
      anon_sym_url,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(796), 1,
      sym_variable_identifier,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(775), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(778), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(767), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
      sym_default,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6543] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(767), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(799), 9,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_plain_value,
  [6583] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(801), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(803), 9,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_plain_value,
  [6623] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(831), 1,
      sym_unit,
    ACTIONS(670), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(672), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6727] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(503), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6790] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(502), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6855] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(501), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6918] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(500), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6983] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(490), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7046] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(488), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7111] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(478), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7174] = 18,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      sym_important,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7239] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(485), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7302] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(495), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(859), 1,
      sym_unit,
    ACTIONS(676), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(678), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(734), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(736), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(698), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(700), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(760), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(762), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(710), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(712), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(706), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(708), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(690), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(692), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(726), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(728), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(730), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(732), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(694), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(696), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(738), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(740), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7766] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      sym_default,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(722), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(724), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(702), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(704), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(756), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(758), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(742), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(744), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7972] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(863), 1,
      sym_important,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(746), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(748), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [8070] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    STATE(512), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(869), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(871), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [8168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(873), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(875), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(879), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(877), 10,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
  [8208] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(881), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8266] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(883), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(885), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(887), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [8362] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      sym_default,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(718), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(720), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [8460] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(898), 1,
      anon_sym_POUND,
    ACTIONS(904), 1,
      sym_null_value,
    ACTIONS(907), 1,
      sym_string_value,
    ACTIONS(910), 1,
      sym_unquoted_string_value,
    ACTIONS(913), 1,
      aux_sym_integer_value_token1,
    ACTIONS(916), 1,
      aux_sym_float_value_token1,
    ACTIONS(919), 1,
      anon_sym_url,
    ACTIONS(922), 1,
      sym_identifier,
    ACTIONS(925), 1,
      sym_variable_identifier,
    STATE(203), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(901), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(893), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(682), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(684), 15,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [8556] = 15,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(933), 1,
      anon_sym_POUND,
    ACTIONS(942), 1,
      sym_string_value,
    ACTIONS(945), 1,
      aux_sym_integer_value_token1,
    ACTIONS(948), 1,
      aux_sym_float_value_token1,
    ACTIONS(951), 1,
      anon_sym_url,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(957), 1,
      sym_variable_identifier,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(936), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(939), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(928), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8614] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      sym_important,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8676] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      sym_default,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8738] = 17,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      sym_default,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    STATE(164), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8800] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(393), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(966), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(968), 9,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_plain_value,
  [8838] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(27), 1,
      sym__value,
    STATE(278), 1,
      sym_scope_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(970), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8895] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8952] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(24), 1,
      sym__value,
    STATE(244), 1,
      sym_scope_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(970), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9009] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9065] = 15,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(414), 1,
      sym__value,
    STATE(528), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9121] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9177] = 15,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym__value,
    STATE(527), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9233] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9291] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9347] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym__value,
    STATE(231), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9403] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9461] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9519] = 15,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      sym__value,
    STATE(545), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9575] = 15,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym__value,
    STATE(544), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9631] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9689] = 15,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      sym__value,
    STATE(523), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9745] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9801] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9859] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9915] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9971] = 15,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    ACTIONS(1016), 1,
      anon_sym_RPAREN2,
    ACTIONS(1018), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      sym_string_value,
    ACTIONS(1026), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1028), 1,
      aux_sym_float_value_token1,
    ACTIONS(1030), 1,
      anon_sym_url,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1034), 1,
      sym_variable_identifier,
    STATE(384), 1,
      sym__value,
    STATE(542), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1020), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1022), 2,
      sym_null_value,
      sym_plain_value,
    STATE(394), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10027] = 15,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(1036), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10083] = 9,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1044), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1040), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(473), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10126] = 6,
    ACTIONS(1052), 1,
      anon_sym_LPAREN2,
    ACTIONS(1054), 1,
      anon_sym_DOT2,
    STATE(308), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(440), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10163] = 8,
    ACTIONS(1052), 1,
      anon_sym_LPAREN2,
    ACTIONS(1054), 1,
      anon_sym_DOT2,
    STATE(308), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(444), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_GT,
    ACTIONS(438), 7,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(440), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10204] = 14,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym_apply_statement_repeat1,
    STATE(209), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10257] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym_null_value,
    ACTIONS(817), 1,
      sym_string_value,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    STATE(199), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [10312] = 14,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(431), 1,
      sym__value,
    STATE(571), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10365] = 14,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(209), 1,
      sym__value,
    STATE(213), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10418] = 9,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1044), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1040), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(475), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10461] = 14,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      sym_string_value,
    ACTIONS(1026), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1028), 1,
      aux_sym_float_value_token1,
    ACTIONS(1030), 1,
      anon_sym_url,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1034), 1,
      sym_variable_identifier,
    STATE(384), 1,
      sym__value,
    STATE(556), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1020), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1022), 2,
      sym_null_value,
      sym_plain_value,
    STATE(394), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10514] = 13,
    ACTIONS(1058), 1,
      anon_sym_LPAREN,
    ACTIONS(1060), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      sym_string_value,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1074), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      sym_variable_identifier,
    STATE(232), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1062), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1064), 2,
      sym_null_value,
      sym_plain_value,
    STATE(331), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10564] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1078), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1080), 1,
      aux_sym_float_value_token1,
    STATE(302), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10614] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1078), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1080), 1,
      aux_sym_float_value_token1,
    STATE(369), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10664] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(26), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10714] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(405), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10764] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(163), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10814] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(28), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10864] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(402), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10914] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(415), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10964] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(449), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11014] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(450), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11064] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(302), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11114] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(422), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11164] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(448), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11214] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(429), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11264] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(23), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11314] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(434), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11364] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(435), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11414] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(380), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11464] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(378), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11514] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(432), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11564] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(420), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11614] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1082), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1084), 1,
      aux_sym_float_value_token1,
    STATE(441), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11664] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(430), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11714] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(379), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11764] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(421), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11814] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(398), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11864] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1078), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1080), 1,
      aux_sym_float_value_token1,
    STATE(368), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11914] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(25), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11964] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(397), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12014] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_single_line_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      sym_unquoted_string_value,
    ACTIONS(821), 1,
      aux_sym_integer_value_token1,
    ACTIONS(823), 1,
      aux_sym_float_value_token1,
    ACTIONS(825), 1,
      anon_sym_url,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_variable_identifier,
    ACTIONS(1086), 1,
      sym_null_value,
    ACTIONS(1088), 1,
      sym_string_value,
    ACTIONS(813), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(200), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [12066] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(417), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12116] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1082), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1084), 1,
      aux_sym_float_value_token1,
    STATE(302), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12166] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(437), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12216] = 13,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      sym_string_value,
    ACTIONS(1026), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1028), 1,
      aux_sym_float_value_token1,
    ACTIONS(1030), 1,
      anon_sym_url,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1090), 1,
      sym_variable_identifier,
    STATE(393), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1020), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1022), 2,
      sym_null_value,
      sym_plain_value,
    STATE(394), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12266] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(416), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12316] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(389), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12366] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(29), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12416] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(436), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12466] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(443), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12516] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(1082), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1084), 1,
      aux_sym_float_value_token1,
    STATE(444), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12566] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(386), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12616] = 13,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(360), 1,
      aux_sym_float_value_token1,
    ACTIONS(362), 1,
      anon_sym_url,
    ACTIONS(366), 1,
      sym_variable_identifier,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(143), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(161), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12666] = 13,
    ACTIONS(1058), 1,
      anon_sym_LPAREN,
    ACTIONS(1060), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      sym_string_value,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1074), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      sym_variable_identifier,
    STATE(239), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1062), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1064), 2,
      sym_null_value,
      sym_plain_value,
    STATE(331), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12716] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      aux_sym_integer_value_token1,
    ACTIONS(338), 1,
      aux_sym_float_value_token1,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(978), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      sym_string_value,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(388), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_null_value,
      sym_plain_value,
    STATE(296), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12766] = 13,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      sym_string_value,
    ACTIONS(1026), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1028), 1,
      aux_sym_float_value_token1,
    ACTIONS(1030), 1,
      anon_sym_url,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1090), 1,
      sym_variable_identifier,
    STATE(409), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1020), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1022), 2,
      sym_null_value,
      sym_plain_value,
    STATE(394), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12816] = 13,
    ACTIONS(1058), 1,
      anon_sym_LPAREN,
    ACTIONS(1060), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      sym_string_value,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1074), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      sym_variable_identifier,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1062), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1064), 2,
      sym_null_value,
      sym_plain_value,
    STATE(331), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12866] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1092), 1,
      sym_string_value,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(433), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [12911] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(1096), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(357), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [12956] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(1098), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(355), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [13001] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(1100), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(361), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [13046] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(1102), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(401), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [13091] = 11,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_nesting_selector,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      sym_identifier,
    ACTIONS(1104), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(358), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [13136] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(740), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(738), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13164] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(736), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(734), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(668), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(664), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13220] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(724), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(722), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13248] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(720), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(718), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(692), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(690), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13304] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(696), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(694), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13332] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(716), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(714), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13360] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(688), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(686), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(684), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(682), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(712), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(710), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13444] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(668), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(664), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(662), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [13476] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(744), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(742), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13504] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(762), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(760), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13532] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(728), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(726), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13560] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(758), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(756), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13588] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(704), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(702), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13616] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(708), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(706), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13644] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(730), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13672] = 6,
    ACTIONS(1106), 1,
      anon_sym_LPAREN2,
    ACTIONS(1108), 1,
      anon_sym_DOT2,
    STATE(335), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(440), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(442), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(700), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(698), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_with,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_through,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13734] = 4,
    ACTIONS(1110), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(672), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(670), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13762] = 4,
    ACTIONS(1112), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(672), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13790] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(720), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(718), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13816] = 4,
    ACTIONS(1114), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(676), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13844] = 4,
    ACTIONS(1116), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(678), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13872] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(714), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(716), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13897] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(694), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(696), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13922] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(682), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(684), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13947] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(686), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(688), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(706), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(708), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(732), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14022] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(702), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(704), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(758), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(690), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(692), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14097] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(742), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(744), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14122] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(710), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(712), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14147] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(668), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14172] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(724), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14197] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(698), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(700), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14222] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(760), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(762), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14247] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(726), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(728), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(736), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(738), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(740), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14322] = 5,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1122), 1,
      anon_sym_LPAREN2,
    STATE(349), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1118), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14350] = 5,
    ACTIONS(1122), 1,
      anon_sym_LPAREN2,
    ACTIONS(1126), 1,
      anon_sym_COLON,
    STATE(352), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1124), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14378] = 6,
    ACTIONS(1128), 1,
      anon_sym_LPAREN2,
    ACTIONS(1130), 1,
      anon_sym_DOT2,
    STATE(383), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(440), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14408] = 3,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1132), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14431] = 9,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(460), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [14466] = 3,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1140), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14489] = 4,
    ACTIONS(1144), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(672), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(670), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14514] = 4,
    ACTIONS(1146), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(662), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14539] = 9,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(458), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [14574] = 4,
    ACTIONS(1152), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(676), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14599] = 3,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14621] = 3,
    ACTIONS(1156), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1154), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14643] = 3,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1158), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14665] = 3,
    ACTIONS(1164), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1162), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14687] = 3,
    ACTIONS(1168), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1166), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14709] = 3,
    ACTIONS(1172), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1170), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14731] = 3,
    ACTIONS(1176), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1174), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14753] = 4,
    ACTIONS(1180), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1178), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14777] = 4,
    ACTIONS(1184), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(676), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14801] = 4,
    ACTIONS(1188), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1186), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14825] = 4,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1190), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14849] = 3,
    ACTIONS(1196), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1194), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14871] = 13,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_LBRACE,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    STATE(525), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [14913] = 4,
    ACTIONS(1220), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1218), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14937] = 3,
    ACTIONS(1224), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1222), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14959] = 3,
    ACTIONS(1228), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1226), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [14981] = 3,
    ACTIONS(1232), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1230), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15003] = 4,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(716), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(714), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15027] = 13,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [15069] = 3,
    ACTIONS(1240), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1238), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15091] = 6,
    ACTIONS(1242), 1,
      anon_sym_SEMI,
    ACTIONS(1244), 1,
      anon_sym_with,
    ACTIONS(1246), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1250), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1248), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15119] = 6,
    ACTIONS(1252), 1,
      anon_sym_SEMI,
    ACTIONS(1254), 1,
      anon_sym_with,
    ACTIONS(1256), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1250), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1248), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15147] = 3,
    ACTIONS(1260), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1258), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15169] = 4,
    ACTIONS(1262), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(672), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(670), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15193] = 3,
    ACTIONS(1266), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1264), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15215] = 3,
    ACTIONS(1270), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15237] = 3,
    ACTIONS(1274), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1272), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15259] = 3,
    ACTIONS(1278), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1276), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(700), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(698), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15302] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(708), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(706), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15323] = 5,
    ACTIONS(1280), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15348] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15371] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15396] = 3,
    ACTIONS(1288), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15417] = 5,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15442] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(728), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(726), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15463] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1299), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1297), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(762), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(760), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15507] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15532] = 3,
    ACTIONS(1301), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15553] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15578] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15603] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(720), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(718), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15624] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(692), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(690), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15645] = 5,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15670] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1299), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1297), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(668), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(664), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15714] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(696), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(694), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15735] = 5,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15760] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15783] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15808] = 11,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15845] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(724), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(722), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15866] = 11,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1314), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [15903] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1316), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15926] = 5,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(712), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(710), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15972] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(684), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(682), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(730), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16039] = 4,
    ACTIONS(1152), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(676), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16062] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(688), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(686), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16083] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(736), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(734), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16104] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(740), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(738), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16125] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(704), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(702), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16146] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(758), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(756), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16167] = 5,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16192] = 5,
    ACTIONS(1322), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16217] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16242] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16267] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(744), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(742), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16288] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1324), 3,
      anon_sym_LPAREN,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(1326), 9,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_plain_value,
  [16309] = 5,
    ACTIONS(1322), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16334] = 5,
    ACTIONS(1280), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16359] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16384] = 3,
    ACTIONS(1328), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [16405] = 4,
    ACTIONS(1144), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(672), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(670), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16428] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(716), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(714), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16449] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(467), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16475] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(505), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16501] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(472), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16527] = 4,
    ACTIONS(1330), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16549] = 4,
    ACTIONS(1332), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16571] = 4,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16593] = 4,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16615] = 11,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [16651] = 4,
    ACTIONS(1338), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16673] = 4,
    ACTIONS(1340), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16695] = 4,
    ACTIONS(1342), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16717] = 4,
    ACTIONS(1344), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16739] = 4,
    ACTIONS(1346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16761] = 4,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(1346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(662), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [16783] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(464), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16809] = 4,
    ACTIONS(1350), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1352), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1348), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16831] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(487), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16857] = 4,
    ACTIONS(1354), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16879] = 4,
    ACTIONS(1356), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1352), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1348), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16901] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1358), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(509), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16927] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(469), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16953] = 6,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(1048), 1,
      anon_sym_selector,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1046), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(466), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16979] = 4,
    ACTIONS(1360), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [17001] = 4,
    ACTIONS(1362), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [17023] = 4,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1284), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1282), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [17045] = 10,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1206), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 1,
      anon_sym_GT,
    ACTIONS(1212), 1,
      anon_sym_TILDE,
    ACTIONS(1214), 1,
      anon_sym_PLUS,
    ACTIONS(1216), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1182), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [17078] = 7,
    ACTIONS(1366), 1,
      anon_sym_RBRACE,
    ACTIONS(1368), 1,
      anon_sym_from,
    ACTIONS(1371), 1,
      sym_to,
    ACTIONS(1374), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(452), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(564), 2,
      sym_from,
      sym_integer_value,
  [17103] = 7,
    ACTIONS(1377), 1,
      anon_sym_RBRACE,
    ACTIONS(1379), 1,
      anon_sym_from,
    ACTIONS(1381), 1,
      sym_to,
    ACTIONS(1383), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(455), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(564), 2,
      sym_from,
      sym_integer_value,
  [17128] = 7,
    ACTIONS(1379), 1,
      anon_sym_from,
    ACTIONS(1381), 1,
      sym_to,
    ACTIONS(1383), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1385), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(452), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(564), 2,
      sym_from,
      sym_integer_value,
  [17153] = 7,
    ACTIONS(1379), 1,
      anon_sym_from,
    ACTIONS(1381), 1,
      sym_to,
    ACTIONS(1383), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1387), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(452), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(564), 2,
      sym_from,
      sym_integer_value,
  [17178] = 7,
    ACTIONS(1379), 1,
      anon_sym_from,
    ACTIONS(1381), 1,
      sym_to,
    ACTIONS(1383), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(454), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(564), 2,
      sym_from,
      sym_integer_value,
  [17203] = 3,
    ACTIONS(1393), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1391), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [17219] = 7,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_block,
    STATE(474), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17243] = 8,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1106), 1,
      anon_sym_LPAREN2,
    ACTIONS(1108), 1,
      anon_sym_DOT2,
    ACTIONS(1401), 1,
      sym_string_value,
    ACTIONS(1403), 1,
      sym_identifier,
    STATE(335), 1,
      sym_arguments,
    STATE(625), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17269] = 7,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_block,
    STATE(477), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17293] = 8,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1106), 1,
      anon_sym_LPAREN2,
    ACTIONS(1108), 1,
      anon_sym_DOT2,
    ACTIONS(1403), 1,
      sym_identifier,
    ACTIONS(1407), 1,
      sym_string_value,
    STATE(335), 1,
      sym_arguments,
    STATE(593), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17319] = 3,
    ACTIONS(1411), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1409), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [17335] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1413), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17348] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1415), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1417), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17374] = 6,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_block,
    STATE(498), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1419), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1421), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17421] = 6,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_block,
    STATE(482), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17442] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1423), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17455] = 6,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1425), 1,
      anon_sym_SEMI,
    ACTIONS(1427), 1,
      anon_sym_LPAREN2,
    STATE(118), 1,
      sym_block,
    STATE(540), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1429), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17489] = 5,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_SEMI,
    STATE(530), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17507] = 6,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym_block,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17527] = 5,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_SEMI,
    STATE(535), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17545] = 6,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1427), 1,
      anon_sym_LPAREN2,
    ACTIONS(1437), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_block,
    STATE(517), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17565] = 6,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_block,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17585] = 4,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17600] = 3,
    ACTIONS(1443), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1417), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17613] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1445), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17624] = 4,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17639] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      sym_block,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17656] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(454), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17667] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_block,
    STATE(555), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17684] = 4,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17699] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_block,
    STATE(582), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17716] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [17731] = 4,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17757] = 4,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17772] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_block,
    STATE(577), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17789] = 4,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1457), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17815] = 4,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1460), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17830] = 4,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17845] = 5,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1465), 1,
      sym_string_value,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(606), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17862] = 5,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_block,
    STATE(557), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17879] = 5,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17896] = 4,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1429), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17911] = 4,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17926] = 4,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17941] = 4,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17956] = 4,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17971] = 5,
    ACTIONS(1072), 1,
      anon_sym_url,
    ACTIONS(1480), 1,
      sym_string_value,
    ACTIONS(1482), 1,
      sym_identifier,
    STATE(638), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17988] = 4,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [18003] = 3,
    ACTIONS(1486), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18015] = 4,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1488), 1,
      anon_sym_if,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18029] = 4,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18043] = 3,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 2,
      anon_sym_and,
      anon_sym_or,
  [18055] = 4,
    ACTIONS(1106), 1,
      anon_sym_LPAREN2,
    ACTIONS(1108), 1,
      anon_sym_DOT2,
    STATE(335), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18069] = 4,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18083] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18097] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18111] = 3,
    STATE(592), 1,
      sym_use_alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1502), 2,
      anon_sym_STAR,
      aux_sym_use_alias_token1,
  [18123] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18137] = 4,
    ACTIONS(1508), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RPAREN2,
    STATE(533), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18151] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1512), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18165] = 3,
    STATE(615), 1,
      sym_use_alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1502), 2,
      anon_sym_STAR,
      aux_sym_use_alias_token1,
  [18177] = 4,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18191] = 4,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    ACTIONS(1520), 1,
      sym_variable_identifier,
    STATE(587), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18205] = 4,
    ACTIONS(1520), 1,
      sym_variable_identifier,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18219] = 4,
    ACTIONS(1524), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18233] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18247] = 4,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    ACTIONS(1531), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18261] = 4,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_LBRACE,
    STATE(524), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18275] = 4,
    ACTIONS(1536), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18289] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18303] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18317] = 3,
    STATE(635), 1,
      sym_use_alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1502), 2,
      anon_sym_STAR,
      aux_sym_use_alias_token1,
  [18329] = 4,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_SEMI,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18343] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18357] = 3,
    STATE(612), 1,
      sym_use_alias,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1502), 2,
      anon_sym_STAR,
      aux_sym_use_alias_token1,
  [18369] = 4,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
    ACTIONS(1552), 1,
      anon_sym_RPAREN2,
    STATE(533), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18383] = 4,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    ACTIONS(1554), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18397] = 4,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1556), 1,
      anon_sym_SEMI,
    STATE(499), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18411] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18425] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18439] = 4,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    ACTIONS(1562), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18453] = 4,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    ACTIONS(1565), 1,
      anon_sym_if,
    STATE(45), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18467] = 4,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(1567), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18481] = 4,
    ACTIONS(1569), 1,
      anon_sym_COMMA,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18495] = 4,
    ACTIONS(1508), 1,
      anon_sym_COMMA,
    ACTIONS(1574), 1,
      anon_sym_RPAREN2,
    STATE(516), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18509] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18523] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1578), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18537] = 4,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1582), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18560] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1584), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18569] = 3,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18580] = 3,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18591] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1586), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18600] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1588), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18609] = 3,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18620] = 3,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
    ACTIONS(1592), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18631] = 3,
    ACTIONS(1594), 1,
      anon_sym_LPAREN2,
    STATE(335), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18642] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1552), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [18662] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18673] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1596), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18682] = 3,
    ACTIONS(1598), 1,
      anon_sym_LPAREN2,
    STATE(383), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18693] = 3,
    ACTIONS(750), 1,
      anon_sym_LPAREN2,
    STATE(192), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18704] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1572), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18713] = 3,
    ACTIONS(1600), 1,
      anon_sym_SEMI,
    ACTIONS(1602), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18724] = 3,
    ACTIONS(1520), 1,
      sym_variable_identifier,
    STATE(519), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18735] = 3,
    ACTIONS(1604), 1,
      anon_sym_LBRACE,
    STATE(480), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18746] = 3,
    ACTIONS(1128), 1,
      anon_sym_LPAREN2,
    STATE(418), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18757] = 3,
    ACTIONS(1606), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18768] = 3,
    ACTIONS(1520), 1,
      sym_variable_identifier,
    STATE(587), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18779] = 3,
    ACTIONS(1608), 1,
      aux_sym_color_value_token1,
    ACTIONS(1610), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18790] = 3,
    ACTIONS(1610), 1,
      sym_identifier,
    ACTIONS(1612), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18801] = 3,
    ACTIONS(1614), 1,
      anon_sym_LPAREN2,
    STATE(308), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1539), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18821] = 3,
    ACTIONS(1616), 1,
      anon_sym_SEMI,
    ACTIONS(1618), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18832] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18843] = 3,
    ACTIONS(1106), 1,
      anon_sym_LPAREN2,
    STATE(329), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18854] = 3,
    ACTIONS(1620), 1,
      anon_sym_LPAREN2,
    STATE(184), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18865] = 3,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18876] = 3,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18887] = 3,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(1622), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18898] = 3,
    ACTIONS(1052), 1,
      anon_sym_LPAREN2,
    STATE(306), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18909] = 3,
    ACTIONS(1624), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18920] = 3,
    ACTIONS(1626), 1,
      anon_sym_COMMA,
    ACTIONS(1628), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18931] = 3,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18942] = 3,
    ACTIONS(1630), 1,
      sym_variable_identifier,
    STATE(508), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18953] = 3,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
    STATE(553), 1,
      sym_use_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1634), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18973] = 3,
    ACTIONS(1636), 1,
      anon_sym_COMMA,
    ACTIONS(1638), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18984] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1527), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18993] = 3,
    ACTIONS(1640), 1,
      anon_sym_LPAREN2,
    STATE(153), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19004] = 3,
    ACTIONS(1630), 1,
      sym_variable_identifier,
    STATE(561), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19015] = 3,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
    STATE(562), 1,
      sym_use_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19026] = 2,
    ACTIONS(1642), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19034] = 2,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19042] = 2,
    ACTIONS(1644), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19050] = 2,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19058] = 2,
    ACTIONS(1646), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19066] = 2,
    ACTIONS(1648), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19074] = 2,
    ACTIONS(1650), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19082] = 2,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19090] = 2,
    ACTIONS(1652), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19098] = 2,
    ACTIONS(1654), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19106] = 2,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19114] = 2,
    ACTIONS(1616), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19122] = 2,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19130] = 2,
    ACTIONS(1658), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19138] = 2,
    ACTIONS(1660), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19146] = 2,
    ACTIONS(1662), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19154] = 2,
    ACTIONS(1664), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19162] = 2,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19170] = 2,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19178] = 2,
    ACTIONS(1565), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19186] = 2,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19194] = 2,
    ACTIONS(1666), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19202] = 2,
    ACTIONS(1668), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19210] = 2,
    ACTIONS(1670), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19218] = 2,
    ACTIONS(1672), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19226] = 2,
    ACTIONS(1674), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19234] = 2,
    ACTIONS(1346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19242] = 2,
    ACTIONS(1676), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19250] = 2,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19258] = 2,
    ACTIONS(1678), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19266] = 2,
    ACTIONS(1680), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19274] = 2,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19282] = 2,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19290] = 2,
    ACTIONS(1682), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19298] = 2,
    ACTIONS(1684), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19306] = 2,
    ACTIONS(1686), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19314] = 2,
    ACTIONS(1688), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19322] = 2,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19330] = 2,
    ACTIONS(1690), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19338] = 2,
    ACTIONS(1692), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19346] = 2,
    ACTIONS(1694), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19354] = 2,
    ACTIONS(1696), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19362] = 2,
    ACTIONS(1698), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19370] = 2,
    ACTIONS(1700), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19378] = 2,
    ACTIONS(1600), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19386] = 2,
    ACTIONS(1702), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19394] = 2,
    ACTIONS(1704), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19402] = 2,
    ACTIONS(1706), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19410] = 2,
    ACTIONS(1708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19418] = 2,
    ACTIONS(1710), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19426] = 2,
    ACTIONS(1712), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19434] = 2,
    ACTIONS(1714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19442] = 2,
    ACTIONS(1716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19450] = 2,
    ACTIONS(1718), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19458] = 2,
    ACTIONS(1720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19466] = 2,
    ACTIONS(1722), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19474] = 2,
    ACTIONS(1724), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19482] = 2,
    ACTIONS(1146), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19490] = 2,
    ACTIONS(1726), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19498] = 2,
    ACTIONS(1728), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19506] = 2,
    ACTIONS(1730), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19514] = 2,
    ACTIONS(1732), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19522] = 2,
    ACTIONS(1734), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19530] = 2,
    ACTIONS(1736), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19538] = 2,
    ACTIONS(1738), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19546] = 2,
    ACTIONS(1740), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19554] = 2,
    ACTIONS(1742), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19562] = 2,
    ACTIONS(1488), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19570] = 2,
    ACTIONS(1744), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19578] = 2,
    ACTIONS(1746), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19586] = 2,
    ACTIONS(1748), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19594] = 2,
    ACTIONS(1750), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19602] = 2,
    ACTIONS(1752), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19610] = 2,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19618] = 2,
    ACTIONS(1754), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19626] = 2,
    ACTIONS(1756), 1,
      sym__no_whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19634] = 2,
    ACTIONS(1758), 1,
      sym__no_whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19642] = 2,
    ACTIONS(1760), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19650] = 2,
    ACTIONS(1762), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19658] = 2,
    ACTIONS(1764), 1,
      sym__no_whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19666] = 2,
    ACTIONS(1766), 1,
      sym__no_whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19674] = 2,
    ACTIONS(1768), 1,
      sym__no_whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19682] = 2,
    ACTIONS(1770), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19690] = 2,
    ACTIONS(1772), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19698] = 2,
    ACTIONS(1774), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19706] = 2,
    ACTIONS(1776), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19714] = 2,
    ACTIONS(1778), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 89,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 364,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 515,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 670,
  [SMALL_STATE(26)] = 746,
  [SMALL_STATE(27)] = 822,
  [SMALL_STATE(28)] = 898,
  [SMALL_STATE(29)] = 974,
  [SMALL_STATE(30)] = 1050,
  [SMALL_STATE(31)] = 1098,
  [SMALL_STATE(32)] = 1141,
  [SMALL_STATE(33)] = 1184,
  [SMALL_STATE(34)] = 1237,
  [SMALL_STATE(35)] = 1280,
  [SMALL_STATE(36)] = 1323,
  [SMALL_STATE(37)] = 1366,
  [SMALL_STATE(38)] = 1408,
  [SMALL_STATE(39)] = 1450,
  [SMALL_STATE(40)] = 1492,
  [SMALL_STATE(41)] = 1534,
  [SMALL_STATE(42)] = 1576,
  [SMALL_STATE(43)] = 1618,
  [SMALL_STATE(44)] = 1660,
  [SMALL_STATE(45)] = 1702,
  [SMALL_STATE(46)] = 1744,
  [SMALL_STATE(47)] = 1786,
  [SMALL_STATE(48)] = 1828,
  [SMALL_STATE(49)] = 1870,
  [SMALL_STATE(50)] = 1912,
  [SMALL_STATE(51)] = 1954,
  [SMALL_STATE(52)] = 1996,
  [SMALL_STATE(53)] = 2038,
  [SMALL_STATE(54)] = 2080,
  [SMALL_STATE(55)] = 2122,
  [SMALL_STATE(56)] = 2164,
  [SMALL_STATE(57)] = 2206,
  [SMALL_STATE(58)] = 2248,
  [SMALL_STATE(59)] = 2290,
  [SMALL_STATE(60)] = 2332,
  [SMALL_STATE(61)] = 2374,
  [SMALL_STATE(62)] = 2416,
  [SMALL_STATE(63)] = 2458,
  [SMALL_STATE(64)] = 2500,
  [SMALL_STATE(65)] = 2542,
  [SMALL_STATE(66)] = 2584,
  [SMALL_STATE(67)] = 2626,
  [SMALL_STATE(68)] = 2668,
  [SMALL_STATE(69)] = 2710,
  [SMALL_STATE(70)] = 2752,
  [SMALL_STATE(71)] = 2794,
  [SMALL_STATE(72)] = 2836,
  [SMALL_STATE(73)] = 2878,
  [SMALL_STATE(74)] = 2920,
  [SMALL_STATE(75)] = 2962,
  [SMALL_STATE(76)] = 3004,
  [SMALL_STATE(77)] = 3046,
  [SMALL_STATE(78)] = 3088,
  [SMALL_STATE(79)] = 3130,
  [SMALL_STATE(80)] = 3172,
  [SMALL_STATE(81)] = 3214,
  [SMALL_STATE(82)] = 3256,
  [SMALL_STATE(83)] = 3298,
  [SMALL_STATE(84)] = 3340,
  [SMALL_STATE(85)] = 3382,
  [SMALL_STATE(86)] = 3424,
  [SMALL_STATE(87)] = 3466,
  [SMALL_STATE(88)] = 3508,
  [SMALL_STATE(89)] = 3550,
  [SMALL_STATE(90)] = 3592,
  [SMALL_STATE(91)] = 3634,
  [SMALL_STATE(92)] = 3676,
  [SMALL_STATE(93)] = 3718,
  [SMALL_STATE(94)] = 3759,
  [SMALL_STATE(95)] = 3800,
  [SMALL_STATE(96)] = 3841,
  [SMALL_STATE(97)] = 3882,
  [SMALL_STATE(98)] = 3923,
  [SMALL_STATE(99)] = 3964,
  [SMALL_STATE(100)] = 4005,
  [SMALL_STATE(101)] = 4046,
  [SMALL_STATE(102)] = 4087,
  [SMALL_STATE(103)] = 4128,
  [SMALL_STATE(104)] = 4169,
  [SMALL_STATE(105)] = 4210,
  [SMALL_STATE(106)] = 4251,
  [SMALL_STATE(107)] = 4292,
  [SMALL_STATE(108)] = 4333,
  [SMALL_STATE(109)] = 4374,
  [SMALL_STATE(110)] = 4415,
  [SMALL_STATE(111)] = 4456,
  [SMALL_STATE(112)] = 4497,
  [SMALL_STATE(113)] = 4538,
  [SMALL_STATE(114)] = 4579,
  [SMALL_STATE(115)] = 4620,
  [SMALL_STATE(116)] = 4661,
  [SMALL_STATE(117)] = 4702,
  [SMALL_STATE(118)] = 4743,
  [SMALL_STATE(119)] = 4784,
  [SMALL_STATE(120)] = 4825,
  [SMALL_STATE(121)] = 4866,
  [SMALL_STATE(122)] = 4907,
  [SMALL_STATE(123)] = 4948,
  [SMALL_STATE(124)] = 4989,
  [SMALL_STATE(125)] = 5030,
  [SMALL_STATE(126)] = 5071,
  [SMALL_STATE(127)] = 5112,
  [SMALL_STATE(128)] = 5153,
  [SMALL_STATE(129)] = 5194,
  [SMALL_STATE(130)] = 5235,
  [SMALL_STATE(131)] = 5276,
  [SMALL_STATE(132)] = 5317,
  [SMALL_STATE(133)] = 5358,
  [SMALL_STATE(134)] = 5399,
  [SMALL_STATE(135)] = 5440,
  [SMALL_STATE(136)] = 5481,
  [SMALL_STATE(137)] = 5522,
  [SMALL_STATE(138)] = 5563,
  [SMALL_STATE(139)] = 5607,
  [SMALL_STATE(140)] = 5653,
  [SMALL_STATE(141)] = 5693,
  [SMALL_STATE(142)] = 5733,
  [SMALL_STATE(143)] = 5770,
  [SMALL_STATE(144)] = 5807,
  [SMALL_STATE(145)] = 5844,
  [SMALL_STATE(146)] = 5881,
  [SMALL_STATE(147)] = 5918,
  [SMALL_STATE(148)] = 5955,
  [SMALL_STATE(149)] = 5992,
  [SMALL_STATE(150)] = 6029,
  [SMALL_STATE(151)] = 6066,
  [SMALL_STATE(152)] = 6103,
  [SMALL_STATE(153)] = 6140,
  [SMALL_STATE(154)] = 6177,
  [SMALL_STATE(155)] = 6214,
  [SMALL_STATE(156)] = 6251,
  [SMALL_STATE(157)] = 6288,
  [SMALL_STATE(158)] = 6325,
  [SMALL_STATE(159)] = 6370,
  [SMALL_STATE(160)] = 6407,
  [SMALL_STATE(161)] = 6444,
  [SMALL_STATE(162)] = 6481,
  [SMALL_STATE(163)] = 6543,
  [SMALL_STATE(164)] = 6583,
  [SMALL_STATE(165)] = 6623,
  [SMALL_STATE(166)] = 6688,
  [SMALL_STATE(167)] = 6727,
  [SMALL_STATE(168)] = 6790,
  [SMALL_STATE(169)] = 6855,
  [SMALL_STATE(170)] = 6918,
  [SMALL_STATE(171)] = 6983,
  [SMALL_STATE(172)] = 7046,
  [SMALL_STATE(173)] = 7111,
  [SMALL_STATE(174)] = 7174,
  [SMALL_STATE(175)] = 7239,
  [SMALL_STATE(176)] = 7302,
  [SMALL_STATE(177)] = 7367,
  [SMALL_STATE(178)] = 7406,
  [SMALL_STATE(179)] = 7442,
  [SMALL_STATE(180)] = 7478,
  [SMALL_STATE(181)] = 7514,
  [SMALL_STATE(182)] = 7550,
  [SMALL_STATE(183)] = 7586,
  [SMALL_STATE(184)] = 7622,
  [SMALL_STATE(185)] = 7658,
  [SMALL_STATE(186)] = 7694,
  [SMALL_STATE(187)] = 7730,
  [SMALL_STATE(188)] = 7766,
  [SMALL_STATE(189)] = 7828,
  [SMALL_STATE(190)] = 7864,
  [SMALL_STATE(191)] = 7900,
  [SMALL_STATE(192)] = 7936,
  [SMALL_STATE(193)] = 7972,
  [SMALL_STATE(194)] = 8034,
  [SMALL_STATE(195)] = 8070,
  [SMALL_STATE(196)] = 8132,
  [SMALL_STATE(197)] = 8168,
  [SMALL_STATE(198)] = 8208,
  [SMALL_STATE(199)] = 8266,
  [SMALL_STATE(200)] = 8326,
  [SMALL_STATE(201)] = 8362,
  [SMALL_STATE(202)] = 8424,
  [SMALL_STATE(203)] = 8460,
  [SMALL_STATE(204)] = 8520,
  [SMALL_STATE(205)] = 8556,
  [SMALL_STATE(206)] = 8614,
  [SMALL_STATE(207)] = 8676,
  [SMALL_STATE(208)] = 8738,
  [SMALL_STATE(209)] = 8800,
  [SMALL_STATE(210)] = 8838,
  [SMALL_STATE(211)] = 8895,
  [SMALL_STATE(212)] = 8952,
  [SMALL_STATE(213)] = 9009,
  [SMALL_STATE(214)] = 9065,
  [SMALL_STATE(215)] = 9121,
  [SMALL_STATE(216)] = 9177,
  [SMALL_STATE(217)] = 9233,
  [SMALL_STATE(218)] = 9291,
  [SMALL_STATE(219)] = 9347,
  [SMALL_STATE(220)] = 9403,
  [SMALL_STATE(221)] = 9461,
  [SMALL_STATE(222)] = 9519,
  [SMALL_STATE(223)] = 9575,
  [SMALL_STATE(224)] = 9631,
  [SMALL_STATE(225)] = 9689,
  [SMALL_STATE(226)] = 9745,
  [SMALL_STATE(227)] = 9801,
  [SMALL_STATE(228)] = 9859,
  [SMALL_STATE(229)] = 9915,
  [SMALL_STATE(230)] = 9971,
  [SMALL_STATE(231)] = 10027,
  [SMALL_STATE(232)] = 10083,
  [SMALL_STATE(233)] = 10126,
  [SMALL_STATE(234)] = 10163,
  [SMALL_STATE(235)] = 10204,
  [SMALL_STATE(236)] = 10257,
  [SMALL_STATE(237)] = 10312,
  [SMALL_STATE(238)] = 10365,
  [SMALL_STATE(239)] = 10418,
  [SMALL_STATE(240)] = 10461,
  [SMALL_STATE(241)] = 10514,
  [SMALL_STATE(242)] = 10564,
  [SMALL_STATE(243)] = 10614,
  [SMALL_STATE(244)] = 10664,
  [SMALL_STATE(245)] = 10714,
  [SMALL_STATE(246)] = 10764,
  [SMALL_STATE(247)] = 10814,
  [SMALL_STATE(248)] = 10864,
  [SMALL_STATE(249)] = 10914,
  [SMALL_STATE(250)] = 10964,
  [SMALL_STATE(251)] = 11014,
  [SMALL_STATE(252)] = 11064,
  [SMALL_STATE(253)] = 11114,
  [SMALL_STATE(254)] = 11164,
  [SMALL_STATE(255)] = 11214,
  [SMALL_STATE(256)] = 11264,
  [SMALL_STATE(257)] = 11314,
  [SMALL_STATE(258)] = 11364,
  [SMALL_STATE(259)] = 11414,
  [SMALL_STATE(260)] = 11464,
  [SMALL_STATE(261)] = 11514,
  [SMALL_STATE(262)] = 11564,
  [SMALL_STATE(263)] = 11614,
  [SMALL_STATE(264)] = 11664,
  [SMALL_STATE(265)] = 11714,
  [SMALL_STATE(266)] = 11764,
  [SMALL_STATE(267)] = 11814,
  [SMALL_STATE(268)] = 11864,
  [SMALL_STATE(269)] = 11914,
  [SMALL_STATE(270)] = 11964,
  [SMALL_STATE(271)] = 12014,
  [SMALL_STATE(272)] = 12066,
  [SMALL_STATE(273)] = 12116,
  [SMALL_STATE(274)] = 12166,
  [SMALL_STATE(275)] = 12216,
  [SMALL_STATE(276)] = 12266,
  [SMALL_STATE(277)] = 12316,
  [SMALL_STATE(278)] = 12366,
  [SMALL_STATE(279)] = 12416,
  [SMALL_STATE(280)] = 12466,
  [SMALL_STATE(281)] = 12516,
  [SMALL_STATE(282)] = 12566,
  [SMALL_STATE(283)] = 12616,
  [SMALL_STATE(284)] = 12666,
  [SMALL_STATE(285)] = 12716,
  [SMALL_STATE(286)] = 12766,
  [SMALL_STATE(287)] = 12816,
  [SMALL_STATE(288)] = 12866,
  [SMALL_STATE(289)] = 12911,
  [SMALL_STATE(290)] = 12956,
  [SMALL_STATE(291)] = 13001,
  [SMALL_STATE(292)] = 13046,
  [SMALL_STATE(293)] = 13091,
  [SMALL_STATE(294)] = 13136,
  [SMALL_STATE(295)] = 13164,
  [SMALL_STATE(296)] = 13192,
  [SMALL_STATE(297)] = 13220,
  [SMALL_STATE(298)] = 13248,
  [SMALL_STATE(299)] = 13276,
  [SMALL_STATE(300)] = 13304,
  [SMALL_STATE(301)] = 13332,
  [SMALL_STATE(302)] = 13360,
  [SMALL_STATE(303)] = 13388,
  [SMALL_STATE(304)] = 13416,
  [SMALL_STATE(305)] = 13444,
  [SMALL_STATE(306)] = 13476,
  [SMALL_STATE(307)] = 13504,
  [SMALL_STATE(308)] = 13532,
  [SMALL_STATE(309)] = 13560,
  [SMALL_STATE(310)] = 13588,
  [SMALL_STATE(311)] = 13616,
  [SMALL_STATE(312)] = 13644,
  [SMALL_STATE(313)] = 13672,
  [SMALL_STATE(314)] = 13706,
  [SMALL_STATE(315)] = 13734,
  [SMALL_STATE(316)] = 13762,
  [SMALL_STATE(317)] = 13790,
  [SMALL_STATE(318)] = 13816,
  [SMALL_STATE(319)] = 13844,
  [SMALL_STATE(320)] = 13872,
  [SMALL_STATE(321)] = 13897,
  [SMALL_STATE(322)] = 13922,
  [SMALL_STATE(323)] = 13947,
  [SMALL_STATE(324)] = 13972,
  [SMALL_STATE(325)] = 13997,
  [SMALL_STATE(326)] = 14022,
  [SMALL_STATE(327)] = 14047,
  [SMALL_STATE(328)] = 14072,
  [SMALL_STATE(329)] = 14097,
  [SMALL_STATE(330)] = 14122,
  [SMALL_STATE(331)] = 14147,
  [SMALL_STATE(332)] = 14172,
  [SMALL_STATE(333)] = 14197,
  [SMALL_STATE(334)] = 14222,
  [SMALL_STATE(335)] = 14247,
  [SMALL_STATE(336)] = 14272,
  [SMALL_STATE(337)] = 14297,
  [SMALL_STATE(338)] = 14322,
  [SMALL_STATE(339)] = 14350,
  [SMALL_STATE(340)] = 14378,
  [SMALL_STATE(341)] = 14408,
  [SMALL_STATE(342)] = 14431,
  [SMALL_STATE(343)] = 14466,
  [SMALL_STATE(344)] = 14489,
  [SMALL_STATE(345)] = 14514,
  [SMALL_STATE(346)] = 14539,
  [SMALL_STATE(347)] = 14574,
  [SMALL_STATE(348)] = 14599,
  [SMALL_STATE(349)] = 14621,
  [SMALL_STATE(350)] = 14643,
  [SMALL_STATE(351)] = 14665,
  [SMALL_STATE(352)] = 14687,
  [SMALL_STATE(353)] = 14709,
  [SMALL_STATE(354)] = 14731,
  [SMALL_STATE(355)] = 14753,
  [SMALL_STATE(356)] = 14777,
  [SMALL_STATE(357)] = 14801,
  [SMALL_STATE(358)] = 14825,
  [SMALL_STATE(359)] = 14849,
  [SMALL_STATE(360)] = 14871,
  [SMALL_STATE(361)] = 14913,
  [SMALL_STATE(362)] = 14937,
  [SMALL_STATE(363)] = 14959,
  [SMALL_STATE(364)] = 14981,
  [SMALL_STATE(365)] = 15003,
  [SMALL_STATE(366)] = 15027,
  [SMALL_STATE(367)] = 15069,
  [SMALL_STATE(368)] = 15091,
  [SMALL_STATE(369)] = 15119,
  [SMALL_STATE(370)] = 15147,
  [SMALL_STATE(371)] = 15169,
  [SMALL_STATE(372)] = 15193,
  [SMALL_STATE(373)] = 15215,
  [SMALL_STATE(374)] = 15237,
  [SMALL_STATE(375)] = 15259,
  [SMALL_STATE(376)] = 15281,
  [SMALL_STATE(377)] = 15302,
  [SMALL_STATE(378)] = 15323,
  [SMALL_STATE(379)] = 15348,
  [SMALL_STATE(380)] = 15371,
  [SMALL_STATE(381)] = 15396,
  [SMALL_STATE(382)] = 15417,
  [SMALL_STATE(383)] = 15442,
  [SMALL_STATE(384)] = 15463,
  [SMALL_STATE(385)] = 15486,
  [SMALL_STATE(386)] = 15507,
  [SMALL_STATE(387)] = 15532,
  [SMALL_STATE(388)] = 15553,
  [SMALL_STATE(389)] = 15578,
  [SMALL_STATE(390)] = 15603,
  [SMALL_STATE(391)] = 15624,
  [SMALL_STATE(392)] = 15645,
  [SMALL_STATE(393)] = 15670,
  [SMALL_STATE(394)] = 15693,
  [SMALL_STATE(395)] = 15714,
  [SMALL_STATE(396)] = 15735,
  [SMALL_STATE(397)] = 15760,
  [SMALL_STATE(398)] = 15783,
  [SMALL_STATE(399)] = 15808,
  [SMALL_STATE(400)] = 15845,
  [SMALL_STATE(401)] = 15866,
  [SMALL_STATE(402)] = 15903,
  [SMALL_STATE(403)] = 15926,
  [SMALL_STATE(404)] = 15951,
  [SMALL_STATE(405)] = 15972,
  [SMALL_STATE(406)] = 15997,
  [SMALL_STATE(407)] = 16018,
  [SMALL_STATE(408)] = 16039,
  [SMALL_STATE(409)] = 16062,
  [SMALL_STATE(410)] = 16083,
  [SMALL_STATE(411)] = 16104,
  [SMALL_STATE(412)] = 16125,
  [SMALL_STATE(413)] = 16146,
  [SMALL_STATE(414)] = 16167,
  [SMALL_STATE(415)] = 16192,
  [SMALL_STATE(416)] = 16217,
  [SMALL_STATE(417)] = 16242,
  [SMALL_STATE(418)] = 16267,
  [SMALL_STATE(419)] = 16288,
  [SMALL_STATE(420)] = 16309,
  [SMALL_STATE(421)] = 16334,
  [SMALL_STATE(422)] = 16359,
  [SMALL_STATE(423)] = 16384,
  [SMALL_STATE(424)] = 16405,
  [SMALL_STATE(425)] = 16428,
  [SMALL_STATE(426)] = 16449,
  [SMALL_STATE(427)] = 16475,
  [SMALL_STATE(428)] = 16501,
  [SMALL_STATE(429)] = 16527,
  [SMALL_STATE(430)] = 16549,
  [SMALL_STATE(431)] = 16571,
  [SMALL_STATE(432)] = 16593,
  [SMALL_STATE(433)] = 16615,
  [SMALL_STATE(434)] = 16651,
  [SMALL_STATE(435)] = 16673,
  [SMALL_STATE(436)] = 16695,
  [SMALL_STATE(437)] = 16717,
  [SMALL_STATE(438)] = 16739,
  [SMALL_STATE(439)] = 16761,
  [SMALL_STATE(440)] = 16783,
  [SMALL_STATE(441)] = 16809,
  [SMALL_STATE(442)] = 16831,
  [SMALL_STATE(443)] = 16857,
  [SMALL_STATE(444)] = 16879,
  [SMALL_STATE(445)] = 16901,
  [SMALL_STATE(446)] = 16927,
  [SMALL_STATE(447)] = 16953,
  [SMALL_STATE(448)] = 16979,
  [SMALL_STATE(449)] = 17001,
  [SMALL_STATE(450)] = 17023,
  [SMALL_STATE(451)] = 17045,
  [SMALL_STATE(452)] = 17078,
  [SMALL_STATE(453)] = 17103,
  [SMALL_STATE(454)] = 17128,
  [SMALL_STATE(455)] = 17153,
  [SMALL_STATE(456)] = 17178,
  [SMALL_STATE(457)] = 17203,
  [SMALL_STATE(458)] = 17219,
  [SMALL_STATE(459)] = 17243,
  [SMALL_STATE(460)] = 17269,
  [SMALL_STATE(461)] = 17293,
  [SMALL_STATE(462)] = 17319,
  [SMALL_STATE(463)] = 17335,
  [SMALL_STATE(464)] = 17348,
  [SMALL_STATE(465)] = 17361,
  [SMALL_STATE(466)] = 17374,
  [SMALL_STATE(467)] = 17395,
  [SMALL_STATE(468)] = 17408,
  [SMALL_STATE(469)] = 17421,
  [SMALL_STATE(470)] = 17442,
  [SMALL_STATE(471)] = 17455,
  [SMALL_STATE(472)] = 17475,
  [SMALL_STATE(473)] = 17489,
  [SMALL_STATE(474)] = 17507,
  [SMALL_STATE(475)] = 17527,
  [SMALL_STATE(476)] = 17545,
  [SMALL_STATE(477)] = 17565,
  [SMALL_STATE(478)] = 17585,
  [SMALL_STATE(479)] = 17600,
  [SMALL_STATE(480)] = 17613,
  [SMALL_STATE(481)] = 17624,
  [SMALL_STATE(482)] = 17639,
  [SMALL_STATE(483)] = 17656,
  [SMALL_STATE(484)] = 17667,
  [SMALL_STATE(485)] = 17684,
  [SMALL_STATE(486)] = 17699,
  [SMALL_STATE(487)] = 17716,
  [SMALL_STATE(488)] = 17731,
  [SMALL_STATE(489)] = 17746,
  [SMALL_STATE(490)] = 17757,
  [SMALL_STATE(491)] = 17772,
  [SMALL_STATE(492)] = 17789,
  [SMALL_STATE(493)] = 17804,
  [SMALL_STATE(494)] = 17815,
  [SMALL_STATE(495)] = 17830,
  [SMALL_STATE(496)] = 17845,
  [SMALL_STATE(497)] = 17862,
  [SMALL_STATE(498)] = 17879,
  [SMALL_STATE(499)] = 17896,
  [SMALL_STATE(500)] = 17911,
  [SMALL_STATE(501)] = 17926,
  [SMALL_STATE(502)] = 17941,
  [SMALL_STATE(503)] = 17956,
  [SMALL_STATE(504)] = 17971,
  [SMALL_STATE(505)] = 17988,
  [SMALL_STATE(506)] = 18003,
  [SMALL_STATE(507)] = 18015,
  [SMALL_STATE(508)] = 18029,
  [SMALL_STATE(509)] = 18043,
  [SMALL_STATE(510)] = 18055,
  [SMALL_STATE(511)] = 18069,
  [SMALL_STATE(512)] = 18083,
  [SMALL_STATE(513)] = 18097,
  [SMALL_STATE(514)] = 18111,
  [SMALL_STATE(515)] = 18123,
  [SMALL_STATE(516)] = 18137,
  [SMALL_STATE(517)] = 18151,
  [SMALL_STATE(518)] = 18165,
  [SMALL_STATE(519)] = 18177,
  [SMALL_STATE(520)] = 18191,
  [SMALL_STATE(521)] = 18205,
  [SMALL_STATE(522)] = 18219,
  [SMALL_STATE(523)] = 18233,
  [SMALL_STATE(524)] = 18247,
  [SMALL_STATE(525)] = 18261,
  [SMALL_STATE(526)] = 18275,
  [SMALL_STATE(527)] = 18289,
  [SMALL_STATE(528)] = 18303,
  [SMALL_STATE(529)] = 18317,
  [SMALL_STATE(530)] = 18329,
  [SMALL_STATE(531)] = 18343,
  [SMALL_STATE(532)] = 18357,
  [SMALL_STATE(533)] = 18369,
  [SMALL_STATE(534)] = 18383,
  [SMALL_STATE(535)] = 18397,
  [SMALL_STATE(536)] = 18411,
  [SMALL_STATE(537)] = 18425,
  [SMALL_STATE(538)] = 18439,
  [SMALL_STATE(539)] = 18453,
  [SMALL_STATE(540)] = 18467,
  [SMALL_STATE(541)] = 18481,
  [SMALL_STATE(542)] = 18495,
  [SMALL_STATE(543)] = 18509,
  [SMALL_STATE(544)] = 18523,
  [SMALL_STATE(545)] = 18537,
  [SMALL_STATE(546)] = 18551,
  [SMALL_STATE(547)] = 18560,
  [SMALL_STATE(548)] = 18569,
  [SMALL_STATE(549)] = 18580,
  [SMALL_STATE(550)] = 18591,
  [SMALL_STATE(551)] = 18600,
  [SMALL_STATE(552)] = 18609,
  [SMALL_STATE(553)] = 18620,
  [SMALL_STATE(554)] = 18631,
  [SMALL_STATE(555)] = 18642,
  [SMALL_STATE(556)] = 18653,
  [SMALL_STATE(557)] = 18662,
  [SMALL_STATE(558)] = 18673,
  [SMALL_STATE(559)] = 18682,
  [SMALL_STATE(560)] = 18693,
  [SMALL_STATE(561)] = 18704,
  [SMALL_STATE(562)] = 18713,
  [SMALL_STATE(563)] = 18724,
  [SMALL_STATE(564)] = 18735,
  [SMALL_STATE(565)] = 18746,
  [SMALL_STATE(566)] = 18757,
  [SMALL_STATE(567)] = 18768,
  [SMALL_STATE(568)] = 18779,
  [SMALL_STATE(569)] = 18790,
  [SMALL_STATE(570)] = 18801,
  [SMALL_STATE(571)] = 18812,
  [SMALL_STATE(572)] = 18821,
  [SMALL_STATE(573)] = 18832,
  [SMALL_STATE(574)] = 18843,
  [SMALL_STATE(575)] = 18854,
  [SMALL_STATE(576)] = 18865,
  [SMALL_STATE(577)] = 18876,
  [SMALL_STATE(578)] = 18887,
  [SMALL_STATE(579)] = 18898,
  [SMALL_STATE(580)] = 18909,
  [SMALL_STATE(581)] = 18920,
  [SMALL_STATE(582)] = 18931,
  [SMALL_STATE(583)] = 18942,
  [SMALL_STATE(584)] = 18953,
  [SMALL_STATE(585)] = 18964,
  [SMALL_STATE(586)] = 18973,
  [SMALL_STATE(587)] = 18984,
  [SMALL_STATE(588)] = 18993,
  [SMALL_STATE(589)] = 19004,
  [SMALL_STATE(590)] = 19015,
  [SMALL_STATE(591)] = 19026,
  [SMALL_STATE(592)] = 19034,
  [SMALL_STATE(593)] = 19042,
  [SMALL_STATE(594)] = 19050,
  [SMALL_STATE(595)] = 19058,
  [SMALL_STATE(596)] = 19066,
  [SMALL_STATE(597)] = 19074,
  [SMALL_STATE(598)] = 19082,
  [SMALL_STATE(599)] = 19090,
  [SMALL_STATE(600)] = 19098,
  [SMALL_STATE(601)] = 19106,
  [SMALL_STATE(602)] = 19114,
  [SMALL_STATE(603)] = 19122,
  [SMALL_STATE(604)] = 19130,
  [SMALL_STATE(605)] = 19138,
  [SMALL_STATE(606)] = 19146,
  [SMALL_STATE(607)] = 19154,
  [SMALL_STATE(608)] = 19162,
  [SMALL_STATE(609)] = 19170,
  [SMALL_STATE(610)] = 19178,
  [SMALL_STATE(611)] = 19186,
  [SMALL_STATE(612)] = 19194,
  [SMALL_STATE(613)] = 19202,
  [SMALL_STATE(614)] = 19210,
  [SMALL_STATE(615)] = 19218,
  [SMALL_STATE(616)] = 19226,
  [SMALL_STATE(617)] = 19234,
  [SMALL_STATE(618)] = 19242,
  [SMALL_STATE(619)] = 19250,
  [SMALL_STATE(620)] = 19258,
  [SMALL_STATE(621)] = 19266,
  [SMALL_STATE(622)] = 19274,
  [SMALL_STATE(623)] = 19282,
  [SMALL_STATE(624)] = 19290,
  [SMALL_STATE(625)] = 19298,
  [SMALL_STATE(626)] = 19306,
  [SMALL_STATE(627)] = 19314,
  [SMALL_STATE(628)] = 19322,
  [SMALL_STATE(629)] = 19330,
  [SMALL_STATE(630)] = 19338,
  [SMALL_STATE(631)] = 19346,
  [SMALL_STATE(632)] = 19354,
  [SMALL_STATE(633)] = 19362,
  [SMALL_STATE(634)] = 19370,
  [SMALL_STATE(635)] = 19378,
  [SMALL_STATE(636)] = 19386,
  [SMALL_STATE(637)] = 19394,
  [SMALL_STATE(638)] = 19402,
  [SMALL_STATE(639)] = 19410,
  [SMALL_STATE(640)] = 19418,
  [SMALL_STATE(641)] = 19426,
  [SMALL_STATE(642)] = 19434,
  [SMALL_STATE(643)] = 19442,
  [SMALL_STATE(644)] = 19450,
  [SMALL_STATE(645)] = 19458,
  [SMALL_STATE(646)] = 19466,
  [SMALL_STATE(647)] = 19474,
  [SMALL_STATE(648)] = 19482,
  [SMALL_STATE(649)] = 19490,
  [SMALL_STATE(650)] = 19498,
  [SMALL_STATE(651)] = 19506,
  [SMALL_STATE(652)] = 19514,
  [SMALL_STATE(653)] = 19522,
  [SMALL_STATE(654)] = 19530,
  [SMALL_STATE(655)] = 19538,
  [SMALL_STATE(656)] = 19546,
  [SMALL_STATE(657)] = 19554,
  [SMALL_STATE(658)] = 19562,
  [SMALL_STATE(659)] = 19570,
  [SMALL_STATE(660)] = 19578,
  [SMALL_STATE(661)] = 19586,
  [SMALL_STATE(662)] = 19594,
  [SMALL_STATE(663)] = 19602,
  [SMALL_STATE(664)] = 19610,
  [SMALL_STATE(665)] = 19618,
  [SMALL_STATE(666)] = 19626,
  [SMALL_STATE(667)] = 19634,
  [SMALL_STATE(668)] = 19642,
  [SMALL_STATE(669)] = 19650,
  [SMALL_STATE(670)] = 19658,
  [SMALL_STATE(671)] = 19666,
  [SMALL_STATE(672)] = 19674,
  [SMALL_STATE(673)] = 19682,
  [SMALL_STATE(674)] = 19690,
  [SMALL_STATE(675)] = 19698,
  [SMALL_STATE(676)] = 19706,
  [SMALL_STATE(677)] = 19714,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(284),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(447),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(279),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(496),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(660),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(442),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(268),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(364),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(243),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(219),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(656),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(655),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(654),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(653),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(249),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(652),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(650),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(253),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(649),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(255),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(257),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(345),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(648),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(646),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(645),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(639),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(360),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(387),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(632),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(342),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(241),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(446),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(504),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(641),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(427),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(364),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(656),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(643),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(644),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(673),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(677),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(647),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(274),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(254),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(251),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(250),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(345),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(648),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(646),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(645),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(639),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(360),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(381),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(665),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(346),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(610),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 19),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(658),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 12),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 12),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 29),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 29),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 28),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 28),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 7),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 7),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 11),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 11),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 11),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 11),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 11),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 10),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 10),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 17),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 17),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 11),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 11),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 5),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 22),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 22),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_value, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_value, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 4),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 24),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5, .production_id = 24),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(246),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(214),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(595),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(152),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(161),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(161),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(588),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(150),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 19),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(216),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(604),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(189),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(197),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(197),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(194),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(177),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(166),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(575),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(158),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(196),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(214),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(595),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(152),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(161),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(161),
  [945] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(141),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(140),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(588),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(139),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(150),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 14),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 14),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 14),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 14),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 13),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 13),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 14),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 14),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 13),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 13),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 16),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 16),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 15),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 15),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 7),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 7),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 8),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 8),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameter, 3),
  [1288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(247),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 18),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(269),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 27),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, .dynamic_precedence = 1),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_pair, 3, .production_id = 21),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_annotation, 1),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_annotation, 1),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(637),
  [1371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(564),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(578),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 25),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2), SHIFT_REPEAT(236),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(235),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(428),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2), SHIFT_REPEAT(567),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(292),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2), SHIFT_REPEAT(237),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(240),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(589),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 5),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 3),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 4),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 2),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 19),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_selector, 2, .production_id = 6),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1694] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_declaration_selector, 2, .production_id = 6),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_alias, 1),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
