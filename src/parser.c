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
#define STATE_COUNT 643
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 181
#define ALIAS_COUNT 20
#define TOKEN_COUNT 89
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
  aux_sym_color_value_token1 = 68,
  sym_string_value = 69,
  sym_unquoted_string_value = 70,
  aux_sym_integer_value_token1 = 71,
  aux_sym_float_value_token1 = 72,
  sym_unit = 73,
  anon_sym_url = 74,
  anon_sym_DASH = 75,
  anon_sym_SLASH = 76,
  anon_sym_EQ_EQ = 77,
  anon_sym_LT = 78,
  anon_sym_BANG_EQ = 79,
  anon_sym_LT_EQ = 80,
  anon_sym_GT_EQ = 81,
  sym_identifier = 82,
  sym_variable_identifier = 83,
  sym_at_keyword = 84,
  sym_comment = 85,
  sym_single_line_comment = 86,
  sym_plain_value = 87,
  sym__descendant_operator = 88,
  sym_stylesheet = 89,
  sym_import_statement = 90,
  sym_media_statement = 91,
  sym_charset_statement = 92,
  sym_namespace_statement = 93,
  sym_keyframes_statement = 94,
  sym_keyframe_block_list = 95,
  sym_keyframe_block = 96,
  sym_from = 97,
  sym_supports_statement = 98,
  sym_at_rule = 99,
  sym_use_statement = 100,
  sym_use_namespace = 101,
  sym_forward_statement = 102,
  sym_apply_statement = 103,
  sym_parameters = 104,
  sym_parameter = 105,
  sym_use_parameters = 106,
  sym_use_parameter = 107,
  sym_mixin_statement = 108,
  sym_include_statement = 109,
  sym_include_arguments = 110,
  sym_include_argument = 111,
  sym_placeholder = 112,
  sym_extend_statement = 113,
  sym_if_statement = 114,
  sym_if_clause = 115,
  sym_else_if_clause = 116,
  sym_else_clause = 117,
  sym_each_statement = 118,
  sym_for_statement = 119,
  sym_while_statement = 120,
  sym_function_statement = 121,
  sym_return_statement = 122,
  sym_at_root_statement = 123,
  sym_error_statement = 124,
  sym_warn_statement = 125,
  sym_debug_statement = 126,
  sym_rule_set = 127,
  sym_selectors = 128,
  sym_block = 129,
  sym__selector = 130,
  sym_universal_selector = 131,
  sym_placeholder_selector = 132,
  sym_class_selector = 133,
  sym_pseudo_class_selector = 134,
  sym_pseudo_element_selector = 135,
  sym_id_selector = 136,
  sym_attribute_selector = 137,
  sym_child_selector = 138,
  sym_descendant_selector = 139,
  sym_sibling_selector = 140,
  sym_adjacent_sibling_selector = 141,
  sym_pseudo_class_arguments = 142,
  sym_scope_annotation = 143,
  sym_declaration = 144,
  sym_last_declaration = 145,
  sym__query = 146,
  sym_feature_query = 147,
  sym_parenthesized_query = 148,
  sym_binary_query = 149,
  sym_unary_query = 150,
  sym_selector_query = 151,
  sym__value = 152,
  sym__value_allowed_in_url_function = 153,
  sym_parenthesized_value = 154,
  sym_map_value = 155,
  sym_map_pair = 156,
  sym_color_value = 157,
  sym_integer_value = 158,
  sym_float_value = 159,
  sym_call_expression = 160,
  sym_binary_expression = 161,
  sym_binary_expression_allowed_in_url_function = 162,
  sym_arguments = 163,
  sym_arguments_for_url = 164,
  aux_sym_stylesheet_repeat1 = 165,
  aux_sym_import_statement_repeat1 = 166,
  aux_sym_keyframe_block_list_repeat1 = 167,
  aux_sym_apply_statement_repeat1 = 168,
  aux_sym_parameters_repeat1 = 169,
  aux_sym_use_parameters_repeat1 = 170,
  aux_sym_include_arguments_repeat1 = 171,
  aux_sym_if_statement_repeat1 = 172,
  aux_sym_selectors_repeat1 = 173,
  aux_sym_block_repeat1 = 174,
  aux_sym_pseudo_class_arguments_repeat1 = 175,
  aux_sym_declaration_repeat1 = 176,
  aux_sym_map_value_repeat1 = 177,
  aux_sym_arguments_repeat1 = 178,
  aux_sym_arguments_for_url_repeat1 = 179,
  aux_sym_arguments_for_url_repeat2 = 180,
  alias_sym_argument_name = 181,
  alias_sym_argument_value = 182,
  alias_sym_attribute_name = 183,
  alias_sym_class_name = 184,
  alias_sym_condition = 185,
  alias_sym_default_value = 186,
  alias_sym_feature_name = 187,
  alias_sym_id_name = 188,
  alias_sym_key = 189,
  alias_sym_keyframes_name = 190,
  alias_sym_keyword_query = 191,
  alias_sym_name = 192,
  alias_sym_namespace_name = 193,
  alias_sym_placeholder_name = 194,
  alias_sym_property_name = 195,
  alias_sym_tag_name = 196,
  alias_sym_through = 197,
  alias_sym_value = 198,
  alias_sym_variable = 199,
  alias_sym_variable_value = 200,
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
  [8] = {.index = 0, .length = 2},
  [20] = {.index = 2, .length = 2},
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
    [1] = alias_sym_tag_name,
  },
  [7] = {
    [1] = alias_sym_id_name,
  },
  [8] = {
    [0] = anon_sym_url,
  },
  [9] = {
    [1] = alias_sym_keyframes_name,
  },
  [10] = {
    [1] = alias_sym_name,
  },
  [11] = {
    [1] = alias_sym_condition,
  },
  [12] = {
    [1] = alias_sym_attribute_name,
  },
  [13] = {
    [2] = alias_sym_class_name,
  },
  [14] = {
    [2] = alias_sym_tag_name,
  },
  [15] = {
    [2] = alias_sym_id_name,
  },
  [16] = {
    [1] = alias_sym_namespace_name,
  },
  [17] = {
    [0] = alias_sym_argument_value,
  },
  [18] = {
    [0] = alias_sym_property_name,
  },
  [19] = {
    [2] = alias_sym_attribute_name,
  },
  [21] = {
    [1] = alias_sym_value,
  },
  [22] = {
    [1] = alias_sym_placeholder_name,
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
      if (eof) ADVANCE(139);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(127);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(494);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(487);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == '}') ADVANCE(355);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(337);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 129:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 130:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(498);
      END_STATE();
    case 131:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 132:
      if (!sym_unquoted_string_value_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(134);
      END_STATE();
    case 135:
      if (eof) ADVANCE(139);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 136:
      if (eof) ADVANCE(139);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 137:
      if (eof) ADVANCE(139);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(142);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 138:
      if (eof) ADVANCE(139);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '%') ADVANCE(171);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_use_namespace_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'w') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(119);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '/') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(262);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '/') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '$') ADVANCE(269);
      if (lookahead == '/') ADVANCE(131);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '{') ADVANCE(119);
      if (!sym_unquoted_string_value_character_set_3(lookahead)) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(131);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unquoted_string_value);
      if (lookahead == '/') ADVANCE(490);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == 'y') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '_') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '_') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(317);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '_') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(295);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '_') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(319);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(299);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '_') ADVANCE(264);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '_') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '_') ADVANCE(264);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(131);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(337);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(338);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(494);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(487);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(488);
      if (!sym_unquoted_string_value_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '_') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(364);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(359);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(358);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(318);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(211);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(213);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(360);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(362);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '.') ADVANCE(495);
      if (lookahead == '/') ADVANCE(130);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(498);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(410);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 'x') ADVANCE(475);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 'x') ADVANCE(475);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(476);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(460);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(447);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'x') ADVANCE(419);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'y') ADVANCE(412);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'y') ADVANCE(162);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(493);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_3(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_3(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_4(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_4(lookahead)) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(489);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(497);
      if (lookahead == '/') ADVANCE(130);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '{') ADVANCE(119);
      if (!sym_plain_value_character_set_4(lookahead)) ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(130);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(498);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
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
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 138},
  [17] = {.lex_state = 138},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 138},
  [25] = {.lex_state = 138},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 138},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 136},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 136},
  [32] = {.lex_state = 136},
  [33] = {.lex_state = 136},
  [34] = {.lex_state = 136},
  [35] = {.lex_state = 136},
  [36] = {.lex_state = 136},
  [37] = {.lex_state = 136},
  [38] = {.lex_state = 136},
  [39] = {.lex_state = 136},
  [40] = {.lex_state = 136},
  [41] = {.lex_state = 136},
  [42] = {.lex_state = 136},
  [43] = {.lex_state = 136},
  [44] = {.lex_state = 136},
  [45] = {.lex_state = 136},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 136},
  [49] = {.lex_state = 136},
  [50] = {.lex_state = 136},
  [51] = {.lex_state = 136},
  [52] = {.lex_state = 136},
  [53] = {.lex_state = 136},
  [54] = {.lex_state = 136},
  [55] = {.lex_state = 136},
  [56] = {.lex_state = 136},
  [57] = {.lex_state = 136},
  [58] = {.lex_state = 136},
  [59] = {.lex_state = 136},
  [60] = {.lex_state = 136},
  [61] = {.lex_state = 136},
  [62] = {.lex_state = 136},
  [63] = {.lex_state = 136},
  [64] = {.lex_state = 136},
  [65] = {.lex_state = 136},
  [66] = {.lex_state = 136},
  [67] = {.lex_state = 136},
  [68] = {.lex_state = 136},
  [69] = {.lex_state = 136},
  [70] = {.lex_state = 136},
  [71] = {.lex_state = 136},
  [72] = {.lex_state = 136},
  [73] = {.lex_state = 136},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 136},
  [76] = {.lex_state = 136},
  [77] = {.lex_state = 136},
  [78] = {.lex_state = 136},
  [79] = {.lex_state = 136},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 136},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
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
  [106] = {.lex_state = 1},
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
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 3, .external_lex_state = 1},
  [136] = {.lex_state = 1, .external_lex_state = 1},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
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
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 8},
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
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 9, .external_lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 26},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 27},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 9, .external_lex_state = 1},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 12},
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
  [267] = {.lex_state = 18},
  [268] = {.lex_state = 18},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 13},
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
  [328] = {.lex_state = 136, .external_lex_state = 1},
  [329] = {.lex_state = 136, .external_lex_state = 1},
  [330] = {.lex_state = 136, .external_lex_state = 1},
  [331] = {.lex_state = 27, .external_lex_state = 1},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 15},
  [334] = {.lex_state = 136, .external_lex_state = 1},
  [335] = {.lex_state = 15},
  [336] = {.lex_state = 13},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 136, .external_lex_state = 1},
  [341] = {.lex_state = 136, .external_lex_state = 1},
  [342] = {.lex_state = 136, .external_lex_state = 1},
  [343] = {.lex_state = 136, .external_lex_state = 1},
  [344] = {.lex_state = 136, .external_lex_state = 1},
  [345] = {.lex_state = 136, .external_lex_state = 1},
  [346] = {.lex_state = 136, .external_lex_state = 1},
  [347] = {.lex_state = 136, .external_lex_state = 1},
  [348] = {.lex_state = 136, .external_lex_state = 1},
  [349] = {.lex_state = 136, .external_lex_state = 1},
  [350] = {.lex_state = 136, .external_lex_state = 1},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 136, .external_lex_state = 1},
  [353] = {.lex_state = 136, .external_lex_state = 1},
  [354] = {.lex_state = 136, .external_lex_state = 1},
  [355] = {.lex_state = 136, .external_lex_state = 1},
  [356] = {.lex_state = 136, .external_lex_state = 1},
  [357] = {.lex_state = 136, .external_lex_state = 1},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 136, .external_lex_state = 1},
  [360] = {.lex_state = 136, .external_lex_state = 1},
  [361] = {.lex_state = 136, .external_lex_state = 1},
  [362] = {.lex_state = 136, .external_lex_state = 1},
  [363] = {.lex_state = 136, .external_lex_state = 1},
  [364] = {.lex_state = 136, .external_lex_state = 1},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 136, .external_lex_state = 1},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 136, .external_lex_state = 1},
  [371] = {.lex_state = 15},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 15},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 136, .external_lex_state = 1},
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 9},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 9},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 21},
  [400] = {.lex_state = 21},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 9},
  [405] = {.lex_state = 9},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 9},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 136, .external_lex_state = 1},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 136, .external_lex_state = 1},
  [412] = {.lex_state = 13},
  [413] = {.lex_state = 136, .external_lex_state = 1},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 9},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 13},
  [419] = {.lex_state = 9},
  [420] = {.lex_state = 9},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 13},
  [423] = {.lex_state = 9},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 9},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 136, .external_lex_state = 1},
  [429] = {.lex_state = 9},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 9},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 13},
  [434] = {.lex_state = 13},
  [435] = {.lex_state = 13},
  [436] = {.lex_state = 13},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 136, .external_lex_state = 1},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 120},
  [441] = {.lex_state = 120},
  [442] = {.lex_state = 120},
  [443] = {.lex_state = 120},
  [444] = {.lex_state = 120},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 26},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 26},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 9},
  [451] = {.lex_state = 9},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 9},
  [454] = {.lex_state = 28},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 9},
  [457] = {.lex_state = 28},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 136},
  [468] = {.lex_state = 136},
  [469] = {.lex_state = 120},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 23},
  [472] = {.lex_state = 23},
  [473] = {.lex_state = 120},
  [474] = {.lex_state = 120},
  [475] = {.lex_state = 120},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 136},
  [479] = {.lex_state = 136},
  [480] = {.lex_state = 136},
  [481] = {.lex_state = 136},
  [482] = {.lex_state = 136},
  [483] = {.lex_state = 136},
  [484] = {.lex_state = 23},
  [485] = {.lex_state = 23},
  [486] = {.lex_state = 28},
  [487] = {.lex_state = 136},
  [488] = {.lex_state = 136},
  [489] = {.lex_state = 136},
  [490] = {.lex_state = 136},
  [491] = {.lex_state = 28},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 9},
  [494] = {.lex_state = 23},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 136},
  [497] = {.lex_state = 9},
  [498] = {.lex_state = 23},
  [499] = {.lex_state = 136},
  [500] = {.lex_state = 136},
  [501] = {.lex_state = 136},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 136},
  [504] = {.lex_state = 136},
  [505] = {.lex_state = 136},
  [506] = {.lex_state = 136},
  [507] = {.lex_state = 136},
  [508] = {.lex_state = 39},
  [509] = {.lex_state = 136},
  [510] = {.lex_state = 136},
  [511] = {.lex_state = 23},
  [512] = {.lex_state = 136},
  [513] = {.lex_state = 136},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 136},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 136},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 136},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 136},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 136},
  [525] = {.lex_state = 136},
  [526] = {.lex_state = 136},
  [527] = {.lex_state = 136},
  [528] = {.lex_state = 136},
  [529] = {.lex_state = 136},
  [530] = {.lex_state = 39},
  [531] = {.lex_state = 136},
  [532] = {.lex_state = 18},
  [533] = {.lex_state = 23},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 136},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 136},
  [543] = {.lex_state = 31},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 23},
  [547] = {.lex_state = 136},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 31},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 136},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 136},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 136},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 9},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 136},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 9},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 27},
  [589] = {.lex_state = 27},
  [590] = {.lex_state = 23},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 9},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 9},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 9},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 27},
  [604] = {.lex_state = 27},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 27},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 27},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 27},
  [617] = {.lex_state = 27},
  [618] = {.lex_state = 27},
  [619] = {.lex_state = 27},
  [620] = {.lex_state = 27},
  [621] = {.lex_state = 27},
  [622] = {.lex_state = 27},
  [623] = {.lex_state = 136},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 136},
  [626] = {.lex_state = 27},
  [627] = {.lex_state = 27},
  [628] = {.lex_state = 27},
  [629] = {.lex_state = 27},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 27},
  [633] = {.lex_state = 27},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 27},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 136},
  [639] = {.lex_state = 136},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 136},
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
    [sym_stylesheet] = STATE(605),
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
    [sym_placeholder] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(550),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(2),
    [aux_sym_stylesheet_repeat1] = STATE(2),
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
    [sym_placeholder] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(550),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(3),
    [aux_sym_stylesheet_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(69),
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
  [3] = {
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
    [sym_placeholder] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(550),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(3),
    [aux_sym_stylesheet_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_ATimport] = ACTIONS(73),
    [anon_sym_ATmedia] = ACTIONS(76),
    [anon_sym_ATcharset] = ACTIONS(79),
    [anon_sym_ATnamespace] = ACTIONS(82),
    [anon_sym_ATkeyframes] = ACTIONS(85),
    [aux_sym_keyframes_statement_token1] = ACTIONS(85),
    [anon_sym_ATsupports] = ACTIONS(88),
    [anon_sym_ATuse] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_ATforward] = ACTIONS(97),
    [anon_sym_ATapply] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_ATmixin] = ACTIONS(106),
    [anon_sym_ATinclude] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_ATif] = ACTIONS(115),
    [anon_sym_ATeach] = ACTIONS(118),
    [anon_sym_ATfor] = ACTIONS(121),
    [anon_sym_ATwhile] = ACTIONS(124),
    [anon_sym_ATfunction] = ACTIONS(127),
    [anon_sym_ATerror] = ACTIONS(130),
    [anon_sym_ATwarn] = ACTIONS(133),
    [anon_sym_ATdebug] = ACTIONS(136),
    [sym_nesting_selector] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_string_value] = ACTIONS(154),
    [sym_identifier] = ACTIONS(157),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_at_keyword] = ACTIONS(163),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(10),
    [sym_last_declaration] = STATE(611),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(575),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(11),
    [sym_last_declaration] = STATE(602),
    [aux_sym_block_repeat1] = STATE(11),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(9),
    [sym_last_declaration] = STATE(585),
    [aux_sym_block_repeat1] = STATE(9),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(591),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(597),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(593),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(607),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(586),
    [aux_sym_block_repeat1] = STATE(8),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
    [sym_declaration] = STATE(14),
    [sym_last_declaration] = STATE(579),
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
    [sym_if_clause] = STATE(19),
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
    [sym_selectors] = STATE(548),
    [sym__selector] = STATE(352),
    [sym_universal_selector] = STATE(352),
    [sym_class_selector] = STATE(352),
    [sym_pseudo_class_selector] = STATE(352),
    [sym_pseudo_element_selector] = STATE(352),
    [sym_id_selector] = STATE(352),
    [sym_attribute_selector] = STATE(352),
    [sym_child_selector] = STATE(352),
    [sym_descendant_selector] = STATE(352),
    [sym_sibling_selector] = STATE(352),
    [sym_adjacent_sibling_selector] = STATE(352),
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
  [0] = 6,
    ACTIONS(326), 1,
      anon_sym_ATelse,
    STATE(71), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(16), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(324), 24,
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
  [52] = 6,
    ACTIONS(326), 1,
      anon_sym_ATelse,
    STATE(41), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
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
  [104] = 5,
    ACTIONS(336), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(334), 24,
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
  [153] = 21,
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
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      sym_string_value,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    STATE(186), 1,
      sym__value,
    STATE(204), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
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
  [234] = 6,
    ACTIONS(361), 1,
      anon_sym_ATelse,
    STATE(100), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(322), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(324), 24,
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
  [285] = 6,
    ACTIONS(361), 1,
      anon_sym_ATelse,
    STATE(95), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(23), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
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
  [336] = 22,
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
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_PERCENT,
    ACTIONS(367), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      sym_string_value,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    STATE(413), 1,
      sym_class_selector,
    STATE(424), 1,
      sym__value,
    STATE(598), 1,
      sym_placeholder_selector,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(438), 10,
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
  [419] = 20,
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
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      sym_string_value,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    STATE(186), 1,
      sym__value,
    STATE(216), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
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
  [497] = 5,
    ACTIONS(383), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(23), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(332), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(334), 24,
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
  [545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 25,
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
  [588] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 25,
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
  [631] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 25,
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
  [674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 25,
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
  [717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 25,
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
  [760] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(406), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(408), 24,
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
  [802] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 25,
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
  [844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 24,
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
  [886] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 24,
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
  [928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(418), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(420), 24,
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
  [970] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 24,
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
  [1012] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(426), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 24,
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
  [1054] = 3,
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
  [1096] = 3,
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
  [1138] = 3,
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
    ACTIONS(440), 24,
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
  [1180] = 3,
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
    ACTIONS(444), 24,
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
  [1222] = 3,
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
  [1264] = 3,
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
  [1306] = 3,
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
  [1348] = 3,
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
  [1390] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 24,
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
  [1432] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 24,
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
  [1474] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(388), 25,
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
  [1516] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(400), 25,
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
  [1558] = 3,
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
  [1600] = 3,
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
  [1642] = 3,
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
  [1684] = 3,
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
  [1726] = 3,
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
  [1768] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 24,
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
  [1810] = 3,
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
  [1852] = 3,
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
  [1894] = 3,
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
  [1936] = 3,
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
  [1978] = 3,
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
  [2020] = 3,
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
  [2062] = 3,
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
  [2104] = 3,
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
  [2146] = 3,
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
  [2188] = 3,
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
  [2230] = 3,
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
  [2272] = 3,
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
  [2314] = 3,
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
  [2356] = 3,
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
  [2398] = 3,
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
  [2440] = 3,
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
  [2482] = 3,
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
  [2524] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
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
  [2566] = 3,
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
  [2608] = 3,
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
  [2650] = 3,
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
  [2692] = 3,
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
  [2734] = 3,
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
  [2776] = 3,
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
  [2818] = 3,
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
  [2860] = 3,
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
  [2902] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 25,
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
  [2944] = 3,
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
  [2986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 25,
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
  [3028] = 3,
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
  [3069] = 3,
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
  [3110] = 3,
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
  [3151] = 3,
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
  [3192] = 3,
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
  [3233] = 3,
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
  [3274] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(418), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(420), 24,
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
  [3315] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(406), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(408), 24,
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
  [3356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(416), 24,
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
  [3397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(396), 24,
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
  [3438] = 3,
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
  [3479] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(410), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(412), 24,
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
  [3520] = 3,
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
  [3561] = 3,
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
  [3602] = 3,
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
  [3643] = 3,
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
  [3684] = 3,
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
  [3725] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(328), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(330), 24,
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
  [3766] = 3,
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
    ACTIONS(444), 24,
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
  [3807] = 3,
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
  [3848] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(392), 24,
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
  [3889] = 3,
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
  [3930] = 3,
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
    ACTIONS(440), 24,
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
  [3971] = 19,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      sym_important,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(158), 1,
      sym__value,
    STATE(173), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4044] = 3,
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
  [4085] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(424), 24,
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
  [4126] = 3,
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
  [4167] = 3,
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
  [4208] = 3,
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
  [4249] = 3,
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
  [4290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(546), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
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
  [4331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(562), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
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
  [4372] = 3,
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
  [4413] = 3,
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
  [4454] = 3,
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
  [4495] = 3,
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
  [4536] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(404), 24,
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
  [4577] = 3,
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
  [4618] = 3,
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
  [4659] = 3,
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
  [4700] = 3,
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
  [4741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(426), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(428), 24,
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
  [4782] = 3,
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
  [4823] = 3,
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
  [4864] = 3,
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
  [4905] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(550), 8,
      anon_sym_RBRACE,
      anon_sym_STAR,
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
  [4946] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(618), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(206), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5016] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    ACTIONS(622), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(200), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5086] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(626), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(196), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5156] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(628), 1,
      sym_important,
    STATE(158), 1,
      sym__value,
    STATE(198), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5226] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(632), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(201), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5296] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(636), 1,
      sym_important,
    STATE(158), 1,
      sym__value,
    STATE(199), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5366] = 7,
    ACTIONS(646), 1,
      anon_sym_LPAREN2,
    STATE(145), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(644), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(640), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(638), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(642), 10,
      anon_sym_LPAREN,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5413] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(652), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(648), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(650), 7,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(654), 9,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5454] = 5,
    ACTIONS(646), 1,
      anon_sym_LPAREN2,
    STATE(145), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(640), 12,
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
    ACTIONS(642), 13,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5494] = 4,
    ACTIONS(660), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(656), 13,
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
  [5531] = 4,
    ACTIONS(666), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5602] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(672), 13,
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
  [5636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(676), 13,
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
  [5670] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(682), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5704] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(686), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(690), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(694), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(654), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(650), 13,
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
  [5840] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(698), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(702), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5908] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(706), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5942] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(710), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [5976] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(714), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [6010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(718), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [6044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [6078] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(726), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [6112] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
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
  [6146] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(732), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
    ACTIONS(734), 7,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6183] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(736), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_default,
      sym_string_value,
    ACTIONS(738), 7,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [6220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LPAREN2,
    ACTIONS(746), 1,
      sym_single_line_comment,
    STATE(178), 1,
      sym_arguments,
    ACTIONS(740), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(742), 13,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(748), 1,
      sym_unit,
    ACTIONS(656), 10,
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
    ACTIONS(658), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6295] = 15,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(756), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      sym_string_value,
    ACTIONS(762), 1,
      aux_sym_integer_value_token1,
    ACTIONS(765), 1,
      aux_sym_float_value_token1,
    ACTIONS(768), 1,
      anon_sym_url,
    ACTIONS(771), 1,
      sym_identifier,
    ACTIONS(774), 1,
      sym_variable_identifier,
    ACTIONS(777), 1,
      sym_plain_value,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
      sym_default,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(780), 1,
      sym_unit,
    ACTIONS(662), 10,
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
    ACTIONS(664), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(782), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(784), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(788), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(786), 7,
      anon_sym_POUND,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
  [6424] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(487), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(682), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6514] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(490), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6571] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(468), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6628] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(479), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(820), 10,
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
    ACTIONS(822), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6718] = 9,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(830), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(826), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(459), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(714), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6794] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(483), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [6851] = 17,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    ACTIONS(844), 1,
      sym_important,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(846), 10,
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
    ACTIONS(848), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [6943] = 9,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(830), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(826), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(462), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(726), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7019] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(488), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(688), 10,
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
    ACTIONS(690), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(710), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(706), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7175] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(467), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7232] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(478), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(702), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(698), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(722), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7388] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(592), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(596), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(858), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(860), 7,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [7423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(742), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(718), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(672), 10,
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
    ACTIONS(674), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7522] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(489), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
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
    ACTIONS(678), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
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
    ACTIONS(686), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7645] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(480), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
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
    ACTIONS(670), 12,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_unquoted_string_value,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
  [7735] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(868), 1,
      anon_sym_LPAREN,
    ACTIONS(871), 1,
      anon_sym_POUND,
    ACTIONS(874), 1,
      sym_string_value,
    ACTIONS(877), 1,
      sym_unquoted_string_value,
    ACTIONS(880), 1,
      aux_sym_integer_value_token1,
    ACTIONS(883), 1,
      aux_sym_float_value_token1,
    ACTIONS(886), 1,
      anon_sym_url,
    ACTIONS(889), 1,
      sym_identifier,
    ACTIONS(892), 1,
      sym_variable_identifier,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(866), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [7787] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(632), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7843] = 5,
    ACTIONS(895), 1,
      anon_sym_LPAREN2,
    STATE(222), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(642), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(640), 16,
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
  [7877] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(897), 1,
      sym_important,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7933] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    ACTIONS(901), 1,
      sym_important,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7989] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(618), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8045] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(905), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8101] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(907), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8153] = 14,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      sym_string_value,
    ACTIONS(920), 1,
      aux_sym_integer_value_token1,
    ACTIONS(923), 1,
      aux_sym_float_value_token1,
    ACTIONS(926), 1,
      anon_sym_url,
    ACTIONS(929), 1,
      sym_identifier,
    ACTIONS(932), 1,
      sym_variable_identifier,
    ACTIONS(935), 1,
      sym_plain_value,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(909), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8205] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    STATE(524), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8261] = 7,
    ACTIONS(895), 1,
      anon_sym_LPAREN2,
    STATE(222), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(642), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(644), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(640), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(638), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8299] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    ACTIONS(944), 1,
      sym_default,
    STATE(158), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8355] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    STATE(195), 1,
      aux_sym_arguments_for_url_repeat1,
    ACTIONS(946), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8407] = 11,
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
    ACTIONS(948), 1,
      sym_string_value,
    ACTIONS(950), 1,
      sym_identifier,
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
  [8452] = 11,
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
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(952), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(363), 11,
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
  [8497] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(130), 1,
      sym__value,
    STATE(281), 1,
      sym_scope_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(954), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8548] = 11,
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
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(956), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(411), 11,
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
  [8593] = 11,
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
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(958), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(428), 11,
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
  [8638] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(131), 1,
      sym__value,
    STATE(262), 1,
      sym_scope_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(954), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8689] = 11,
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
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(960), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(340), 11,
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
  [8734] = 11,
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
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(962), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(359), 11,
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
  [8779] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8830] = 14,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(368), 1,
      sym__value,
    STATE(525), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8880] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [8930] = 3,
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
  [8958] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(654), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(650), 16,
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
  [8986] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym__value,
    STATE(240), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9036] = 3,
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
  [9064] = 3,
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
  [9092] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(668), 16,
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
  [9120] = 3,
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
  [9148] = 3,
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
  [9176] = 3,
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
  [9204] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_apply_statement_repeat1,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9254] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9304] = 14,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      sym__value,
    STATE(500), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9354] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9404] = 3,
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
  [9432] = 3,
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
  [9460] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(678), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(676), 16,
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
  [9488] = 3,
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
  [9516] = 14,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      sym__value,
    STATE(504), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9566] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_apply_statement_repeat1,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9616] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9666] = 14,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym__value,
    STATE(510), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9716] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(994), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym__value,
    STATE(203), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9766] = 3,
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
  [9794] = 3,
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
  [9822] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_apply_statement_repeat1,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9872] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [9922] = 3,
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
  [9950] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(672), 16,
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
  [9978] = 14,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym__value,
    STATE(515), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10028] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_apply_statement_repeat1,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10078] = 3,
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
  [10106] = 14,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__value,
    STATE(193), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10156] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [10206] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(652), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(654), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(650), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(648), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10238] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_string_value,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    STATE(207), 1,
      aux_sym_arguments_for_url_repeat1,
    STATE(163), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [10285] = 5,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    STATE(319), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(640), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(642), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [10316] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(186), 1,
      sym__value,
    STATE(202), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10363] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(186), 1,
      sym__value,
    STATE(238), 1,
      aux_sym_apply_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10410] = 13,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(417), 1,
      sym__value,
    STATE(556), 1,
      sym_map_pair,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10457] = 13,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      sym_string_value,
    ACTIONS(1016), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1018), 1,
      aux_sym_float_value_token1,
    ACTIONS(1020), 1,
      anon_sym_url,
    ACTIONS(1022), 1,
      sym_identifier,
    ACTIONS(1024), 1,
      sym_variable_identifier,
    ACTIONS(1026), 1,
      sym_plain_value,
    STATE(371), 1,
      sym__value,
    STATE(533), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(378), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10504] = 13,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      sym_string_value,
    ACTIONS(1016), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1018), 1,
      aux_sym_float_value_token1,
    ACTIONS(1020), 1,
      anon_sym_url,
    ACTIONS(1022), 1,
      sym_identifier,
    ACTIONS(1024), 1,
      sym_variable_identifier,
    ACTIONS(1026), 1,
      sym_plain_value,
    STATE(371), 1,
      sym__value,
    STATE(494), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(378), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10551] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10595] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10639] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(133), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10683] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1028), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1030), 1,
      aux_sym_float_value_token1,
    STATE(414), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10727] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(431), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10771] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10815] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(420), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10859] = 4,
    ACTIONS(1032), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 13,
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
  [10887] = 4,
    ACTIONS(1034), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 13,
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
  [10915] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1028), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1030), 1,
      aux_sym_float_value_token1,
    STATE(432), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [10959] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11003] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(406), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11047] = 12,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    ACTIONS(1038), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      sym_string_value,
    ACTIONS(1042), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1044), 1,
      aux_sym_float_value_token1,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1048), 1,
      sym_identifier,
    ACTIONS(1050), 1,
      sym_variable_identifier,
    ACTIONS(1052), 1,
      sym_plain_value,
    STATE(175), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(321), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11091] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_single_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_POUND,
    ACTIONS(800), 1,
      sym_unquoted_string_value,
    ACTIONS(802), 1,
      aux_sym_integer_value_token1,
    ACTIONS(804), 1,
      aux_sym_float_value_token1,
    ACTIONS(806), 1,
      anon_sym_url,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      sym_variable_identifier,
    ACTIONS(1054), 1,
      sym_string_value,
    STATE(174), 8,
      sym__value_allowed_in_url_function,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression_allowed_in_url_function,
  [11135] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(407), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11179] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      sym_string_value,
    ACTIONS(1016), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1018), 1,
      aux_sym_float_value_token1,
    ACTIONS(1020), 1,
      anon_sym_url,
    ACTIONS(1022), 1,
      sym_identifier,
    ACTIONS(1026), 1,
      sym_plain_value,
    ACTIONS(1056), 1,
      sym_variable_identifier,
    STATE(403), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(378), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11223] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11267] = 12,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    ACTIONS(1038), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      sym_string_value,
    ACTIONS(1042), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1044), 1,
      aux_sym_float_value_token1,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1048), 1,
      sym_identifier,
    ACTIONS(1050), 1,
      sym_variable_identifier,
    ACTIONS(1052), 1,
      sym_plain_value,
    STATE(325), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(321), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11311] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1060), 1,
      aux_sym_float_value_token1,
    STATE(351), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11355] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(415), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(722), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(720), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11425] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(129), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11469] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1028), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1030), 1,
      aux_sym_float_value_token1,
    STATE(242), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11513] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(383), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11557] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(132), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11601] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(405), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11645] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(437), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11689] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11733] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(386), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11777] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(395), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11821] = 12,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      sym_string_value,
    ACTIONS(1016), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1018), 1,
      aux_sym_float_value_token1,
    ACTIONS(1020), 1,
      anon_sym_url,
    ACTIONS(1022), 1,
      sym_identifier,
    ACTIONS(1026), 1,
      sym_plain_value,
    ACTIONS(1056), 1,
      sym_variable_identifier,
    STATE(369), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(378), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11865] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(419), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11909] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(134), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11953] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [11997] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(421), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12041] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(374), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12085] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(429), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12129] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12173] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(242), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12217] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12261] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(106), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12305] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(390), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12349] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(391), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12393] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(401), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12437] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(410), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12481] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12525] = 12,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    ACTIONS(1038), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      sym_string_value,
    ACTIONS(1042), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1044), 1,
      aux_sym_float_value_token1,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1048), 1,
      sym_identifier,
    ACTIONS(1050), 1,
      sym_variable_identifier,
    ACTIONS(1052), 1,
      sym_plain_value,
    STATE(170), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(321), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12569] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
    ACTIONS(968), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_string_value,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(1058), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1060), 1,
      aux_sym_float_value_token1,
    STATE(242), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12613] = 12,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      aux_sym_integer_value_token1,
    ACTIONS(373), 1,
      aux_sym_float_value_token1,
    ACTIONS(375), 1,
      anon_sym_url,
    ACTIONS(379), 1,
      sym_variable_identifier,
    ACTIONS(381), 1,
      sym_plain_value,
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
    STATE(220), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12657] = 4,
    ACTIONS(1062), 1,
      sym_unit,
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
    ACTIONS(664), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [12685] = 4,
    ACTIONS(1064), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(656), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(658), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [12713] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      anon_sym_url,
    ACTIONS(357), 1,
      sym_variable_identifier,
    ACTIONS(359), 1,
      sym_plain_value,
    ACTIONS(594), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(157), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(147), 7,
      sym_parenthesized_value,
      sym_map_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [12757] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(728), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(730), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [12782] = 3,
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
  [12807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(672), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(674), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [12832] = 3,
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
  [12857] = 3,
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
  [12882] = 3,
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
  [12907] = 3,
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
  [12932] = 3,
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
  [12957] = 3,
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
  [12982] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(650), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(654), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [13007] = 3,
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
  [13032] = 3,
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
  [13057] = 3,
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
  [13082] = 3,
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
  [13107] = 3,
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
  [13132] = 3,
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
  [13157] = 5,
    ACTIONS(1068), 1,
      anon_sym_COLON,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    STATE(364), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1066), 12,
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
  [13185] = 5,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    ACTIONS(1074), 1,
      anon_sym_COLON,
    STATE(357), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1072), 12,
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
  [13213] = 3,
    ACTIONS(1078), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1076), 13,
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
  [13236] = 4,
    ACTIONS(1080), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(652), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(648), 11,
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
  [13261] = 9,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(447), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [13296] = 5,
    ACTIONS(1086), 1,
      anon_sym_LPAREN2,
    STATE(393), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(642), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(640), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13323] = 3,
    ACTIONS(1090), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1088), 13,
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
  [13346] = 4,
    ACTIONS(1092), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13371] = 9,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(445), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [13406] = 4,
    ACTIONS(1098), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 5,
      anon_sym_with,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13431] = 4,
    ACTIONS(1100), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 3,
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
  [13455] = 4,
    ACTIONS(1102), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13479] = 4,
    ACTIONS(1106), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1104), 10,
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
  [13503] = 3,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(638), 12,
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
  [13525] = 3,
    ACTIONS(1112), 1,
      anon_sym_COLON,
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
  [13547] = 3,
    ACTIONS(1116), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1114), 12,
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
  [13569] = 3,
    ACTIONS(1120), 1,
      anon_sym_COLON,
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
  [13591] = 4,
    ACTIONS(1124), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1122), 10,
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
  [13615] = 3,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1126), 12,
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
  [13637] = 3,
    ACTIONS(1132), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1130), 12,
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
  [13659] = 3,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1134), 12,
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
  [13681] = 3,
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
  [13703] = 3,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1142), 12,
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
  [13725] = 6,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    ACTIONS(1148), 1,
      anon_sym_with,
    ACTIONS(1150), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1154), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1152), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13753] = 13,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    STATE(502), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [13795] = 3,
    ACTIONS(1178), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1176), 12,
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
  [13817] = 3,
    ACTIONS(1182), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1180), 12,
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
  [13839] = 13,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [13881] = 3,
    ACTIONS(1188), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1186), 12,
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
  [13903] = 3,
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
  [13925] = 4,
    ACTIONS(1194), 1,
      anon_sym_COLON,
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
  [13949] = 4,
    ACTIONS(1198), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1196), 10,
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
  [13973] = 3,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1200), 12,
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
  [13995] = 3,
    ACTIONS(1206), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1204), 12,
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
  [14017] = 3,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1208), 12,
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
  [14039] = 4,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1212), 10,
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
  [14063] = 3,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1216), 12,
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
  [14085] = 3,
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
  [14106] = 11,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14143] = 3,
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
  [14164] = 5,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14189] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1234), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1232), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14212] = 3,
    ACTIONS(1236), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(638), 11,
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
  [14233] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1234), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1232), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14256] = 3,
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
  [14277] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14302] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14327] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14352] = 3,
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
  [14373] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(654), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(650), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14417] = 3,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(638), 11,
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
  [14438] = 3,
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
  [14459] = 3,
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
  [14480] = 5,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14505] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14530] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14555] = 3,
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
  [14576] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14599] = 3,
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
  [14620] = 3,
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
  [14641] = 3,
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
  [14662] = 5,
    ACTIONS(1250), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14687] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14710] = 5,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14735] = 3,
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
  [14756] = 3,
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
  [14777] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14802] = 5,
    ACTIONS(1256), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14827] = 3,
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
  [14848] = 3,
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
  [14869] = 4,
    ACTIONS(1092), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(656), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14892] = 4,
    ACTIONS(1098), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(664), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(662), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14915] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14940] = 5,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14965] = 3,
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
  [14986] = 5,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15011] = 5,
    ACTIONS(1250), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15036] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15061] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15086] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(672), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15107] = 3,
    ACTIONS(1262), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(638), 11,
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
  [15128] = 5,
    ACTIONS(1256), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15153] = 11,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1264), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [15190] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(1266), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(497), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15216] = 4,
    ACTIONS(652), 1,
      anon_sym_COLON,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(648), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [15238] = 4,
    ACTIONS(1272), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1274), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1270), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15260] = 4,
    ACTIONS(1276), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15282] = 4,
    ACTIONS(1278), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15304] = 4,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15326] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(456), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15352] = 4,
    ACTIONS(1280), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15374] = 4,
    ACTIONS(1282), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15396] = 4,
    ACTIONS(1284), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15418] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(461), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15444] = 4,
    ACTIONS(1286), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15466] = 4,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15488] = 4,
    ACTIONS(1288), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15510] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(452), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15536] = 4,
    ACTIONS(1290), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15558] = 11,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [15594] = 4,
    ACTIONS(1294), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15616] = 4,
    ACTIONS(1296), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15638] = 4,
    ACTIONS(1298), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15660] = 4,
    ACTIONS(1300), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1274), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1270), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15682] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(458), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15708] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(466), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15734] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(476), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15760] = 6,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_selector,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(832), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(449), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [15786] = 4,
    ACTIONS(1302), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1228), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1222), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15808] = 10,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1164), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 1,
      anon_sym_GT,
    ACTIONS(1170), 1,
      anon_sym_TILDE,
    ACTIONS(1172), 1,
      anon_sym_PLUS,
    ACTIONS(1174), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1108), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [15841] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1304), 2,
      anon_sym_LPAREN,
      sym_string_value,
    ACTIONS(1306), 7,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_url,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [15859] = 7,
    ACTIONS(1308), 1,
      anon_sym_RBRACE,
    ACTIONS(1310), 1,
      anon_sym_from,
    ACTIONS(1312), 1,
      sym_to,
    ACTIONS(1314), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(441), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(535), 2,
      sym_from,
      sym_integer_value,
  [15884] = 7,
    ACTIONS(1316), 1,
      anon_sym_RBRACE,
    ACTIONS(1318), 1,
      anon_sym_from,
    ACTIONS(1321), 1,
      sym_to,
    ACTIONS(1324), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(441), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(535), 2,
      sym_from,
      sym_integer_value,
  [15909] = 7,
    ACTIONS(1310), 1,
      anon_sym_from,
    ACTIONS(1312), 1,
      sym_to,
    ACTIONS(1314), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1327), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(441), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(535), 2,
      sym_from,
      sym_integer_value,
  [15934] = 7,
    ACTIONS(1310), 1,
      anon_sym_from,
    ACTIONS(1312), 1,
      sym_to,
    ACTIONS(1314), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1329), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(440), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(535), 2,
      sym_from,
      sym_integer_value,
  [15959] = 7,
    ACTIONS(1310), 1,
      anon_sym_from,
    ACTIONS(1312), 1,
      sym_to,
    ACTIONS(1314), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(442), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(535), 2,
      sym_from,
      sym_integer_value,
  [15984] = 7,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_block,
    STATE(460), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16008] = 3,
    ACTIONS(1341), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1339), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [16024] = 7,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_block,
    STATE(463), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16048] = 3,
    ACTIONS(1347), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1345), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [16064] = 6,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(477), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16085] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1349), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16098] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1351), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1353), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16124] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1355), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16137] = 7,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1357), 1,
      sym_string_value,
    ACTIONS(1359), 1,
      sym_identifier,
    STATE(319), 1,
      sym_arguments,
    STATE(640), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16160] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1361), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16173] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1363), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16186] = 7,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1359), 1,
      sym_identifier,
    ACTIONS(1365), 1,
      sym_string_value,
    STATE(319), 1,
      sym_arguments,
    STATE(613), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16209] = 6,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_block,
    STATE(492), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16230] = 5,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_SEMI,
    STATE(495), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16248] = 6,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_block,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16268] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1371), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [16282] = 5,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
    STATE(519), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16300] = 6,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_block,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16320] = 6,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1377), 1,
      anon_sym_SEMI,
    ACTIONS(1379), 1,
      anon_sym_LPAREN2,
    STATE(58), 1,
      sym_block,
    STATE(514), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16340] = 6,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_LPAREN2,
    ACTIONS(1381), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_block,
    STATE(516), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16360] = 4,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16375] = 4,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16390] = 4,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [16416] = 4,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1371), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [16431] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_block,
    STATE(544), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16448] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_block,
    STATE(562), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [16476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [16487] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1392), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [16498] = 4,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16513] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym_block,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16530] = 4,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16545] = 4,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16560] = 4,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16575] = 4,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1400), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16590] = 4,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1403), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16605] = 4,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16620] = 5,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_block,
    STATE(560), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16637] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1390), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_block,
    STATE(545), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16654] = 5,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1408), 1,
      sym_string_value,
    ACTIONS(1410), 1,
      sym_identifier,
    STATE(584), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16671] = 4,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16686] = 4,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16701] = 4,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_arguments_for_url_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16716] = 4,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16731] = 5,
    ACTIONS(1046), 1,
      anon_sym_url,
    ACTIONS(1420), 1,
      sym_string_value,
    ACTIONS(1422), 1,
      sym_identifier,
    STATE(569), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16748] = 5,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym_block,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16765] = 3,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1349), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [16778] = 4,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN2,
    STATE(511), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16792] = 4,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16806] = 4,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16820] = 3,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1337), 2,
      anon_sym_and,
      anon_sym_or,
  [16832] = 4,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    ACTIONS(1442), 1,
      anon_sym_RPAREN2,
    STATE(498), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16846] = 4,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    ACTIONS(1446), 1,
      sym_variable_identifier,
    STATE(542), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16860] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16874] = 4,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16888] = 4,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_LBRACE,
    STATE(517), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16902] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16916] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16930] = 4,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16944] = 4,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16958] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16972] = 3,
    STATE(615), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [16984] = 4,
    ACTIONS(1446), 1,
      sym_variable_identifier,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [16998] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17012] = 4,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RPAREN2,
    STATE(498), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17026] = 4,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17040] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17054] = 4,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1484), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17068] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17082] = 4,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1488), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17096] = 4,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17110] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17124] = 4,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17138] = 4,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17152] = 4,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1499), 1,
      anon_sym_if,
    STATE(42), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17166] = 3,
    ACTIONS(1503), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17178] = 4,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    ACTIONS(1505), 1,
      anon_sym_if,
    STATE(93), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17192] = 4,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17206] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17220] = 4,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17234] = 4,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_use_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17248] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17262] = 4,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_map_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17276] = 3,
    STATE(592), 1,
      sym_use_namespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1472), 2,
      anon_sym_STAR,
      aux_sym_use_namespace_token1,
  [17288] = 3,
    ACTIONS(1524), 1,
      sym_variable_identifier,
    STATE(547), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17299] = 3,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(1526), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17310] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [17319] = 3,
    ACTIONS(1528), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17330] = 3,
    ACTIONS(1532), 1,
      anon_sym_LBRACE,
    STATE(475), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17341] = 3,
    ACTIONS(1446), 1,
      sym_variable_identifier,
    STATE(527), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17352] = 3,
    ACTIONS(1534), 1,
      anon_sym_SEMI,
    ACTIONS(1536), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1538), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17372] = 3,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    STATE(319), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17383] = 3,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17394] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1540), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [17403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1455), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17412] = 3,
    ACTIONS(1542), 1,
      aux_sym_color_value_token1,
    ACTIONS(1544), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17423] = 3,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17434] = 3,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17445] = 3,
    ACTIONS(1546), 1,
      anon_sym_LPAREN,
    STATE(537), 1,
      sym_use_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17465] = 3,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17476] = 3,
    ACTIONS(1548), 1,
      anon_sym_SEMI,
    ACTIONS(1550), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17487] = 3,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17498] = 3,
    ACTIONS(1544), 1,
      sym_identifier,
    ACTIONS(1552), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17509] = 3,
    ACTIONS(1554), 1,
      anon_sym_LPAREN2,
    STATE(319), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1556), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [17529] = 3,
    ACTIONS(1446), 1,
      sym_variable_identifier,
    STATE(542), 1,
      sym_use_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17540] = 3,
    ACTIONS(1558), 1,
      anon_sym_LPAREN2,
    STATE(393), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1522), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17560] = 3,
    ACTIONS(1560), 1,
      anon_sym_LPAREN2,
    STATE(222), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17571] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1562), 2,
      anon_sym_SEMI,
      anon_sym_as,
  [17580] = 3,
    ACTIONS(1524), 1,
      sym_variable_identifier,
    STATE(526), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17591] = 3,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17602] = 3,
    ACTIONS(1564), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17613] = 3,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17624] = 3,
    ACTIONS(1566), 1,
      anon_sym_LPAREN2,
    STATE(178), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17635] = 3,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17646] = 3,
    ACTIONS(1570), 1,
      anon_sym_COMMA,
    ACTIONS(1572), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1574), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [17666] = 3,
    ACTIONS(1576), 1,
      anon_sym_LPAREN2,
    STATE(145), 1,
      sym_arguments_for_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17677] = 3,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17688] = 2,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17696] = 2,
    ACTIONS(1580), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17704] = 2,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17712] = 2,
    ACTIONS(1582), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17720] = 2,
    ACTIONS(1584), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17728] = 2,
    ACTIONS(1586), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17736] = 2,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17744] = 2,
    ACTIONS(1588), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17752] = 2,
    ACTIONS(1590), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17760] = 2,
    ACTIONS(1592), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17768] = 2,
    ACTIONS(1594), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17776] = 2,
    ACTIONS(1596), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17784] = 2,
    ACTIONS(1598), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17792] = 2,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17800] = 2,
    ACTIONS(1600), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17808] = 2,
    ACTIONS(1602), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17816] = 2,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17824] = 2,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17832] = 2,
    ACTIONS(1604), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17840] = 2,
    ACTIONS(1606), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17848] = 2,
    ACTIONS(1608), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17856] = 2,
    ACTIONS(1610), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17864] = 2,
    ACTIONS(1612), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17872] = 2,
    ACTIONS(1614), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17880] = 2,
    ACTIONS(1616), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17888] = 2,
    ACTIONS(1499), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17896] = 2,
    ACTIONS(1618), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17904] = 2,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17912] = 2,
    ACTIONS(1620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17920] = 2,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17928] = 2,
    ACTIONS(1622), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17936] = 2,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17944] = 2,
    ACTIONS(1624), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17952] = 2,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17960] = 2,
    ACTIONS(1626), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17968] = 2,
    ACTIONS(1628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17976] = 2,
    ACTIONS(1630), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17984] = 2,
    ACTIONS(1548), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [17992] = 2,
    ACTIONS(1632), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18000] = 2,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18008] = 2,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18016] = 2,
    ACTIONS(1634), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18024] = 2,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18032] = 2,
    ACTIONS(1636), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18040] = 2,
    ACTIONS(1638), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18048] = 2,
    ACTIONS(1640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18056] = 2,
    ACTIONS(1534), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18064] = 2,
    ACTIONS(1642), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18072] = 2,
    ACTIONS(1644), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18080] = 2,
    ACTIONS(1646), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18088] = 2,
    ACTIONS(1648), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18096] = 2,
    ACTIONS(1650), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18104] = 2,
    ACTIONS(1080), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18112] = 2,
    ACTIONS(1652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18120] = 2,
    ACTIONS(1654), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18128] = 2,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18136] = 2,
    ACTIONS(1658), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18144] = 2,
    ACTIONS(1660), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18152] = 2,
    ACTIONS(1662), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18160] = 2,
    ACTIONS(1664), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18168] = 2,
    ACTIONS(1666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18176] = 2,
    ACTIONS(1505), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18184] = 2,
    ACTIONS(1668), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18192] = 2,
    ACTIONS(1670), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18200] = 2,
    ACTIONS(1672), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18208] = 2,
    ACTIONS(1674), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18216] = 2,
    ACTIONS(1676), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18224] = 2,
    ACTIONS(1678), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18232] = 2,
    ACTIONS(1680), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18240] = 2,
    ACTIONS(1682), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18248] = 2,
    ACTIONS(1684), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18256] = 2,
    ACTIONS(1686), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18264] = 2,
    ACTIONS(1688), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [18272] = 2,
    ACTIONS(1690), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 52,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 419,
  [SMALL_STATE(23)] = 497,
  [SMALL_STATE(24)] = 545,
  [SMALL_STATE(25)] = 588,
  [SMALL_STATE(26)] = 631,
  [SMALL_STATE(27)] = 674,
  [SMALL_STATE(28)] = 717,
  [SMALL_STATE(29)] = 760,
  [SMALL_STATE(30)] = 802,
  [SMALL_STATE(31)] = 844,
  [SMALL_STATE(32)] = 886,
  [SMALL_STATE(33)] = 928,
  [SMALL_STATE(34)] = 970,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1054,
  [SMALL_STATE(37)] = 1096,
  [SMALL_STATE(38)] = 1138,
  [SMALL_STATE(39)] = 1180,
  [SMALL_STATE(40)] = 1222,
  [SMALL_STATE(41)] = 1264,
  [SMALL_STATE(42)] = 1306,
  [SMALL_STATE(43)] = 1348,
  [SMALL_STATE(44)] = 1390,
  [SMALL_STATE(45)] = 1432,
  [SMALL_STATE(46)] = 1474,
  [SMALL_STATE(47)] = 1516,
  [SMALL_STATE(48)] = 1558,
  [SMALL_STATE(49)] = 1600,
  [SMALL_STATE(50)] = 1642,
  [SMALL_STATE(51)] = 1684,
  [SMALL_STATE(52)] = 1726,
  [SMALL_STATE(53)] = 1768,
  [SMALL_STATE(54)] = 1810,
  [SMALL_STATE(55)] = 1852,
  [SMALL_STATE(56)] = 1894,
  [SMALL_STATE(57)] = 1936,
  [SMALL_STATE(58)] = 1978,
  [SMALL_STATE(59)] = 2020,
  [SMALL_STATE(60)] = 2062,
  [SMALL_STATE(61)] = 2104,
  [SMALL_STATE(62)] = 2146,
  [SMALL_STATE(63)] = 2188,
  [SMALL_STATE(64)] = 2230,
  [SMALL_STATE(65)] = 2272,
  [SMALL_STATE(66)] = 2314,
  [SMALL_STATE(67)] = 2356,
  [SMALL_STATE(68)] = 2398,
  [SMALL_STATE(69)] = 2440,
  [SMALL_STATE(70)] = 2482,
  [SMALL_STATE(71)] = 2524,
  [SMALL_STATE(72)] = 2566,
  [SMALL_STATE(73)] = 2608,
  [SMALL_STATE(74)] = 2650,
  [SMALL_STATE(75)] = 2692,
  [SMALL_STATE(76)] = 2734,
  [SMALL_STATE(77)] = 2776,
  [SMALL_STATE(78)] = 2818,
  [SMALL_STATE(79)] = 2860,
  [SMALL_STATE(80)] = 2902,
  [SMALL_STATE(81)] = 2944,
  [SMALL_STATE(82)] = 2986,
  [SMALL_STATE(83)] = 3028,
  [SMALL_STATE(84)] = 3069,
  [SMALL_STATE(85)] = 3110,
  [SMALL_STATE(86)] = 3151,
  [SMALL_STATE(87)] = 3192,
  [SMALL_STATE(88)] = 3233,
  [SMALL_STATE(89)] = 3274,
  [SMALL_STATE(90)] = 3315,
  [SMALL_STATE(91)] = 3356,
  [SMALL_STATE(92)] = 3397,
  [SMALL_STATE(93)] = 3438,
  [SMALL_STATE(94)] = 3479,
  [SMALL_STATE(95)] = 3520,
  [SMALL_STATE(96)] = 3561,
  [SMALL_STATE(97)] = 3602,
  [SMALL_STATE(98)] = 3643,
  [SMALL_STATE(99)] = 3684,
  [SMALL_STATE(100)] = 3725,
  [SMALL_STATE(101)] = 3766,
  [SMALL_STATE(102)] = 3807,
  [SMALL_STATE(103)] = 3848,
  [SMALL_STATE(104)] = 3889,
  [SMALL_STATE(105)] = 3930,
  [SMALL_STATE(106)] = 3971,
  [SMALL_STATE(107)] = 4044,
  [SMALL_STATE(108)] = 4085,
  [SMALL_STATE(109)] = 4126,
  [SMALL_STATE(110)] = 4167,
  [SMALL_STATE(111)] = 4208,
  [SMALL_STATE(112)] = 4249,
  [SMALL_STATE(113)] = 4290,
  [SMALL_STATE(114)] = 4331,
  [SMALL_STATE(115)] = 4372,
  [SMALL_STATE(116)] = 4413,
  [SMALL_STATE(117)] = 4454,
  [SMALL_STATE(118)] = 4495,
  [SMALL_STATE(119)] = 4536,
  [SMALL_STATE(120)] = 4577,
  [SMALL_STATE(121)] = 4618,
  [SMALL_STATE(122)] = 4659,
  [SMALL_STATE(123)] = 4700,
  [SMALL_STATE(124)] = 4741,
  [SMALL_STATE(125)] = 4782,
  [SMALL_STATE(126)] = 4823,
  [SMALL_STATE(127)] = 4864,
  [SMALL_STATE(128)] = 4905,
  [SMALL_STATE(129)] = 4946,
  [SMALL_STATE(130)] = 5016,
  [SMALL_STATE(131)] = 5086,
  [SMALL_STATE(132)] = 5156,
  [SMALL_STATE(133)] = 5226,
  [SMALL_STATE(134)] = 5296,
  [SMALL_STATE(135)] = 5366,
  [SMALL_STATE(136)] = 5413,
  [SMALL_STATE(137)] = 5454,
  [SMALL_STATE(138)] = 5494,
  [SMALL_STATE(139)] = 5531,
  [SMALL_STATE(140)] = 5568,
  [SMALL_STATE(141)] = 5602,
  [SMALL_STATE(142)] = 5636,
  [SMALL_STATE(143)] = 5670,
  [SMALL_STATE(144)] = 5704,
  [SMALL_STATE(145)] = 5738,
  [SMALL_STATE(146)] = 5772,
  [SMALL_STATE(147)] = 5806,
  [SMALL_STATE(148)] = 5840,
  [SMALL_STATE(149)] = 5874,
  [SMALL_STATE(150)] = 5908,
  [SMALL_STATE(151)] = 5942,
  [SMALL_STATE(152)] = 5976,
  [SMALL_STATE(153)] = 6010,
  [SMALL_STATE(154)] = 6044,
  [SMALL_STATE(155)] = 6078,
  [SMALL_STATE(156)] = 6112,
  [SMALL_STATE(157)] = 6146,
  [SMALL_STATE(158)] = 6183,
  [SMALL_STATE(159)] = 6220,
  [SMALL_STATE(160)] = 6259,
  [SMALL_STATE(161)] = 6295,
  [SMALL_STATE(162)] = 6351,
  [SMALL_STATE(163)] = 6387,
  [SMALL_STATE(164)] = 6424,
  [SMALL_STATE(165)] = 6481,
  [SMALL_STATE(166)] = 6514,
  [SMALL_STATE(167)] = 6571,
  [SMALL_STATE(168)] = 6628,
  [SMALL_STATE(169)] = 6685,
  [SMALL_STATE(170)] = 6718,
  [SMALL_STATE(171)] = 6761,
  [SMALL_STATE(172)] = 6794,
  [SMALL_STATE(173)] = 6851,
  [SMALL_STATE(174)] = 6910,
  [SMALL_STATE(175)] = 6943,
  [SMALL_STATE(176)] = 6986,
  [SMALL_STATE(177)] = 7019,
  [SMALL_STATE(178)] = 7076,
  [SMALL_STATE(179)] = 7109,
  [SMALL_STATE(180)] = 7142,
  [SMALL_STATE(181)] = 7175,
  [SMALL_STATE(182)] = 7232,
  [SMALL_STATE(183)] = 7289,
  [SMALL_STATE(184)] = 7322,
  [SMALL_STATE(185)] = 7355,
  [SMALL_STATE(186)] = 7388,
  [SMALL_STATE(187)] = 7423,
  [SMALL_STATE(188)] = 7456,
  [SMALL_STATE(189)] = 7489,
  [SMALL_STATE(190)] = 7522,
  [SMALL_STATE(191)] = 7579,
  [SMALL_STATE(192)] = 7612,
  [SMALL_STATE(193)] = 7645,
  [SMALL_STATE(194)] = 7702,
  [SMALL_STATE(195)] = 7735,
  [SMALL_STATE(196)] = 7787,
  [SMALL_STATE(197)] = 7843,
  [SMALL_STATE(198)] = 7877,
  [SMALL_STATE(199)] = 7933,
  [SMALL_STATE(200)] = 7989,
  [SMALL_STATE(201)] = 8045,
  [SMALL_STATE(202)] = 8101,
  [SMALL_STATE(203)] = 8153,
  [SMALL_STATE(204)] = 8205,
  [SMALL_STATE(205)] = 8261,
  [SMALL_STATE(206)] = 8299,
  [SMALL_STATE(207)] = 8355,
  [SMALL_STATE(208)] = 8407,
  [SMALL_STATE(209)] = 8452,
  [SMALL_STATE(210)] = 8497,
  [SMALL_STATE(211)] = 8548,
  [SMALL_STATE(212)] = 8593,
  [SMALL_STATE(213)] = 8638,
  [SMALL_STATE(214)] = 8689,
  [SMALL_STATE(215)] = 8734,
  [SMALL_STATE(216)] = 8779,
  [SMALL_STATE(217)] = 8830,
  [SMALL_STATE(218)] = 8880,
  [SMALL_STATE(219)] = 8930,
  [SMALL_STATE(220)] = 8958,
  [SMALL_STATE(221)] = 8986,
  [SMALL_STATE(222)] = 9036,
  [SMALL_STATE(223)] = 9064,
  [SMALL_STATE(224)] = 9092,
  [SMALL_STATE(225)] = 9120,
  [SMALL_STATE(226)] = 9148,
  [SMALL_STATE(227)] = 9176,
  [SMALL_STATE(228)] = 9204,
  [SMALL_STATE(229)] = 9254,
  [SMALL_STATE(230)] = 9304,
  [SMALL_STATE(231)] = 9354,
  [SMALL_STATE(232)] = 9404,
  [SMALL_STATE(233)] = 9432,
  [SMALL_STATE(234)] = 9460,
  [SMALL_STATE(235)] = 9488,
  [SMALL_STATE(236)] = 9516,
  [SMALL_STATE(237)] = 9566,
  [SMALL_STATE(238)] = 9616,
  [SMALL_STATE(239)] = 9666,
  [SMALL_STATE(240)] = 9716,
  [SMALL_STATE(241)] = 9766,
  [SMALL_STATE(242)] = 9794,
  [SMALL_STATE(243)] = 9822,
  [SMALL_STATE(244)] = 9872,
  [SMALL_STATE(245)] = 9922,
  [SMALL_STATE(246)] = 9950,
  [SMALL_STATE(247)] = 9978,
  [SMALL_STATE(248)] = 10028,
  [SMALL_STATE(249)] = 10078,
  [SMALL_STATE(250)] = 10106,
  [SMALL_STATE(251)] = 10156,
  [SMALL_STATE(252)] = 10206,
  [SMALL_STATE(253)] = 10238,
  [SMALL_STATE(254)] = 10285,
  [SMALL_STATE(255)] = 10316,
  [SMALL_STATE(256)] = 10363,
  [SMALL_STATE(257)] = 10410,
  [SMALL_STATE(258)] = 10457,
  [SMALL_STATE(259)] = 10504,
  [SMALL_STATE(260)] = 10551,
  [SMALL_STATE(261)] = 10595,
  [SMALL_STATE(262)] = 10639,
  [SMALL_STATE(263)] = 10683,
  [SMALL_STATE(264)] = 10727,
  [SMALL_STATE(265)] = 10771,
  [SMALL_STATE(266)] = 10815,
  [SMALL_STATE(267)] = 10859,
  [SMALL_STATE(268)] = 10887,
  [SMALL_STATE(269)] = 10915,
  [SMALL_STATE(270)] = 10959,
  [SMALL_STATE(271)] = 11003,
  [SMALL_STATE(272)] = 11047,
  [SMALL_STATE(273)] = 11091,
  [SMALL_STATE(274)] = 11135,
  [SMALL_STATE(275)] = 11179,
  [SMALL_STATE(276)] = 11223,
  [SMALL_STATE(277)] = 11267,
  [SMALL_STATE(278)] = 11311,
  [SMALL_STATE(279)] = 11355,
  [SMALL_STATE(280)] = 11399,
  [SMALL_STATE(281)] = 11425,
  [SMALL_STATE(282)] = 11469,
  [SMALL_STATE(283)] = 11513,
  [SMALL_STATE(284)] = 11557,
  [SMALL_STATE(285)] = 11601,
  [SMALL_STATE(286)] = 11645,
  [SMALL_STATE(287)] = 11689,
  [SMALL_STATE(288)] = 11733,
  [SMALL_STATE(289)] = 11777,
  [SMALL_STATE(290)] = 11821,
  [SMALL_STATE(291)] = 11865,
  [SMALL_STATE(292)] = 11909,
  [SMALL_STATE(293)] = 11953,
  [SMALL_STATE(294)] = 11997,
  [SMALL_STATE(295)] = 12041,
  [SMALL_STATE(296)] = 12085,
  [SMALL_STATE(297)] = 12129,
  [SMALL_STATE(298)] = 12173,
  [SMALL_STATE(299)] = 12217,
  [SMALL_STATE(300)] = 12261,
  [SMALL_STATE(301)] = 12305,
  [SMALL_STATE(302)] = 12349,
  [SMALL_STATE(303)] = 12393,
  [SMALL_STATE(304)] = 12437,
  [SMALL_STATE(305)] = 12481,
  [SMALL_STATE(306)] = 12525,
  [SMALL_STATE(307)] = 12569,
  [SMALL_STATE(308)] = 12613,
  [SMALL_STATE(309)] = 12657,
  [SMALL_STATE(310)] = 12685,
  [SMALL_STATE(311)] = 12713,
  [SMALL_STATE(312)] = 12757,
  [SMALL_STATE(313)] = 12782,
  [SMALL_STATE(314)] = 12807,
  [SMALL_STATE(315)] = 12832,
  [SMALL_STATE(316)] = 12857,
  [SMALL_STATE(317)] = 12882,
  [SMALL_STATE(318)] = 12907,
  [SMALL_STATE(319)] = 12932,
  [SMALL_STATE(320)] = 12957,
  [SMALL_STATE(321)] = 12982,
  [SMALL_STATE(322)] = 13007,
  [SMALL_STATE(323)] = 13032,
  [SMALL_STATE(324)] = 13057,
  [SMALL_STATE(325)] = 13082,
  [SMALL_STATE(326)] = 13107,
  [SMALL_STATE(327)] = 13132,
  [SMALL_STATE(328)] = 13157,
  [SMALL_STATE(329)] = 13185,
  [SMALL_STATE(330)] = 13213,
  [SMALL_STATE(331)] = 13236,
  [SMALL_STATE(332)] = 13261,
  [SMALL_STATE(333)] = 13296,
  [SMALL_STATE(334)] = 13323,
  [SMALL_STATE(335)] = 13346,
  [SMALL_STATE(336)] = 13371,
  [SMALL_STATE(337)] = 13406,
  [SMALL_STATE(338)] = 13431,
  [SMALL_STATE(339)] = 13455,
  [SMALL_STATE(340)] = 13479,
  [SMALL_STATE(341)] = 13503,
  [SMALL_STATE(342)] = 13525,
  [SMALL_STATE(343)] = 13547,
  [SMALL_STATE(344)] = 13569,
  [SMALL_STATE(345)] = 13591,
  [SMALL_STATE(346)] = 13615,
  [SMALL_STATE(347)] = 13637,
  [SMALL_STATE(348)] = 13659,
  [SMALL_STATE(349)] = 13681,
  [SMALL_STATE(350)] = 13703,
  [SMALL_STATE(351)] = 13725,
  [SMALL_STATE(352)] = 13753,
  [SMALL_STATE(353)] = 13795,
  [SMALL_STATE(354)] = 13817,
  [SMALL_STATE(355)] = 13839,
  [SMALL_STATE(356)] = 13881,
  [SMALL_STATE(357)] = 13903,
  [SMALL_STATE(358)] = 13925,
  [SMALL_STATE(359)] = 13949,
  [SMALL_STATE(360)] = 13973,
  [SMALL_STATE(361)] = 13995,
  [SMALL_STATE(362)] = 14017,
  [SMALL_STATE(363)] = 14039,
  [SMALL_STATE(364)] = 14063,
  [SMALL_STATE(365)] = 14085,
  [SMALL_STATE(366)] = 14106,
  [SMALL_STATE(367)] = 14143,
  [SMALL_STATE(368)] = 14164,
  [SMALL_STATE(369)] = 14189,
  [SMALL_STATE(370)] = 14212,
  [SMALL_STATE(371)] = 14233,
  [SMALL_STATE(372)] = 14256,
  [SMALL_STATE(373)] = 14277,
  [SMALL_STATE(374)] = 14302,
  [SMALL_STATE(375)] = 14327,
  [SMALL_STATE(376)] = 14352,
  [SMALL_STATE(377)] = 14373,
  [SMALL_STATE(378)] = 14396,
  [SMALL_STATE(379)] = 14417,
  [SMALL_STATE(380)] = 14438,
  [SMALL_STATE(381)] = 14459,
  [SMALL_STATE(382)] = 14480,
  [SMALL_STATE(383)] = 14505,
  [SMALL_STATE(384)] = 14530,
  [SMALL_STATE(385)] = 14555,
  [SMALL_STATE(386)] = 14576,
  [SMALL_STATE(387)] = 14599,
  [SMALL_STATE(388)] = 14620,
  [SMALL_STATE(389)] = 14641,
  [SMALL_STATE(390)] = 14662,
  [SMALL_STATE(391)] = 14687,
  [SMALL_STATE(392)] = 14710,
  [SMALL_STATE(393)] = 14735,
  [SMALL_STATE(394)] = 14756,
  [SMALL_STATE(395)] = 14777,
  [SMALL_STATE(396)] = 14802,
  [SMALL_STATE(397)] = 14827,
  [SMALL_STATE(398)] = 14848,
  [SMALL_STATE(399)] = 14869,
  [SMALL_STATE(400)] = 14892,
  [SMALL_STATE(401)] = 14915,
  [SMALL_STATE(402)] = 14940,
  [SMALL_STATE(403)] = 14965,
  [SMALL_STATE(404)] = 14986,
  [SMALL_STATE(405)] = 15011,
  [SMALL_STATE(406)] = 15036,
  [SMALL_STATE(407)] = 15061,
  [SMALL_STATE(408)] = 15086,
  [SMALL_STATE(409)] = 15107,
  [SMALL_STATE(410)] = 15128,
  [SMALL_STATE(411)] = 15153,
  [SMALL_STATE(412)] = 15190,
  [SMALL_STATE(413)] = 15216,
  [SMALL_STATE(414)] = 15238,
  [SMALL_STATE(415)] = 15260,
  [SMALL_STATE(416)] = 15282,
  [SMALL_STATE(417)] = 15304,
  [SMALL_STATE(418)] = 15326,
  [SMALL_STATE(419)] = 15352,
  [SMALL_STATE(420)] = 15374,
  [SMALL_STATE(421)] = 15396,
  [SMALL_STATE(422)] = 15418,
  [SMALL_STATE(423)] = 15444,
  [SMALL_STATE(424)] = 15466,
  [SMALL_STATE(425)] = 15488,
  [SMALL_STATE(426)] = 15510,
  [SMALL_STATE(427)] = 15536,
  [SMALL_STATE(428)] = 15558,
  [SMALL_STATE(429)] = 15594,
  [SMALL_STATE(430)] = 15616,
  [SMALL_STATE(431)] = 15638,
  [SMALL_STATE(432)] = 15660,
  [SMALL_STATE(433)] = 15682,
  [SMALL_STATE(434)] = 15708,
  [SMALL_STATE(435)] = 15734,
  [SMALL_STATE(436)] = 15760,
  [SMALL_STATE(437)] = 15786,
  [SMALL_STATE(438)] = 15808,
  [SMALL_STATE(439)] = 15841,
  [SMALL_STATE(440)] = 15859,
  [SMALL_STATE(441)] = 15884,
  [SMALL_STATE(442)] = 15909,
  [SMALL_STATE(443)] = 15934,
  [SMALL_STATE(444)] = 15959,
  [SMALL_STATE(445)] = 15984,
  [SMALL_STATE(446)] = 16008,
  [SMALL_STATE(447)] = 16024,
  [SMALL_STATE(448)] = 16048,
  [SMALL_STATE(449)] = 16064,
  [SMALL_STATE(450)] = 16085,
  [SMALL_STATE(451)] = 16098,
  [SMALL_STATE(452)] = 16111,
  [SMALL_STATE(453)] = 16124,
  [SMALL_STATE(454)] = 16137,
  [SMALL_STATE(455)] = 16160,
  [SMALL_STATE(456)] = 16173,
  [SMALL_STATE(457)] = 16186,
  [SMALL_STATE(458)] = 16209,
  [SMALL_STATE(459)] = 16230,
  [SMALL_STATE(460)] = 16248,
  [SMALL_STATE(461)] = 16268,
  [SMALL_STATE(462)] = 16282,
  [SMALL_STATE(463)] = 16300,
  [SMALL_STATE(464)] = 16320,
  [SMALL_STATE(465)] = 16340,
  [SMALL_STATE(466)] = 16360,
  [SMALL_STATE(467)] = 16375,
  [SMALL_STATE(468)] = 16390,
  [SMALL_STATE(469)] = 16405,
  [SMALL_STATE(470)] = 16416,
  [SMALL_STATE(471)] = 16431,
  [SMALL_STATE(472)] = 16448,
  [SMALL_STATE(473)] = 16465,
  [SMALL_STATE(474)] = 16476,
  [SMALL_STATE(475)] = 16487,
  [SMALL_STATE(476)] = 16498,
  [SMALL_STATE(477)] = 16513,
  [SMALL_STATE(478)] = 16530,
  [SMALL_STATE(479)] = 16545,
  [SMALL_STATE(480)] = 16560,
  [SMALL_STATE(481)] = 16575,
  [SMALL_STATE(482)] = 16590,
  [SMALL_STATE(483)] = 16605,
  [SMALL_STATE(484)] = 16620,
  [SMALL_STATE(485)] = 16637,
  [SMALL_STATE(486)] = 16654,
  [SMALL_STATE(487)] = 16671,
  [SMALL_STATE(488)] = 16686,
  [SMALL_STATE(489)] = 16701,
  [SMALL_STATE(490)] = 16716,
  [SMALL_STATE(491)] = 16731,
  [SMALL_STATE(492)] = 16748,
  [SMALL_STATE(493)] = 16765,
  [SMALL_STATE(494)] = 16778,
  [SMALL_STATE(495)] = 16792,
  [SMALL_STATE(496)] = 16806,
  [SMALL_STATE(497)] = 16820,
  [SMALL_STATE(498)] = 16832,
  [SMALL_STATE(499)] = 16846,
  [SMALL_STATE(500)] = 16860,
  [SMALL_STATE(501)] = 16874,
  [SMALL_STATE(502)] = 16888,
  [SMALL_STATE(503)] = 16902,
  [SMALL_STATE(504)] = 16916,
  [SMALL_STATE(505)] = 16930,
  [SMALL_STATE(506)] = 16944,
  [SMALL_STATE(507)] = 16958,
  [SMALL_STATE(508)] = 16972,
  [SMALL_STATE(509)] = 16984,
  [SMALL_STATE(510)] = 16998,
  [SMALL_STATE(511)] = 17012,
  [SMALL_STATE(512)] = 17026,
  [SMALL_STATE(513)] = 17040,
  [SMALL_STATE(514)] = 17054,
  [SMALL_STATE(515)] = 17068,
  [SMALL_STATE(516)] = 17082,
  [SMALL_STATE(517)] = 17096,
  [SMALL_STATE(518)] = 17110,
  [SMALL_STATE(519)] = 17124,
  [SMALL_STATE(520)] = 17138,
  [SMALL_STATE(521)] = 17152,
  [SMALL_STATE(522)] = 17166,
  [SMALL_STATE(523)] = 17178,
  [SMALL_STATE(524)] = 17192,
  [SMALL_STATE(525)] = 17206,
  [SMALL_STATE(526)] = 17220,
  [SMALL_STATE(527)] = 17234,
  [SMALL_STATE(528)] = 17248,
  [SMALL_STATE(529)] = 17262,
  [SMALL_STATE(530)] = 17276,
  [SMALL_STATE(531)] = 17288,
  [SMALL_STATE(532)] = 17299,
  [SMALL_STATE(533)] = 17310,
  [SMALL_STATE(534)] = 17319,
  [SMALL_STATE(535)] = 17330,
  [SMALL_STATE(536)] = 17341,
  [SMALL_STATE(537)] = 17352,
  [SMALL_STATE(538)] = 17363,
  [SMALL_STATE(539)] = 17372,
  [SMALL_STATE(540)] = 17383,
  [SMALL_STATE(541)] = 17394,
  [SMALL_STATE(542)] = 17403,
  [SMALL_STATE(543)] = 17412,
  [SMALL_STATE(544)] = 17423,
  [SMALL_STATE(545)] = 17434,
  [SMALL_STATE(546)] = 17445,
  [SMALL_STATE(547)] = 17456,
  [SMALL_STATE(548)] = 17465,
  [SMALL_STATE(549)] = 17476,
  [SMALL_STATE(550)] = 17487,
  [SMALL_STATE(551)] = 17498,
  [SMALL_STATE(552)] = 17509,
  [SMALL_STATE(553)] = 17520,
  [SMALL_STATE(554)] = 17529,
  [SMALL_STATE(555)] = 17540,
  [SMALL_STATE(556)] = 17551,
  [SMALL_STATE(557)] = 17560,
  [SMALL_STATE(558)] = 17571,
  [SMALL_STATE(559)] = 17580,
  [SMALL_STATE(560)] = 17591,
  [SMALL_STATE(561)] = 17602,
  [SMALL_STATE(562)] = 17613,
  [SMALL_STATE(563)] = 17624,
  [SMALL_STATE(564)] = 17635,
  [SMALL_STATE(565)] = 17646,
  [SMALL_STATE(566)] = 17657,
  [SMALL_STATE(567)] = 17666,
  [SMALL_STATE(568)] = 17677,
  [SMALL_STATE(569)] = 17688,
  [SMALL_STATE(570)] = 17696,
  [SMALL_STATE(571)] = 17704,
  [SMALL_STATE(572)] = 17712,
  [SMALL_STATE(573)] = 17720,
  [SMALL_STATE(574)] = 17728,
  [SMALL_STATE(575)] = 17736,
  [SMALL_STATE(576)] = 17744,
  [SMALL_STATE(577)] = 17752,
  [SMALL_STATE(578)] = 17760,
  [SMALL_STATE(579)] = 17768,
  [SMALL_STATE(580)] = 17776,
  [SMALL_STATE(581)] = 17784,
  [SMALL_STATE(582)] = 17792,
  [SMALL_STATE(583)] = 17800,
  [SMALL_STATE(584)] = 17808,
  [SMALL_STATE(585)] = 17816,
  [SMALL_STATE(586)] = 17824,
  [SMALL_STATE(587)] = 17832,
  [SMALL_STATE(588)] = 17840,
  [SMALL_STATE(589)] = 17848,
  [SMALL_STATE(590)] = 17856,
  [SMALL_STATE(591)] = 17864,
  [SMALL_STATE(592)] = 17872,
  [SMALL_STATE(593)] = 17880,
  [SMALL_STATE(594)] = 17888,
  [SMALL_STATE(595)] = 17896,
  [SMALL_STATE(596)] = 17904,
  [SMALL_STATE(597)] = 17912,
  [SMALL_STATE(598)] = 17920,
  [SMALL_STATE(599)] = 17928,
  [SMALL_STATE(600)] = 17936,
  [SMALL_STATE(601)] = 17944,
  [SMALL_STATE(602)] = 17952,
  [SMALL_STATE(603)] = 17960,
  [SMALL_STATE(604)] = 17968,
  [SMALL_STATE(605)] = 17976,
  [SMALL_STATE(606)] = 17984,
  [SMALL_STATE(607)] = 17992,
  [SMALL_STATE(608)] = 18000,
  [SMALL_STATE(609)] = 18008,
  [SMALL_STATE(610)] = 18016,
  [SMALL_STATE(611)] = 18024,
  [SMALL_STATE(612)] = 18032,
  [SMALL_STATE(613)] = 18040,
  [SMALL_STATE(614)] = 18048,
  [SMALL_STATE(615)] = 18056,
  [SMALL_STATE(616)] = 18064,
  [SMALL_STATE(617)] = 18072,
  [SMALL_STATE(618)] = 18080,
  [SMALL_STATE(619)] = 18088,
  [SMALL_STATE(620)] = 18096,
  [SMALL_STATE(621)] = 18104,
  [SMALL_STATE(622)] = 18112,
  [SMALL_STATE(623)] = 18120,
  [SMALL_STATE(624)] = 18128,
  [SMALL_STATE(625)] = 18136,
  [SMALL_STATE(626)] = 18144,
  [SMALL_STATE(627)] = 18152,
  [SMALL_STATE(628)] = 18160,
  [SMALL_STATE(629)] = 18168,
  [SMALL_STATE(630)] = 18176,
  [SMALL_STATE(631)] = 18184,
  [SMALL_STATE(632)] = 18192,
  [SMALL_STATE(633)] = 18200,
  [SMALL_STATE(634)] = 18208,
  [SMALL_STATE(635)] = 18216,
  [SMALL_STATE(636)] = 18224,
  [SMALL_STATE(637)] = 18232,
  [SMALL_STATE(638)] = 18240,
  [SMALL_STATE(639)] = 18248,
  [SMALL_STATE(640)] = 18256,
  [SMALL_STATE(641)] = 18264,
  [SMALL_STATE(642)] = 18272,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(272),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(436),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(266),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(486),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(632),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(435),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(278),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(354),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(279),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(221),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(629),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(628),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(627),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(626),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(285),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(625),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(623),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(289),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(622),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(296),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(297),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(331),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(621),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(619),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(618),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(612),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(352),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(379),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(570),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(332),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(433),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(491),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(614),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(434),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(354),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(629),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(616),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(617),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(304),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(638),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(642),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(303),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(620),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(299),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(291),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(287),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(286),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(621),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(619),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(618),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(612),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(352),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(370),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(634),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(336),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(594),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(630),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 23),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 28),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 28),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 27),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 27),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_statement, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_statement, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 7),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 7),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 21),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 21),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 5),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 18),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 4),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_for_url, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_for_url, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_value, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_value, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(311),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(247),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(574),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(147),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(567),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(147),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 1),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_allowed_in_url_function, 1, .production_id = 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 18),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression_allowed_in_url_function, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(239),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(581),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(163),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(187),
  [880] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(162),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(160),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(563),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(159),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_for_url_repeat1, 2), SHIFT_REPEAT(169),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(247),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(574),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(147),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(139),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(138),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(567),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(137),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(156),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_statement_repeat1, 2), SHIFT_REPEAT(147),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, .dynamic_precedence = 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, .dynamic_precedence = 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, .dynamic_precedence = 1),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 26),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(284),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 17),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameter, 3),
  [1243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(292),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 25),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_pair, 3, .production_id = 20),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_annotation, 1),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_annotation, 1),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(637),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(535),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(532),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 24),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(422),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_for_url_repeat2, 2), SHIFT_REPEAT(253),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(255),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(531),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(258),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2), SHIFT_REPEAT(554),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_parameters_repeat1, 2),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(211),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2), SHIFT_REPEAT(257),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_value_repeat1, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 4),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 18),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 5),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_parameters, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_selector, 2, .production_id = 22),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1630] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace, 1),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
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
