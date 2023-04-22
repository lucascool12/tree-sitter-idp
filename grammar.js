let comment_start = "//"

module.exports = grammar({
    name: 'idp',
    extras: $ => [/\s/, $.comment],

    rules: {
        source_file: $ => repeat(choice(
            $.procedure_decl,
            $.vocabulary_decl,
            $.structure_decl,
            $.theory_decl,
        )),
        procedure_decl: $ => seq(
            'procedure',
            $.name,
            '(',
            ')',
            '{',
            repeat($.function),
            '}',
        ),
        vocabulary_decl: $ => seq(
            'vocabulary',
            $.name,
            '{',
            repeat(choice(
                $.type_decl,
                $.function_decl,
            )),
            '}',
        ),
        structure_decl: $ => seq(
            'structure',
            $.name,
            ':',
            $.vocab_name,
            '{',
            repeat(choice(
                seq(
                    $._expression,
                    '.',
                ),
                seq(
                    '{',
                    $._expression,
                    '}'
                ),
            )),
            '}',
        ),
        theory_decl: $ => seq(
            'theory',
            $.name,
            ':',
            $.vocab_name,
            '{',
            repeat(choice(
                seq(
                    $._expression,
                    '.',
                ),
                seq(
                    '{',
                    $._expression,
                    '}'
                ),
            )),
            '}',
        ),
        function: $ => seq(
            $.name,
            '(',
            optional(
                $.argument,
            ),
            repeat(seq(
                ',',
                $.argument,
            )),
            ')'
        ),
        argument: $ => choice(
            $._name,
            $.function
        ),
        type_decl: $ => seq(
            'type',
            $.name,
            optional(
                seq(
                    $.definitional_equality,
                    $._expression,
                )
            ),
        ),
        function_decl: $ => seq(
            $.name,
            ':',
            choice(
                seq('(', ')'),
                choice(
                    $.cross_product,
                    $.type
                ),
            ),
            $.yields
        ),
        vocab_name: $ => $._name,
        type: $ => prec(-1, choice(
            $._name,
            $._builtin_type,
        )),
        argument_decl: $ => $.type,
        _builtin_type: $ => choice(
            $.Int_keyword,
            $.Bool_keyword,
            $.Real_keyword,
        ),
        Int_keyword: $ => 'Int',
        Bool_keyword: $ => 'Bool',
        Real_keyword: $ => 'Real',
        bool: $ => choice(
            'True',
            'False',
        ),
        int: $ => /[0-9]+/,
        real: $ => /[0-9]+.\[0-9]+/,
        _name: $ => /[^\s:\(\)\.{},]+/,
        name: $ => $._name,
        comment: $ => token(seq(
            comment_start,
            repeat(/.*/),
        )),
        yields: $ => seq(
            '->',
            $.value,
        ),
        identifier: $ => choice(
            $.name,
            $.function,
        ),
        unary_expression: $ => choice(
            prec.left(1, seq($.not, $._expression)),
        ),
        binary_expression: $ => prec.left(choice(
            prec(2, seq($._expression, $.and, $._expression)),
            prec(1, seq($._expression, $.or, $._expression)),
            seq($._expression, $.implies, $._expression),
            seq($._expression, $.equivalence, $._expression),
            seq($._expression, $.reverse_implication, $._expression),
            seq($._expression, $.different, $._expression),
            seq($._expression, $.greater_or_equal, $._expression),
            seq($._expression, $.less_or_equal, $._expression),
            seq($._expression, $.not_in, $._expression, ":"),
            seq($._expression, $.in, $._expression, ":"),
            seq($._expression, $.definitional_equality, $._expression),
            seq($._expression, $.superset, $._expression),
        )),
        _expression: $ => choice(
            prec(1, seq('(', $._expression, ')')),
            $.unary_expression,
            $.binary_expression,
            $.identifier,
            $.numeration,
        ),
        value: $ => choice(
            $.real,
            $.int,
            $.bool,
            $.type,
        ),
        numeration: $ => seq(
            '{',
            optional(seq(
                choice(
                    $.value,
                    $.values,
                ),
                optional(
                    $.yields
                ),
            )),
            repeat(seq(
                ',',
                choice(
                    $.value,
                    $.values,
                ),
                optional(
                    $.yields
                ),
            )),
            '}',
        ),
        values: $ => seq(
            '(',
            optional($.value),
            repeat1(seq(
                ',',
                $.value,
            )),
            ')',
        ),
        not: $ => '~',
        or: $ => '|',
        and: $ => '&',
        implies: $ => '=>',
        equivalence: $ => '<=>',
        reverse_implication: $ => '<=',
        different: $ => '~=',
        greater_or_equal: $ => '>=',
        less_or_equal: $ => '=<',
        less_or_equal: $ => '<-',
        superset: $ => '>>',
        not_in: $ => 'not in',
        in: $ => 'in',
        definitional_equality: $ => ':=',
        cross_product: $ => seq(
            $.type,
            repeat1(
                seq(
                    '*',
                    $.type,
                )
            )
        ),
            



    }
});

