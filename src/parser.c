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
#define STATE_COUNT 657
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 20
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 29

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
  aux_sym_use_namespace_token1 = 18,
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
  anon_sym_DASH = 78,
  anon_sym_SLASH = 79,
  anon_sym_EQ_EQ = 80,
  anon_sym_LT = 81,
  anon_sym_BANG_EQ = 82,
  anon_sym_LT_EQ = 83,
  anon_sym_GT_EQ = 84,
  sym_identifier = 85,
  sym_variable_identifier = 86,
  sym_at_keyword = 87,
  sym_comment = 88,
  sym_single_line_comment = 89,
  sym_plain_value = 90,
  sym__descendant_operator = 91,
  sym_stylesheet = 92,
  sym_import_statement = 93,
  sym_media_statement = 94,
  sym_charset_statement = 95,
  sym_namespace_statement = 96,
  sym_keyframes_statement = 97,
  sym_keyframe_block_list = 98,
  sym_keyframe_block = 99,
  sym_from = 100,
  sym_supports_statement = 101,
  sym_at_rule = 102,
  sym_use_statement = 103,
  sym_use_namespace = 104,
  sym_forward_statement = 105,
  sym_apply_statement = 106,
  sym_parameters = 107,
  sym_parameter = 108,
  sym_use_parameters = 109,
  sym_use_parameter = 110,
  sym_mixin_statement = 111,
  sym_include_statement = 112,
  sym_include_arguments = 113,
  sym_include_argument = 114,
  sym_placeholder_declaration_selector = 115,
  sym_placeholder = 116,
  sym_extend_statement = 117,
  sym_if_statement = 118,
  sym_if_clause = 119,
  sym_else_if_clause = 120,
  sym_else_clause = 121,
  sym_each_statement = 122,
  sym_for_statement = 123,
  sym_while_statement = 124,
  sym_function_statement = 125,
  sym_return_statement = 126,
  sym_at_root_statement = 127,
  sym_error_statement = 128,
  sym_warn_statement = 129,
  sym_debug_statement = 130,
  sym_rule_set = 131,
  sym_selectors = 132,
  sym_block = 133,
  sym__selector = 134,
  sym_universal_selector = 135,
  sym_placeholder_selector = 136,
  sym_class_selector = 137,
  sym_pseudo_class_selector = 138,
  sym_pseudo_element_selector = 139,
  sym_id_selector = 140,
  sym_attribute_selector = 141,
  sym_child_selector = 142,
  sym_descendant_selector = 143,
  sym_sibling_selector = 144,
  sym_adjacent_sibling_selector = 145,
  sym_pseudo_class_arguments = 146,
  sym_scope_annotation = 147,
  sym_declaration = 148,
  sym_last_declaration = 149,
  sym__query = 150,
  sym_feature_query = 151,
  sym_parenthesized_query = 152,
  sym_binary_query = 153,
  sym_unary_query = 154,
  sym_selector_query = 155,
  sym__value = 156,
  sym__value_allowed_in_url_function = 157,
  sym_boolean_value = 158,
  sym_parenthesized_value = 159,
  sym_map_value = 160,
  sym_map_pair = 161,
  sym_color_value = 162,
  sym_integer_value = 163,
  sym_float_value = 164,
  sym_call_expression = 165,
  sym_binary_expression = 166,
  sym_binary_expression_allowed_in_url_function = 167,
  sym_arguments = 168,
  sym_arguments_for_url = 169,
  aux_sym_stylesheet_repeat1 = 170,
  aux_sym_import_statement_repeat1 = 171,
  aux_sym_keyframe_block_list_repeat1 = 172,
  aux_sym_apply_statement_repeat1 = 173,
  aux_sym_parameters_repeat1 = 174,
  aux_sym_use_parameters_repeat1 = 175,
  aux_sym_include_arguments_repeat1 = 176,
  aux_sym_if_statement_repeat1 = 177,
  aux_sym_selectors_repeat1 = 178,
  aux_sym_block_repeat1 = 179,
  aux_sym_pseudo_class_arguments_repeat1 = 180,
  aux_sym_declaration_repeat1 = 181,
  aux_sym_map_value_repeat1 = 182,
  aux_sym_arguments_repeat1 = 183,
  aux_sym_arguments_for_url_repeat1 = 184,
  aux_sym_arguments_for_url_repeat2 = 185,
  alias_sym_argument_name = 186,
  alias_sym_argument_value = 187,
  alias_sym_attribute_name = 188,
  alias_sym_class_name = 189,
  alias_sym_condition = 190,
  alias_sym_default_value = 191,
  alias_sym_feature_name = 192,
  alias_sym_id_name = 193,
  alias_sym_key = 194,
  alias_sym_keyframes_name = 195,
  alias_sym_keyword_query = 196,
  alias_sym_name = 197,
  alias_sym_namespace_name = 198,
  alias_sym_placeholder_name = 199,
  alias_sym_property_name = 200,
  alias_sym_tag_name = 201,
  alias_sym_through = 202,
  alias_sym_value = 203,
  alias_sym_variable = 204,
  alias_sym_variable_value = 205,
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
  [aux_sym_use_namespace_token1] = "use_namespace_token1",
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
  [sym_use_namespace] = "use_namespace",
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
  [aux_sym_use_namespace_token1] = aux_sym_use_namespace_token1,
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
  [sym_use_namespace] = sym_use_namespace,
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
  [aux_sym_use_namespace_token1] = {
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
  [sym_use_namespace] = {
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
  field_name = 3,
  field_value = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [9] = {.index = 0, .length = 2},
  [21] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 1},
    {field_name, 0},
  [2] =
    {field_key, 0},
    {field_value, 2},
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
    [1] = alias_sym_feature_name,
  },
  [25] = {
    [2] = alias_sym_default_value,
  },
  [26] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [27] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [28] = {
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
  return (c < ':'
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

static inline bool sym_single_line_comment_character_set_3(int32_t c) {
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

static inline bool sym_single_line_comment_character_set_4(int32_t c) {
  return (c < ':'
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

static inline bool sym_plain_value_character_set_1(int32_t c) {
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
        ? (c >= ':' && c <= ';')
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
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
        ? (c >= ':' && c <= ';')
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_4(int32_t c) {
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
        ? (c >= ':' && c <= ';')
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(212);
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
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '~') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(382);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '~') ADVANCE(215);
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
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '_') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(558);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(551);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(550);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(385);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
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
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
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
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(160);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(221);
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
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(226);
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
      if (lookahead == 'o') ADVANCE(160);
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
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(233);
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
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(223);
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
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == '}') ADVANCE(409);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 138:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 139:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(562);
      END_STATE();
    case 140:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 141:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 144:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(212);
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
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(158);
      if (lookahead == '~') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '$') ADVANCE(136);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_use_namespace_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'w') ADVANCE(448);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(128);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(387);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_null_value);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(240);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(245);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(295);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(374);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(250);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(291);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 's') ADVANCE(288);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(287);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(292);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '/') ADVANCE(140);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '{') ADVANCE(128);
      if (!sym_unquoted_string_value_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(140);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(554);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(242);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(371);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(247);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(334);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(339);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(333);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 's') ADVANCE(331);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(330);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(335);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(239);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(244);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(249);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 's') ADVANCE(345);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'u') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == 'u') ADVANCE(349);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(361);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(558);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(551);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(552);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '_') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '_') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'b') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(238);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(243);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(248);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(222);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 's') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(139);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(562);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead == 'k') ADVANCE(474);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == 'x') ADVANCE(539);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == 'x') ADVANCE(539);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(540);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(509);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(472);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(510);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(543);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'x') ADVANCE(483);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'y') ADVANCE(171);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == 'y') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(558);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(558);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(557);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_3(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_3(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_4(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(551);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_4(lookahead)) ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(561);
      if (lookahead == '/') ADVANCE(139);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '{') ADVANCE(128);
      if (!sym_plain_value_character_set_4(lookahead)) ADVANCE(562);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(139);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
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
  [18] = {.lex_state = 147},
  [19] = {.lex_state = 147},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 147},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 147},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 147},
  [36] = {.lex_state = 145},
  [37] = {.lex_state = 145},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 145},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 145},
  [42] = {.lex_state = 145},
  [43] = {.lex_state = 145},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 145},
  [46] = {.lex_state = 145},
  [47] = {.lex_state = 145},
  [48] = {.lex_state = 145},
  [49] = {.lex_state = 145},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 145},
  [52] = {.lex_state = 145},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 145},
  [55] = {.lex_state = 145},
  [56] = {.lex_state = 145},
  [57] = {.lex_state = 3, .external_lex_state = 1},
  [58] = {.lex_state = 145},
  [59] = {.lex_state = 145},
  [60] = {.lex_state = 145},
  [61] = {.lex_state = 145},
  [62] = {.lex_state = 145},
  [63] = {.lex_state = 145},
  [64] = {.lex_state = 145},
  [65] = {.lex_state = 145},
  [66] = {.lex_state = 145},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 145},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 145},
  [73] = {.lex_state = 145},
  [74] = {.lex_state = 145},
  [75] = {.lex_state = 145},
  [76] = {.lex_state = 145},
  [77] = {.lex_state = 145},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 145},
  [80] = {.lex_state = 145},
  [81] = {.lex_state = 145},
  [82] = {.lex_state = 145},
  [83] = {.lex_state = 145},
  [84] = {.lex_state = 145},
  [85] = {.lex_state = 145},
  [86] = {.lex_state = 145},
  [87] = {.lex_state = 145},
  [88] = {.lex_state = 145},
  [89] = {.lex_state = 145},
  [90] = {.lex_state = 145},
  [91] = {.lex_state = 145},
  [92] = {.lex_state = 145},
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
  [138] = {.lex_state = 1, .external_lex_state = 1},
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
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 26},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 26},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
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
  [255] = {.lex_state = 9},
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
  [285] = {.lex_state = 9, .external_lex_state = 1},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 27},
  [289] = {.lex_state = 27},
  [290] = {.lex_state = 27},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9, .external_lex_state = 1},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 13},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 13},
  [322] = {.lex_state = 13},
  [323] = {.lex_state = 13},
  [324] = {.lex_state = 13},
  [325] = {.lex_state = 13},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 13},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 13},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 13},
  [334] = {.lex_state = 145, .external_lex_state = 1},
  [335] = {.lex_state = 145, .external_lex_state = 1},
  [336] = {.lex_state = 27, .external_lex_state = 1},
  [337] = {.lex_state = 145, .external_lex_state = 1},
  [338] = {.lex_state = 15},
  [339] = {.lex_state = 15},
  [340] = {.lex_state = 13},
  [341] = {.lex_state = 145, .external_lex_state = 1},
  [342] = {.lex_state = 13},
  [343] = {.lex_state = 15},
  [344] = {.lex_state = 145, .external_lex_state = 1},
  [345] = {.lex_state = 145, .external_lex_state = 1},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 145, .external_lex_state = 1},
  [348] = {.lex_state = 145, .external_lex_state = 1},
  [349] = {.lex_state = 145, .external_lex_state = 1},
  [350] = {.lex_state = 145, .external_lex_state = 1},
  [351] = {.lex_state = 145, .external_lex_state = 1},
  [352] = {.lex_state = 145, .external_lex_state = 1},
  [353] = {.lex_state = 145, .external_lex_state = 1},
  [354] = {.lex_state = 145, .external_lex_state = 1},
  [355] = {.lex_state = 145, .external_lex_state = 1},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 145, .external_lex_state = 1},
  [358] = {.lex_state = 145, .external_lex_state = 1},
  [359] = {.lex_state = 145, .external_lex_state = 1},
  [360] = {.lex_state = 145, .external_lex_state = 1},
  [361] = {.lex_state = 145, .external_lex_state = 1},
  [362] = {.lex_state = 145, .external_lex_state = 1},
  [363] = {.lex_state = 145, .external_lex_state = 1},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 145, .external_lex_state = 1},
  [367] = {.lex_state = 145, .external_lex_state = 1},
  [368] = {.lex_state = 145, .external_lex_state = 1},
  [369] = {.lex_state = 145, .external_lex_state = 1},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 145, .external_lex_state = 1},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 145, .external_lex_state = 1},
  [379] = {.lex_state = 9},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 145, .external_lex_state = 1},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 9},
  [395] = {.lex_state = 145, .external_lex_state = 1},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 9},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 145, .external_lex_state = 1},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 9},
  [413] = {.lex_state = 9},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 9},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 145, .external_lex_state = 1},
  [421] = {.lex_state = 13},
  [422] = {.lex_state = 9},
  [423] = {.lex_state = 9},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 9},
  [426] = {.lex_state = 9},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 9},
  [429] = {.lex_state = 13},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 13},
  [432] = {.lex_state = 13},
  [433] = {.lex_state = 9},
  [434] = {.lex_state = 13},
  [435] = {.lex_state = 145, .external_lex_state = 1},
  [436] = {.lex_state = 9},
  [437] = {.lex_state = 145, .external_lex_state = 1},
  [438] = {.lex_state = 9},
  [439] = {.lex_state = 9},
  [440] = {.lex_state = 13},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 9},
  [443] = {.lex_state = 13},
  [444] = {.lex_state = 13},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 145, .external_lex_state = 1},
  [447] = {.lex_state = 129},
  [448] = {.lex_state = 129},
  [449] = {.lex_state = 129},
  [450] = {.lex_state = 129},
  [451] = {.lex_state = 129},
  [452] = {.lex_state = 26},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 26},
  [456] = {.lex_state = 9},
  [457] = {.lex_state = 28},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 9},
  [460] = {.lex_state = 9},
  [461] = {.lex_state = 9},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 28},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 9},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 145},
  [474] = {.lex_state = 129},
  [475] = {.lex_state = 23},
  [476] = {.lex_state = 145},
  [477] = {.lex_state = 129},
  [478] = {.lex_state = 28},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 23},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 129},
  [483] = {.lex_state = 9},
  [484] = {.lex_state = 145},
  [485] = {.lex_state = 145},
  [486] = {.lex_state = 129},
  [487] = {.lex_state = 145},
  [488] = {.lex_state = 145},
  [489] = {.lex_state = 23},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 145},
  [493] = {.lex_state = 28},
  [494] = {.lex_state = 145},
  [495] = {.lex_state = 145},
  [496] = {.lex_state = 145},
  [497] = {.lex_state = 145},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 145},
  [500] = {.lex_state = 23},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 39},
  [503] = {.lex_state = 9},
  [504] = {.lex_state = 145},
  [505] = {.lex_state = 145},
  [506] = {.lex_state = 145},
  [507] = {.lex_state = 39},
  [508] = {.lex_state = 145},
  [509] = {.lex_state = 39},
  [510] = {.lex_state = 145},
  [511] = {.lex_state = 145},
  [512] = {.lex_state = 145},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 145},
  [515] = {.lex_state = 145},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 145},
  [518] = {.lex_state = 145},
  [519] = {.lex_state = 145},
  [520] = {.lex_state = 23},
  [521] = {.lex_state = 145},
  [522] = {.lex_state = 145},
  [523] = {.lex_state = 145},
  [524] = {.lex_state = 145},
  [525] = {.lex_state = 145},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 23},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 145},
  [531] = {.lex_state = 145},
  [532] = {.lex_state = 39},
  [533] = {.lex_state = 145},
  [534] = {.lex_state = 145},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 145},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 145},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 145},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 31},
  [550] = {.lex_state = 145},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 23},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 145},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 23},
  [561] = {.lex_state = 18},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 31},
  [564] = {.lex_state = 23},
  [565] = {.lex_state = 145},
  [566] = {.lex_state = 145},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 145},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 145},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 9},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 27},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 9},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 9},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 27},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 23},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 145},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 9},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 9},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 27},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 27},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 27},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 27},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 27},
  [631] = {.lex_state = 27},
  [632] = {.lex_state = 27},
  [633] = {.lex_state = 27},
  [634] = {.lex_state = 27},
  [635] = {.lex_state = 27},
  [636] = {.lex_state = 27},
  [637] = {.lex_state = 145},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 145},
  [640] = {.lex_state = 27},
  [641] = {.lex_state = 27},
  [642] = {.lex_state = 27},
  [643] = {.lex_state = 27},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 27},
  [646] = {.lex_state = 27},
  [647] = {.lex_state = 27},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 145},
  [653] = {.lex_state = 145},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 145},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
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
  },
  [1] = {
    [sym_stylesheet] = STATE(581),
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
    [sym_placeholder_declaration_selector] = STATE(540),
    [sym_placeholder] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(19),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(562),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
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
    [sym_placeholder_declaration_selector] = STATE(540),
    [sym_placeholder] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(19),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(562),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
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
    [sym_placeholder_declaration_selector] = STATE(540),
    [sym_placeholder] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(19),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(562),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
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
    [sym_import_statement] = STATE(6),
    [sym_media_statement] = STATE(6),
    [sym_charset_statement] = STATE(6),
    [sym_namespace_statement] = STATE(6),
    [sym_keyframes_statement] = STATE(6),
    [sym_supports_statement] = STATE(6),
    [sym_at_rule] = STATE(6),
    [sym_mixin_statement] = STATE(6),
    [sym_include_statement] = STATE(6),
    [sym_extend_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym_function_statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_at_root_statement] = STATE(6),
    [sym_error_statement] = STATE(6),
    [sym_warn_statement] = STATE(6),
    [sym_debug_statement] = STATE(6),
    [sym_rule_set] = STATE(6),
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(616),
    [aux_sym_block_repeat1] = STATE(6),
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
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(589),
    [aux_sym_block_repeat1] = STATE(13),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(621),
    [aux_sym_block_repeat1] = STATE(14),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(588),
    [aux_sym_block_repeat1] = STATE(8),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(617),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(10),
    [sym_last_declaration] = STATE(627),
    [aux_sym_block_repeat1] = STATE(10),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(611),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(605),
    [aux_sym_block_repeat1] = STATE(14),
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
    [sym_import_statement] = STATE(11),
    [sym_media_statement] = STATE(11),
    [sym_charset_statement] = STATE(11),
    [sym_namespace_statement] = STATE(11),
    [sym_keyframes_statement] = STATE(11),
    [sym_supports_statement] = STATE(11),
    [sym_at_rule] = STATE(11),
    [sym_mixin_statement] = STATE(11),
    [sym_include_statement] = STATE(11),
    [sym_extend_statement] = STATE(11),
    [sym_if_statement] = STATE(11),
    [sym_if_clause] = STATE(20),
    [sym_each_statement] = STATE(11),
    [sym_for_statement] = STATE(11),
    [sym_while_statement] = STATE(11),
    [sym_function_statement] = STATE(11),
    [sym_return_statement] = STATE(11),
    [sym_at_root_statement] = STATE(11),
    [sym_error_statement] = STATE(11),
    [sym_warn_statement] = STATE(11),
    [sym_debug_statement] = STATE(11),
    [sym_rule_set] = STATE(11),
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(11),
    [sym_last_declaration] = STATE(600),
    [aux_sym_block_repeat1] = STATE(11),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(591),
    [aux_sym_block_repeat1] = STATE(14),
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
    [sym_selectors] = STATE(571),
    [sym__selector] = STATE(351),
    [sym_universal_selector] = STATE(351),
    [sym_class_selector] = STATE(351),
    [sym_pseudo_class_selector] = STATE(351),
    [sym_pseudo_element_selector] = STATE(351),
    [sym_id_selector] = STATE(351),
    [sym_attribute_selector] = STATE(351),
    [sym_child_selector] = STATE(351),
    [sym_descendant_selector] = STATE(351),
    [sym_sibling_selector] = STATE(351),
    [sym_adjacent_sibling_selector] = STATE(351),
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
    STATE(433), 1,
      sym__value,
    STATE(437), 1,
      sym_class_selector,
    STATE(622), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(446), 10,
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
    STATE(179), 1,
      sym__value,
    STATE(182), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(371), 11,
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
    STATE(179), 1,
      sym__value,
    STATE(209), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(395), 11,
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
    STATE(50), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(21), 2,
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
    STATE(86), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(18), 2,
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
    STATE(114), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(22), 2,
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
  [415] = 5,
    ACTIONS(384), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(21), 2,
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
  [464] = 6,
    ACTIONS(378), 1,
      anon_sym_ATelse,
    STATE(118), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(30), 2,
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
    STATE(160), 1,
      sym__value,
    STATE(164), 1,
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
    STATE(150), 8,
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
    STATE(160), 1,
      sym__value,
    STATE(198), 1,
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
    STATE(150), 8,
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
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(409), 1,
      sym_important,
    STATE(160), 1,
      sym__value,
    STATE(202), 1,
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
    STATE(150), 8,
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
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      sym_default,
    STATE(160), 1,
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
    STATE(150), 8,
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
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      sym_default,
    STATE(160), 1,
      sym__value,
    STATE(199), 1,
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
    STATE(150), 8,
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
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      sym_important,
    STATE(160), 1,
      sym__value,
    STATE(200), 1,
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
    STATE(150), 8,
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
    STATE(160), 1,
      sym__value,
    STATE(186), 1,
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
    STATE(150), 8,
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
  [1184] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 25,
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
  [1227] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 25,
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
  [1270] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 25,
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
  [1313] = 3,
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
    ACTIONS(452), 24,
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
  [1355] = 3,
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
  [1397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(440), 25,
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
  [1439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 24,
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
  [1481] = 3,
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
  [1523] = 3,
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
  [1565] = 3,
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
  [1607] = 3,
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
  [1649] = 3,
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
  [1691] = 3,
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
  [1733] = 3,
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
  [1775] = 3,
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
    ACTIONS(432), 24,
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
  [1817] = 3,
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
  [1859] = 3,
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
  [1901] = 3,
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
  [1943] = 3,
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
  [1985] = 3,
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
  [2027] = 3,
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
  [2069] = 3,
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
  [2111] = 3,
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
  [2153] = 3,
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
  [2195] = 7,
    ACTIONS(530), 1,
      anon_sym_LPAREN2,
    STATE(148), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(528), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(524), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(526), 13,
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
      sym_variable_identifier,
      sym_plain_value,
  [2245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(532), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(534), 24,
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
  [2287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(536), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(538), 24,
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
  [2329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(540), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(542), 24,
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
  [2371] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(544), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(546), 24,
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
  [2413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(550), 24,
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
  [2455] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(552), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(554), 24,
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
  [2497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(556), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(558), 24,
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
  [2539] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(560), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(562), 24,
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
  [2581] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(564), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(566), 24,
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
  [2623] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(442), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(444), 25,
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
  [2665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 25,
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
  [2707] = 3,
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
  [2749] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(568), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(570), 24,
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
  [2791] = 3,
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
  [2833] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(572), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(574), 24,
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
  [2875] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(576), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(578), 24,
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
  [2917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(580), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(582), 24,
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
  [2959] = 3,
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
  [3001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(586), 24,
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
  [3043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(588), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(590), 24,
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
  [3085] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(594), 24,
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
  [3127] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(596), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(598), 24,
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
  [3169] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(600), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(602), 24,
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
  [3211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(604), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(606), 24,
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
  [3253] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(608), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(610), 24,
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
  [3295] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(612), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(614), 24,
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
  [3337] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(616), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(618), 24,
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
  [3379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(620), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(622), 24,
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
  [3421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
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
  [3463] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(624), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(626), 24,
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
  [3505] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(628), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(630), 24,
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
  [3547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(634), 24,
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
  [3589] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(636), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(638), 24,
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
  [3631] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(640), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(642), 24,
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
  [3673] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(646), 24,
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
  [3715] = 3,
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
  [3756] = 3,
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
  [3797] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(556), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(558), 24,
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
  [3838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(564), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(566), 24,
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
  [3879] = 3,
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
  [3920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(572), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(574), 24,
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
  [3961] = 3,
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
  [4002] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(588), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(590), 24,
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
  [4043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(576), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(578), 24,
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
  [4084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(600), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(602), 24,
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
  [4125] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(632), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(634), 24,
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
  [4166] = 3,
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
  [4207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(552), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(554), 24,
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
  [4248] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(548), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(550), 24,
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
  [4289] = 3,
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
  [4330] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(536), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(538), 24,
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
  [4371] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(644), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(646), 24,
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
  [4412] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(594), 24,
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
  [4453] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(628), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(630), 24,
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
  [4494] = 3,
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
    ACTIONS(432), 24,
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
  [4535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(640), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(642), 24,
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
  [4576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
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
  [4617] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(604), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(606), 24,
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
  [4658] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(568), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(570), 24,
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
  [4699] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(584), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(586), 24,
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
  [4740] = 3,
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
  [4781] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(544), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(546), 24,
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
  [4822] = 3,
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
    ACTIONS(452), 24,
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
  [4863] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(532), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(534), 24,
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
  [4904] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(624), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(626), 24,
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
  [4945] = 3,
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
  [4986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(560), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(562), 24,
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
  [5027] = 3,
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
  [5068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(486), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
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
  [5109] = 3,
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
  [5150] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(448), 24,
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
  [5191] = 3,
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
  [5232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(612), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(614), 24,
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
  [5273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(650), 8,
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
  [5314] = 3,
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
  [5355] = 3,
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
  [5396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(654), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(652), 24,
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
  [5437] = 3,
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
  [5478] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(656), 24,
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
  [5519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(580), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(582), 24,
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
  [5560] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(660), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(662), 7,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(666), 12,
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
      sym_variable_identifier,
      sym_plain_value,
  [5604] = 5,
    ACTIONS(530), 1,
      anon_sym_LPAREN2,
    STATE(148), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(524), 12,
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
    ACTIONS(526), 16,
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
      sym_variable_identifier,
      sym_plain_value,
  [5647] = 4,
    ACTIONS(672), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(668), 13,
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
    ACTIONS(670), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5687] = 4,
    ACTIONS(678), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 13,
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
    ACTIONS(676), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(680), 13,
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
    ACTIONS(682), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5764] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(684), 13,
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
    ACTIONS(686), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5801] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(688), 13,
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
    ACTIONS(690), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5838] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(692), 13,
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
    ACTIONS(694), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5875] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(696), 13,
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
    ACTIONS(698), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(700), 13,
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
    ACTIONS(702), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(704), 13,
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
    ACTIONS(706), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [5986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(708), 13,
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
    ACTIONS(710), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(662), 13,
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
    ACTIONS(666), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(712), 13,
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
    ACTIONS(714), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6097] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(716), 13,
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
    ACTIONS(718), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(720), 13,
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
    ACTIONS(722), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(724), 13,
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
    ACTIONS(726), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(728), 13,
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
    ACTIONS(730), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 13,
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
    ACTIONS(734), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6282] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(736), 13,
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
    ACTIONS(738), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6319] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(740), 13,
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
    ACTIONS(742), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(744), 13,
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
    ACTIONS(746), 15,
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
      sym_variable_identifier,
      sym_plain_value,
  [6393] = 5,
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
    ACTIONS(748), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
    ACTIONS(750), 10,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_LPAREN2,
    ACTIONS(758), 1,
      sym_single_line_comment,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(752), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(754), 16,
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
  [6475] = 5,
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
    ACTIONS(760), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
    ACTIONS(762), 10,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6515] = 16,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      sym_string_value,
    ACTIONS(782), 1,
      aux_sym_integer_value_token1,
    ACTIONS(785), 1,
      aux_sym_float_value_token1,
    ACTIONS(788), 1,
      anon_sym_url,
    ACTIONS(791), 1,
      sym_identifier,
    ACTIONS(794), 1,
      sym_variable_identifier,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(773), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(776), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(760), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
      sym_default,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6577] = 18,
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
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(801), 1,
      sym_important,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6642] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(473), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6707] = 17,
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
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    STATE(497), 1,
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
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(833), 1,
      sym_unit,
    ACTIONS(668), 10,
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
    ACTIONS(670), 15,
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
  [6809] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(496), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(837), 1,
      sym_unit,
    ACTIONS(674), 10,
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
    ACTIONS(676), 15,
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
  [6913] = 17,
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
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    STATE(492), 1,
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
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6976] = 17,
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
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
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
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7039] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(484), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7104] = 17,
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
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    STATE(499), 1,
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
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7167] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(476), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7232] = 17,
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
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    STATE(495), 1,
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
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7295] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(494), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(724), 10,
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
    ACTIONS(726), 15,
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
  [7396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(853), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(855), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(859), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(857), 10,
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
  [7436] = 5,
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
    ACTIONS(861), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(863), 10,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [7474] = 15,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      sym_string_value,
    ACTIONS(882), 1,
      aux_sym_integer_value_token1,
    ACTIONS(885), 1,
      aux_sym_float_value_token1,
    ACTIONS(888), 1,
      anon_sym_url,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(894), 1,
      sym_variable_identifier,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(873), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(876), 2,
      sym_null_value,
      sym_plain_value,
    ACTIONS(865), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(684), 10,
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
    ACTIONS(686), 15,
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
  [7568] = 17,
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
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
      aux_sym_apply_statement_repeat1,
    STATE(524), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(740), 10,
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
    ACTIONS(742), 15,
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
  [7666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(680), 10,
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
    ACTIONS(682), 15,
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
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(720), 10,
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
    ACTIONS(722), 15,
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
  [7738] = 17,
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
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      sym_default,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(716), 10,
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
    ACTIONS(718), 15,
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
  [7836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(744), 10,
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
    ACTIONS(746), 15,
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
  [7872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(712), 10,
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
    ACTIONS(714), 15,
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
  [7908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(708), 10,
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
    ACTIONS(710), 15,
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
  [7944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(752), 10,
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
    ACTIONS(754), 15,
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
  [7980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(696), 10,
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
    ACTIONS(698), 15,
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
  [8016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(905), 10,
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
    ACTIONS(907), 15,
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
  [8052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(736), 10,
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
    ACTIONS(738), 15,
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
  [8088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(692), 10,
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
    ACTIONS(694), 15,
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
  [8124] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      anon_sym_POUND,
    ACTIONS(920), 1,
      sym_null_value,
    ACTIONS(923), 1,
      sym_string_value,
    ACTIONS(926), 1,
      sym_unquoted_string_value,
    ACTIONS(929), 1,
      aux_sym_integer_value_token1,
    ACTIONS(932), 1,
      aux_sym_float_value_token1,
    ACTIONS(935), 1,
      anon_sym_url,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(941), 1,
      sym_variable_identifier,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(917), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(909), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(728), 10,
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
    ACTIONS(730), 15,
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
  [8220] = 17,
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
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(946), 1,
      sym_default,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8282] = 17,
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
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8344] = 17,
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
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      sym_important,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8406] = 17,
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
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8468] = 17,
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
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(952), 1,
      sym_important,
    STATE(160), 1,
      sym__value,
    STATE(163), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8530] = 15,
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
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
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
    ACTIONS(954), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(700), 10,
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
    ACTIONS(702), 15,
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
  [8624] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    STATE(196), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(956), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(704), 10,
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
    ACTIONS(706), 15,
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
  [8720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(958), 10,
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
    ACTIONS(960), 15,
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
  [8756] = 15,
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
    STATE(241), 1,
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
    ACTIONS(962), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8813] = 15,
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
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
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
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8870] = 15,
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
    STATE(281), 1,
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
    ACTIONS(962), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8927] = 15,
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
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(382), 1,
      sym__value,
    STATE(539), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8983] = 15,
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
    STATE(170), 1,
      aux_sym_apply_statement_repeat1,
    STATE(179), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9039] = 15,
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
    ACTIONS(976), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym__value,
    STATE(222), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9095] = 15,
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
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_apply_statement_repeat1,
    STATE(179), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9151] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9209] = 15,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym__value,
    STATE(514), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9265] = 15,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym__value,
    STATE(510), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9321] = 15,
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
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9377] = 15,
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
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_apply_statement_repeat1,
    STATE(179), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9433] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9491] = 15,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym__value,
    STATE(518), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9547] = 15,
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
    ACTIONS(994), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym__value,
    STATE(180), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9603] = 15,
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
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_apply_statement_repeat1,
    STATE(179), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9659] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9717] = 15,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9773] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9831] = 15,
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
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_apply_statement_repeat1,
    STATE(179), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9887] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9945] = 9,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1014), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1010), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(466), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9988] = 9,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1014), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1010), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(468), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10031] = 14,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(426), 1,
      sym__value,
    STATE(566), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10084] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_null_value,
    ACTIONS(815), 1,
      sym_string_value,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    STATE(205), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [10139] = 14,
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
    STATE(179), 1,
      sym__value,
    STATE(218), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10192] = 14,
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
    STATE(179), 1,
      sym__value,
    STATE(203), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10245] = 14,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym_string_value,
    ACTIONS(1034), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1036), 1,
      aux_sym_float_value_token1,
    ACTIONS(1038), 1,
      anon_sym_url,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(1042), 1,
      sym_variable_identifier,
    STATE(383), 1,
      sym__value,
    STATE(501), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1028), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1030), 2,
      sym_null_value,
      sym_plain_value,
    STATE(411), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10298] = 14,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym_string_value,
    ACTIONS(1034), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1036), 1,
      aux_sym_float_value_token1,
    ACTIONS(1038), 1,
      anon_sym_url,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(1042), 1,
      sym_variable_identifier,
    STATE(383), 1,
      sym__value,
    STATE(560), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1028), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1030), 2,
      sym_null_value,
      sym_plain_value,
    STATE(411), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10351] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(393), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10401] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1044), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1046), 1,
      aux_sym_float_value_token1,
    STATE(356), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10451] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(394), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10501] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1044), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1046), 1,
      aux_sym_float_value_token1,
    STATE(299), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10551] = 13,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_null_value,
      sym_plain_value,
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10601] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10651] = 13,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10701] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(373), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10751] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(445), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10801] = 13,
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
    STATE(162), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10851] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1048), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1050), 1,
      aux_sym_float_value_token1,
    STATE(428), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10901] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(427), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10951] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(438), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11001] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1048), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1050), 1,
      aux_sym_float_value_token1,
    STATE(439), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11051] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(384), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11101] = 13,
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
    STATE(144), 1,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11151] = 13,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(1054), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      sym_string_value,
    ACTIONS(1062), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1064), 1,
      aux_sym_float_value_token1,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      sym_variable_identifier,
    STATE(229), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1056), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1058), 2,
      sym_null_value,
      sym_plain_value,
    STATE(327), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11201] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(442), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11251] = 5,
    ACTIONS(1072), 1,
      anon_sym_LPAREN2,
    STATE(294), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(526), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(524), 16,
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
  [11285] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11335] = 13,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym_string_value,
    ACTIONS(1034), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1036), 1,
      aux_sym_float_value_token1,
    ACTIONS(1038), 1,
      anon_sym_url,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(1074), 1,
      sym_variable_identifier,
    STATE(406), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1028), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1030), 2,
      sym_null_value,
      sym_plain_value,
    STATE(411), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11385] = 13,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11435] = 13,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(1054), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      sym_string_value,
    ACTIONS(1062), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1064), 1,
      aux_sym_float_value_token1,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      sym_variable_identifier,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1056), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1058), 2,
      sym_null_value,
      sym_plain_value,
    STATE(327), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11485] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11535] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(424), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11585] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11635] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(299), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11685] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11735] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(412), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11785] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(425), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11835] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1048), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1050), 1,
      aux_sym_float_value_token1,
    STATE(299), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11885] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11935] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(377), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11985] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(423), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12035] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_single_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(817), 1,
      sym_unquoted_string_value,
    ACTIONS(819), 1,
      aux_sym_integer_value_token1,
    ACTIONS(821), 1,
      aux_sym_float_value_token1,
    ACTIONS(823), 1,
      anon_sym_url,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_variable_identifier,
    ACTIONS(1076), 1,
      sym_null_value,
    ACTIONS(1078), 1,
      sym_string_value,
    ACTIONS(811), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(207), 9,
      sym__value_allowed_in_url_function,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [12087] = 13,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(1054), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      sym_string_value,
    ACTIONS(1062), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1064), 1,
      aux_sym_float_value_token1,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      sym_variable_identifier,
    STATE(230), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1056), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1058), 2,
      sym_null_value,
      sym_plain_value,
    STATE(327), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12137] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(413), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12187] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(396), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12237] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12287] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(376), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12337] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12387] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(375), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12437] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12487] = 13,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym_string_value,
    ACTIONS(1034), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1036), 1,
      aux_sym_float_value_token1,
    ACTIONS(1038), 1,
      anon_sym_url,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(1074), 1,
      sym_variable_identifier,
    STATE(389), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1028), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(1030), 2,
      sym_null_value,
      sym_plain_value,
    STATE(411), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12537] = 13,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12587] = 13,
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
    STATE(150), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12637] = 13,
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
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12687] = 13,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_url,
    ACTIONS(344), 1,
      sym_variable_identifier,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1044), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1046), 1,
      aux_sym_float_value_token1,
    STATE(346), 1,
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
    STATE(303), 8,
      sym_boolean_value,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12737] = 7,
    ACTIONS(1072), 1,
      anon_sym_LPAREN2,
    STATE(294), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(526), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(528), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(524), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12775] = 11,
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
    ACTIONS(1080), 1,
      sym_string_value,
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(350), 11,
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
  [12820] = 11,
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
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(1084), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(404), 11,
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
  [12865] = 11,
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
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(1086), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(435), 11,
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
  [12910] = 11,
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
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(1088), 1,
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
  [12955] = 11,
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
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(1090), 1,
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
  [13000] = 11,
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
    ACTIONS(1082), 1,
      sym_identifier,
    ACTIONS(1092), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(345), 11,
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
  [13045] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(682), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(680), 16,
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
  [13073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(738), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(736), 16,
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
  [13101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(706), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(704), 16,
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
  [13129] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(702), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(700), 16,
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
  [13157] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(732), 16,
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
  [13185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(710), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(708), 16,
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
  [13213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(698), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(696), 16,
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
  [13241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(690), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(688), 16,
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
  [13269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(694), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(692), 16,
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
  [13297] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(666), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(660), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [13329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(726), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(724), 16,
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
  [13357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 16,
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
  [13385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(720), 16,
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
  [13413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(728), 16,
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
  [13441] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(742), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(740), 16,
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
  [13469] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(718), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(716), 16,
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
  [13497] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(686), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(684), 16,
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
  [13525] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(746), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(744), 16,
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
  [13553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(714), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(712), 16,
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
  [13581] = 5,
    ACTIONS(1094), 1,
      anon_sym_LPAREN2,
    STATE(332), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(524), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(526), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13612] = 4,
    ACTIONS(1096), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(668), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(670), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13640] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(728), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13666] = 4,
    ACTIONS(1098), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(674), 13,
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
  [13694] = 4,
    ACTIONS(1100), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(668), 13,
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
  [13722] = 4,
    ACTIONS(1102), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(676), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13750] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(708), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(710), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13775] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(734), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(680), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(682), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(720), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(722), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13850] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(684), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(686), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13875] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(740), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(742), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13900] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(688), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(690), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13925] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(716), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(718), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13950] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(724), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(726), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(712), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(714), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(662), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(666), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(744), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(746), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14050] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(696), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(698), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14075] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(736), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(738), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14100] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(700), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(702), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14125] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(704), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(706), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14150] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(692), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(694), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [14175] = 5,
    ACTIONS(1106), 1,
      anon_sym_COLON,
    ACTIONS(1108), 1,
      anon_sym_LPAREN2,
    STATE(367), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1104), 12,
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
  [14203] = 5,
    ACTIONS(1108), 1,
      anon_sym_LPAREN2,
    ACTIONS(1112), 1,
      anon_sym_COLON,
    STATE(369), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1110), 12,
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
  [14231] = 4,
    ACTIONS(1114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(660), 11,
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
  [14256] = 3,
    ACTIONS(1118), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1116), 13,
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
  [14279] = 4,
    ACTIONS(1120), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(674), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14304] = 4,
    ACTIONS(1122), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(668), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14329] = 9,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(454), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [14364] = 3,
    ACTIONS(1130), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1128), 13,
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
  [14387] = 9,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(453), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [14422] = 5,
    ACTIONS(1136), 1,
      anon_sym_LPAREN2,
    STATE(386), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(526), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(524), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14449] = 3,
    ACTIONS(1140), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1138), 12,
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
  [14471] = 4,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1142), 10,
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
  [14495] = 6,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    ACTIONS(1150), 1,
      anon_sym_with,
    ACTIONS(1152), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1156), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1154), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14523] = 3,
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
  [14545] = 3,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 12,
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
  [14567] = 3,
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
  [14589] = 4,
    ACTIONS(1168), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1166), 10,
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
  [14613] = 13,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_LBRACE,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    STATE(516), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [14655] = 3,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1190), 12,
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
  [14677] = 3,
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
  [14699] = 3,
    ACTIONS(1200), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1198), 12,
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
  [14721] = 4,
    ACTIONS(1204), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1202), 10,
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
  [14745] = 6,
    ACTIONS(1206), 1,
      anon_sym_SEMI,
    ACTIONS(1208), 1,
      anon_sym_with,
    ACTIONS(1210), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1156), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1154), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14773] = 3,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1212), 12,
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
  [14795] = 4,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1216), 10,
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
  [14819] = 3,
    ACTIONS(1222), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1220), 12,
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
  [14841] = 3,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1224), 12,
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
  [14863] = 3,
    ACTIONS(1230), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 12,
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
  [14885] = 3,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1232), 12,
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
  [14907] = 3,
    ACTIONS(1238), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1236), 12,
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
  [14929] = 4,
    ACTIONS(1240), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(674), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14953] = 4,
    ACTIONS(1242), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(668), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14977] = 3,
    ACTIONS(1246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1244), 12,
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
  [14999] = 3,
    ACTIONS(1250), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1248), 12,
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
  [15021] = 3,
    ACTIONS(1254), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1252), 12,
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
  [15043] = 3,
    ACTIONS(1258), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1256), 12,
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
  [15065] = 4,
    ACTIONS(1260), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(732), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15089] = 13,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [15131] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(710), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(708), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15152] = 5,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15177] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(686), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(684), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15198] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15223] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15248] = 5,
    ACTIONS(1270), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15273] = 3,
    ACTIONS(1272), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 11,
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
  [15294] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15317] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(746), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(744), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15363] = 5,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15388] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1285), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1283), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15411] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15436] = 3,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 11,
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
  [15457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(706), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(704), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15478] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(702), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(700), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15499] = 5,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15524] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1292), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1285), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1283), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(742), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(740), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(728), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15589] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(698), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(696), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15610] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15633] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15658] = 11,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15695] = 5,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15720] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(694), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(692), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15741] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15764] = 5,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15789] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(682), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(680), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15810] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(714), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(712), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15831] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(718), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(716), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15877] = 11,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1302), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [15914] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(720), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15935] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(690), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(688), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(726), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(724), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15977] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(738), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(736), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15998] = 4,
    ACTIONS(1122), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(668), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16021] = 5,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16067] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16092] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16117] = 4,
    ACTIONS(1120), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(676), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(674), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16140] = 5,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16165] = 5,
    ACTIONS(1270), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16190] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1308), 2,
      anon_sym_LPAREN,
      sym_string_value,
    ACTIONS(1310), 10,
      anon_sym_POUND,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [16236] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(732), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16257] = 3,
    ACTIONS(1312), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(522), 11,
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
  [16278] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(467), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16304] = 4,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16326] = 4,
    ACTIONS(1316), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16348] = 4,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16370] = 4,
    ACTIONS(1320), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16392] = 4,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16414] = 4,
    ACTIONS(1322), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16436] = 4,
    ACTIONS(1326), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1328), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1324), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16458] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(458), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16484] = 4,
    ACTIONS(1330), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16506] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(460), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16532] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(481), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16558] = 4,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16580] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(503), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16606] = 11,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [16642] = 4,
    ACTIONS(1338), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16664] = 4,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(660), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [16686] = 4,
    ACTIONS(1340), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16708] = 4,
    ACTIONS(1342), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1328), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1324), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16730] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(464), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16756] = 4,
    ACTIONS(1344), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16778] = 4,
    ACTIONS(1346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16800] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(498), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16826] = 6,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 1,
      anon_sym_selector,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1016), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(462), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [16852] = 4,
    ACTIONS(1348), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1268), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1266), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16874] = 10,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1178), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      anon_sym_GT,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    ACTIONS(1186), 1,
      anon_sym_PLUS,
    ACTIONS(1188), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1146), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [16907] = 7,
    ACTIONS(1350), 1,
      anon_sym_RBRACE,
    ACTIONS(1352), 1,
      anon_sym_from,
    ACTIONS(1355), 1,
      sym_to,
    ACTIONS(1358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(447), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(542), 2,
      sym_from,
      sym_integer_value,
  [16932] = 7,
    ACTIONS(1361), 1,
      anon_sym_RBRACE,
    ACTIONS(1363), 1,
      anon_sym_from,
    ACTIONS(1365), 1,
      sym_to,
    ACTIONS(1367), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(450), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(542), 2,
      sym_from,
      sym_integer_value,
  [16957] = 7,
    ACTIONS(1363), 1,
      anon_sym_from,
    ACTIONS(1365), 1,
      sym_to,
    ACTIONS(1367), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1369), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(447), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(542), 2,
      sym_from,
      sym_integer_value,
  [16982] = 7,
    ACTIONS(1363), 1,
      anon_sym_from,
    ACTIONS(1365), 1,
      sym_to,
    ACTIONS(1367), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1371), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(447), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(542), 2,
      sym_from,
      sym_integer_value,
  [17007] = 7,
    ACTIONS(1363), 1,
      anon_sym_from,
    ACTIONS(1365), 1,
      sym_to,
    ACTIONS(1367), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1373), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(449), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(542), 2,
      sym_from,
      sym_integer_value,
  [17032] = 3,
    ACTIONS(1377), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1375), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [17048] = 7,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_block,
    STATE(472), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17072] = 7,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_block,
    STATE(469), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17096] = 3,
    ACTIONS(1389), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1387), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [17112] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1391), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17125] = 7,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1094), 1,
      anon_sym_LPAREN2,
    ACTIONS(1393), 1,
      sym_string_value,
    ACTIONS(1395), 1,
      sym_identifier,
    STATE(332), 1,
      sym_arguments,
    STATE(638), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17148] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1397), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17161] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1399), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1401), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1403), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17200] = 6,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_block,
    STATE(491), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17221] = 7,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1094), 1,
      anon_sym_LPAREN2,
    ACTIONS(1395), 1,
      sym_identifier,
    ACTIONS(1405), 1,
      sym_string_value,
    STATE(332), 1,
      sym_arguments,
    STATE(582), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17244] = 6,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_block,
    STATE(479), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17265] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1407), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17278] = 5,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_SEMI,
    STATE(528), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1411), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17310] = 5,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_SEMI,
    STATE(529), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17328] = 6,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_block,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17348] = 6,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1417), 1,
      anon_sym_SEMI,
    ACTIONS(1419), 1,
      anon_sym_LPAREN2,
    STATE(46), 1,
      sym_block,
    STATE(513), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17368] = 6,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1419), 1,
      anon_sym_LPAREN2,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym_block,
    STATE(535), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17388] = 6,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17408] = 4,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17423] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17434] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_block,
    STATE(572), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17451] = 4,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(446), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17477] = 5,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1431), 1,
      sym_string_value,
    ACTIONS(1433), 1,
      sym_identifier,
    STATE(586), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17494] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_block,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17511] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_block,
    STATE(554), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17528] = 4,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17543] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17554] = 3,
    ACTIONS(1435), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1403), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17567] = 4,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17582] = 4,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17597] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1441), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [17608] = 4,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1443), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17623] = 4,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1446), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17638] = 5,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_block,
    STATE(555), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17655] = 4,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1411), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17670] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17687] = 4,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17702] = 5,
    ACTIONS(1066), 1,
      anon_sym_url,
    ACTIONS(1454), 1,
      sym_string_value,
    ACTIONS(1456), 1,
      sym_identifier,
    STATE(596), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17719] = 4,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17734] = 4,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17749] = 4,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17764] = 4,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17779] = 4,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17794] = 4,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [17809] = 5,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_block,
    STATE(567), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17826] = 4,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN2,
    STATE(520), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17840] = 3,
    STATE(601), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [17852] = 3,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1383), 2,
      anon_sym_and,
      anon_sym_or,
  [17864] = 4,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    ACTIONS(1478), 1,
      sym_variable_identifier,
    STATE(550), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17878] = 4,
    ACTIONS(1480), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17892] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17906] = 3,
    STATE(651), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [17918] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17932] = 3,
    STATE(649), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [17944] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17958] = 4,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17972] = 4,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17986] = 4,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1501), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18000] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18014] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18028] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_LBRACE,
    STATE(526), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18042] = 4,
    ACTIONS(1509), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18056] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18070] = 4,
    ACTIONS(1478), 1,
      sym_variable_identifier,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18084] = 4,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN2,
    STATE(527), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18098] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18112] = 4,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18126] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18140] = 4,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18154] = 4,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18168] = 4,
    ACTIONS(1302), 1,
      anon_sym_LBRACE,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18182] = 4,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    ACTIONS(1535), 1,
      anon_sym_RPAREN2,
    STATE(527), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18196] = 4,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18210] = 4,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18224] = 3,
    ACTIONS(1543), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18236] = 4,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18250] = 3,
    STATE(604), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [18262] = 4,
    ACTIONS(1547), 1,
      anon_sym_COMMA,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18276] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1552), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18290] = 4,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1554), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18304] = 4,
    ACTIONS(1556), 1,
      anon_sym_COMMA,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18318] = 4,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    ACTIONS(1560), 1,
      anon_sym_if,
    STATE(124), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18332] = 4,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    ACTIONS(1562), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18346] = 4,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18360] = 3,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18371] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1566), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18380] = 3,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(486), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18391] = 3,
    ACTIONS(1478), 1,
      sym_variable_identifier,
    STATE(536), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18402] = 3,
    ACTIONS(1570), 1,
      anon_sym_SEMI,
    ACTIONS(1572), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18413] = 3,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18424] = 3,
    ACTIONS(1574), 1,
      anon_sym_COMMA,
    ACTIONS(1576), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18435] = 3,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    ACTIONS(1580), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1582), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18455] = 3,
    ACTIONS(1584), 1,
      aux_sym_color_value_token1,
    ACTIONS(1586), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1483), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18475] = 3,
    ACTIONS(1094), 1,
      anon_sym_LPAREN2,
    STATE(332), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18486] = 3,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
    STATE(544), 1,
      sym_use_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18497] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1590), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18506] = 3,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18517] = 3,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18528] = 3,
    ACTIONS(1592), 1,
      anon_sym_SEMI,
    ACTIONS(1594), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18539] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1596), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18548] = 3,
    ACTIONS(1478), 1,
      sym_variable_identifier,
    STATE(550), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18559] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1598), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [18568] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1535), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [18577] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(1600), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18588] = 3,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18599] = 3,
    ACTIONS(1586), 1,
      sym_identifier,
    ACTIONS(1602), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18610] = 3,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
    STATE(547), 1,
      sym_use_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18621] = 3,
    ACTIONS(1604), 1,
      sym_variable_identifier,
    STATE(531), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18641] = 3,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18652] = 3,
    ACTIONS(1606), 1,
      anon_sym_LPAREN2,
    STATE(332), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18663] = 3,
    ACTIONS(1608), 1,
      anon_sym_LPAREN2,
    STATE(386), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1496), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18683] = 3,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18694] = 3,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18705] = 3,
    ACTIONS(1610), 1,
      anon_sym_LPAREN2,
    STATE(206), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18716] = 3,
    ACTIONS(1612), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18727] = 3,
    ACTIONS(1614), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18738] = 3,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1618), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18749] = 3,
    ACTIONS(1620), 1,
      anon_sym_LPAREN2,
    STATE(294), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18760] = 3,
    ACTIONS(1622), 1,
      anon_sym_LPAREN2,
    STATE(148), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18771] = 3,
    ACTIONS(1604), 1,
      sym_variable_identifier,
    STATE(570), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18782] = 2,
    ACTIONS(1592), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18790] = 2,
    ACTIONS(1624), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18798] = 2,
    ACTIONS(1626), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18806] = 2,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18814] = 2,
    ACTIONS(1630), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18822] = 2,
    ACTIONS(1632), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18830] = 2,
    ACTIONS(1634), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18838] = 2,
    ACTIONS(1636), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18846] = 2,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18854] = 2,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18862] = 2,
    ACTIONS(1638), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18870] = 2,
    ACTIONS(1640), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18878] = 2,
    ACTIONS(1642), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18886] = 2,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18894] = 2,
    ACTIONS(1644), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18902] = 2,
    ACTIONS(1646), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18910] = 2,
    ACTIONS(1648), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18918] = 2,
    ACTIONS(1650), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18926] = 2,
    ACTIONS(1562), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18934] = 2,
    ACTIONS(1652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18942] = 2,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18950] = 2,
    ACTIONS(1654), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18958] = 2,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18966] = 2,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18974] = 2,
    ACTIONS(1660), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18982] = 2,
    ACTIONS(1662), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18990] = 2,
    ACTIONS(1664), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18998] = 2,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19006] = 2,
    ACTIONS(1666), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19014] = 2,
    ACTIONS(1668), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19022] = 2,
    ACTIONS(1670), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19030] = 2,
    ACTIONS(1672), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19038] = 2,
    ACTIONS(1674), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19046] = 2,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19054] = 2,
    ACTIONS(1676), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19062] = 2,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19070] = 2,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19078] = 2,
    ACTIONS(1678), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19086] = 2,
    ACTIONS(1680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19094] = 2,
    ACTIONS(1682), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19102] = 2,
    ACTIONS(1684), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19110] = 2,
    ACTIONS(1686), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19118] = 2,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19126] = 2,
    ACTIONS(1688), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19134] = 2,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19142] = 2,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19150] = 2,
    ACTIONS(1690), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19158] = 2,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19166] = 2,
    ACTIONS(1692), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19174] = 2,
    ACTIONS(1694), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19182] = 2,
    ACTIONS(1696), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19190] = 2,
    ACTIONS(1698), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19198] = 2,
    ACTIONS(1700), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19206] = 2,
    ACTIONS(1702), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19214] = 2,
    ACTIONS(1704), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19222] = 2,
    ACTIONS(1114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19230] = 2,
    ACTIONS(1706), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19238] = 2,
    ACTIONS(1708), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19246] = 2,
    ACTIONS(1710), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19254] = 2,
    ACTIONS(1712), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19262] = 2,
    ACTIONS(1714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19270] = 2,
    ACTIONS(1716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19278] = 2,
    ACTIONS(1718), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19286] = 2,
    ACTIONS(1720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19294] = 2,
    ACTIONS(1560), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19302] = 2,
    ACTIONS(1722), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19310] = 2,
    ACTIONS(1724), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19318] = 2,
    ACTIONS(1726), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19326] = 2,
    ACTIONS(1728), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19334] = 2,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19342] = 2,
    ACTIONS(1730), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19350] = 2,
    ACTIONS(1570), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19358] = 2,
    ACTIONS(1732), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19366] = 2,
    ACTIONS(1734), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19374] = 2,
    ACTIONS(1736), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19382] = 2,
    ACTIONS(1738), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [19390] = 2,
    ACTIONS(1740), 1,
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
  [SMALL_STATE(22)] = 464,
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
  [SMALL_STATE(34)] = 1227,
  [SMALL_STATE(35)] = 1270,
  [SMALL_STATE(36)] = 1313,
  [SMALL_STATE(37)] = 1355,
  [SMALL_STATE(38)] = 1397,
  [SMALL_STATE(39)] = 1439,
  [SMALL_STATE(40)] = 1481,
  [SMALL_STATE(41)] = 1523,
  [SMALL_STATE(42)] = 1565,
  [SMALL_STATE(43)] = 1607,
  [SMALL_STATE(44)] = 1649,
  [SMALL_STATE(45)] = 1691,
  [SMALL_STATE(46)] = 1733,
  [SMALL_STATE(47)] = 1775,
  [SMALL_STATE(48)] = 1817,
  [SMALL_STATE(49)] = 1859,
  [SMALL_STATE(50)] = 1901,
  [SMALL_STATE(51)] = 1943,
  [SMALL_STATE(52)] = 1985,
  [SMALL_STATE(53)] = 2027,
  [SMALL_STATE(54)] = 2069,
  [SMALL_STATE(55)] = 2111,
  [SMALL_STATE(56)] = 2153,
  [SMALL_STATE(57)] = 2195,
  [SMALL_STATE(58)] = 2245,
  [SMALL_STATE(59)] = 2287,
  [SMALL_STATE(60)] = 2329,
  [SMALL_STATE(61)] = 2371,
  [SMALL_STATE(62)] = 2413,
  [SMALL_STATE(63)] = 2455,
  [SMALL_STATE(64)] = 2497,
  [SMALL_STATE(65)] = 2539,
  [SMALL_STATE(66)] = 2581,
  [SMALL_STATE(67)] = 2623,
  [SMALL_STATE(68)] = 2665,
  [SMALL_STATE(69)] = 2707,
  [SMALL_STATE(70)] = 2749,
  [SMALL_STATE(71)] = 2791,
  [SMALL_STATE(72)] = 2833,
  [SMALL_STATE(73)] = 2875,
  [SMALL_STATE(74)] = 2917,
  [SMALL_STATE(75)] = 2959,
  [SMALL_STATE(76)] = 3001,
  [SMALL_STATE(77)] = 3043,
  [SMALL_STATE(78)] = 3085,
  [SMALL_STATE(79)] = 3127,
  [SMALL_STATE(80)] = 3169,
  [SMALL_STATE(81)] = 3211,
  [SMALL_STATE(82)] = 3253,
  [SMALL_STATE(83)] = 3295,
  [SMALL_STATE(84)] = 3337,
  [SMALL_STATE(85)] = 3379,
  [SMALL_STATE(86)] = 3421,
  [SMALL_STATE(87)] = 3463,
  [SMALL_STATE(88)] = 3505,
  [SMALL_STATE(89)] = 3547,
  [SMALL_STATE(90)] = 3589,
  [SMALL_STATE(91)] = 3631,
  [SMALL_STATE(92)] = 3673,
  [SMALL_STATE(93)] = 3715,
  [SMALL_STATE(94)] = 3756,
  [SMALL_STATE(95)] = 3797,
  [SMALL_STATE(96)] = 3838,
  [SMALL_STATE(97)] = 3879,
  [SMALL_STATE(98)] = 3920,
  [SMALL_STATE(99)] = 3961,
  [SMALL_STATE(100)] = 4002,
  [SMALL_STATE(101)] = 4043,
  [SMALL_STATE(102)] = 4084,
  [SMALL_STATE(103)] = 4125,
  [SMALL_STATE(104)] = 4166,
  [SMALL_STATE(105)] = 4207,
  [SMALL_STATE(106)] = 4248,
  [SMALL_STATE(107)] = 4289,
  [SMALL_STATE(108)] = 4330,
  [SMALL_STATE(109)] = 4371,
  [SMALL_STATE(110)] = 4412,
  [SMALL_STATE(111)] = 4453,
  [SMALL_STATE(112)] = 4494,
  [SMALL_STATE(113)] = 4535,
  [SMALL_STATE(114)] = 4576,
  [SMALL_STATE(115)] = 4617,
  [SMALL_STATE(116)] = 4658,
  [SMALL_STATE(117)] = 4699,
  [SMALL_STATE(118)] = 4740,
  [SMALL_STATE(119)] = 4781,
  [SMALL_STATE(120)] = 4822,
  [SMALL_STATE(121)] = 4863,
  [SMALL_STATE(122)] = 4904,
  [SMALL_STATE(123)] = 4945,
  [SMALL_STATE(124)] = 4986,
  [SMALL_STATE(125)] = 5027,
  [SMALL_STATE(126)] = 5068,
  [SMALL_STATE(127)] = 5109,
  [SMALL_STATE(128)] = 5150,
  [SMALL_STATE(129)] = 5191,
  [SMALL_STATE(130)] = 5232,
  [SMALL_STATE(131)] = 5273,
  [SMALL_STATE(132)] = 5314,
  [SMALL_STATE(133)] = 5355,
  [SMALL_STATE(134)] = 5396,
  [SMALL_STATE(135)] = 5437,
  [SMALL_STATE(136)] = 5478,
  [SMALL_STATE(137)] = 5519,
  [SMALL_STATE(138)] = 5560,
  [SMALL_STATE(139)] = 5604,
  [SMALL_STATE(140)] = 5647,
  [SMALL_STATE(141)] = 5687,
  [SMALL_STATE(142)] = 5727,
  [SMALL_STATE(143)] = 5764,
  [SMALL_STATE(144)] = 5801,
  [SMALL_STATE(145)] = 5838,
  [SMALL_STATE(146)] = 5875,
  [SMALL_STATE(147)] = 5912,
  [SMALL_STATE(148)] = 5949,
  [SMALL_STATE(149)] = 5986,
  [SMALL_STATE(150)] = 6023,
  [SMALL_STATE(151)] = 6060,
  [SMALL_STATE(152)] = 6097,
  [SMALL_STATE(153)] = 6134,
  [SMALL_STATE(154)] = 6171,
  [SMALL_STATE(155)] = 6208,
  [SMALL_STATE(156)] = 6245,
  [SMALL_STATE(157)] = 6282,
  [SMALL_STATE(158)] = 6319,
  [SMALL_STATE(159)] = 6356,
  [SMALL_STATE(160)] = 6393,
  [SMALL_STATE(161)] = 6433,
  [SMALL_STATE(162)] = 6475,
  [SMALL_STATE(163)] = 6515,
  [SMALL_STATE(164)] = 6577,
  [SMALL_STATE(165)] = 6642,
  [SMALL_STATE(166)] = 6707,
  [SMALL_STATE(167)] = 6770,
  [SMALL_STATE(168)] = 6809,
  [SMALL_STATE(169)] = 6874,
  [SMALL_STATE(170)] = 6913,
  [SMALL_STATE(171)] = 6976,
  [SMALL_STATE(172)] = 7039,
  [SMALL_STATE(173)] = 7104,
  [SMALL_STATE(174)] = 7167,
  [SMALL_STATE(175)] = 7232,
  [SMALL_STATE(176)] = 7295,
  [SMALL_STATE(177)] = 7360,
  [SMALL_STATE(178)] = 7396,
  [SMALL_STATE(179)] = 7436,
  [SMALL_STATE(180)] = 7474,
  [SMALL_STATE(181)] = 7532,
  [SMALL_STATE(182)] = 7568,
  [SMALL_STATE(183)] = 7630,
  [SMALL_STATE(184)] = 7666,
  [SMALL_STATE(185)] = 7702,
  [SMALL_STATE(186)] = 7738,
  [SMALL_STATE(187)] = 7800,
  [SMALL_STATE(188)] = 7836,
  [SMALL_STATE(189)] = 7872,
  [SMALL_STATE(190)] = 7908,
  [SMALL_STATE(191)] = 7944,
  [SMALL_STATE(192)] = 7980,
  [SMALL_STATE(193)] = 8016,
  [SMALL_STATE(194)] = 8052,
  [SMALL_STATE(195)] = 8088,
  [SMALL_STATE(196)] = 8124,
  [SMALL_STATE(197)] = 8184,
  [SMALL_STATE(198)] = 8220,
  [SMALL_STATE(199)] = 8282,
  [SMALL_STATE(200)] = 8344,
  [SMALL_STATE(201)] = 8406,
  [SMALL_STATE(202)] = 8468,
  [SMALL_STATE(203)] = 8530,
  [SMALL_STATE(204)] = 8588,
  [SMALL_STATE(205)] = 8624,
  [SMALL_STATE(206)] = 8684,
  [SMALL_STATE(207)] = 8720,
  [SMALL_STATE(208)] = 8756,
  [SMALL_STATE(209)] = 8813,
  [SMALL_STATE(210)] = 8870,
  [SMALL_STATE(211)] = 8927,
  [SMALL_STATE(212)] = 8983,
  [SMALL_STATE(213)] = 9039,
  [SMALL_STATE(214)] = 9095,
  [SMALL_STATE(215)] = 9151,
  [SMALL_STATE(216)] = 9209,
  [SMALL_STATE(217)] = 9265,
  [SMALL_STATE(218)] = 9321,
  [SMALL_STATE(219)] = 9377,
  [SMALL_STATE(220)] = 9433,
  [SMALL_STATE(221)] = 9491,
  [SMALL_STATE(222)] = 9547,
  [SMALL_STATE(223)] = 9603,
  [SMALL_STATE(224)] = 9659,
  [SMALL_STATE(225)] = 9717,
  [SMALL_STATE(226)] = 9773,
  [SMALL_STATE(227)] = 9831,
  [SMALL_STATE(228)] = 9887,
  [SMALL_STATE(229)] = 9945,
  [SMALL_STATE(230)] = 9988,
  [SMALL_STATE(231)] = 10031,
  [SMALL_STATE(232)] = 10084,
  [SMALL_STATE(233)] = 10139,
  [SMALL_STATE(234)] = 10192,
  [SMALL_STATE(235)] = 10245,
  [SMALL_STATE(236)] = 10298,
  [SMALL_STATE(237)] = 10351,
  [SMALL_STATE(238)] = 10401,
  [SMALL_STATE(239)] = 10451,
  [SMALL_STATE(240)] = 10501,
  [SMALL_STATE(241)] = 10551,
  [SMALL_STATE(242)] = 10601,
  [SMALL_STATE(243)] = 10651,
  [SMALL_STATE(244)] = 10701,
  [SMALL_STATE(245)] = 10751,
  [SMALL_STATE(246)] = 10801,
  [SMALL_STATE(247)] = 10851,
  [SMALL_STATE(248)] = 10901,
  [SMALL_STATE(249)] = 10951,
  [SMALL_STATE(250)] = 11001,
  [SMALL_STATE(251)] = 11051,
  [SMALL_STATE(252)] = 11101,
  [SMALL_STATE(253)] = 11151,
  [SMALL_STATE(254)] = 11201,
  [SMALL_STATE(255)] = 11251,
  [SMALL_STATE(256)] = 11285,
  [SMALL_STATE(257)] = 11335,
  [SMALL_STATE(258)] = 11385,
  [SMALL_STATE(259)] = 11435,
  [SMALL_STATE(260)] = 11485,
  [SMALL_STATE(261)] = 11535,
  [SMALL_STATE(262)] = 11585,
  [SMALL_STATE(263)] = 11635,
  [SMALL_STATE(264)] = 11685,
  [SMALL_STATE(265)] = 11735,
  [SMALL_STATE(266)] = 11785,
  [SMALL_STATE(267)] = 11835,
  [SMALL_STATE(268)] = 11885,
  [SMALL_STATE(269)] = 11935,
  [SMALL_STATE(270)] = 11985,
  [SMALL_STATE(271)] = 12035,
  [SMALL_STATE(272)] = 12087,
  [SMALL_STATE(273)] = 12137,
  [SMALL_STATE(274)] = 12187,
  [SMALL_STATE(275)] = 12237,
  [SMALL_STATE(276)] = 12287,
  [SMALL_STATE(277)] = 12337,
  [SMALL_STATE(278)] = 12387,
  [SMALL_STATE(279)] = 12437,
  [SMALL_STATE(280)] = 12487,
  [SMALL_STATE(281)] = 12537,
  [SMALL_STATE(282)] = 12587,
  [SMALL_STATE(283)] = 12637,
  [SMALL_STATE(284)] = 12687,
  [SMALL_STATE(285)] = 12737,
  [SMALL_STATE(286)] = 12775,
  [SMALL_STATE(287)] = 12820,
  [SMALL_STATE(288)] = 12865,
  [SMALL_STATE(289)] = 12910,
  [SMALL_STATE(290)] = 12955,
  [SMALL_STATE(291)] = 13000,
  [SMALL_STATE(292)] = 13045,
  [SMALL_STATE(293)] = 13073,
  [SMALL_STATE(294)] = 13101,
  [SMALL_STATE(295)] = 13129,
  [SMALL_STATE(296)] = 13157,
  [SMALL_STATE(297)] = 13185,
  [SMALL_STATE(298)] = 13213,
  [SMALL_STATE(299)] = 13241,
  [SMALL_STATE(300)] = 13269,
  [SMALL_STATE(301)] = 13297,
  [SMALL_STATE(302)] = 13329,
  [SMALL_STATE(303)] = 13357,
  [SMALL_STATE(304)] = 13385,
  [SMALL_STATE(305)] = 13413,
  [SMALL_STATE(306)] = 13441,
  [SMALL_STATE(307)] = 13469,
  [SMALL_STATE(308)] = 13497,
  [SMALL_STATE(309)] = 13525,
  [SMALL_STATE(310)] = 13553,
  [SMALL_STATE(311)] = 13581,
  [SMALL_STATE(312)] = 13612,
  [SMALL_STATE(313)] = 13640,
  [SMALL_STATE(314)] = 13666,
  [SMALL_STATE(315)] = 13694,
  [SMALL_STATE(316)] = 13722,
  [SMALL_STATE(317)] = 13750,
  [SMALL_STATE(318)] = 13775,
  [SMALL_STATE(319)] = 13800,
  [SMALL_STATE(320)] = 13825,
  [SMALL_STATE(321)] = 13850,
  [SMALL_STATE(322)] = 13875,
  [SMALL_STATE(323)] = 13900,
  [SMALL_STATE(324)] = 13925,
  [SMALL_STATE(325)] = 13950,
  [SMALL_STATE(326)] = 13975,
  [SMALL_STATE(327)] = 14000,
  [SMALL_STATE(328)] = 14025,
  [SMALL_STATE(329)] = 14050,
  [SMALL_STATE(330)] = 14075,
  [SMALL_STATE(331)] = 14100,
  [SMALL_STATE(332)] = 14125,
  [SMALL_STATE(333)] = 14150,
  [SMALL_STATE(334)] = 14175,
  [SMALL_STATE(335)] = 14203,
  [SMALL_STATE(336)] = 14231,
  [SMALL_STATE(337)] = 14256,
  [SMALL_STATE(338)] = 14279,
  [SMALL_STATE(339)] = 14304,
  [SMALL_STATE(340)] = 14329,
  [SMALL_STATE(341)] = 14364,
  [SMALL_STATE(342)] = 14387,
  [SMALL_STATE(343)] = 14422,
  [SMALL_STATE(344)] = 14449,
  [SMALL_STATE(345)] = 14471,
  [SMALL_STATE(346)] = 14495,
  [SMALL_STATE(347)] = 14523,
  [SMALL_STATE(348)] = 14545,
  [SMALL_STATE(349)] = 14567,
  [SMALL_STATE(350)] = 14589,
  [SMALL_STATE(351)] = 14613,
  [SMALL_STATE(352)] = 14655,
  [SMALL_STATE(353)] = 14677,
  [SMALL_STATE(354)] = 14699,
  [SMALL_STATE(355)] = 14721,
  [SMALL_STATE(356)] = 14745,
  [SMALL_STATE(357)] = 14773,
  [SMALL_STATE(358)] = 14795,
  [SMALL_STATE(359)] = 14819,
  [SMALL_STATE(360)] = 14841,
  [SMALL_STATE(361)] = 14863,
  [SMALL_STATE(362)] = 14885,
  [SMALL_STATE(363)] = 14907,
  [SMALL_STATE(364)] = 14929,
  [SMALL_STATE(365)] = 14953,
  [SMALL_STATE(366)] = 14977,
  [SMALL_STATE(367)] = 14999,
  [SMALL_STATE(368)] = 15021,
  [SMALL_STATE(369)] = 15043,
  [SMALL_STATE(370)] = 15065,
  [SMALL_STATE(371)] = 15089,
  [SMALL_STATE(372)] = 15131,
  [SMALL_STATE(373)] = 15152,
  [SMALL_STATE(374)] = 15177,
  [SMALL_STATE(375)] = 15198,
  [SMALL_STATE(376)] = 15223,
  [SMALL_STATE(377)] = 15248,
  [SMALL_STATE(378)] = 15273,
  [SMALL_STATE(379)] = 15294,
  [SMALL_STATE(380)] = 15317,
  [SMALL_STATE(381)] = 15342,
  [SMALL_STATE(382)] = 15363,
  [SMALL_STATE(383)] = 15388,
  [SMALL_STATE(384)] = 15411,
  [SMALL_STATE(385)] = 15436,
  [SMALL_STATE(386)] = 15457,
  [SMALL_STATE(387)] = 15478,
  [SMALL_STATE(388)] = 15499,
  [SMALL_STATE(389)] = 15524,
  [SMALL_STATE(390)] = 15547,
  [SMALL_STATE(391)] = 15568,
  [SMALL_STATE(392)] = 15589,
  [SMALL_STATE(393)] = 15610,
  [SMALL_STATE(394)] = 15633,
  [SMALL_STATE(395)] = 15658,
  [SMALL_STATE(396)] = 15695,
  [SMALL_STATE(397)] = 15720,
  [SMALL_STATE(398)] = 15741,
  [SMALL_STATE(399)] = 15764,
  [SMALL_STATE(400)] = 15789,
  [SMALL_STATE(401)] = 15810,
  [SMALL_STATE(402)] = 15831,
  [SMALL_STATE(403)] = 15856,
  [SMALL_STATE(404)] = 15877,
  [SMALL_STATE(405)] = 15914,
  [SMALL_STATE(406)] = 15935,
  [SMALL_STATE(407)] = 15956,
  [SMALL_STATE(408)] = 15977,
  [SMALL_STATE(409)] = 15998,
  [SMALL_STATE(410)] = 16021,
  [SMALL_STATE(411)] = 16046,
  [SMALL_STATE(412)] = 16067,
  [SMALL_STATE(413)] = 16092,
  [SMALL_STATE(414)] = 16117,
  [SMALL_STATE(415)] = 16140,
  [SMALL_STATE(416)] = 16165,
  [SMALL_STATE(417)] = 16190,
  [SMALL_STATE(418)] = 16215,
  [SMALL_STATE(419)] = 16236,
  [SMALL_STATE(420)] = 16257,
  [SMALL_STATE(421)] = 16278,
  [SMALL_STATE(422)] = 16304,
  [SMALL_STATE(423)] = 16326,
  [SMALL_STATE(424)] = 16348,
  [SMALL_STATE(425)] = 16370,
  [SMALL_STATE(426)] = 16392,
  [SMALL_STATE(427)] = 16414,
  [SMALL_STATE(428)] = 16436,
  [SMALL_STATE(429)] = 16458,
  [SMALL_STATE(430)] = 16484,
  [SMALL_STATE(431)] = 16506,
  [SMALL_STATE(432)] = 16532,
  [SMALL_STATE(433)] = 16558,
  [SMALL_STATE(434)] = 16580,
  [SMALL_STATE(435)] = 16606,
  [SMALL_STATE(436)] = 16642,
  [SMALL_STATE(437)] = 16664,
  [SMALL_STATE(438)] = 16686,
  [SMALL_STATE(439)] = 16708,
  [SMALL_STATE(440)] = 16730,
  [SMALL_STATE(441)] = 16756,
  [SMALL_STATE(442)] = 16778,
  [SMALL_STATE(443)] = 16800,
  [SMALL_STATE(444)] = 16826,
  [SMALL_STATE(445)] = 16852,
  [SMALL_STATE(446)] = 16874,
  [SMALL_STATE(447)] = 16907,
  [SMALL_STATE(448)] = 16932,
  [SMALL_STATE(449)] = 16957,
  [SMALL_STATE(450)] = 16982,
  [SMALL_STATE(451)] = 17007,
  [SMALL_STATE(452)] = 17032,
  [SMALL_STATE(453)] = 17048,
  [SMALL_STATE(454)] = 17072,
  [SMALL_STATE(455)] = 17096,
  [SMALL_STATE(456)] = 17112,
  [SMALL_STATE(457)] = 17125,
  [SMALL_STATE(458)] = 17148,
  [SMALL_STATE(459)] = 17161,
  [SMALL_STATE(460)] = 17174,
  [SMALL_STATE(461)] = 17187,
  [SMALL_STATE(462)] = 17200,
  [SMALL_STATE(463)] = 17221,
  [SMALL_STATE(464)] = 17244,
  [SMALL_STATE(465)] = 17265,
  [SMALL_STATE(466)] = 17278,
  [SMALL_STATE(467)] = 17296,
  [SMALL_STATE(468)] = 17310,
  [SMALL_STATE(469)] = 17328,
  [SMALL_STATE(470)] = 17348,
  [SMALL_STATE(471)] = 17368,
  [SMALL_STATE(472)] = 17388,
  [SMALL_STATE(473)] = 17408,
  [SMALL_STATE(474)] = 17423,
  [SMALL_STATE(475)] = 17434,
  [SMALL_STATE(476)] = 17451,
  [SMALL_STATE(477)] = 17466,
  [SMALL_STATE(478)] = 17477,
  [SMALL_STATE(479)] = 17494,
  [SMALL_STATE(480)] = 17511,
  [SMALL_STATE(481)] = 17528,
  [SMALL_STATE(482)] = 17543,
  [SMALL_STATE(483)] = 17554,
  [SMALL_STATE(484)] = 17567,
  [SMALL_STATE(485)] = 17582,
  [SMALL_STATE(486)] = 17597,
  [SMALL_STATE(487)] = 17608,
  [SMALL_STATE(488)] = 17623,
  [SMALL_STATE(489)] = 17638,
  [SMALL_STATE(490)] = 17655,
  [SMALL_STATE(491)] = 17670,
  [SMALL_STATE(492)] = 17687,
  [SMALL_STATE(493)] = 17702,
  [SMALL_STATE(494)] = 17719,
  [SMALL_STATE(495)] = 17734,
  [SMALL_STATE(496)] = 17749,
  [SMALL_STATE(497)] = 17764,
  [SMALL_STATE(498)] = 17779,
  [SMALL_STATE(499)] = 17794,
  [SMALL_STATE(500)] = 17809,
  [SMALL_STATE(501)] = 17826,
  [SMALL_STATE(502)] = 17840,
  [SMALL_STATE(503)] = 17852,
  [SMALL_STATE(504)] = 17864,
  [SMALL_STATE(505)] = 17878,
  [SMALL_STATE(506)] = 17892,
  [SMALL_STATE(507)] = 17906,
  [SMALL_STATE(508)] = 17918,
  [SMALL_STATE(509)] = 17932,
  [SMALL_STATE(510)] = 17944,
  [SMALL_STATE(511)] = 17958,
  [SMALL_STATE(512)] = 17972,
  [SMALL_STATE(513)] = 17986,
  [SMALL_STATE(514)] = 18000,
  [SMALL_STATE(515)] = 18014,
  [SMALL_STATE(516)] = 18028,
  [SMALL_STATE(517)] = 18042,
  [SMALL_STATE(518)] = 18056,
  [SMALL_STATE(519)] = 18070,
  [SMALL_STATE(520)] = 18084,
  [SMALL_STATE(521)] = 18098,
  [SMALL_STATE(522)] = 18112,
  [SMALL_STATE(523)] = 18126,
  [SMALL_STATE(524)] = 18140,
  [SMALL_STATE(525)] = 18154,
  [SMALL_STATE(526)] = 18168,
  [SMALL_STATE(527)] = 18182,
  [SMALL_STATE(528)] = 18196,
  [SMALL_STATE(529)] = 18210,
  [SMALL_STATE(530)] = 18224,
  [SMALL_STATE(531)] = 18236,
  [SMALL_STATE(532)] = 18250,
  [SMALL_STATE(533)] = 18262,
  [SMALL_STATE(534)] = 18276,
  [SMALL_STATE(535)] = 18290,
  [SMALL_STATE(536)] = 18304,
  [SMALL_STATE(537)] = 18318,
  [SMALL_STATE(538)] = 18332,
  [SMALL_STATE(539)] = 18346,
  [SMALL_STATE(540)] = 18360,
  [SMALL_STATE(541)] = 18371,
  [SMALL_STATE(542)] = 18380,
  [SMALL_STATE(543)] = 18391,
  [SMALL_STATE(544)] = 18402,
  [SMALL_STATE(545)] = 18413,
  [SMALL_STATE(546)] = 18424,
  [SMALL_STATE(547)] = 18435,
  [SMALL_STATE(548)] = 18446,
  [SMALL_STATE(549)] = 18455,
  [SMALL_STATE(550)] = 18466,
  [SMALL_STATE(551)] = 18475,
  [SMALL_STATE(552)] = 18486,
  [SMALL_STATE(553)] = 18497,
  [SMALL_STATE(554)] = 18506,
  [SMALL_STATE(555)] = 18517,
  [SMALL_STATE(556)] = 18528,
  [SMALL_STATE(557)] = 18539,
  [SMALL_STATE(558)] = 18548,
  [SMALL_STATE(559)] = 18559,
  [SMALL_STATE(560)] = 18568,
  [SMALL_STATE(561)] = 18577,
  [SMALL_STATE(562)] = 18588,
  [SMALL_STATE(563)] = 18599,
  [SMALL_STATE(564)] = 18610,
  [SMALL_STATE(565)] = 18621,
  [SMALL_STATE(566)] = 18632,
  [SMALL_STATE(567)] = 18641,
  [SMALL_STATE(568)] = 18652,
  [SMALL_STATE(569)] = 18663,
  [SMALL_STATE(570)] = 18674,
  [SMALL_STATE(571)] = 18683,
  [SMALL_STATE(572)] = 18694,
  [SMALL_STATE(573)] = 18705,
  [SMALL_STATE(574)] = 18716,
  [SMALL_STATE(575)] = 18727,
  [SMALL_STATE(576)] = 18738,
  [SMALL_STATE(577)] = 18749,
  [SMALL_STATE(578)] = 18760,
  [SMALL_STATE(579)] = 18771,
  [SMALL_STATE(580)] = 18782,
  [SMALL_STATE(581)] = 18790,
  [SMALL_STATE(582)] = 18798,
  [SMALL_STATE(583)] = 18806,
  [SMALL_STATE(584)] = 18814,
  [SMALL_STATE(585)] = 18822,
  [SMALL_STATE(586)] = 18830,
  [SMALL_STATE(587)] = 18838,
  [SMALL_STATE(588)] = 18846,
  [SMALL_STATE(589)] = 18854,
  [SMALL_STATE(590)] = 18862,
  [SMALL_STATE(591)] = 18870,
  [SMALL_STATE(592)] = 18878,
  [SMALL_STATE(593)] = 18886,
  [SMALL_STATE(594)] = 18894,
  [SMALL_STATE(595)] = 18902,
  [SMALL_STATE(596)] = 18910,
  [SMALL_STATE(597)] = 18918,
  [SMALL_STATE(598)] = 18926,
  [SMALL_STATE(599)] = 18934,
  [SMALL_STATE(600)] = 18942,
  [SMALL_STATE(601)] = 18950,
  [SMALL_STATE(602)] = 18958,
  [SMALL_STATE(603)] = 18966,
  [SMALL_STATE(604)] = 18974,
  [SMALL_STATE(605)] = 18982,
  [SMALL_STATE(606)] = 18990,
  [SMALL_STATE(607)] = 18998,
  [SMALL_STATE(608)] = 19006,
  [SMALL_STATE(609)] = 19014,
  [SMALL_STATE(610)] = 19022,
  [SMALL_STATE(611)] = 19030,
  [SMALL_STATE(612)] = 19038,
  [SMALL_STATE(613)] = 19046,
  [SMALL_STATE(614)] = 19054,
  [SMALL_STATE(615)] = 19062,
  [SMALL_STATE(616)] = 19070,
  [SMALL_STATE(617)] = 19078,
  [SMALL_STATE(618)] = 19086,
  [SMALL_STATE(619)] = 19094,
  [SMALL_STATE(620)] = 19102,
  [SMALL_STATE(621)] = 19110,
  [SMALL_STATE(622)] = 19118,
  [SMALL_STATE(623)] = 19126,
  [SMALL_STATE(624)] = 19134,
  [SMALL_STATE(625)] = 19142,
  [SMALL_STATE(626)] = 19150,
  [SMALL_STATE(627)] = 19158,
  [SMALL_STATE(628)] = 19166,
  [SMALL_STATE(629)] = 19174,
  [SMALL_STATE(630)] = 19182,
  [SMALL_STATE(631)] = 19190,
  [SMALL_STATE(632)] = 19198,
  [SMALL_STATE(633)] = 19206,
  [SMALL_STATE(634)] = 19214,
  [SMALL_STATE(635)] = 19222,
  [SMALL_STATE(636)] = 19230,
  [SMALL_STATE(637)] = 19238,
  [SMALL_STATE(638)] = 19246,
  [SMALL_STATE(639)] = 19254,
  [SMALL_STATE(640)] = 19262,
  [SMALL_STATE(641)] = 19270,
  [SMALL_STATE(642)] = 19278,
  [SMALL_STATE(643)] = 19286,
  [SMALL_STATE(644)] = 19294,
  [SMALL_STATE(645)] = 19302,
  [SMALL_STATE(646)] = 19310,
  [SMALL_STATE(647)] = 19318,
  [SMALL_STATE(648)] = 19326,
  [SMALL_STATE(649)] = 19334,
  [SMALL_STATE(650)] = 19342,
  [SMALL_STATE(651)] = 19350,
  [SMALL_STATE(652)] = 19358,
  [SMALL_STATE(653)] = 19366,
  [SMALL_STATE(654)] = 19374,
  [SMALL_STATE(655)] = 19382,
  [SMALL_STATE(656)] = 19390,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(253),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(444),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(248),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(493),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(646),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(432),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(284),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(361),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(238),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(213),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(643),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(642),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(641),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(640),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(244),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(639),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(637),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(256),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(636),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(261),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(262),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(266),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(336),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(635),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(633),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(632),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(626),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(351),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(385),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(620),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(342),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(272),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(440),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(478),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(628),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(443),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(361),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(643),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(630),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(631),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(652),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(656),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(634),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(283),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(239),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(254),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(245),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(336),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(635),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(633),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(632),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(626),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(351),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(378),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(648),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(340),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(598),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 19),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(644),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 12),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 12),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 22),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 22),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 11),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 11),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 11),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 11),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 11),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 10),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 10),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 19),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 11),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 11),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 19),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 19),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 7),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 27),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 27),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 5),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 28),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 28),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 17),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 17),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_value, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_value, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 4),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(246),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(225),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(584),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(142),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(150),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(150),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(578),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 19),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(225),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(584),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(142),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(150),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(150),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(141),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(140),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(578),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(139),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(156),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(221),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(595),
  [917] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(184),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(178),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(178),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(191),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(169),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(167),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(573),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(161),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(193),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 14),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 14),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 14),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 14),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 13),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 13),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 16),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 16),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 15),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 15),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 20),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 7),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 7),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 8),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 8),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 20),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 14),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 14),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 13),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 13),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(243),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameter, 3),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 18),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(282),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 26),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 25),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, .dynamic_precedence = 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_pair, 3, .production_id = 21),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_annotation, 1),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_annotation, 1),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(610),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(542),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(561),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 24),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2), SHIFT_REPEAT(232),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(234),
  [1449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(421),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2), SHIFT_REPEAT(558),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(579),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(287),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(236),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2), SHIFT_REPEAT(231),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 4),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 19),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 5),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 3),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_declaration_selector, 2, .production_id = 6),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_selector, 2, .production_id = 6),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace, 1),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
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
