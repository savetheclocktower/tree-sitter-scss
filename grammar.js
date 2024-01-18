module.exports = grammar({
  name: "scss",

  extras: ($) => [/\s/, $.comment, $.single_line_comment],

  externals: ($) => [
    $._descendant_operator,
    $._pseudo_class_selector_colon,
    // We use this token to enforce lack of whitespace in situations where we
    // can't use `token.immediate`.
    $._no_whitespace,
    $._single_quoted_string_segment,
    $._double_quoted_string_segment,
    $._apply_value,
    $._error_sentinel
  ],

  conflicts: ($) => [
    [$.attribute_selector, $._identifier_with_interpolation],
    [$.parenthesized_value, $.map_value],
    [$._selector, $._identifier_with_interpolation],
    [$._selector, $._value],
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

    media_statement: ($) =>
      seq(
        "@media",
        sep1(",", $._query),
        $.block
      ),

    charset_statement: ($) => seq("@charset", $._value, ";"),

    namespace_statement: ($) =>
      seq(
        "@namespace",
        optional(alias($._identifier, $.namespace_name)),
        choice($.string_value, $.call_expression),
        ";"
      ),

    keyframes_statement: ($) => prec.right(1,
      seq(
        choice("@keyframes", alias(/@[-a-z]+keyframes/, $.at_keyword)),

        field('name', alias($._plain_value_with_interpolation, $.keyframes_name)),
        optional($.keyframe_block_list)
      )
    ),

    keyframe_block_list: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $.keyframe_block,
            alias($.content_at_rule, $.at_rule)
          )
        ),
        "}"
      ),

    keyframe_block: ($) =>
    seq(
      choice($.from, $.to, $.integer_value),
      $.block
    ),

    from: (_) => "from",
    to: (_) => "to",

    supports_statement: ($) => seq("@supports", $._query, $.block),

    postcss_statement: ($) => prec(
      -1,
      seq(
        $.at_keyword,
        repeat(
          alias($._apply_value, $.plain_value)
        ),
        optional($.important),
        ';'
      )
    ),

    at_rule: ($) => seq(
      $.at_keyword,
      sep(",", $._query),
      choice(";", $.block)
    ),

    content_at_rule: ($) =>
      seq(
        alias("@content", $.at_keyword),
        ";"
      ),

    use_statement: ($) =>
      seq(
        "@use",
        $._value,
        optional(
          seq('with', $.use_parameters)
        ),
        optional(
          seq('as', $.use_alias)
        ),
        ";"
      ),

    use_alias: (_) =>
      choice("*",
        // TODO: By experimentation, a `@use` alias can contain any word
        // character, even if it's not ASCII. But expressing Unicode ranges in
        // the regex seems to hang Tree-sitter.
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
          seq('as', $.use_alias)
        ),
        ";"
      ),

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
      seq("@mixin", alias($._identifier, $.name), optional($.parameters), $.block),

    include_statement: ($) =>
      seq(
        "@include",
        alias($._identifier, $.identifier),
        optional(alias($.include_arguments, $.arguments)),
        choice($.block, ";")
      ),

    include_arguments: ($) =>
      seq(
        token.immediate("("),
        sep(",", alias($.include_argument, $.argument)),
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
        alias($._identifier_with_interpolation, $.placeholder_name)
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
      seq("@function", alias($._identifier, $.name), optional($.parameters), $.block),

    return_statement: ($) => seq("@return", $._value, ";"),

    at_root_statement: ($) =>
      seq(
        "@at-root",
        $.selectors,
        $.block
      ),

    error_statement: ($) => seq("@error", $._value, ";"),

    warn_statement: ($) => seq("@warn", $._value, ";"),

    debug_statement: ($) => seq("@debug", $._value, ";"),

    // Rule sets

    rule_set: ($) => seq($.selectors, $.block),

    selectors: ($) => sep1(
      ",",
      choice(
        $._selector,
        $._block_direct_selector
      )
    ),

    block: ($) =>
      seq(
        "{",
        repeat($._block_item),
        optional(
          alias($.last_declaration, $.declaration)
        ),
        "}"
      ),

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
        $.postcss_statement,
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
        $.at_rule,
        alias($.content_at_rule, $.at_rule)
      ),

    _block_direct_selector: ($) =>
      choice(
        alias($._block_direct_child_selector, $.child_selector),
        alias($._block_direct_sibling_selector, $.sibling_selector),
        alias($._block_direct_adjacent_sibling_selector, $.adjacent_sibling_selector),
        alias($._child_selector_block_direct, $.child_selector),
        alias($._sibling_selector_block_direct, $.sibling_selector),
        alias($._adjacent_sibling_selector_block_direct, $.adjacent_sibling_selector)
      ),

    _block_direct_child_selector: ($) =>
      seq(
        '>',
        field('right', $._selector)
      ),

    _block_direct_sibling_selector: ($) =>
      seq(
        '~',
        field('right', $._selector)
      ),

    _block_direct_adjacent_sibling_selector: ($) =>
      seq(
        '+',
        field('right', $._selector)
      ),

    _child_selector_block_direct: ($) =>
      seq(
        field('left', $._selector),
        '>'
      ),

    _sibling_selector_block_direct: ($) =>
      seq(
        field('left', $._selector),
        '~'
      ),

    _adjacent_sibling_selector_block_direct: ($) =>
      seq(
        field('left', $._selector),
        '+'
      ),

    // Selectors

    _selector: ($) =>
      choice(
        $.universal_selector,
        alias($._identifier_with_interpolation, $.tag_name),
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
        $.adjacent_sibling_selector,
        $.namespace_selector,
        $.interpolation
      ),

    nesting_selector: (_) => "&",

    universal_selector: (_) => "*",

    placeholder_selector: ($) =>
      prec(
        1,
        seq(
          '%',
          $._no_whitespace,
          alias($._identifier_with_interpolation, $.placeholder_name)
        )
      ),

    class_selector: ($) =>
      prec(
        1,
        seq(
          optional($._selector),
          choice(
            seq(".", $._no_whitespace),
            $.nesting_selector
          ),
          alias($._identifier_with_interpolation, $.class_name)
        )
      ),

    pseudo_class_selector: ($) =>
      seq(
        optional($._selector),
        alias($._pseudo_class_selector_colon, ':'),
        $._no_whitespace,
        alias($._identifier_with_interpolation, $.class_name),
        optional(alias($.pseudo_class_arguments, $.arguments))
      ),

    pseudo_element_selector: ($) =>
      seq(
        optional($._selector),
        "::",
        $._no_whitespace,
        alias($._identifier_with_interpolation, $.tag_name),
        optional(
          alias($.pseudo_element_arguments, $.arguments)
        )
      ),

    pseudo_element_arguments: ($) =>
      seq(
        token.immediate('('),
        sep(',', choice($._selector, repeat1($._value))),
        ')'
      ),

    id_selector: ($) =>
      seq(
        optional($._selector),
        "#",
        $._no_whitespace,
        alias($._identifier_with_interpolation, $.id_name)
      ),

    attribute_selector: ($) =>
      seq(
        optional($._selector),
        "[",
        seq(
          alias(
            choice(
              $._identifier_with_interpolation,
              $.namespace_selector
            ),
            $.attribute_name
          ),
          optional(
            seq(
              choice("=", "~=", "^=", "|=", "*=", "$="),
              $._value
            )
          ),
        ),
        "]"
      ),

    child_selector: ($) => prec.left(
      seq(
        field('left', $._selector),
        ">",
        field('right', $._selector)
      )
    ),

    descendant_selector: ($) => prec.left(
      seq(
        field('left', $._selector),
        $._descendant_operator,
        field('right', $._selector)
      )
    ),

    sibling_selector: ($) => prec.left(
      seq(
        field('left', $._selector),
        "~",
        field('right', $._selector)
      )
    ),

    adjacent_sibling_selector: ($) => prec.left(
      seq(
        field('left', $._selector),
        "+",
        field('right', $._selector)
      )
    ),

    namespace_selector: ($) => prec.left(
      seq(
        $._selector,
        '|',
        $._selector
      )
    ),

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

    scope_annotation: (_) => choice("local", "global"),

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
          alias($._identifier_with_interpolation, $.property_name),
          ':',
          $._value,
          repeat(
            seq(optional(","), $._value)
          ),
          optional($.important),
          ';'
        )
      ),

    // Only seems to be used to declare properties and not variables.
    last_declaration: ($) =>
      prec(
        1,
        seq(
          alias($._identifier_with_interpolation, $.property_name),
          ":",
          $._value,
          repeat(seq(optional(","), $._value)),
          optional($.important)
        )
      ),

    important: (_) => "!important",
    default: (_) => "!default",

    // Media queries

    _query: ($) =>
      choice(
        alias($._identifier_with_interpolation, $.keyword_query),
        $.feature_query,
        $.binary_query,
        $.unary_query,
        $.selector_query,
        $.parenthesized_query
      ),

    feature_query: ($) => prec(
      -1,
      seq(
        "(",
        alias($._identifier, $.feature_name),
        ":",
        repeat1($._value),
        ")"
      )
    ),

    parenthesized_query: ($) => seq("(", $._query, ")"),

    binary_query: ($) => prec.left(
      seq(
        $._query,
        choice("and", "or"),
        $._query
      )
    ),

    unary_query: ($) => prec(1,
      seq(
        choice("not", "only"),
        $._query
      )
    ),

    selector_query: ($) =>
      seq(
        "selector",
        "(",
        $._selector,
        ")"
      ),

    // Property Values

    _value: ($) =>
      prec(
        -1,
        choice(
          alias($._identifier_with_interpolation, $.plain_value),
          $.variable_module,
          alias($.variable_identifier, $.variable_value),
          $.boolean_value,
          $.null_value,
          alias($._plain_value, $.plain_value),
          $.color_value,
          $.integer_value,
          $.float_value,
          $.string_value,
          $.grid_value,
          $.binary_expression,
          $.map_value,
          $.parenthesized_value,
          $.call_expression,
          alias($.nesting_selector, $.nesting_value)
        )
      ),

    // Since a `url` function allows a greater breadth of unquoted characters
    // than would be allowed in any other context, we need a version of
    // `_value` that is allowed to exist inside of `url`. Lots of these would
    // be nonsensical, but they still compile.
    _value_allowed_in_url_function: ($) =>
      choice(
        alias($._identifier, $.plain_value),
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

    boolean_value: (_) => choice("true", "false"),
    null_value: (_) => "null",

    parenthesized_value: ($) => seq("(", $._value, ")"),

    map_value: ($) => seq("(", sep(',', $.map_pair), ")"),

    map_pair: ($) => prec(2,
      seq(
        field('key', $._value),
        ':',
        field('value', $._value)
      )
    ),

    color_value: (_) => seq("#", token.immediate(/[0-9a-fA-F]{3,8}/)),

    string_value: ($) =>
      choice(
        $._single_quoted_string_value,
        $._double_quoted_string_value
      ),

    _single_quoted_string_value: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $._single_quoted_string_segment,
            $.interpolation
          )
        ),
        "'"
      ),

    _double_quoted_string_value: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $._double_quoted_string_segment,
            $.interpolation
          )
        ),
        '"'
      ),

    // Only used in certain places where SCSS will tolerate an unquoted string
    // that would normally be ambiguous, like a URL.
    unquoted_string_value: (_) => (
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

    integer_value: ($) =>
      seq(
        token(
          seq(
            optional(choice("+", "-")),
            /\d+/
          )
        ),
        optional($.unit)
      ),

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

    unit: (_) => token.immediate(/[a-zA-Z%]+/),

    grid_value: ($) => seq(
      '[',
      sep1(',', $._value),
      ']'
    ),

    _expression: ($) =>
      choice(
        $.call_expression,
        $.binary_expression
      ),

    call_expression: ($) => (
      choice(
        // Special case for a function named `url`.
        seq(
          field('name', alias('url', $.function_name)),
          field('arguments', alias($.arguments_for_url, $.arguments)),
        ),
        seq(
          optional(
            seq(
              field('module', alias($._identifier, $.module)),
              token.immediate('.'),
              $._no_whitespace
            )
          ),
          field('name', alias($._identifier, $.function_name)),
          field('arguments', $.arguments)
        )
      )
    ),

    binary_expression: ($) =>
      prec.left(
        seq(
          $._value,
          // NOTE: Technically, `/` should only be allowed in binary
          // expressions if we're inside a `calc`. They're not a part of Dart
          // Sass, but even tree-sitter-css still treats them as binary
          // operators in places where they aren't (e.g., grid value syntax),
          // so we'll leave this the way it is for now.
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

    arguments: ($) =>
      seq(
        token.immediate("("),
        sep(
          choice(",", ";"),
          repeat1($._value)
        ),
        ")"
      ),

    arguments_for_url: ($) => (
      seq(
        token.immediate("("),
        sep(
          choice(",", ";"),
          repeat1($._value_allowed_in_url_function)
        ),
        ")"
      )
    ),

    _identifier: (_) => /((--|-?[a-zA-Z_]))([a-zA-Z0-9-_])*/,

    variable_module: ($) => (
      seq(
        field('module', alias($._identifier, $.module)),
        token.immediate('.'),
        $._no_whitespace,
        field('value', alias($.variable_identifier, $.variable_value))
      )
    ),

    variable_identifier: (_) => /\$[a-zA-Z-_][a-zA-Z0-9-_]*/,

    at_keyword: (_) => /@[a-zA-Z-_]+/,

    comment: (_) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    single_line_comment: (_) => token(seq("//", /.*/)),

    interpolation: ($) =>
      seq(
        "#{",
        choice(
          $._value,
          $._expression,
        ),
        "}"
      ),

    _identifier_with_interpolation: ($) => prec.left(1,
        repeat1(
          choice(
            $._identifier,
            $.interpolation
          )
        )
      ),

    _plain_value_with_interpolation: ($) =>
      repeat1(
        choice(
          $._plain_value,
          $.interpolation
        )
      ),

    _plain_value: (_) =>
      token(
        seq(repeat(/[-_]/), /[a-zA-Z]/, repeat(/[a-zA-Z0-9_-]/))
      )
  },
});

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
