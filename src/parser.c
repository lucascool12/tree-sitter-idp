#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_procedure = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_vocabulary = 6,
  anon_sym_structure = 7,
  anon_sym_COLON = 8,
  anon_sym_DOT = 9,
  anon_sym_theory = 10,
  anon_sym_COMMA = 11,
  anon_sym_type = 12,
  sym_Int_keyword = 13,
  sym_Bool_keyword = 14,
  sym_Real_keyword = 15,
  anon_sym_True = 16,
  anon_sym_False = 17,
  sym_int = 18,
  sym_real = 19,
  sym__name = 20,
  sym_comment = 21,
  anon_sym_DASH_GT = 22,
  sym_not = 23,
  sym_or = 24,
  sym_and = 25,
  sym_implies = 26,
  sym_equivalence = 27,
  sym_reverse_implication = 28,
  sym_different = 29,
  sym_greater_or_equal = 30,
  sym_less_or_equal = 31,
  sym_superset = 32,
  sym_not_in = 33,
  sym_in = 34,
  sym_definitional_equality = 35,
  anon_sym_STAR = 36,
  sym_source_file = 37,
  sym_procedure_decl = 38,
  sym_vocabulary_decl = 39,
  sym_structure_decl = 40,
  sym_theory_decl = 41,
  sym_function = 42,
  sym_argument = 43,
  sym_type_decl = 44,
  sym_function_decl = 45,
  sym_vocab_name = 46,
  sym_type = 47,
  sym__builtin_type = 48,
  sym_bool = 49,
  sym_name = 50,
  sym_yields = 51,
  sym_identifier = 52,
  sym_unary_expression = 53,
  sym_binary_expression = 54,
  sym__expression = 55,
  sym_value = 56,
  sym_numeration = 57,
  sym_values = 58,
  sym_cross_product = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_procedure_decl_repeat1 = 61,
  aux_sym_vocabulary_decl_repeat1 = 62,
  aux_sym_structure_decl_repeat1 = 63,
  aux_sym_function_repeat1 = 64,
  aux_sym_numeration_repeat1 = 65,
  aux_sym_values_repeat1 = 66,
  aux_sym_cross_product_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_procedure] = "procedure",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_vocabulary] = "vocabulary",
  [anon_sym_structure] = "structure",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_theory] = "theory",
  [anon_sym_COMMA] = ",",
  [anon_sym_type] = "type",
  [sym_Int_keyword] = "Int_keyword",
  [sym_Bool_keyword] = "Bool_keyword",
  [sym_Real_keyword] = "Real_keyword",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_int] = "int",
  [sym_real] = "real",
  [sym__name] = "_name",
  [sym_comment] = "comment",
  [anon_sym_DASH_GT] = "->",
  [sym_not] = "not",
  [sym_or] = "or",
  [sym_and] = "and",
  [sym_implies] = "implies",
  [sym_equivalence] = "equivalence",
  [sym_reverse_implication] = "reverse_implication",
  [sym_different] = "different",
  [sym_greater_or_equal] = "greater_or_equal",
  [sym_less_or_equal] = "less_or_equal",
  [sym_superset] = "superset",
  [sym_not_in] = "not_in",
  [sym_in] = "in",
  [sym_definitional_equality] = "definitional_equality",
  [anon_sym_STAR] = "*",
  [sym_source_file] = "source_file",
  [sym_procedure_decl] = "procedure_decl",
  [sym_vocabulary_decl] = "vocabulary_decl",
  [sym_structure_decl] = "structure_decl",
  [sym_theory_decl] = "theory_decl",
  [sym_function] = "function",
  [sym_argument] = "argument",
  [sym_type_decl] = "type_decl",
  [sym_function_decl] = "function_decl",
  [sym_vocab_name] = "vocab_name",
  [sym_type] = "type",
  [sym__builtin_type] = "_builtin_type",
  [sym_bool] = "bool",
  [sym_name] = "name",
  [sym_yields] = "yields",
  [sym_identifier] = "identifier",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__expression] = "_expression",
  [sym_value] = "value",
  [sym_numeration] = "numeration",
  [sym_values] = "values",
  [sym_cross_product] = "cross_product",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_procedure_decl_repeat1] = "procedure_decl_repeat1",
  [aux_sym_vocabulary_decl_repeat1] = "vocabulary_decl_repeat1",
  [aux_sym_structure_decl_repeat1] = "structure_decl_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_numeration_repeat1] = "numeration_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_cross_product_repeat1] = "cross_product_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_vocabulary] = anon_sym_vocabulary,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_theory] = anon_sym_theory,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_type] = anon_sym_type,
  [sym_Int_keyword] = sym_Int_keyword,
  [sym_Bool_keyword] = sym_Bool_keyword,
  [sym_Real_keyword] = sym_Real_keyword,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_int] = sym_int,
  [sym_real] = sym_real,
  [sym__name] = sym__name,
  [sym_comment] = sym_comment,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_not] = sym_not,
  [sym_or] = sym_or,
  [sym_and] = sym_and,
  [sym_implies] = sym_implies,
  [sym_equivalence] = sym_equivalence,
  [sym_reverse_implication] = sym_reverse_implication,
  [sym_different] = sym_different,
  [sym_greater_or_equal] = sym_greater_or_equal,
  [sym_less_or_equal] = sym_less_or_equal,
  [sym_superset] = sym_superset,
  [sym_not_in] = sym_not_in,
  [sym_in] = sym_in,
  [sym_definitional_equality] = sym_definitional_equality,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_source_file] = sym_source_file,
  [sym_procedure_decl] = sym_procedure_decl,
  [sym_vocabulary_decl] = sym_vocabulary_decl,
  [sym_structure_decl] = sym_structure_decl,
  [sym_theory_decl] = sym_theory_decl,
  [sym_function] = sym_function,
  [sym_argument] = sym_argument,
  [sym_type_decl] = sym_type_decl,
  [sym_function_decl] = sym_function_decl,
  [sym_vocab_name] = sym_vocab_name,
  [sym_type] = sym_type,
  [sym__builtin_type] = sym__builtin_type,
  [sym_bool] = sym_bool,
  [sym_name] = sym_name,
  [sym_yields] = sym_yields,
  [sym_identifier] = sym_identifier,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__expression] = sym__expression,
  [sym_value] = sym_value,
  [sym_numeration] = sym_numeration,
  [sym_values] = sym_values,
  [sym_cross_product] = sym_cross_product,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_procedure_decl_repeat1] = aux_sym_procedure_decl_repeat1,
  [aux_sym_vocabulary_decl_repeat1] = aux_sym_vocabulary_decl_repeat1,
  [aux_sym_structure_decl_repeat1] = aux_sym_structure_decl_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_numeration_repeat1] = aux_sym_numeration_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_cross_product_repeat1] = aux_sym_cross_product_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_procedure] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vocabulary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_Int_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_Bool_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_Real_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_implies] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse_implication] = {
    .visible = true,
    .named = true,
  },
  [sym_different] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_less_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_superset] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_definitional_equality] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_vocabulary_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_theory_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_vocab_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_type] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_yields] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeration] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_product] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vocabulary_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structure_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_product_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 12,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 17,
  [31] = 29,
  [32] = 32,
  [33] = 25,
  [34] = 18,
  [35] = 23,
  [36] = 28,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 57,
  [60] = 55,
  [61] = 52,
  [62] = 53,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 73,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 7,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 97,
  [108] = 108,
  [109] = 109,
  [110] = 101,
  [111] = 98,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 115,
  [116] = 116,
  [117] = 103,
  [118] = 80,
  [119] = 119,
  [120] = 103,
  [121] = 113,
  [122] = 104,
  [123] = 92,
  [124] = 93,
  [125] = 125,
  [126] = 104,
  [127] = 7,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 12,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 11,
  [144] = 9,
  [145] = 145,
  [146] = 100,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 161,
};

static inline bool sym_real_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < ':'
        ? c == '.'
        : c <= ':')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__name_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < ':'
        ? c == '.'
        : c <= ':')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__name_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < ':'
        ? c == '.'
        : c <= ':')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__name_character_set_3(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= ')' || (c < '{'
      ? (c < ':'
        ? (c >= ',' && c <= '.')
        : c <= ':')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'B') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '|') ADVANCE(144);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(147);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '.' || ':' < lookahead)) ADVANCE(139);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '.' || ':' < lookahead) &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '9') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_vocabulary);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_type);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Int_keyword);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Int_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Bool_keyword);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Bool_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Real_keyword);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Real_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '[') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '[') ADVANCE(109);
      if (sym_real_character_set_1(lookahead)) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_int);
      if (sym_real_character_set_1(lookahead)) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == ']') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == ']') ADVANCE(104);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(41);
      if (!sym__name_character_set_2(lookahead)) ADVANCE(139);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(111);
      if (!sym__name_character_set_3(lookahead)) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '=') ADVANCE(153);
      if (!sym__name_character_set_3(lookahead)) ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '/') ADVANCE(138);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '[') ADVANCE(110);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '0') ADVANCE(106);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '9') ADVANCE(116);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '=') ADVANCE(155);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '>') ADVANCE(149);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '[') ADVANCE(110);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ']') ADVANCE(104);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(123);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(125);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(96);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(98);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(88);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(118);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(133);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(92);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(94);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(134);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(164);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(129);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(124);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(135);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(121);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(136);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(120);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(90);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(105);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(119);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(131);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (sym_real_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_not);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_or);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_and);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_implies);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_implies);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_equivalence);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_equivalence);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_reverse_implication);
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_reverse_implication);
      if (lookahead == '>') ADVANCE(151);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_different);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_different);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_greater_or_equal);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_less_or_equal);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_less_or_equal);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_superset);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_superset);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_not_in);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_in);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_definitional_equality);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_vocabulary] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_theory] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_Int_keyword] = ACTIONS(1),
    [sym_Bool_keyword] = ACTIONS(1),
    [sym_Real_keyword] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_implies] = ACTIONS(1),
    [sym_equivalence] = ACTIONS(1),
    [sym_reverse_implication] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_less_or_equal] = ACTIONS(1),
    [sym_superset] = ACTIONS(1),
    [sym_not_in] = ACTIONS(1),
    [sym_in] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(149),
    [sym_procedure_decl] = STATE(63),
    [sym_vocabulary_decl] = STATE(63),
    [sym_structure_decl] = STATE(63),
    [sym_theory_decl] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_procedure] = ACTIONS(7),
    [anon_sym_vocabulary] = ACTIONS(9),
    [anon_sym_structure] = ACTIONS(11),
    [anon_sym_theory] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      sym__name,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(80), 1,
      sym__builtin_type,
    STATE(121), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(83), 2,
      sym_value,
      sym_values,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 3,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
    STATE(46), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [62] = 16,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__name,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(80), 1,
      sym__builtin_type,
    STATE(125), 1,
      aux_sym_values_repeat1,
    STATE(133), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 3,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
    STATE(41), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_reverse_implication,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(39), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [147] = 11,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__builtin_type,
    STATE(113), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(73), 2,
      sym_value,
      sym_values,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [188] = 11,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__builtin_type,
    STATE(121), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(83), 2,
      sym_value,
      sym_values,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_reverse_implication,
    ACTIONS(39), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [253] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(53), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_reverse_implication,
    ACTIONS(55), 15,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_reverse_implication,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_reverse_implication,
    ACTIONS(61), 15,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_reverse_implication,
    ACTIONS(65), 15,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [377] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(43), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [401] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(71), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [424] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_or,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(75), 10,
      anon_sym_type,
      sym__name,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_reverse_implication,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(73), 12,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_reverse_implication,
    ACTIONS(51), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_reverse_implication,
    ACTIONS(73), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [524] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(63), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [547] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(67), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [570] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(57), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_reverse_implication,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(73), 13,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [618] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(87), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_reverse_implication,
    ACTIONS(89), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [664] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(95), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_reverse_implication,
    ACTIONS(69), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [710] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(91), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [733] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(97), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(99), 11,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_reverse_implication,
    ACTIONS(101), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [781] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(53), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [804] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(103), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [827] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_or,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 2,
      anon_sym_type,
      sym__name,
    ACTIONS(111), 2,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(109), 8,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_reverse_implication,
    ACTIONS(93), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [881] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(75), 12,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_reverse_implication,
    ACTIONS(85), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_and,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(99), 1,
      sym_reverse_implication,
    ACTIONS(97), 13,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_or,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [952] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(75), 11,
      anon_sym_type,
      sym__name,
      sym_or,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_in,
  [977] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym__builtin_type,
    STATE(125), 1,
      aux_sym_values_repeat1,
    STATE(133), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1011] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__builtin_type,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(93), 2,
      sym_type,
      sym_bool,
    STATE(94), 2,
      sym_value,
      sym_values,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1043] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(43), 1,
      aux_sym_structure_decl_repeat1,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      sym_reverse_implication,
    ACTIONS(121), 9,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [1105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(123), 1,
      sym_reverse_implication,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 9,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [1132] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym__name,
    ACTIONS(138), 1,
      sym_not,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(43), 1,
      aux_sym_structure_decl_repeat1,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1167] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym__name,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(48), 1,
      aux_sym_structure_decl_repeat1,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1202] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym__name,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(40), 1,
      aux_sym_structure_decl_repeat1,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(123), 1,
      sym_reverse_implication,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 9,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [1264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(123), 1,
      sym_reverse_implication,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(121), 9,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_not_in,
      sym_in,
      sym_definitional_equality,
  [1291] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym__name,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(43), 1,
      aux_sym_structure_decl_repeat1,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1326] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(100), 1,
      sym_value,
    STATE(118), 1,
      sym__builtin_type,
    ACTIONS(153), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(155), 2,
      sym_int,
      sym_real,
    STATE(124), 2,
      sym_type,
      sym_bool,
    ACTIONS(151), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1354] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(80), 1,
      sym__builtin_type,
    STATE(137), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1382] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(80), 1,
      sym__builtin_type,
    STATE(146), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(93), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1410] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(18), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1439] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(16), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1468] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(22), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1497] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(42), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1526] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(163), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym_function,
    STATE(32), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1555] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(163), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym_function,
    STATE(28), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1584] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(163), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym_function,
    STATE(37), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1613] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(36), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1642] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__name,
    STATE(10), 1,
      sym_name,
    STATE(17), 1,
      sym_function,
    STATE(41), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1671] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(163), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym_function,
    STATE(34), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1700] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym__name,
    ACTIONS(163), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym_function,
    STATE(15), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1729] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_procedure,
    ACTIONS(9), 1,
      anon_sym_vocabulary,
    ACTIONS(11), 1,
      anon_sym_structure,
    ACTIONS(13), 1,
      anon_sym_theory,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(64), 5,
      sym_procedure_decl,
      sym_vocabulary_decl,
      sym_structure_decl,
      sym_theory_decl,
      aux_sym_source_file_repeat1,
  [1755] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_procedure,
    ACTIONS(172), 1,
      anon_sym_vocabulary,
    ACTIONS(175), 1,
      anon_sym_structure,
    ACTIONS(178), 1,
      anon_sym_theory,
    STATE(64), 5,
      sym_procedure_decl,
      sym_vocabulary_decl,
      sym_structure_decl,
      sym_theory_decl,
      aux_sym_source_file_repeat1,
  [1781] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__builtin_type,
    STATE(89), 1,
      sym_type,
    STATE(134), 1,
      sym_cross_product,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1803] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym__name,
    STATE(117), 1,
      aux_sym_function_repeat1,
    STATE(126), 1,
      sym_argument,
    STATE(145), 1,
      sym_function,
    STATE(161), 1,
      sym_name,
  [1828] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym__name,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_repeat1,
    STATE(122), 1,
      sym_argument,
    STATE(145), 1,
      sym_function,
    STATE(161), 1,
      sym_name,
  [1853] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_type,
    ACTIONS(195), 1,
      sym__name,
    STATE(158), 1,
      sym_name,
    STATE(71), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [1874] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym__name,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_function_repeat1,
    STATE(104), 1,
      sym_argument,
    STATE(145), 1,
      sym_function,
    STATE(161), 1,
      sym_name,
  [1899] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_type,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_name,
    STATE(68), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [1920] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_type,
    ACTIONS(206), 1,
      sym__name,
    STATE(158), 1,
      sym_name,
    STATE(71), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [1941] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(80), 1,
      sym__builtin_type,
    STATE(147), 1,
      sym_type,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    STATE(111), 1,
      aux_sym_numeration_repeat1,
    STATE(114), 1,
      sym_yields,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2009] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      sym__name,
    STATE(162), 1,
      sym_name,
    STATE(77), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [2059] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_name,
    STATE(77), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_numeration_repeat1,
    STATE(112), 1,
      sym_yields,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2117] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(238), 2,
      sym__name,
      sym_not,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2130] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_name,
    STATE(81), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2147] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym__name,
      sym_not,
    ACTIONS(133), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DASH_GT,
    ACTIONS(248), 1,
      anon_sym_STAR,
    STATE(96), 1,
      aux_sym_cross_product_repeat1,
    STATE(109), 1,
      sym_yields,
  [2187] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_RBRACE,
      sym_definitional_equality,
    ACTIONS(43), 2,
      anon_sym_type,
      sym__name,
  [2199] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_definitional_equality,
    ACTIONS(252), 2,
      anon_sym_type,
      sym__name,
  [2213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    STATE(131), 1,
      sym_yields,
    ACTIONS(260), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2247] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__name,
    STATE(135), 1,
      sym_argument,
    STATE(145), 1,
      sym_function,
    STATE(161), 1,
      sym_name,
  [2263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_STAR,
    ACTIONS(262), 1,
      anon_sym_DASH_GT,
    STATE(102), 1,
      aux_sym_cross_product_repeat1,
  [2276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2315] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 2,
      anon_sym_type,
      sym__name,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
    ACTIONS(279), 1,
      anon_sym_STAR,
    STATE(102), 1,
      aux_sym_cross_product_repeat1,
  [2352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_repeat1,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_values_repeat1,
  [2430] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 2,
      anon_sym_type,
      sym__name,
  [2441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_numeration_repeat1,
  [2480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_numeration_repeat1,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2539] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 2,
      anon_sym_type,
      sym__name,
  [2550] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 2,
      anon_sym_type,
      sym__name,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_numeration_repeat1,
  [2587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_function_repeat1,
  [2600] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 2,
      anon_sym_type,
      sym__name,
  [2611] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 2,
      anon_sym_type,
      sym__name,
  [2622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_values_repeat1,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_repeat1,
  [2648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_values_repeat1,
  [2679] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    STATE(151), 1,
      sym_name,
  [2689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2697] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    STATE(152), 1,
      sym_name,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_values_repeat1,
  [2717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DASH_GT,
    STATE(109), 1,
      sym_yields,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2735] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym__name,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2753] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__name,
    STATE(91), 1,
      sym_name,
  [2763] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    STATE(153), 1,
      sym_name,
  [2773] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__name,
    STATE(150), 1,
      sym_vocab_name,
  [2783] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__name,
    STATE(160), 1,
      sym_vocab_name,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DASH_GT,
    STATE(119), 1,
      sym_yields,
  [2803] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym__name,
  [2813] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      sym__name,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [2847] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__name,
    STATE(154), 1,
      sym_name,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 353,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 451,
  [SMALL_STATE(17)] = 478,
  [SMALL_STATE(18)] = 501,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 547,
  [SMALL_STATE(21)] = 570,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 618,
  [SMALL_STATE(24)] = 641,
  [SMALL_STATE(25)] = 664,
  [SMALL_STATE(26)] = 687,
  [SMALL_STATE(27)] = 710,
  [SMALL_STATE(28)] = 733,
  [SMALL_STATE(29)] = 758,
  [SMALL_STATE(30)] = 781,
  [SMALL_STATE(31)] = 804,
  [SMALL_STATE(32)] = 827,
  [SMALL_STATE(33)] = 858,
  [SMALL_STATE(34)] = 881,
  [SMALL_STATE(35)] = 904,
  [SMALL_STATE(36)] = 927,
  [SMALL_STATE(37)] = 952,
  [SMALL_STATE(38)] = 977,
  [SMALL_STATE(39)] = 1011,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1078,
  [SMALL_STATE(42)] = 1105,
  [SMALL_STATE(43)] = 1132,
  [SMALL_STATE(44)] = 1167,
  [SMALL_STATE(45)] = 1202,
  [SMALL_STATE(46)] = 1237,
  [SMALL_STATE(47)] = 1264,
  [SMALL_STATE(48)] = 1291,
  [SMALL_STATE(49)] = 1326,
  [SMALL_STATE(50)] = 1354,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1410,
  [SMALL_STATE(53)] = 1439,
  [SMALL_STATE(54)] = 1468,
  [SMALL_STATE(55)] = 1497,
  [SMALL_STATE(56)] = 1526,
  [SMALL_STATE(57)] = 1555,
  [SMALL_STATE(58)] = 1584,
  [SMALL_STATE(59)] = 1613,
  [SMALL_STATE(60)] = 1642,
  [SMALL_STATE(61)] = 1671,
  [SMALL_STATE(62)] = 1700,
  [SMALL_STATE(63)] = 1729,
  [SMALL_STATE(64)] = 1755,
  [SMALL_STATE(65)] = 1781,
  [SMALL_STATE(66)] = 1803,
  [SMALL_STATE(67)] = 1828,
  [SMALL_STATE(68)] = 1853,
  [SMALL_STATE(69)] = 1874,
  [SMALL_STATE(70)] = 1899,
  [SMALL_STATE(71)] = 1920,
  [SMALL_STATE(72)] = 1941,
  [SMALL_STATE(73)] = 1957,
  [SMALL_STATE(74)] = 1976,
  [SMALL_STATE(75)] = 1987,
  [SMALL_STATE(76)] = 1998,
  [SMALL_STATE(77)] = 2009,
  [SMALL_STATE(78)] = 2026,
  [SMALL_STATE(79)] = 2037,
  [SMALL_STATE(80)] = 2048,
  [SMALL_STATE(81)] = 2059,
  [SMALL_STATE(82)] = 2076,
  [SMALL_STATE(83)] = 2087,
  [SMALL_STATE(84)] = 2106,
  [SMALL_STATE(85)] = 2117,
  [SMALL_STATE(86)] = 2130,
  [SMALL_STATE(87)] = 2147,
  [SMALL_STATE(88)] = 2160,
  [SMALL_STATE(89)] = 2171,
  [SMALL_STATE(90)] = 2187,
  [SMALL_STATE(91)] = 2199,
  [SMALL_STATE(92)] = 2213,
  [SMALL_STATE(93)] = 2223,
  [SMALL_STATE(94)] = 2233,
  [SMALL_STATE(95)] = 2247,
  [SMALL_STATE(96)] = 2263,
  [SMALL_STATE(97)] = 2276,
  [SMALL_STATE(98)] = 2289,
  [SMALL_STATE(99)] = 2302,
  [SMALL_STATE(100)] = 2315,
  [SMALL_STATE(101)] = 2326,
  [SMALL_STATE(102)] = 2339,
  [SMALL_STATE(103)] = 2352,
  [SMALL_STATE(104)] = 2365,
  [SMALL_STATE(105)] = 2378,
  [SMALL_STATE(106)] = 2391,
  [SMALL_STATE(107)] = 2404,
  [SMALL_STATE(108)] = 2417,
  [SMALL_STATE(109)] = 2430,
  [SMALL_STATE(110)] = 2441,
  [SMALL_STATE(111)] = 2454,
  [SMALL_STATE(112)] = 2467,
  [SMALL_STATE(113)] = 2480,
  [SMALL_STATE(114)] = 2493,
  [SMALL_STATE(115)] = 2506,
  [SMALL_STATE(116)] = 2515,
  [SMALL_STATE(117)] = 2526,
  [SMALL_STATE(118)] = 2539,
  [SMALL_STATE(119)] = 2550,
  [SMALL_STATE(120)] = 2561,
  [SMALL_STATE(121)] = 2574,
  [SMALL_STATE(122)] = 2587,
  [SMALL_STATE(123)] = 2600,
  [SMALL_STATE(124)] = 2611,
  [SMALL_STATE(125)] = 2622,
  [SMALL_STATE(126)] = 2635,
  [SMALL_STATE(127)] = 2648,
  [SMALL_STATE(128)] = 2657,
  [SMALL_STATE(129)] = 2666,
  [SMALL_STATE(130)] = 2679,
  [SMALL_STATE(131)] = 2689,
  [SMALL_STATE(132)] = 2697,
  [SMALL_STATE(133)] = 2707,
  [SMALL_STATE(134)] = 2717,
  [SMALL_STATE(135)] = 2727,
  [SMALL_STATE(136)] = 2735,
  [SMALL_STATE(137)] = 2745,
  [SMALL_STATE(138)] = 2753,
  [SMALL_STATE(139)] = 2763,
  [SMALL_STATE(140)] = 2773,
  [SMALL_STATE(141)] = 2783,
  [SMALL_STATE(142)] = 2793,
  [SMALL_STATE(143)] = 2803,
  [SMALL_STATE(144)] = 2813,
  [SMALL_STATE(145)] = 2823,
  [SMALL_STATE(146)] = 2831,
  [SMALL_STATE(147)] = 2839,
  [SMALL_STATE(148)] = 2847,
  [SMALL_STATE(149)] = 2857,
  [SMALL_STATE(150)] = 2864,
  [SMALL_STATE(151)] = 2871,
  [SMALL_STATE(152)] = 2878,
  [SMALL_STATE(153)] = 2885,
  [SMALL_STATE(154)] = 2892,
  [SMALL_STATE(155)] = 2899,
  [SMALL_STATE(156)] = 2906,
  [SMALL_STATE(157)] = 2913,
  [SMALL_STATE(158)] = 2920,
  [SMALL_STATE(159)] = 2927,
  [SMALL_STATE(160)] = 2934,
  [SMALL_STATE(161)] = 2941,
  [SMALL_STATE(162)] = 2948,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(60),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(7),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(59),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2), SHIFT_REPEAT(138),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2), SHIFT_REPEAT(127),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_decl, 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theory_decl, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_decl, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_decl_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_decl_repeat1, 2), SHIFT_REPEAT(127),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theory_decl, 7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_decl, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_decl, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocabulary_decl, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocabulary_decl, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_product, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 2), SHIFT_REPEAT(39),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yields, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yields, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cross_product_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cross_product_repeat1, 2), SHIFT_REPEAT(72),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(95),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(50),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocab_name, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_idp(void) {
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
