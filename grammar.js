module.exports = grammar({
  name: "scss",

  extras: ($) => [/\s/, $.comment, $.single_line_comment],

  externals: ($) => [$._descendant_operator],

  conflicts: ($) => [
    [$.parenthesized_value, $.map_value],
    [$._selector, $.declaration],
    [$._selector, $._value],
  ],

  precedences: $ => [
    ['map_value', 'parenthesized_value'],
    ['map_pair', 'parenthesized_value']
  ],

  inline: ($) => [$._top_level_item, $._block_item],

  rules: {
    stylesheet: ($) => repeat($._top_level_item),

    _top_level_item: ($) =>
      choice(
        $.declaration,
        $.rule_set,
        $.import_statement,
        $.media_statement,
        $.charset_statement,
        $.namespace_statement,
        $.keyframes_statement,
        $.supports_statement,
        $.use_statement,
        $.forward_statement,
        $.apply_statement,
        $.mixin_statement,
        $.include_statement,
        $.if_statement,
        $.each_statement,
        $.for_statement,
        $.while_statement,
        $.function_statement,
        $.error_statement,
        $.warn_statement,
        $.debug_statement,
        $.at_rule,
        $.placeholder
      ),

    // Statements

    import_statement: ($) => seq("@import", $._value, sep(",", $._query), ";"),

    media_statement: ($) => seq("@media", sep1(",", $._query), $.block),

    charset_statement: ($) => seq("@charset", $._value, ";"),

    namespace_statement: ($) =>
      seq(
        "@namespace",
        optional(alias($.identifier, $.namespace_name)),
        choice($.string_value, $.call_expression),
        ";"
      ),

    keyframes_statement: ($) =>
      seq(
        choice("@keyframes", alias(/@[-a-z]+keyframes/, $.at_keyword)),
        alias($.identifier, $.keyframes_name),
        $.keyframe_block_list
      ),

    keyframe_block_list: ($) => seq("{", repeat($.keyframe_block), "}"),

    keyframe_block: ($) => seq(choice($.from, $.to, $.integer_value), $.block),

    from: ($) => "from",
    to: ($) => "to",

    supports_statement: ($) => seq("@supports", $._query, $.block),

    at_rule: ($) => seq($.at_keyword, sep(",", $._query), choice(";", $.block)),

    use_statement: ($) =>
      seq(
        "@use",
        $._value,
        optional(
          seq('with', $.use_parameters)
        ),
        optional(
          seq('as', $.use_namespace)
        ),
        ";"
      ),

    use_namespace: ($) =>
      choice("*",
        // TODO: By experimentation, a `@use` namespace name can contain any
        // word character, even if it's not ASCII. But expressing Unicode
        // ranges in the regex seems to hang Tree-sitter.
        //
        // First character can be any word character, an underscore, or a
        // hyphen. All other characters can be any of the above _or_ a digit.
        /[\w_-][\w\d_-]*/
      ),

    // TODO: Should `use_parameters` be aliased to `forward_parameters`?
    // Inclined to say no because the semantics of `@forward` are identical to
    // those of `@use`, so it feels like busywork for the consumer.
    forward_statement: ($) =>
      seq(
        "@forward",
        $._value,
        optional(
          seq('with', $.use_parameters)
        ),
        optional(
          seq('as', $.use_namespace)
        ),
        ";"
      ),

    apply_statement: ($) => seq("@apply", repeat($._value), ";"),

    parameters: ($) => seq("(", sep1(",", $.parameter), ")"),

    parameter: ($) =>
      seq(
        alias($.variable_identifier, $.variable_name),
        optional(seq(":", alias($._value, $.default_value)))
      ),

    use_parameters: ($) => seq("(", sep1(",", $.use_parameter), optional(","), ")"),

    // A `@use` at-rule can take a configuration block. It's like an ordinary
    // parameter, but it must specify a value after a colon.
    use_parameter: ($) => (
      seq(
        alias($.variable_identifier, $.variable_name),
        ':',
        $._value
      )
    ),

    mixin_statement: ($) =>
      seq("@mixin", alias($.identifier, $.name), optional($.parameters), $.block),

    include_statement: ($) =>
      seq(
        "@include",
        $.identifier,
        optional(alias($.include_arguments, $.arguments)),
        choice($.block, ";")
      ),

    include_arguments: ($) =>
      seq(
        token.immediate("("),
        sep1(",", alias($.include_argument, $.argument)),
        token.immediate(")")
      ),

    include_argument: ($) =>
      seq(
        optional(seq(alias($.variable_identifier, $.argument_name), ":")),
        alias($._value, $.argument_value)
      ),

    placeholder_declaration_selector: ($) => (
      seq(
        "%",
        alias($.identifier, $.placeholder_name)
      )
    ),

    placeholder: ($) => (
      seq(
        alias($.placeholder_declaration_selector, $.placeholder_selector),
        $.block
      )
    ),

    extend_statement: ($) =>
      seq(
        "@extend",
        choice($._value, $.class_selector, $.placeholder_selector),
        ";"
      ),

    if_statement: ($) => seq($.if_clause, repeat($.else_if_clause), optional($.else_clause)),

    if_clause: ($) => seq("@if", alias($._value, $.condition), $.block),

    else_if_clause: ($) => seq("@else", "if", alias($._value, $.condition), $.block),

    else_clause: ($) => seq("@else", $.block),

    each_statement: ($) =>
      seq(
        "@each",
        optional(seq(alias($.variable_identifier, $.key), ",")),
        alias($.variable_identifier, $.value),
        "in",
        $._value,
        $.block
      ),

    for_statement: ($) =>
      seq(
        "@for",
        alias($.variable_identifier, $.variable),
        "from",
        alias($._value, $.from),
        "through",
        alias($._value, $.through),
        $.block
      ),

    while_statement: ($) => seq("@while", $._value, $.block),

    function_statement: ($) =>
      seq("@function", alias($.identifier, $.name), optional($.parameters), $.block),

    return_statement: ($) => seq("@return", $._value, ";"),

    at_root_statement: ($) => seq("@at-root", $._value, $.block),

    error_statement: ($) => seq("@error", $._value, ";"),

    warn_statement: ($) => seq("@warn", $._value, ";"),

    debug_statement: ($) => seq("@debug", $._value, ";"),

    // Rule sets

    rule_set: ($) => seq($.selectors, $.block),

    selectors: ($) => sep1(",", $._selector),

    block: ($) =>
      seq("{", repeat($._block_item), optional(alias($.last_declaration, $.declaration)), "}"),

    _block_item: ($) =>
      choice(
        $.declaration,
        $.rule_set,
        $.import_statement,
        $.media_statement,
        $.charset_statement,
        $.namespace_statement,
        $.keyframes_statement,
        $.supports_statement,
        $.mixin_statement,
        $.include_statement,
        $.extend_statement,
        $.if_statement,
        $.each_statement,
        $.for_statement,
        $.while_statement,
        $.function_statement,
        $.return_statement,
        $.at_root_statement,
        $.error_statement,
        $.warn_statement,
        $.debug_statement,
        $.at_rule
      ),

    // Selectors

    _selector: ($) =>
      choice(
        $.universal_selector,
        alias($.identifier, $.tag_name),
        $.class_selector,
        $.nesting_selector,
        $.pseudo_class_selector,
        $.pseudo_element_selector,
        $.id_selector,
        $.attribute_selector,
        $.string_value,
        $.child_selector,
        $.descendant_selector,
        $.sibling_selector,
        $.adjacent_sibling_selector
      ),

    nesting_selector: ($) => "&",

    universal_selector: ($) => "*",

    placeholder_selector: ($) =>
      prec(
        1,
        seq(
          '%',
          alias($.identifier, $.placeholder_name)
        )
      ),

    class_selector: ($) =>
      prec(1, seq(optional($._selector), choice(".", $.nesting_selector), alias($.identifier, $.class_name))),

    pseudo_class_selector: ($) =>
      seq(
        optional($._selector),
        ":",
        alias($.identifier, $.class_name),
        optional(alias($.pseudo_class_arguments, $.arguments))
      ),

    pseudo_element_selector: ($) =>
      seq(optional($._selector), "::", alias($.identifier, $.tag_name)),

    id_selector: ($) => seq(optional($._selector), "#", alias($.identifier, $.id_name)),

    attribute_selector: ($) =>
      seq(
        optional($._selector),
        "[",
        alias($.identifier, $.attribute_name),
        optional(seq(choice("=", "~=", "^=", "|=", "*=", "$="), $._value)),
        "]"
      ),

    child_selector: ($) => prec.left(seq($._selector, ">", $._selector)),

    descendant_selector: ($) => prec.left(seq($._selector, $._descendant_operator, $._selector)),

    sibling_selector: ($) => prec.left(seq($._selector, "~", $._selector)),

    adjacent_sibling_selector: ($) => prec.left(seq($._selector, "+", $._selector)),

    pseudo_class_arguments: ($) =>
      seq(
        token.immediate("("),
        sep(
          ",",
          choice(
            prec.dynamic(1, $._selector),
            repeat1($._value)
          )
        ),
        ")"
      ),

    // Declarations

    scope_annotation: ($) => choice("local", "global"),

    declaration: ($) =>
      choice(
        // Variable
        seq(
          alias($.variable_identifier, $.variable_name),
          ':',
          optional($.scope_annotation),
          $._value,
          repeat(seq(optional(","), $._value)),
          optional($.default),
          ';'
        ),
        // Property
        seq(
          alias($.identifier, $.property_name),
          ':',
          $._value,
          repeat(seq(optional(","), $._value)),
          optional($.important),
          ';'
        )
      ),

    // Only seems to be used to declare properties and not variables.
    last_declaration: ($) =>
      prec(
        1,
        seq(
          alias($.identifier, $.property_name),
          ":",
          $._value,
          repeat(seq(optional(","), $._value)),
          optional($.important)
        )
      ),

    important: ($) => "!important",
    default: ($) => "!default",

    // Media queries

    _query: ($) =>
      choice(
        alias($.identifier, $.keyword_query),
        $.feature_query,
        $.binary_query,
        $.unary_query,
        $.selector_query,
        $.parenthesized_query
      ),

    feature_query: ($) =>
      seq("(", alias($.identifier, $.feature_name), ":", repeat1($._value), ")"),

    parenthesized_query: ($) => seq("(", $._query, ")"),

    binary_query: ($) => prec.left(seq($._query, choice("and", "or"), $._query)),

    unary_query: ($) => prec(1, seq(choice("not", "only"), $._query)),

    selector_query: ($) => seq("selector", "(", $._selector, ")"),

    // Property Values

    _value: ($) =>
      prec(
        -1,
        choice(
          alias($.identifier, $.plain_value),
          alias($.variable_identifier, $.variable_value),
          $.boolean_value,
          $.null_value,
          $.plain_value,
          $.color_value,
          $.integer_value,
          $.float_value,
          $.string_value,
          $.binary_expression,
          $.map_value,
          $.parenthesized_value,
          $.call_expression
        )
      ),

    // Since a `url` function allows a greater breadth of unquoted characters
    // than would be allowed in any other context, we need a version of
    // `_value` that is allowed to exist inside of `url`. Lots of these would
    // be nonsensical, but they still compile.
    _value_allowed_in_url_function: ($) =>
      choice(
        alias($.identifier, $.plain_value),
        alias($.variable_identifier, $.variable_value),
        $.boolean_value,
        $.null_value,
        alias($.unquoted_string_value, $.plain_value),
        $.color_value,
        $.integer_value,
        $.float_value,
        $.string_value,
        alias($.binary_expression_allowed_in_url_function, $.binary_expression),
        $.map_value,
        $.parenthesized_value,
        $.call_expression
      ),

    boolean_value: ($) => choice("true", "false"),
    null_value: ($) => "null",

    parenthesized_value: ($) => seq("(", $._value, ")"),

    map_value: ($) => seq("(", sep(',', $.map_pair), ")"),

    map_pair: ($) => prec(2,
      seq(
        field('key', $._value),
        ':',
        field('value', $._value)
      )
    ),

    color_value: ($) => seq("#", token.immediate(/[0-9a-fA-F]{3,8}/)),

    string_value: ($) =>
      token(choice(seq("'", /([^'\n]|\\(.|\n))*/, "'"), seq('"', /([^"\n]|\\(.|\n))*/, '"'))),

    // Only used in certain places where SCSS will tolerate an unquoted string
    // that would normally be ambiguous, like a URL.
    //
    // Very similar to `plain_value`, but explicitly allows colons.
    unquoted_string_value: ($) => (
      token(
        seq(
          repeat(
            choice(
              /[-_]/,
              /\/[^\*\s,;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          ),
          /[a-zA-Z]/,
          repeat(
            choice(
              /[^/\s,;!{}()\[\]]/, // Not a slash, not a delimiter character
              /\/[^\*\s,;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          )
        )
      )
    ),

    integer_value: ($) => seq(token(seq(optional(choice("+", "-")), /\d+/)), optional($.unit)),

    float_value: ($) =>
      seq(
        token(
          seq(
            optional(choice("+", "-")),
            /\d*/,
            choice(
              seq(".", /\d+/),
              seq(/[eE]/, optional("-"), /\d+/),
              seq(".", /\d+/, /[eE]/, optional("-"), /\d+/)
            )
          )
        ),
        optional($.unit)
      ),

    unit: ($) => token.immediate(/[a-zA-Z%]+/),

    call_expression: ($) => (
      choice(
        seq(
          field('name', alias('url', $.function_name)),
          field('arguments', alias($.arguments_for_url, $.arguments)),
        ),
        seq(
          field('name', alias($.identifier, $.function_name)),
          field('arguments', $.arguments)
        )
      )
    ),

    binary_expression: ($) =>
      prec.left(
        seq(
          $._value,
          choice("+", "-", "*", "/", "==", "<", ">", "!=", "<=", ">="),
          $._value
        )
      ),

    binary_expression_allowed_in_url_function: ($) =>
      prec.left(
        seq(
          $._value_allowed_in_url_function,
          choice("+", "-", "*", "/", "==", "<", ">", "!=", "<=", ">="),
          $._value_allowed_in_url_function
        )
      ),

    arguments: ($) => seq(token.immediate("("), sep(choice(",", ";"), repeat1($._value)), ")"),

    arguments_for_url: ($) => (
      seq(
        token.immediate("("),
        sep(choice(",", ";"), repeat1($._value_allowed_in_url_function)),
        ")"
      )
    ),

    identifier: ($) =>
      /((#\{[a-zA-Z0-9-_,&\$\.\(\) ]*\})|(--|-?[a-zA-Z_]))([a-zA-Z0-9-_]|(#\{[a-zA-Z0-9-_,&\$\.\(\) ]*\}))*/,

    variable_identifier: ($) => /([a-zA-Z_]+\.)?\$[a-zA-Z-_][a-zA-Z0-9-_]*/,

    at_keyword: ($) => /@[a-zA-Z-_]+/,

    comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    single_line_comment: ($) => token(seq("//", /.*/)),

    plain_value: ($) =>
      token(
        seq(
          repeat(
            choice(
              /[-_]/,
              /\/[^\*\s,:;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          ),
          /[a-zA-Z]/,
          repeat(
            choice(
              /[^/\s,:;!{}()\[\]]/, // Not a slash, not a delimiter character
              /\/[^\*\s,:;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          )
        )
      ),
  },
});

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
