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

    // Ordinary variable identifier that enforces _lack_ of `...` afterward.
    $._variable_identifier,

    // Detecting “spread” syntax is tricky because the `...` comes _after_ the
    // variable. (If you're designing a language with spread syntax, be kind
    // and put the `...` _before_ the identifier.)
    //
    // Most of the trouble we get into with parsing spread arguments/parameters
    // is that, when parsing `$foo...`, the parser will want to lex `$foo` as
    // an ordinary variable. Theoretically, it should get back on track when it
    // sees the following `...`, but in practice I've not found it easy to
    // ensure that happens.
    //
    // One way to cut through this would be to make spread syntax “valid” in
    // more places, even though it can only be used as the last parameter or
    // argument to a function. This would make some incorrect constructs
    // parseable even though they're not valid SCSS.
    //
    // Instead, we've solved this by boiling the ocean: we turned variable
    // identifiers into external scanner symbols. The `_variable_identifier`
    // symbol is the standard one and _will not_ match the `$foo` in `$foo...`
    // because it looks ahead to the `...`. This lets us more easily describe
    // the two contexts in which `$foo...` can validly appear.
    //
    // This is a hack! We could probably pull this off without resorting to the
    // external scanner. But it's the quickest way to support spread syntax
    // without introducing yet another ambiguity that the parser has to
    // reconcile.
    //
    // Right now, a rest parameter or argument followed by other parameters or
    // arguments correctly fails to parse; you'll see an ERROR node in the
    // tree. But the parser recovers quickly, and it may not be obvious to the
    // user that the usage is wrong unless you target it in `highlights.scm`
    // and mark it as such.
    $._variable_identifier_with_following_rest,
    $._error_sentinel
  ],

  conflicts: ($) => [
    [$._selector, $._identifier_with_interpolation],
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
        choice(
          "@keyframes",
          alias(/@[-a-z]+keyframes/, $.at_keyword)
        ),

        field(
          'name',
          alias(
            $._plain_value_with_interpolation,
            $.keyframes_name
          )
        ),
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
        optional($.as_clause),
        optional($.with_clause),
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
        /[\w_-][\w\d_-]*/,
        /[\w_-][\w\d_-]*-\*/,
      ),

    forward_statement: ($) =>
      seq(
        "@forward",
        $._value,
        // Near as I can tell, this is the order you're allowed to put these
        // clauses in.
        optional($.as_clause),
        optional($.visibility_clause),
        // The `with` clause comes with a map and must be last.
        optional($.with_clause),
        ";"
      ),

    as_clause: ($) =>
      seq('as', $.use_alias),

    with_clause: ($) => seq('with', $.with_parameters),

    visibility_clause: ($) =>
      seq(
        // You can have _either_ `hide` _or_ `show`, but not both.
        choice('hide', 'show'),
        $.visibility_parameters
      ),


    visibility_parameters: ($) =>
      sep1(
        ",",
        choice(
          alias(/[a-zA-Z-_][a-zA-Z_0-9-]*/, $.identifier),
          alias($._variable_identifier, $.variable_value)
        )
      ),

    parameters: ($) => seq(
      "(",
      choice(
        // Only regular parameters, or…
        sep(",", $.parameter),
        // …one or more parameters followed by a rest parameter, or…
        seq(
          sep1(",", $.parameter),
          ",",
          $.rest_parameter
        ),
        // …a lone rest parameter.
        $.rest_parameter
      ),
      ")"
    ),

    rest_parameter: ($) => seq(
      alias($._variable_identifier_with_following_rest, $.variable_name),
      $._spread
    ),

    _spread: (_) => alias(token.immediate('...'), "..."),

    parameter: ($) =>
      seq(
        alias($._variable_identifier, $.variable_name),
        optional(seq(":", alias($._value, $.default_value)))
      ),

    with_parameters: ($) => seq("(", sep1(",", $.with_parameter), optional(","), ")"),

    // A `@use` at-rule can take a configuration block. It's like an ordinary
    // parameter, but it must specify a value after a colon.
    with_parameter: ($) => (
      seq(
        alias($._variable_identifier, $.variable_name),
        ':',
        $._value,
        optional(
          $.default
        )
      )
    ),

    mixin_statement: ($) =>
      seq("@mixin", alias($._identifier, $.name), optional($.parameters), $.block),

    include_statement: ($) =>
      seq(
        "@include",
        optional(
          seq(
            field('module', alias($._identifier, $.module)),
            token.immediate('.'),
            $._no_whitespace
          )
        ),
        alias($._identifier, $.mixin_name),
        optional(alias($.include_arguments, $.arguments)),
        choice($.block, ";")
      ),

    include_arguments: ($) =>
      seq(
        token.immediate("("),
        sep(",", alias($.include_argument, $.argument)),
        ")"
      ),

    include_argument: ($) =>
      seq(
        optional(seq(alias($._variable_identifier, $.argument_name), ":")),
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
        optional(seq(alias($._variable_identifier, $.key), ",")),
        alias($._variable_identifier, $.value),
        "in",
        $._value,
        $.block
      ),

    for_statement: ($) =>
      seq(
        "@for",
        alias($._variable_identifier, $.variable_name),
        "from",
        alias($._value, $.from),
        "through",
        alias($._value, $.through),
        $.block
      ),

    while_statement: ($) => seq("@while", $._value, $.block),

    function_statement: ($) =>
      seq(
        "@function",
        alias($._identifier, $.name),
        optional($.parameters),
        $.block
      ),

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

    declaration: ($) =>
      choice(
        // Variable
        seq(
          alias($._variable_identifier, $.variable_name),
          ':',
          $._value,
          repeat(seq(optional(","), $._value)),
          optional(
            choice(
              $.default,
              $.global
            )
          ),
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
        ),
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
    global: (_) => "!global",

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
          alias($._variable_identifier, $.variable_value),
          $.boolean_value,
          $.null_value,
          alias($._plain_value, $.plain_value),
          $.color_value,
          $.integer_value,
          $.float_value,
          $.string_value,
          $.grid_value,
          $.binary_expression,
          $.unary_expression,
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
        alias($._variable_identifier, $.variable_value),
        $.boolean_value,
        $.null_value,
        alias($.unquoted_string_value, $.plain_value),
        $.color_value,
        $.integer_value,
        $.float_value,
        $.string_value,
        alias(
          $.binary_expression_allowed_in_url_function,
          $.binary_expression
        ),
        alias(
          $.unary_expression_allowed_in_url_function,
          $.unary_expression
        ),
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
        field('value', $._value),
        optional($.default)
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

    // NOTE: Technically, `/` should only be allowed in binary
    // expressions if we're inside a `calc`. They're not a part of Dart
    // Sass, but even tree-sitter-css still treats them as binary
    // operators in places where they aren't (e.g., grid value syntax),
    // so we'll leave this the way it is for now.
    _binary_operator: (_) =>
      prec(
        3,
        // TODO: Operator precedence will be painful if it ever has to be
        // implemented:
        // https://sass-lang.com/documentation/operators/#order-of-operations
        choice("+", "-", "*", "/", "==", "<", ">", "!=", "<=", ">=", "and", "or")
      ),

    _unary_operator: (_) =>
      prec(
        2,
       choice("not", "+", "-", "/")
      ),

    binary_expression: ($) =>
      prec.left(
        2,
        seq(
          field('left', $._value),
          field('operator', $._binary_operator),
          field('right', $._value)
        )
      ),

    unary_expression: ($) =>
      prec.left(
        2,
        seq(
          field('operator', $._unary_operator),
          $._value
        )
      ),

    binary_expression_allowed_in_url_function: ($) =>
      prec.left(
        2,
        seq(
          field('left', $._value_allowed_in_url_function),
          field('operator', $._binary_operator),
          field('right', $._value_allowed_in_url_function)
        )
      ),

    unary_expression_allowed_in_url_function: ($) =>
      prec.left(
        2,
        seq(
          field('operator', $._unary_operator),
          $._value_allowed_in_url_function
        )
      ),

    arguments: ($) =>
      seq(
        token.immediate("("),
        choice(
          // Only regular values, or…
          sep(
            choice(",", ";"),
            repeat($._value)
          ),
          // one or more arguments followed by a rest argument, or…
          seq(
            sep1(
              choice(",", ";"),
              repeat($._value)
            ),
            ",",
            $.rest_argument
          ),
          // …a lone rest argument.
          $.rest_argument
        ),
        ")"
      ),

    rest_argument: ($) =>
      seq(
        alias($._variable_identifier_with_following_rest, $.variable_value),
        $._spread
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
        field('value', alias($._variable_identifier, $.variable_value))
      )
    ),

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
