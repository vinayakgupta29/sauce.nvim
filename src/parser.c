#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  anon_sym_SLASH_SLASH = 8,
  aux_sym_comment_token1 = 9,
  aux_sym_comment_token2 = 10,
  aux_sym_movie_name_token1 = 11,
  sym_timestamp = 12,
  sym_source_file = 13,
  sym_entry = 14,
  sym_record_body = 15,
  sym_cast_record = 16,
  sym_category_record = 17,
  sym_placeholder_record = 18,
  sym_cast_field = 19,
  sym_cast_name = 20,
  sym_cast_list = 21,
  sym_cast_list_item = 22,
  sym_category_section = 23,
  sym_category = 24,
  sym_timestamp_list = 25,
  sym_comment = 26,
  sym_movie_name = 27,
  sym__text = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_cast_list_repeat1 = 30,
  aux_sym_timestamp_list_repeat1 = 31,
  aux_sym_comment_repeat1 = 32,
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
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [sym_comment] = "comment",
  [sym_movie_name] = "movie_name",
  [sym__text] = "_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cast_list_repeat1] = "cast_list_repeat1",
  [aux_sym_timestamp_list_repeat1] = "timestamp_list_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
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
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [sym_comment] = sym_comment,
  [sym_movie_name] = sym_movie_name,
  [sym__text] = sym__text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cast_list_repeat1] = aux_sym_cast_list_repeat1,
  [aux_sym_timestamp_list_repeat1] = aux_sym_timestamp_list_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
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
  [sym_comment] = {
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
  [aux_sym_comment_repeat1] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        ',', 9,
        '/', 24,
        ';', 12,
        '[', 13,
        ']', 15,
        '{', 10,
        '|', 14,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '|') ADVANCE(30);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_movie_name_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_timestamp);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(30);
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
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 5},
  [50] = {(TSStateId)(-1)},
  [51] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_movie_name_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym_entry] = STATE(21),
    [sym_comment] = STATE(1),
    [sym_movie_name] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_record_body] = STATE(38),
    [sym_cast_record] = STATE(45),
    [sym_category_record] = STATE(45),
    [sym_placeholder_record] = STATE(45),
    [sym_cast_field] = STATE(33),
    [sym_cast_name] = STATE(30),
    [sym_cast_list] = STATE(30),
    [sym_category_section] = STATE(43),
    [sym_category] = STATE(25),
    [sym_timestamp_list] = STATE(45),
    [sym_comment] = STATE(2),
    [sym__text] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_movie_name_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_movie_name_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_category,
    STATE(29), 1,
      sym__text,
    STATE(47), 2,
      sym_category_section,
      sym_timestamp_list,
  [26] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_movie_name_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(25), 1,
      sym_category,
    STATE(29), 1,
      sym__text,
    STATE(41), 2,
      sym_category_section,
      sym_timestamp_list,
  [49] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_movie_name_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_comment,
    STATE(25), 1,
      sym_category,
    STATE(29), 1,
      sym__text,
    STATE(40), 2,
      sym_category_section,
      sym_timestamp_list,
  [72] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_movie_name_token1,
    STATE(21), 1,
      sym_entry,
    STATE(46), 1,
      sym_movie_name,
    STATE(6), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [92] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_movie_name_token1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(21), 1,
      sym_entry,
    STATE(46), 1,
      sym_movie_name,
  [114] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_movie_name_token1,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    ACTIONS(30), 1,
      sym_timestamp,
    STATE(8), 1,
      sym_comment,
    STATE(22), 1,
      sym_cast_list_item,
    STATE(32), 1,
      sym__text,
  [136] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_comment,
    ACTIONS(32), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_movie_name_token1,
    STATE(10), 1,
      sym_comment,
    STATE(28), 1,
      sym_cast_list_item,
    STATE(32), 1,
      sym__text,
  [165] = 5,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_timestamp_list_repeat1,
  [181] = 4,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(40), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_comment,
      aux_sym_cast_list_repeat1,
  [195] = 4,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_comment,
      aux_sym_timestamp_list_repeat1,
  [209] = 5,
    ACTIONS(50), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(52), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      aux_sym_comment_token2,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_comment_repeat1,
  [225] = 5,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_cast_list_repeat1,
    STATE(15), 1,
      sym_comment,
  [241] = 5,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_timestamp_list_repeat1,
    STATE(16), 1,
      sym_comment,
  [257] = 4,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      aux_sym_comment_token2,
    STATE(17), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(74), 1,
      aux_sym_movie_name_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [285] = 5,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      aux_sym_comment_token2,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    STATE(19), 1,
      sym_comment,
  [301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      aux_sym_movie_name_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_movie_name_token1,
    STATE(21), 1,
      sym_comment,
  [331] = 4,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      aux_sym_cast_list_repeat1,
    STATE(22), 1,
      sym_comment,
  [344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      sym_timestamp,
    STATE(23), 1,
      sym_comment,
  [357] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [368] = 4,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
  [381] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    ACTIONS(30), 1,
      sym_timestamp,
    STATE(27), 1,
      sym_comment,
  [405] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [416] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [427] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_movie_name_token1,
    STATE(31), 1,
      sym_comment,
  [451] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [462] = 4,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
  [475] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      sym_timestamp,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_comment,
  [488] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [499] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
  [509] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
  [519] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
  [529] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_comment,
  [539] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
  [549] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
  [559] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
  [569] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
  [579] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
  [589] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
  [599] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_comment,
  [609] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
  [619] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
  [629] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      sym_timestamp,
    STATE(49), 1,
      sym_comment,
  [639] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [643] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 344,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 427,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 462,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 499,
  [SMALL_STATE(37)] = 509,
  [SMALL_STATE(38)] = 519,
  [SMALL_STATE(39)] = 529,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 549,
  [SMALL_STATE(42)] = 559,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 579,
  [SMALL_STATE(45)] = 589,
  [SMALL_STATE(46)] = 599,
  [SMALL_STATE(47)] = 609,
  [SMALL_STATE(48)] = 619,
  [SMALL_STATE(49)] = 629,
  [SMALL_STATE(50)] = 639,
  [SMALL_STATE(51)] = 643,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_list_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timestamp_list_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_name, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_field, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_list_item, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movie_name, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_record, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_section, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_record, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder_record, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp_list, 5, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
