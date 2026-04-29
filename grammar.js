module.exports = grammar({
  name: 'saucelang',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(seq($.entry, optional(','))),

    entry: $ => seq(
      $.movie_name,
      '{',
      optional($.record_body),
      '}'
    ),

    record_body: $ => choice(
      $.cast_record,
      $.category_record,
      $.placeholder_record,
      $.timestamp_list
    ),

    cast_record: $ => seq(
      $.cast_field,
      optional(seq(';', choice(
        $.timestamp_list,
        $.category_section
      )))
    ),

    category_record: $ => $.category_section,

    placeholder_record: $ => seq(
      ';',
      optional(choice(
        $.timestamp_list,
        $.category_section
      ))
    ),

    cast_field: $ => choice(
      $.cast_list,
      $.cast_name
    ),

    cast_name: $ => prec(1, $._text),

    cast_list: $ => seq(
      '[',
      $.cast_list_item,
      repeat1(seq('|', $.cast_list_item)),
      ']'
    ),

    cast_list_item: $ => $._text,

    category_section: $ => prec.right(seq(
      $.category,
      optional(seq(';', choice(
        $.timestamp_list,
        $.category_section
      )))
    )),

    category: $ => $._text,

    timestamp_list: $ => seq(
      '[',
      optional(seq(
        $.timestamp,
        repeat(seq(';', $.timestamp)),
        optional(';')
      )),
      ']'
    ),
    comment: $ => seq(
      '//',
      repeat(choice(/[^/]/, /\/[^/]/)),
      '//'
    ),
    movie_name: $ => token(/[^\s\{\}\[\]\|;,][^\{\}\[\]\|;,]*/),
    _text: $ => token(/[^\s\{\}\[\]\|;,][^\{\}\[\]\|;,]*/),
    timestamp: $ => token(/[^\s\[\]\|;][^\[\]\|;]*/)
  }
});
