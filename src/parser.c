#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym_comment = 8,
  aux_sym_movie_name_token1 = 9,
  sym_timestamp = 10,
  sym_source_file = 11,
  sym_entry = 12,
  sym_record_body = 13,
  sym_cast_record = 14,
  sym_category_record = 15,
  sym_placeholder_record = 16,
  sym_cast_field = 17,
  sym_cast_name = 18,
  sym_cast_list = 19,
  sym_cast_list_item = 20,
  sym_category_section = 21,
  sym_category = 22,
  sym_timestamp_list = 23,
  sym_movie_name = 24,
  sym__text = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_cast_list_repeat1 = 27,
  aux_sym_timestamp_list_repeat1 = 28,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        ',', 8,
        '/', 19,
        ';', 11,
        '[', 12,
        ']', 14,
        '{', 9,
        '|', 13,
        '}', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ']') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '|') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      ADVANCE_MAP(
        '/', 16,
        ',', 29,
        '{', 29,
        '}', 29,
        ';', 5,
        '[', 5,
        ']', 5,
        '|', 5,
      );
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      ADVANCE_MAP(
        '/', 22,
        ',', 29,
        '{', 29,
        '}', 29,
        ';', 5,
        '[', 5,
        ']', 5,
        '|', 5,
      );
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(30);
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
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
    [sym_comment] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_entry] = STATE(15),
    [sym_movie_name] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(7),
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
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(41), 2,
      sym_category_section,
      sym_timestamp_list,
  [23] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(36), 2,
      sym_category_section,
      sym_timestamp_list,
  [43] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym_movie_name_token1,
    STATE(22), 1,
      sym__text,
    STATE(24), 1,
      sym_category,
    STATE(35), 2,
      sym_category_section,
      sym_timestamp_list,
  [63] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_movie_name_token1,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym_entry,
    STATE(38), 1,
      sym_movie_name,
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    ACTIONS(30), 1,
      aux_sym_movie_name_token1,
    ACTIONS(32), 1,
      sym_timestamp,
    STATE(25), 1,
      sym_cast_list_item,
    STATE(26), 1,
      sym__text,
  [101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_movie_name_token1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym_entry,
    STATE(38), 1,
      sym_movie_name,
  [120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym_movie_name_token1,
    STATE(26), 1,
      sym__text,
    STATE(27), 1,
      sym_cast_list_item,
  [133] = 4,
    ACTIONS(36), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_timestamp_list_repeat1,
  [146] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_cast_list_repeat1,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_movie_name_token1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [170] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_cast_list_repeat1,
  [183] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_timestamp_list_repeat1,
  [196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      aux_sym_movie_name_token1,
  [209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_movie_name_token1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [220] = 4,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_timestamp_list_repeat1,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    ACTIONS(32), 1,
      sym_timestamp,
  [243] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [251] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_movie_name_token1,
  [269] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    ACTIONS(82), 1,
      sym_timestamp,
  [287] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_SEMI,
  [297] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_cast_list_repeat1,
  [307] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [315] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(54), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [323] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(82), 1,
      sym_timestamp,
  [341] = 3,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_SEMI,
  [351] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [359] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
  [366] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [373] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
  [380] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
  [387] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [394] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
  [401] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
  [408] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [415] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [429] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
  [436] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
  [443] = 2,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_timestamp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 315,
  [SMALL_STATE(28)] = 323,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 341,
  [SMALL_STATE(31)] = 351,
  [SMALL_STATE(32)] = 359,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 387,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 408,
  [SMALL_STATE(40)] = 415,
  [SMALL_STATE(41)] = 422,
  [SMALL_STATE(42)] = 429,
  [SMALL_STATE(43)] = 436,
  [SMALL_STATE(44)] = 443,
  [SMALL_STATE(45)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_name, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list_item, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_field, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movie_name, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_record, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 5, 0, 0),
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
