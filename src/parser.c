#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 8,
  [25] = 10,
  [26] = 20,
  [27] = 14,
  [28] = 28,
  [29] = 15,
  [30] = 12,
  [31] = 4,
  [32] = 22,
  [33] = 17,
  [34] = 18,
  [35] = 11,
  [36] = 19,
  [37] = 13,
  [38] = 23,
  [39] = 21,
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
  [51] = 47,
  [52] = 44,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 56,
  [63] = 60,
  [64] = 57,
  [65] = 59,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 68,
  [70] = 58,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 7,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 91,
  [123] = 115,
  [124] = 107,
  [125] = 119,
  [126] = 120,
  [127] = 101,
  [128] = 97,
  [129] = 110,
  [130] = 113,
  [131] = 117,
  [132] = 113,
  [133] = 133,
  [134] = 110,
  [135] = 135,
  [136] = 7,
  [137] = 137,
  [138] = 4,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 11,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 154,
  [155] = 10,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 168,
  [169] = 169,
  [170] = 170,
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
      if (eof) ADVANCE(76);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'B') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '{') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '.' || ':' < lookahead)) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '.' || ':' < lookahead) &&
          lookahead != '{') ADVANCE(141);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '{') ADVANCE(141);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '[') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '9') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_vocabulary);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_type);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Int_keyword);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Int_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Bool_keyword);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Bool_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Real_keyword);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Real_keyword);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '[') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '[') ADVANCE(111);
      if (sym_real_character_set_1(lookahead)) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_int);
      if (sym_real_character_set_1(lookahead)) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == ']') ADVANCE(106);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ' ') ADVANCE(42);
      if (!sym__name_character_set_2(lookahead)) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(113);
      if (!sym__name_character_set_3(lookahead)) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '=') ADVANCE(155);
      if (!sym__name_character_set_3(lookahead)) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '/') ADVANCE(140);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == '[') ADVANCE(112);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '0') ADVANCE(108);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '9') ADVANCE(118);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(163);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '=') ADVANCE(157);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '>') ADVANCE(151);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '[') ADVANCE(112);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ']') ADVANCE(106);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(125);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(127);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(98);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(100);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(90);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(120);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(135);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(94);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(96);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(136);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(166);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(131);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(126);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(137);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(123);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(138);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(122);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(92);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(107);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(121);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(133);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (sym_real_character_set_1(lookahead)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_not);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_or);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_and);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_implies);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_implies);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_equivalence);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_equivalence);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_reverse_implication);
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_reverse_implication);
      if (lookahead == '>') ADVANCE(153);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_different);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_different);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_greater_or_equal);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_less_or_equal);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_less_or_equal);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_superset);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_superset);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_not_in);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_in);
      if (!sym__name_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_definitional_equality);
      END_STATE();
    case 168:
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
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
    [sym_definitional_equality] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(157),
    [sym_procedure_decl] = STATE(72),
    [sym_vocabulary_decl] = STATE(72),
    [sym_structure_decl] = STATE(72),
    [sym_theory_decl] = STATE(72),
    [aux_sym_source_file_repeat1] = STATE(72),
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
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(91), 1,
      sym__builtin_type,
    STATE(117), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(88), 2,
      sym_value,
      sym_values,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 3,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
    STATE(43), 5,
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
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(91), 1,
      sym__builtin_type,
    STATE(121), 1,
      aux_sym_values_repeat1,
    STATE(156), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 3,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(39), 15,
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
  [145] = 11,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__builtin_type,
    STATE(131), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(86), 2,
      sym_value,
      sym_values,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [186] = 11,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__builtin_type,
    STATE(117), 1,
      aux_sym_numeration_repeat1,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(88), 2,
      sym_value,
      sym_values,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(47), 15,
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
  [252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(53), 14,
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
  [279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_reverse_implication,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(47), 14,
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
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(59), 15,
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
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(63), 15,
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
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(67), 14,
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
  [380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(73), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(71), 12,
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
  [408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(79), 14,
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
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(53), 14,
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
  [456] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(49), 12,
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
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(83), 14,
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
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(87), 14,
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
  [528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(73), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(71), 13,
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
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(71), 14,
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
  [578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(93), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(91), 12,
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
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(95), 14,
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
  [630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(101), 2,
      anon_sym_COLON,
      sym_reverse_implication,
    ACTIONS(99), 13,
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
  [656] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(55), 12,
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
  [682] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(61), 12,
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
  [705] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(73), 12,
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
  [728] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(81), 12,
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
  [751] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_or,
    ACTIONS(111), 1,
      sym_and,
    ACTIONS(115), 1,
      sym_not_in,
    ACTIONS(117), 1,
      sym_in,
    ACTIONS(119), 1,
      sym_definitional_equality,
    ACTIONS(107), 2,
      anon_sym_type,
      sym__name,
    ACTIONS(113), 7,
      sym_implies,
      sym_equivalence,
      sym_reverse_implication,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
  [786] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(55), 12,
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
  [809] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(69), 12,
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
  [832] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(41), 12,
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
  [855] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(97), 12,
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
  [878] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(85), 12,
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
  [901] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(89), 12,
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
  [924] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(65), 12,
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
  [947] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_and,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(73), 11,
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
  [972] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_or,
    ACTIONS(111), 1,
      sym_and,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(73), 10,
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
  [999] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_and,
    ACTIONS(99), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(101), 11,
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
  [1024] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_or,
    ACTIONS(111), 1,
      sym_and,
    ACTIONS(91), 3,
      anon_sym_RBRACE,
      sym_not_in,
      sym_definitional_equality,
    ACTIONS(93), 10,
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
  [1051] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__builtin_type,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(97), 2,
      sym_type,
      sym_bool,
    STATE(98), 2,
      sym_value,
      sym_values,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1083] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym__builtin_type,
    STATE(121), 1,
      aux_sym_values_repeat1,
    STATE(156), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1117] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      sym__name,
    ACTIONS(132), 1,
      sym_not,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(42), 1,
      aux_sym_structure_decl_repeat1,
    STATE(45), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1152] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1239] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(42), 1,
      aux_sym_structure_decl_repeat1,
    STATE(45), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1303] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym__name,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(42), 1,
      aux_sym_structure_decl_repeat1,
    STATE(45), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1338] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym__name,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(48), 1,
      aux_sym_structure_decl_repeat1,
    STATE(45), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1373] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym__name,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(46), 1,
      aux_sym_structure_decl_repeat1,
    STATE(45), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_or,
    ACTIONS(77), 1,
      sym_and,
    ACTIONS(139), 1,
      sym_reverse_implication,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(141), 2,
      sym_not_in,
      sym_in,
    ACTIONS(137), 7,
      sym_implies,
      sym_equivalence,
      sym_different,
      sym_greater_or_equal,
      sym_less_or_equal,
      sym_superset,
      sym_definitional_equality,
  [1466] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(91), 1,
      sym__builtin_type,
    STATE(152), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1494] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(122), 1,
      sym__builtin_type,
    STATE(137), 1,
      sym_value,
    ACTIONS(167), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(169), 2,
      sym_int,
      sym_real,
    STATE(128), 2,
      sym_type,
      sym_bool,
    ACTIONS(165), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1522] = 7,
    ACTIONS(31), 1,
      sym_comment,
    STATE(91), 1,
      sym__builtin_type,
    STATE(146), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(27), 2,
      sym_int,
      sym_real,
    STATE(97), 2,
      sym_type,
      sym_bool,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [1550] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(47), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1579] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(19), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1608] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(44), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1637] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(21), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1666] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(23), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1695] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(28), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1724] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(51), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1753] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(38), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1782] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(36), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1811] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(39), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1840] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(26), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1869] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(20), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1898] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(13), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1927] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__name,
    ACTIONS(177), 1,
      sym_not,
    STATE(24), 1,
      sym_name,
    STATE(29), 1,
      sym_function,
    STATE(37), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1956] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym__name,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      sym_function,
    STATE(52), 5,
      sym_identifier,
      sym_unary_expression,
      sym_binary_expression,
      sym__expression,
      sym_numeration,
  [1985] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_procedure,
    ACTIONS(184), 1,
      anon_sym_vocabulary,
    ACTIONS(187), 1,
      anon_sym_structure,
    ACTIONS(190), 1,
      anon_sym_theory,
    STATE(71), 5,
      sym_procedure_decl,
      sym_vocabulary_decl,
      sym_structure_decl,
      sym_theory_decl,
      aux_sym_source_file_repeat1,
  [2011] = 7,
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
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(71), 5,
      sym_procedure_decl,
      sym_vocabulary_decl,
      sym_structure_decl,
      sym_theory_decl,
      aux_sym_source_file_repeat1,
  [2037] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__builtin_type,
    STATE(102), 1,
      sym_type,
    STATE(154), 1,
      sym_cross_product,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [2059] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      sym__name,
    STATE(161), 1,
      sym_name,
    STATE(77), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [2080] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      sym__name,
    STATE(129), 1,
      aux_sym_function_repeat1,
    STATE(130), 1,
      sym_argument,
    STATE(153), 1,
      sym_function,
    STATE(167), 1,
      sym_name,
  [2105] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      sym__name,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_argument,
    STATE(134), 1,
      aux_sym_function_repeat1,
    STATE(153), 1,
      sym_function,
    STATE(167), 1,
      sym_name,
  [2130] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_type,
    ACTIONS(216), 1,
      sym__name,
    STATE(161), 1,
      sym_name,
    STATE(77), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [2151] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      sym__name,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_name,
    STATE(74), 3,
      sym_type_decl,
      sym_function_decl,
      aux_sym_vocabulary_decl_repeat1,
  [2172] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      sym__name,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_function_repeat1,
    STATE(113), 1,
      sym_argument,
    STATE(153), 1,
      sym_function,
    STATE(167), 1,
      sym_name,
  [2197] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(91), 1,
      sym__builtin_type,
    STATE(139), 1,
      sym_type,
    ACTIONS(23), 4,
      sym_Int_keyword,
      sym_Bool_keyword,
      sym_Real_keyword,
      sym__name,
  [2213] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym__name,
      sym_not,
    ACTIONS(223), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2226] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_name,
    STATE(85), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2265] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_name,
    STATE(87), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    STATE(125), 1,
      aux_sym_numeration_repeat1,
    STATE(126), 1,
      sym_yields,
  [2301] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym__name,
    STATE(164), 1,
      sym_name,
    STATE(87), 2,
      sym_function,
      aux_sym_procedure_decl_repeat1,
  [2318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym_numeration_repeat1,
    STATE(120), 1,
      sym_yields,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2403] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym__name,
      sym_not,
    ACTIONS(127), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_procedure,
      anon_sym_vocabulary,
      anon_sym_structure,
      anon_sym_theory,
  [2427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    STATE(148), 1,
      sym_yields,
    ACTIONS(262), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2451] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      sym_definitional_equality,
    ACTIONS(266), 2,
      anon_sym_type,
      sym__name,
  [2465] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      sym_definitional_equality,
    ACTIONS(49), 2,
      anon_sym_type,
      sym__name,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DASH_GT,
    ACTIONS(274), 1,
      anon_sym_STAR,
    STATE(106), 1,
      sym_yields,
    STATE(114), 1,
      aux_sym_cross_product_repeat1,
  [2503] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__name,
    STATE(142), 1,
      sym_argument,
    STATE(153), 1,
      sym_function,
    STATE(167), 1,
      sym_name,
  [2519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_values_repeat1,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2543] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 2,
      anon_sym_type,
      sym__name,
  [2554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_values_repeat1,
  [2619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_function_repeat1,
  [2641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      anon_sym_DASH_GT,
    STATE(133), 1,
      aux_sym_cross_product_repeat1,
  [2654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym_numeration_repeat1,
  [2728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_values_repeat1,
  [2741] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 2,
      anon_sym_type,
      sym__name,
  [2752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_numeration_repeat1,
  [2804] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 2,
      anon_sym_type,
      sym__name,
  [2815] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 2,
      anon_sym_type,
      sym__name,
  [2826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_function_repeat1,
  [2852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_numeration_repeat1,
  [2865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_function_repeat1,
  [2878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(333), 1,
      anon_sym_STAR,
    STATE(133), 1,
      aux_sym_cross_product_repeat1,
  [2891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
  [2904] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 2,
      anon_sym_type,
      sym__name,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [2924] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 2,
      anon_sym_type,
      sym__name,
  [2935] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym__name,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DASH_GT,
    STATE(135), 1,
      sym_yields,
  [2963] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    STATE(169), 1,
      sym_name,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2981] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym__name,
  [2991] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__name,
    STATE(159), 1,
      sym_vocab_name,
  [3001] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__name,
    STATE(160), 1,
      sym_vocab_name,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3019] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    STATE(168), 1,
      sym_name,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3037] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    STATE(163), 1,
      sym_name,
  [3047] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__name,
    STATE(170), 1,
      sym_name,
  [3057] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__name,
    STATE(99), 1,
      sym_name,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DASH_GT,
    STATE(106), 1,
      sym_yields,
  [3093] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym__name,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_values_repeat1,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_COLON,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 456,
  [SMALL_STATE(17)] = 480,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 528,
  [SMALL_STATE(20)] = 554,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 606,
  [SMALL_STATE(23)] = 630,
  [SMALL_STATE(24)] = 656,
  [SMALL_STATE(25)] = 682,
  [SMALL_STATE(26)] = 705,
  [SMALL_STATE(27)] = 728,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 786,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 832,
  [SMALL_STATE(32)] = 855,
  [SMALL_STATE(33)] = 878,
  [SMALL_STATE(34)] = 901,
  [SMALL_STATE(35)] = 924,
  [SMALL_STATE(36)] = 947,
  [SMALL_STATE(37)] = 972,
  [SMALL_STATE(38)] = 999,
  [SMALL_STATE(39)] = 1024,
  [SMALL_STATE(40)] = 1051,
  [SMALL_STATE(41)] = 1083,
  [SMALL_STATE(42)] = 1117,
  [SMALL_STATE(43)] = 1152,
  [SMALL_STATE(44)] = 1181,
  [SMALL_STATE(45)] = 1210,
  [SMALL_STATE(46)] = 1239,
  [SMALL_STATE(47)] = 1274,
  [SMALL_STATE(48)] = 1303,
  [SMALL_STATE(49)] = 1338,
  [SMALL_STATE(50)] = 1373,
  [SMALL_STATE(51)] = 1408,
  [SMALL_STATE(52)] = 1437,
  [SMALL_STATE(53)] = 1466,
  [SMALL_STATE(54)] = 1494,
  [SMALL_STATE(55)] = 1522,
  [SMALL_STATE(56)] = 1550,
  [SMALL_STATE(57)] = 1579,
  [SMALL_STATE(58)] = 1608,
  [SMALL_STATE(59)] = 1637,
  [SMALL_STATE(60)] = 1666,
  [SMALL_STATE(61)] = 1695,
  [SMALL_STATE(62)] = 1724,
  [SMALL_STATE(63)] = 1753,
  [SMALL_STATE(64)] = 1782,
  [SMALL_STATE(65)] = 1811,
  [SMALL_STATE(66)] = 1840,
  [SMALL_STATE(67)] = 1869,
  [SMALL_STATE(68)] = 1898,
  [SMALL_STATE(69)] = 1927,
  [SMALL_STATE(70)] = 1956,
  [SMALL_STATE(71)] = 1985,
  [SMALL_STATE(72)] = 2011,
  [SMALL_STATE(73)] = 2037,
  [SMALL_STATE(74)] = 2059,
  [SMALL_STATE(75)] = 2080,
  [SMALL_STATE(76)] = 2105,
  [SMALL_STATE(77)] = 2130,
  [SMALL_STATE(78)] = 2151,
  [SMALL_STATE(79)] = 2172,
  [SMALL_STATE(80)] = 2197,
  [SMALL_STATE(81)] = 2213,
  [SMALL_STATE(82)] = 2226,
  [SMALL_STATE(83)] = 2243,
  [SMALL_STATE(84)] = 2254,
  [SMALL_STATE(85)] = 2265,
  [SMALL_STATE(86)] = 2282,
  [SMALL_STATE(87)] = 2301,
  [SMALL_STATE(88)] = 2318,
  [SMALL_STATE(89)] = 2337,
  [SMALL_STATE(90)] = 2348,
  [SMALL_STATE(91)] = 2359,
  [SMALL_STATE(92)] = 2370,
  [SMALL_STATE(93)] = 2381,
  [SMALL_STATE(94)] = 2392,
  [SMALL_STATE(95)] = 2403,
  [SMALL_STATE(96)] = 2416,
  [SMALL_STATE(97)] = 2427,
  [SMALL_STATE(98)] = 2437,
  [SMALL_STATE(99)] = 2451,
  [SMALL_STATE(100)] = 2465,
  [SMALL_STATE(101)] = 2477,
  [SMALL_STATE(102)] = 2487,
  [SMALL_STATE(103)] = 2503,
  [SMALL_STATE(104)] = 2519,
  [SMALL_STATE(105)] = 2532,
  [SMALL_STATE(106)] = 2543,
  [SMALL_STATE(107)] = 2554,
  [SMALL_STATE(108)] = 2567,
  [SMALL_STATE(109)] = 2580,
  [SMALL_STATE(110)] = 2593,
  [SMALL_STATE(111)] = 2606,
  [SMALL_STATE(112)] = 2619,
  [SMALL_STATE(113)] = 2628,
  [SMALL_STATE(114)] = 2641,
  [SMALL_STATE(115)] = 2654,
  [SMALL_STATE(116)] = 2667,
  [SMALL_STATE(117)] = 2680,
  [SMALL_STATE(118)] = 2693,
  [SMALL_STATE(119)] = 2702,
  [SMALL_STATE(120)] = 2715,
  [SMALL_STATE(121)] = 2728,
  [SMALL_STATE(122)] = 2741,
  [SMALL_STATE(123)] = 2752,
  [SMALL_STATE(124)] = 2765,
  [SMALL_STATE(125)] = 2778,
  [SMALL_STATE(126)] = 2791,
  [SMALL_STATE(127)] = 2804,
  [SMALL_STATE(128)] = 2815,
  [SMALL_STATE(129)] = 2826,
  [SMALL_STATE(130)] = 2839,
  [SMALL_STATE(131)] = 2852,
  [SMALL_STATE(132)] = 2865,
  [SMALL_STATE(133)] = 2878,
  [SMALL_STATE(134)] = 2891,
  [SMALL_STATE(135)] = 2904,
  [SMALL_STATE(136)] = 2915,
  [SMALL_STATE(137)] = 2924,
  [SMALL_STATE(138)] = 2935,
  [SMALL_STATE(139)] = 2945,
  [SMALL_STATE(140)] = 2953,
  [SMALL_STATE(141)] = 2963,
  [SMALL_STATE(142)] = 2973,
  [SMALL_STATE(143)] = 2981,
  [SMALL_STATE(144)] = 2991,
  [SMALL_STATE(145)] = 3001,
  [SMALL_STATE(146)] = 3011,
  [SMALL_STATE(147)] = 3019,
  [SMALL_STATE(148)] = 3029,
  [SMALL_STATE(149)] = 3037,
  [SMALL_STATE(150)] = 3047,
  [SMALL_STATE(151)] = 3057,
  [SMALL_STATE(152)] = 3067,
  [SMALL_STATE(153)] = 3075,
  [SMALL_STATE(154)] = 3083,
  [SMALL_STATE(155)] = 3093,
  [SMALL_STATE(156)] = 3103,
  [SMALL_STATE(157)] = 3113,
  [SMALL_STATE(158)] = 3120,
  [SMALL_STATE(159)] = 3127,
  [SMALL_STATE(160)] = 3134,
  [SMALL_STATE(161)] = 3141,
  [SMALL_STATE(162)] = 3148,
  [SMALL_STATE(163)] = 3155,
  [SMALL_STATE(164)] = 3162,
  [SMALL_STATE(165)] = 3169,
  [SMALL_STATE(166)] = 3176,
  [SMALL_STATE(167)] = 3183,
  [SMALL_STATE(168)] = 3190,
  [SMALL_STATE(169)] = 3197,
  [SMALL_STATE(170)] = 3204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeration, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeration, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(56),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(7),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2), SHIFT_REPEAT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2), SHIFT_REPEAT(151),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vocabulary_decl_repeat1, 2), SHIFT_REPEAT(136),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_decl_repeat1, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_decl, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_decl, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_decl_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_decl_repeat1, 2), SHIFT_REPEAT(136),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocabulary_decl, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_decl, 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theory_decl, 7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocabulary_decl, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theory_decl, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_structure_decl_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_decl, 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(55),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(103),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_product, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 2), SHIFT_REPEAT(40),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cross_product_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cross_product_repeat1, 2), SHIFT_REPEAT(80),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yields, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yields, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeration_repeat1, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vocab_name, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
