#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_LBRACK = 5,
  anon_sym_PIPE = 6,
  anon_sym_RBRACK = 7,
  aux_sym_movie_name_token1 = 8,
  sym_timestamp = 9,
  sym_source_file = 10,
  sym_entry = 11,
  sym_record_body = 12,
  sym_cast_record = 13,
  sym_category_record = 14,
  sym_placeholder_record = 15,
  sym_cast_field = 16,
  sym_cast_name = 17,
  sym_cast_list = 18,
  sym_cast_list_item = 19,
  sym_category_section = 20,
  sym_category = 21,
  sym_timestamp_list = 22,
  sym_movie_name = 23,
  sym__text = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_cast_list_repeat1 = 26,
  aux_sym_timestamp_list_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACK] = "]",
  [aux_sym_movie_name_token1] = "movie_name_token1",
  [sym_timestamp] = "timestamp",
  [sym_source_file] = "source_file",
  [sym_entry] = "entry",
  [sym_record_body] = "record_body",
  [sym_cast_record] = "cast_record",
  [sym_category_record] = "category_record",
  [sym_placeholder_record] = "placeholder_record",
  [sym_cast_field] = "cast_field",
  [sym_cast_name] = "cast_name",
  [sym_cast_list] = "cast_list",
  [sym_cast_list_item] = "cast_list_item",
  [sym_category_section] = "category_section",
  [sym_category] = "category",
  [sym_timestamp_list] = "timestamp_list",
  [sym_movie_name] = "movie_name",
  [sym__text] = "_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cast_list_repeat1] = "cast_list_repeat1",
  [aux_sym_timestamp_list_repeat1] = "timestamp_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_movie_name_token1] = aux_sym_movie_name_token1,
  [sym_timestamp] = sym_timestamp,
  [sym_source_file] = sym_source_file,
  [sym_entry] = sym_entry,
  [sym_record_body] = sym_record_body,
  [sym_cast_record] = sym_cast_record,
  [sym_category_record] = sym_category_record,
  [sym_placeholder_record] = sym_placeholder_record,
  [sym_cast_field] = sym_cast_field,
  [sym_cast_name] = sym_cast_name,
  [sym_cast_list] = sym_cast_list,
  [sym_cast_list_item] = sym_cast_list_item,
  [sym_category_section] = sym_category_section,
  [sym_category] = sym_category,
  [sym_timestamp_list] = sym_timestamp_list,
  [sym_movie_name] = sym_movie_name,
  [sym__text] = sym__text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cast_list_repeat1] = aux_sym_cast_list_repeat1,
  [aux_sym_timestamp_list_repeat1] = aux_sym_timestamp_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_movie_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_record] = {
    .visible = true,
    .named = true,
  },
  [sym_category_record] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder_record] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_field] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_list] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_category_section] = {
    .visible = true,
    .named = true,
  },
  [sym_category] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp_list] = {
    .visible = true,
    .named = true,
  },
  [sym_movie_name] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cast_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timestamp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '}') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_movie_name_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_entry] = STATE(15),
    [sym_movie_name] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_record_body] = STATE(39),
    [sym_cast_record] = STATE(43),
    [sym_category_record] = STATE(43),
    [sym_placeholder_record] = STATE(43),
    [sym_cast_field] = STATE(30),
    [sym_cast_name] = STATE(28),
    [sym_cast_list] = STATE(28),
    [sym_category_section] = STATE(42),
    [sym_category] = STATE(24),
    [sym_timestamp_list] = STATE(43),
    [sym__text] = STATE(19),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym_movie_name_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(41), 2,
      sym_category_section,
      sym_timestamp_list,
  [20] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(36), 2,
      sym_category_section,
      sym_timestamp_list,
  [37] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(35), 2,
      sym_category_section,
      sym_timestamp_list,
  [54] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_movie_name_token1,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym_entry,
    STATE(38), 1,
      sym_movie_name,
  [70] = 5,
    ACTIONS(26), 1,
      anon_sym_RBRACK,
    ACTIONS(28), 1,
      aux_sym_movie_name_token1,
    ACTIONS(30), 1,
      sym_timestamp,
    STATE(25), 1,
      sym_cast_list_item,
    STATE(26), 1,
      sym__text,
  [86] = 5,
    ACTIONS(5), 1,
      aux_sym_movie_name_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym_entry,
    STATE(38), 1,
      sym_movie_name,
  [102] = 3,
    ACTIONS(34), 1,
      aux_sym_movie_name_token1,
    STATE(26), 1,
      sym__text,
    STATE(27), 1,
      sym_cast_list_item,
  [112] = 3,
    ACTIONS(36), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_timestamp_list_repeat1,
  [122] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_cast_list_repeat1,
  [132] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_movie_name_token1,
  [138] = 3,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_cast_list_repeat1,
  [148] = 3,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_timestamp_list_repeat1,
  [158] = 2,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_movie_name_token1,
  [166] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_movie_name_token1,
  [172] = 3,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_timestamp_list_repeat1,
  [182] = 2,
    ACTIONS(26), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_timestamp,
  [189] = 1,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [194] = 1,
    ACTIONS(39), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [199] = 1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_movie_name_token1,
  [204] = 1,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [209] = 2,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 1,
      sym_timestamp,
  [216] = 2,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_SEMI,
  [223] = 2,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_cast_list_repeat1,
  [230] = 1,
    ACTIONS(80), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [235] = 1,
    ACTIONS(50), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [240] = 1,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [245] = 2,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 1,
      sym_timestamp,
  [252] = 2,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_SEMI,
  [259] = 1,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [264] = 1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [268] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [272] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
  [276] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
  [280] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [284] = 1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
  [288] = 1,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
  [292] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
  [296] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [300] = 1,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
  [304] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [308] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [312] = 1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
  [316] = 1,
    ACTIONS(74), 1,
      sym_timestamp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 199,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 209,
  [SMALL_STATE(24)] = 216,
  [SMALL_STATE(25)] = 223,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 235,
  [SMALL_STATE(28)] = 240,
  [SMALL_STATE(29)] = 245,
  [SMALL_STATE(30)] = 252,
  [SMALL_STATE(31)] = 259,
  [SMALL_STATE(32)] = 264,
  [SMALL_STATE(33)] = 268,
  [SMALL_STATE(34)] = 272,
  [SMALL_STATE(35)] = 276,
  [SMALL_STATE(36)] = 280,
  [SMALL_STATE(37)] = 284,
  [SMALL_STATE(38)] = 288,
  [SMALL_STATE(39)] = 292,
  [SMALL_STATE(40)] = 296,
  [SMALL_STATE(41)] = 300,
  [SMALL_STATE(42)] = 304,
  [SMALL_STATE(43)] = 308,
  [SMALL_STATE(44)] = 312,
  [SMALL_STATE(45)] = 316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_name, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list_item, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_field, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movie_name, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_record, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 5, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_saucelang(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
