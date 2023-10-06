#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 668
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 31

enum {
  sym_text = 1,
  anon_sym_LT = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  aux_sym_html_token1 = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_if = 7,
  anon_sym_elseif = 8,
  anon_sym_else = 9,
  anon_sym_end = 10,
  anon_sym_COMMA = 11,
  anon_sym_COLON_EQ = 12,
  anon_sym_range = 13,
  anon_sym_template = 14,
  anon_sym_define = 15,
  anon_sym_block = 16,
  anon_sym_with = 17,
  anon_sym_EQ = 18,
  anon_sym_PIPE = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_ = 22,
  sym_pipeline_stub = 23,
  anon_sym_DOT = 24,
  anon_sym_DOLLAR = 25,
  sym_identifier = 26,
  sym_int_literal = 27,
  sym_float_literal = 28,
  sym_imaginary_literal = 29,
  sym_rune_literal = 30,
  sym_true = 31,
  sym_false = 32,
  sym_nil = 33,
  sym_raw_string_literal = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_interpreted_string_literal_token1 = 36,
  sym_escape_sequence = 37,
  sym_comment = 38,
  anon_sym_LBRACE_LBRACE = 39,
  anon_sym_LBRACE_LBRACE_DASH = 40,
  anon_sym_RBRACE_RBRACE = 41,
  anon_sym_DASH_RBRACE_RBRACE = 42,
  sym_template = 43,
  sym__block = 44,
  sym_html = 45,
  sym__action = 46,
  sym__comment_action = 47,
  sym__pipeline_action = 48,
  sym_if_action = 49,
  sym_range_variable_definition = 50,
  sym_range_action = 51,
  sym_template_action = 52,
  sym_define_action = 53,
  sym_block_action = 54,
  sym_with_action = 55,
  sym__pipeline = 56,
  sym_variable_definition = 57,
  sym_assignment = 58,
  sym_chained_pipeline = 59,
  sym_parenthesized_pipeline = 60,
  sym_method_call = 61,
  sym_function_call = 62,
  sym_argument_list = 63,
  sym__expression = 64,
  sym_selector_expression = 65,
  sym_field_identifier = 66,
  sym_field = 67,
  sym_variable = 68,
  sym__literal = 69,
  sym__boolean_literal = 70,
  sym_dot = 71,
  sym__string_literal = 72,
  sym_interpreted_string_literal = 73,
  sym__left_delimiter = 74,
  sym__right_delimiter = 75,
  aux_sym_template_repeat1 = 76,
  aux_sym_if_action_repeat1 = 77,
  aux_sym_argument_list_repeat1 = 78,
  aux_sym_interpreted_string_literal_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_html_token1] = "html_token1",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_range] = "range",
  [anon_sym_template] = "template",
  [anon_sym_define] = "define",
  [anon_sym_block] = "block",
  [anon_sym_with] = "with",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_] = " ",
  [sym_pipeline_stub] = "pipeline_stub",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_rune_literal] = "rune_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym_html] = "html",
  [sym__action] = "_action",
  [sym__comment_action] = "_comment_action",
  [sym__pipeline_action] = "_pipeline_action",
  [sym_if_action] = "if_action",
  [sym_range_variable_definition] = "range_variable_definition",
  [sym_range_action] = "range_action",
  [sym_template_action] = "template_action",
  [sym_define_action] = "define_action",
  [sym_block_action] = "block_action",
  [sym_with_action] = "with_action",
  [sym__pipeline] = "_pipeline",
  [sym_variable_definition] = "variable_definition",
  [sym_assignment] = "assignment",
  [sym_chained_pipeline] = "chained_pipeline",
  [sym_parenthesized_pipeline] = "parenthesized_pipeline",
  [sym_method_call] = "method_call",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_field_identifier] = "field_identifier",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym__literal] = "_literal",
  [sym__boolean_literal] = "_boolean_literal",
  [sym_dot] = "dot",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_if_action_repeat1] = "if_action_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_html_token1] = aux_sym_html_token1,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_] = anon_sym_,
  [sym_pipeline_stub] = sym_pipeline_stub,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_rune_literal] = sym_rune_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_nil] = sym_nil,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym_html] = sym_html,
  [sym__action] = sym__action,
  [sym__comment_action] = sym__comment_action,
  [sym__pipeline_action] = sym__pipeline_action,
  [sym_if_action] = sym_if_action,
  [sym_range_variable_definition] = sym_range_variable_definition,
  [sym_range_action] = sym_range_action,
  [sym_template_action] = sym_template_action,
  [sym_define_action] = sym_define_action,
  [sym_block_action] = sym_block_action,
  [sym_with_action] = sym_with_action,
  [sym__pipeline] = sym__pipeline,
  [sym_variable_definition] = sym_variable_definition,
  [sym_assignment] = sym_assignment,
  [sym_chained_pipeline] = sym_chained_pipeline,
  [sym_parenthesized_pipeline] = sym_parenthesized_pipeline,
  [sym_method_call] = sym_method_call,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_field_identifier] = sym_field_identifier,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym__literal] = sym__literal,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym_dot] = sym_dot,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_if_action_repeat1] = aux_sym_if_action_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_pipeline_stub] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_html] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_action] = {
    .visible = false,
    .named = true,
  },
  [sym__pipeline_action] = {
    .visible = false,
    .named = true,
  },
  [sym_if_action] = {
    .visible = true,
    .named = true,
  },
  [sym_range_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_range_action] = {
    .visible = true,
    .named = true,
  },
  [sym_template_action] = {
    .visible = true,
    .named = true,
  },
  [sym_define_action] = {
    .visible = true,
    .named = true,
  },
  [sym_block_action] = {
    .visible = true,
    .named = true,
  },
  [sym_with_action] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_chained_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__right_delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_child = 5,
  field_condition = 6,
  field_consequence = 7,
  field_element = 8,
  field_field = 9,
  field_function = 10,
  field_index = 11,
  field_method = 12,
  field_name = 13,
  field_operand = 14,
  field_option = 15,
  field_range = 16,
  field_value = 17,
  field_variable = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_child] = "child",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_method] = "method",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_option] = "option",
  [field_range] = "range",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 4},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 4},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 1},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 3},
  [27] = {.index = 50, .length = 4},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 3},
  [30] = {.index = 59, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_child, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_arguments, 1},
    {field_method, 0},
  [7] =
    {field_name, 2},
  [8] =
    {field_field, 2},
    {field_operand, 0},
  [10] =
    {field_value, 2},
    {field_variable, 0},
  [12] =
    {field_argument, 3},
    {field_name, 2},
  [14] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [18] =
    {field_condition, 2},
  [19] =
    {field_range, 2},
  [20] =
    {field_element, 2},
    {field_index, 0},
    {field_range, 4},
  [23] =
    {field_condition, 2},
    {field_consequence, 4},
  [25] =
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [28] =
    {field_body, 4},
  [29] =
    {field_body, 4},
    {field_range, 2},
  [31] =
    {field_body, 4},
    {field_name, 2},
  [33] =
    {field_condition, 2},
    {field_option, 4},
  [35] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [39] =
    {field_argument, 3},
    {field_body, 5},
    {field_name, 2},
  [42] =
    {field_alternative, 7},
    {field_condition, 2},
  [44] =
    {field_alternative, 7},
  [45] =
    {field_alternative, 7},
    {field_range, 2},
  [47] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [50] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [54] =
    {field_alternative, 8},
    {field_body, 4},
  [56] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [59] =
    {field_alternative, 9},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 11,
  [16] = 12,
  [17] = 13,
  [18] = 9,
  [19] = 9,
  [20] = 8,
  [21] = 13,
  [22] = 8,
  [23] = 12,
  [24] = 11,
  [25] = 10,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 42,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 35,
  [60] = 45,
  [61] = 42,
  [62] = 62,
  [63] = 62,
  [64] = 40,
  [65] = 37,
  [66] = 57,
  [67] = 45,
  [68] = 28,
  [69] = 44,
  [70] = 49,
  [71] = 54,
  [72] = 56,
  [73] = 53,
  [74] = 55,
  [75] = 52,
  [76] = 36,
  [77] = 55,
  [78] = 56,
  [79] = 50,
  [80] = 26,
  [81] = 62,
  [82] = 48,
  [83] = 54,
  [84] = 53,
  [85] = 50,
  [86] = 26,
  [87] = 27,
  [88] = 46,
  [89] = 32,
  [90] = 30,
  [91] = 47,
  [92] = 34,
  [93] = 49,
  [94] = 35,
  [95] = 36,
  [96] = 57,
  [97] = 39,
  [98] = 44,
  [99] = 32,
  [100] = 52,
  [101] = 47,
  [102] = 39,
  [103] = 46,
  [104] = 104,
  [105] = 104,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 111,
  [114] = 110,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 115,
  [119] = 117,
  [120] = 117,
  [121] = 121,
  [122] = 121,
  [123] = 121,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 129,
  [135] = 130,
  [136] = 130,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 141,
  [145] = 145,
  [146] = 142,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 148,
  [153] = 151,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 145,
  [158] = 150,
  [159] = 148,
  [160] = 150,
  [161] = 156,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 151,
  [166] = 156,
  [167] = 163,
  [168] = 162,
  [169] = 162,
  [170] = 145,
  [171] = 171,
  [172] = 155,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 173,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 202,
  [207] = 207,
  [208] = 204,
  [209] = 207,
  [210] = 193,
  [211] = 186,
  [212] = 185,
  [213] = 178,
  [214] = 180,
  [215] = 175,
  [216] = 216,
  [217] = 205,
  [218] = 174,
  [219] = 176,
  [220] = 177,
  [221] = 183,
  [222] = 184,
  [223] = 203,
  [224] = 187,
  [225] = 191,
  [226] = 195,
  [227] = 199,
  [228] = 202,
  [229] = 216,
  [230] = 189,
  [231] = 190,
  [232] = 192,
  [233] = 194,
  [234] = 149,
  [235] = 196,
  [236] = 201,
  [237] = 200,
  [238] = 198,
  [239] = 197,
  [240] = 181,
  [241] = 197,
  [242] = 181,
  [243] = 196,
  [244] = 198,
  [245] = 200,
  [246] = 199,
  [247] = 247,
  [248] = 201,
  [249] = 203,
  [250] = 195,
  [251] = 205,
  [252] = 207,
  [253] = 204,
  [254] = 191,
  [255] = 154,
  [256] = 193,
  [257] = 186,
  [258] = 258,
  [259] = 187,
  [260] = 185,
  [261] = 194,
  [262] = 192,
  [263] = 178,
  [264] = 190,
  [265] = 180,
  [266] = 175,
  [267] = 216,
  [268] = 189,
  [269] = 173,
  [270] = 174,
  [271] = 176,
  [272] = 177,
  [273] = 183,
  [274] = 184,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 277,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 280,
  [284] = 282,
  [285] = 285,
  [286] = 286,
  [287] = 278,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 247,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 281,
  [312] = 312,
  [313] = 258,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 304,
  [345] = 331,
  [346] = 346,
  [347] = 295,
  [348] = 304,
  [349] = 298,
  [350] = 328,
  [351] = 300,
  [352] = 291,
  [353] = 293,
  [354] = 298,
  [355] = 328,
  [356] = 356,
  [357] = 302,
  [358] = 319,
  [359] = 320,
  [360] = 322,
  [361] = 323,
  [362] = 356,
  [363] = 302,
  [364] = 364,
  [365] = 308,
  [366] = 305,
  [367] = 314,
  [368] = 325,
  [369] = 326,
  [370] = 316,
  [371] = 318,
  [372] = 290,
  [373] = 319,
  [374] = 292,
  [375] = 306,
  [376] = 294,
  [377] = 307,
  [378] = 320,
  [379] = 297,
  [380] = 291,
  [381] = 299,
  [382] = 322,
  [383] = 301,
  [384] = 309,
  [385] = 303,
  [386] = 310,
  [387] = 305,
  [388] = 306,
  [389] = 307,
  [390] = 323,
  [391] = 309,
  [392] = 310,
  [393] = 312,
  [394] = 312,
  [395] = 315,
  [396] = 317,
  [397] = 315,
  [398] = 325,
  [399] = 317,
  [400] = 400,
  [401] = 326,
  [402] = 290,
  [403] = 321,
  [404] = 292,
  [405] = 321,
  [406] = 324,
  [407] = 324,
  [408] = 294,
  [409] = 327,
  [410] = 297,
  [411] = 327,
  [412] = 330,
  [413] = 413,
  [414] = 299,
  [415] = 301,
  [416] = 334,
  [417] = 303,
  [418] = 336,
  [419] = 288,
  [420] = 338,
  [421] = 339,
  [422] = 341,
  [423] = 342,
  [424] = 289,
  [425] = 332,
  [426] = 335,
  [427] = 337,
  [428] = 340,
  [429] = 343,
  [430] = 333,
  [431] = 431,
  [432] = 330,
  [433] = 433,
  [434] = 431,
  [435] = 346,
  [436] = 331,
  [437] = 364,
  [438] = 413,
  [439] = 293,
  [440] = 413,
  [441] = 431,
  [442] = 433,
  [443] = 346,
  [444] = 364,
  [445] = 334,
  [446] = 336,
  [447] = 356,
  [448] = 288,
  [449] = 338,
  [450] = 433,
  [451] = 339,
  [452] = 341,
  [453] = 342,
  [454] = 333,
  [455] = 343,
  [456] = 340,
  [457] = 337,
  [458] = 335,
  [459] = 332,
  [460] = 289,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 465,
  [467] = 464,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 464,
  [472] = 465,
  [473] = 468,
  [474] = 463,
  [475] = 475,
  [476] = 470,
  [477] = 463,
  [478] = 461,
  [479] = 461,
  [480] = 470,
  [481] = 481,
  [482] = 469,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 483,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 483,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 489,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 486,
  [521] = 521,
  [522] = 522,
  [523] = 522,
  [524] = 500,
  [525] = 488,
  [526] = 502,
  [527] = 498,
  [528] = 528,
  [529] = 528,
  [530] = 530,
  [531] = 531,
  [532] = 530,
  [533] = 499,
  [534] = 521,
  [535] = 535,
  [536] = 536,
  [537] = 496,
  [538] = 535,
  [539] = 497,
  [540] = 489,
  [541] = 536,
  [542] = 542,
  [543] = 543,
  [544] = 492,
  [545] = 501,
  [546] = 505,
  [547] = 491,
  [548] = 490,
  [549] = 506,
  [550] = 508,
  [551] = 487,
  [552] = 510,
  [553] = 543,
  [554] = 512,
  [555] = 542,
  [556] = 556,
  [557] = 513,
  [558] = 556,
  [559] = 559,
  [560] = 560,
  [561] = 560,
  [562] = 485,
  [563] = 563,
  [564] = 515,
  [565] = 516,
  [566] = 517,
  [567] = 495,
  [568] = 568,
  [569] = 504,
  [570] = 507,
  [571] = 511,
  [572] = 572,
  [573] = 514,
  [574] = 574,
  [575] = 519,
  [576] = 563,
  [577] = 568,
  [578] = 572,
  [579] = 521,
  [580] = 502,
  [581] = 522,
  [582] = 518,
  [583] = 583,
  [584] = 574,
  [585] = 583,
  [586] = 500,
  [587] = 498,
  [588] = 496,
  [589] = 559,
  [590] = 492,
  [591] = 519,
  [592] = 491,
  [593] = 488,
  [594] = 490,
  [595] = 517,
  [596] = 516,
  [597] = 487,
  [598] = 542,
  [599] = 559,
  [600] = 485,
  [601] = 495,
  [602] = 504,
  [603] = 507,
  [604] = 511,
  [605] = 514,
  [606] = 484,
  [607] = 515,
  [608] = 608,
  [609] = 513,
  [610] = 518,
  [611] = 528,
  [612] = 512,
  [613] = 530,
  [614] = 486,
  [615] = 494,
  [616] = 531,
  [617] = 497,
  [618] = 484,
  [619] = 499,
  [620] = 608,
  [621] = 501,
  [622] = 494,
  [623] = 505,
  [624] = 506,
  [625] = 608,
  [626] = 508,
  [627] = 583,
  [628] = 574,
  [629] = 572,
  [630] = 568,
  [631] = 563,
  [632] = 560,
  [633] = 556,
  [634] = 543,
  [635] = 536,
  [636] = 535,
  [637] = 510,
  [638] = 638,
  [639] = 639,
  [640] = 639,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 647,
  [650] = 650,
  [651] = 644,
  [652] = 643,
  [653] = 653,
  [654] = 654,
  [655] = 647,
  [656] = 644,
  [657] = 643,
  [658] = 641,
  [659] = 650,
  [660] = 650,
  [661] = 646,
  [662] = 645,
  [663] = 646,
  [664] = 645,
  [665] = 654,
  [666] = 654,
  [667] = 641,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6480
    ? (c < 2949
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'o' || (c < 'x'
                ? (c < 's'
                  ? c == 'q'
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66864
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6512
    ? (c < 2958
      ? (c < 2088
        ? (c < 910
          ? (c < 192
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'q' || (c < 170
                ? (c < 'u'
                  ? c == 's'
                  : (c <= 'v' || (c >= 'x' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))))
            : (c <= 214 || (c < 880
              ? (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))
              : (c <= 884 || (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))))))
          : (c <= 929 || (c < 1774
            ? (c < 1488
              ? (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))
              : (c <= 1514 || (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))))
            : (c <= 1775 || (c < 1994
              ? (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))
              : (c <= 2026 || (c < 2048
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))))))))
        : (c <= 2088 || (c < 2613
          ? (c < 2474
            ? (c < 2365
              ? (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))
              : (c <= 2365 || (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))))
            : (c <= 2480 || (c < 2544
              ? (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))
              : (c <= 2545 || (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))))))
          : (c <= 2614 || (c < 2809
            ? (c < 2707
              ? (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))
              : (c <= 2728 || (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))))
            : (c <= 2809 || (c < 2877
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))))))))))
      : (c <= 2960 || (c < 3904
        ? (c < 3342
          ? (c < 3160
            ? (c < 2990
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))
              : (c <= 3001 || (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))))
            : (c <= 3162 || (c < 3242
              ? (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))))))
          : (c <= 3344 || (c < 3648
            ? (c < 3461
              ? (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))))
            : (c <= 3654 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3782
                ? (c < 3776
                  ? c == 3773
                  : c <= 3780)
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3911 || (c < 4808
          ? (c < 4301
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43250
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6988 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12549
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12445
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6480
    ? (c < 2949
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'j'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'g'
                  ? c == 'e'
                  : c <= 'h')))
              : (c <= 'm' || (c < 'x'
                ? (c < 's'
                  ? (c >= 'o' && c <= 'q')
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66864
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 's'
                  ? (c >= 'f' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 'o'
                  ? c == 'm'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'b' || (c < 170
                  ? (c >= 'd' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'e' || (c < 170
                  ? (c >= 'g' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'g' || (c < 170
                  ? (c >= 'i' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'h' || (c < 170
                  ? (c >= 'j' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'j' || (c < 170
                  ? (c >= 'l' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'l' || (c < 170
                  ? (c >= 'n' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'o' || (c < 170
                  ? (c >= 'q' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_22(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_23(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_24(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_25(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_26(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_rune_literal_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(21);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(87);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(144);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '0') ADVANCE(145);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(145);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(145);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(145);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(145);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(144);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(167);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(149);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(159);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(170);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(149);
      END_STATE();
    case 36:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 41:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(10);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(71);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(144);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_html_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(27);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_end);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_template);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_define);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_block);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_with);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(144);
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(144);
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(144);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(144);
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(144);
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(144);
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(144);
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(144);
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(144);
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(144);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(144);
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(144);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(144);
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(144);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(144);
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(144);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(144);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(144);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(144);
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(144);
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(144);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(144);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(144);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(144);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(144);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(144);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(144);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(144);
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(144);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(144);
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nil);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(144);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
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
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 65},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 65},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 65},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 65},
  [159] = {.lex_state = 65},
  [160] = {.lex_state = 65},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 65},
  [171] = {.lex_state = 65},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 65},
  [174] = {.lex_state = 65},
  [175] = {.lex_state = 65},
  [176] = {.lex_state = 65},
  [177] = {.lex_state = 65},
  [178] = {.lex_state = 65},
  [179] = {.lex_state = 65},
  [180] = {.lex_state = 65},
  [181] = {.lex_state = 65},
  [182] = {.lex_state = 65},
  [183] = {.lex_state = 65},
  [184] = {.lex_state = 65},
  [185] = {.lex_state = 65},
  [186] = {.lex_state = 65},
  [187] = {.lex_state = 65},
  [188] = {.lex_state = 65},
  [189] = {.lex_state = 65},
  [190] = {.lex_state = 65},
  [191] = {.lex_state = 65},
  [192] = {.lex_state = 65},
  [193] = {.lex_state = 65},
  [194] = {.lex_state = 65},
  [195] = {.lex_state = 65},
  [196] = {.lex_state = 65},
  [197] = {.lex_state = 65},
  [198] = {.lex_state = 65},
  [199] = {.lex_state = 65},
  [200] = {.lex_state = 65},
  [201] = {.lex_state = 65},
  [202] = {.lex_state = 65},
  [203] = {.lex_state = 65},
  [204] = {.lex_state = 65},
  [205] = {.lex_state = 65},
  [206] = {.lex_state = 65},
  [207] = {.lex_state = 65},
  [208] = {.lex_state = 65},
  [209] = {.lex_state = 65},
  [210] = {.lex_state = 65},
  [211] = {.lex_state = 65},
  [212] = {.lex_state = 65},
  [213] = {.lex_state = 65},
  [214] = {.lex_state = 65},
  [215] = {.lex_state = 65},
  [216] = {.lex_state = 65},
  [217] = {.lex_state = 65},
  [218] = {.lex_state = 65},
  [219] = {.lex_state = 65},
  [220] = {.lex_state = 65},
  [221] = {.lex_state = 65},
  [222] = {.lex_state = 65},
  [223] = {.lex_state = 65},
  [224] = {.lex_state = 65},
  [225] = {.lex_state = 65},
  [226] = {.lex_state = 65},
  [227] = {.lex_state = 65},
  [228] = {.lex_state = 65},
  [229] = {.lex_state = 65},
  [230] = {.lex_state = 65},
  [231] = {.lex_state = 65},
  [232] = {.lex_state = 65},
  [233] = {.lex_state = 65},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 65},
  [236] = {.lex_state = 65},
  [237] = {.lex_state = 65},
  [238] = {.lex_state = 65},
  [239] = {.lex_state = 65},
  [240] = {.lex_state = 65},
  [241] = {.lex_state = 65},
  [242] = {.lex_state = 65},
  [243] = {.lex_state = 65},
  [244] = {.lex_state = 65},
  [245] = {.lex_state = 65},
  [246] = {.lex_state = 65},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 65},
  [249] = {.lex_state = 65},
  [250] = {.lex_state = 65},
  [251] = {.lex_state = 65},
  [252] = {.lex_state = 65},
  [253] = {.lex_state = 65},
  [254] = {.lex_state = 65},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 65},
  [257] = {.lex_state = 65},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 65},
  [260] = {.lex_state = 65},
  [261] = {.lex_state = 65},
  [262] = {.lex_state = 65},
  [263] = {.lex_state = 65},
  [264] = {.lex_state = 65},
  [265] = {.lex_state = 65},
  [266] = {.lex_state = 65},
  [267] = {.lex_state = 65},
  [268] = {.lex_state = 65},
  [269] = {.lex_state = 65},
  [270] = {.lex_state = 65},
  [271] = {.lex_state = 65},
  [272] = {.lex_state = 65},
  [273] = {.lex_state = 65},
  [274] = {.lex_state = 65},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 18},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 18},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 18},
  [304] = {.lex_state = 18},
  [305] = {.lex_state = 18},
  [306] = {.lex_state = 18},
  [307] = {.lex_state = 18},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 18},
  [326] = {.lex_state = 18},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 18},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 18},
  [335] = {.lex_state = 18},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 18},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 19},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 65},
  [349] = {.lex_state = 65},
  [350] = {.lex_state = 65},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 19},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 19},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 19},
  [358] = {.lex_state = 19},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 19},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 65},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 65},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 19},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 19},
  [373] = {.lex_state = 65},
  [374] = {.lex_state = 19},
  [375] = {.lex_state = 65},
  [376] = {.lex_state = 19},
  [377] = {.lex_state = 65},
  [378] = {.lex_state = 65},
  [379] = {.lex_state = 19},
  [380] = {.lex_state = 65},
  [381] = {.lex_state = 19},
  [382] = {.lex_state = 65},
  [383] = {.lex_state = 19},
  [384] = {.lex_state = 65},
  [385] = {.lex_state = 19},
  [386] = {.lex_state = 65},
  [387] = {.lex_state = 19},
  [388] = {.lex_state = 19},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 65},
  [391] = {.lex_state = 19},
  [392] = {.lex_state = 19},
  [393] = {.lex_state = 65},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 65},
  [396] = {.lex_state = 65},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 65},
  [399] = {.lex_state = 19},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 65},
  [402] = {.lex_state = 65},
  [403] = {.lex_state = 19},
  [404] = {.lex_state = 65},
  [405] = {.lex_state = 65},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 65},
  [408] = {.lex_state = 65},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 65},
  [411] = {.lex_state = 65},
  [412] = {.lex_state = 19},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 65},
  [415] = {.lex_state = 65},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 65},
  [418] = {.lex_state = 19},
  [419] = {.lex_state = 19},
  [420] = {.lex_state = 19},
  [421] = {.lex_state = 19},
  [422] = {.lex_state = 19},
  [423] = {.lex_state = 19},
  [424] = {.lex_state = 19},
  [425] = {.lex_state = 19},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 19},
  [428] = {.lex_state = 19},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 65},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 65},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 65},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 65},
  [446] = {.lex_state = 65},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 65},
  [449] = {.lex_state = 65},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 65},
  [452] = {.lex_state = 65},
  [453] = {.lex_state = 65},
  [454] = {.lex_state = 65},
  [455] = {.lex_state = 65},
  [456] = {.lex_state = 65},
  [457] = {.lex_state = 65},
  [458] = {.lex_state = 65},
  [459] = {.lex_state = 65},
  [460] = {.lex_state = 65},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 11},
  [640] = {.lex_state = 11},
  [641] = {.lex_state = 73},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 73},
  [644] = {.lex_state = 73},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 73},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 73},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 73},
  [652] = {.lex_state = 73},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 73},
  [656] = {.lex_state = 73},
  [657] = {.lex_state = 73},
  [658] = {.lex_state = 73},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 73},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pipeline_stub] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [sym_rune_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(653),
    [sym__block] = STATE(171),
    [sym_html] = STATE(171),
    [sym__action] = STATE(171),
    [sym__comment_action] = STATE(171),
    [sym__pipeline_action] = STATE(171),
    [sym_if_action] = STATE(171),
    [sym_range_action] = STATE(171),
    [sym_template_action] = STATE(171),
    [sym_define_action] = STATE(171),
    [sym_block_action] = STATE(171),
    [sym_with_action] = STATE(171),
    [sym__left_delimiter] = STATE(105),
    [aux_sym_template_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(17), 1,
      anon_sym_else,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [80] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_else,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [160] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_else,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [240] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_else,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [320] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [400] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [480] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [557] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_else,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [634] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_else,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [711] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_else,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [788] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_else,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [865] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_else,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [942] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_else,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1019] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_else,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1096] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1173] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_else,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1250] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_else,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1327] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_else,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1404] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_else,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1481] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_else,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1558] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1635] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1712] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_else,
    ACTIONS(133), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1789] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_else,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1866] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1940] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2014] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2088] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2162] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2236] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2310] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2384] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2458] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2532] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2606] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2680] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2754] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2828] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2902] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2976] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3050] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3124] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3198] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3272] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3346] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3420] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3494] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3568] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3642] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3716] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3790] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3864] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3938] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4012] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4086] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4160] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4234] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4308] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4382] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4456] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4530] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4604] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4678] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4752] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4826] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4900] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4974] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5048] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5122] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5196] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5270] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5344] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5418] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5492] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5566] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5640] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5714] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5788] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5862] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5936] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6010] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6084] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6158] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6232] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6306] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6380] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6454] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6528] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6602] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6676] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6750] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6824] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6898] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6972] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7046] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7120] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7194] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7268] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7342] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7416] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7490] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7564] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_end,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7638] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_if,
    ACTIONS(297), 1,
      anon_sym_range,
    ACTIONS(299), 1,
      anon_sym_template,
    ACTIONS(301), 1,
      anon_sym_define,
    ACTIONS(303), 1,
      anon_sym_block,
    ACTIONS(305), 1,
      anon_sym_with,
    ACTIONS(311), 1,
      sym_comment,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(309), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(307), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(450), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7709] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_comment,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(442), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7780] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(315), 1,
      anon_sym_range,
    ACTIONS(317), 1,
      anon_sym_template,
    ACTIONS(319), 1,
      anon_sym_define,
    ACTIONS(321), 1,
      anon_sym_block,
    ACTIONS(323), 1,
      anon_sym_with,
    ACTIONS(329), 1,
      sym_comment,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(327), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(325), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(433), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7851] = 12,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(295), 1,
      sym_argument_list,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(331), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(343), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(284), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7911] = 11,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_,
    STATE(278), 1,
      sym_variable,
    STATE(300), 1,
      sym_argument_list,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(347), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(343), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(284), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [7969] = 12,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(347), 1,
      sym_argument_list,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(357), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(335), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(355), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(282), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8028] = 11,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      anon_sym_,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(361), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(365), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(329), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8085] = 11,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(367), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(365), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(329), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8142] = 12,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(351), 1,
      sym_argument_list,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(357), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(349), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(355), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(282), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8201] = 11,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(371), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(369), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(365), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(329), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8257] = 11,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(371), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(363), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(365), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(329), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8313] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(357), 1,
      sym__right_delimiter,
    ACTIONS(377), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(375), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(373), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(356), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8370] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(302), 1,
      sym__right_delimiter,
    ACTIONS(383), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(381), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(379), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(447), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8427] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym__right_delimiter,
    STATE(287), 1,
      sym_variable,
    ACTIONS(389), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(387), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(385), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(364), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8484] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(363), 1,
      sym__right_delimiter,
    ACTIONS(395), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(393), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(391), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(362), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8541] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym__right_delimiter,
    STATE(287), 1,
      sym_variable,
    ACTIONS(401), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(399), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(397), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(437), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8598] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      sym__right_delimiter,
    STATE(287), 1,
      sym_variable,
    ACTIONS(407), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(405), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(403), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(444), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8655] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      sym_variable,
    STATE(625), 1,
      sym_range_variable_definition,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(411), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(409), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(434), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8708] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      sym_variable,
    STATE(620), 1,
      sym_range_variable_definition,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(415), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(413), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(431), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8761] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      sym_variable,
    STATE(608), 1,
      sym_range_variable_definition,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(419), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(417), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(441), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8814] = 10,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(423), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(421), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(318), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8864] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(427), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(425), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(367), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8914] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(431), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(429), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(462), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8964] = 10,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(435), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(433), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(314), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9014] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(439), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(437), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(371), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9064] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(443), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(441), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(443), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9114] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(447), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(445), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(440), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9164] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(451), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(449), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(346), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9214] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(455), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(453), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(370), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9264] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(459), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(457), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(400), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9314] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(463), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(461), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(435), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9364] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(467), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(465), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(413), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9414] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(471), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(469), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(438), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9464] = 10,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(371), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(365), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(329), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9514] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(475), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(473), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(531), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9564] = 10,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_variable,
    STATE(112), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(479), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(477), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(616), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9614] = 10,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_variable,
    STATE(108), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(483), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(481), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(316), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9664] = 8,
    ACTIONS(485), 1,
      sym_text,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(489), 1,
      anon_sym_GT,
    ACTIONS(491), 1,
      anon_sym_SLASH_GT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(146), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9700] = 8,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(497), 1,
      sym_text,
    ACTIONS(499), 1,
      anon_sym_GT,
    ACTIONS(501), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(145), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9736] = 8,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(503), 1,
      sym_text,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(142), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9772] = 8,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(509), 1,
      sym_text,
    ACTIONS(511), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(147), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9808] = 7,
    ACTIONS(515), 1,
      sym_text,
    ACTIONS(518), 1,
      anon_sym_LT,
    ACTIONS(523), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(106), 1,
      sym__left_delimiter,
    ACTIONS(521), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(145), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9842] = 8,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(497), 1,
      sym_text,
    ACTIONS(529), 1,
      anon_sym_GT,
    ACTIONS(531), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(145), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9878] = 8,
    ACTIONS(487), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(497), 1,
      sym_text,
    ACTIONS(533), 1,
      anon_sym_GT,
    ACTIONS(535), 1,
      anon_sym_SLASH_GT,
    STATE(106), 1,
      sym__left_delimiter,
    STATE(145), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9914] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(537), 1,
      sym_text,
    ACTIONS(539), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(478), 1,
      aux_sym_if_action_repeat1,
    STATE(160), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [9947] = 2,
    ACTIONS(545), 1,
      anon_sym_,
    ACTIONS(543), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9970] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(549), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(551), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(470), 1,
      aux_sym_if_action_repeat1,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10003] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(557), 1,
      anon_sym_LT_SLASH,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10036] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(563), 1,
      sym_text,
    ACTIONS(565), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(7), 1,
      sym__left_delimiter,
    STATE(479), 1,
      aux_sym_if_action_repeat1,
    STATE(158), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10069] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(569), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10102] = 2,
    ACTIONS(573), 1,
      anon_sym_,
    ACTIONS(571), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10125] = 2,
    ACTIONS(577), 1,
      anon_sym_,
    ACTIONS(575), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10148] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(579), 1,
      sym_text,
    ACTIONS(581), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(168), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10181] = 7,
    ACTIONS(521), 1,
      anon_sym_LT_SLASH,
    ACTIONS(583), 1,
      sym_text,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(589), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(592), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10214] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(595), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(476), 1,
      aux_sym_if_action_repeat1,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10247] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(599), 1,
      sym_text,
    ACTIONS(601), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(461), 1,
      aux_sym_if_action_repeat1,
    STATE(150), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10280] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(607), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(6), 1,
      sym__left_delimiter,
    STATE(480), 1,
      aux_sym_if_action_repeat1,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10313] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(609), 1,
      sym_text,
    ACTIONS(611), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(162), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10346] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(613), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10379] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(615), 1,
      sym_text,
    ACTIONS(617), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(151), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10412] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(619), 1,
      sym_text,
    ACTIONS(621), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(165), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10445] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(623), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10478] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(625), 1,
      sym_text,
    ACTIONS(627), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(169), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10511] = 7,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(629), 1,
      sym_text,
    ACTIONS(631), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(153), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10544] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(633), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10577] = 7,
    ACTIONS(553), 1,
      sym_text,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(635), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym__left_delimiter,
    STATE(157), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10610] = 7,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    ACTIONS(637), 1,
      sym_text,
    ACTIONS(640), 1,
      anon_sym_LT,
    ACTIONS(643), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(646), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(105), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10643] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10676] = 2,
    ACTIONS(575), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(577), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10698] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(651), 1,
      sym_text,
    ACTIONS(653), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(235), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10728] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(657), 1,
      sym_text,
    ACTIONS(659), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(661), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(71), 1,
      sym__left_delimiter,
    STATE(195), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10758] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(663), 1,
      sym_text,
    ACTIONS(665), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(667), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    STATE(191), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10788] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(671), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(79), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10818] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      sym_text,
    ACTIONS(675), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(677), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(80), 1,
      sym__left_delimiter,
    STATE(199), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10848] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(679), 1,
      sym_text,
    ACTIONS(681), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(683), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(53), 1,
      sym__left_delimiter,
    STATE(187), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10878] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(687), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(105), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10908] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(689), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(691), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(55), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10938] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(693), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(20), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10968] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(697), 1,
      sym_text,
    ACTIONS(699), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(23), 1,
      sym__left_delimiter,
    STATE(196), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [10998] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(703), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11028] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(707), 1,
      sym_text,
    ACTIONS(709), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(711), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(99), 1,
      sym__left_delimiter,
    STATE(206), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11058] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(713), 1,
      sym_text,
    ACTIONS(715), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(717), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(49), 1,
      sym__left_delimiter,
    STATE(183), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11088] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(719), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(721), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(44), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11118] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(723), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(30), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11148] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(727), 1,
      sym_text,
    ACTIONS(729), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(732), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(105), 1,
      sym__left_delimiter,
    STATE(179), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11178] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(735), 1,
      sym_text,
    ACTIONS(737), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(739), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(24), 1,
      sym__left_delimiter,
    STATE(181), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11208] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(741), 1,
      sym_text,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(46), 1,
      sym__left_delimiter,
    STATE(197), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11238] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(747), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(749), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(43), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11268] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(751), 1,
      sym_text,
    ACTIONS(753), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(755), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(47), 1,
      sym__left_delimiter,
    STATE(200), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11298] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(757), 1,
      sym_text,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(31), 1,
      sym__left_delimiter,
    STATE(176), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11328] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(763), 1,
      sym_text,
    ACTIONS(765), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(767), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(201), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11358] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(769), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11388] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(773), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(775), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11418] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(777), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(52), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11448] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(781), 1,
      sym_text,
    ACTIONS(783), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(785), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(57), 1,
      sym__left_delimiter,
    STATE(203), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11478] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(787), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(789), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(76), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11508] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(791), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(58), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11538] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(795), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11568] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(799), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(801), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(39), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11598] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(803), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(60), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11628] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(807), 1,
      sym_text,
    ACTIONS(809), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(37), 1,
      sym__left_delimiter,
    STATE(229), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11658] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(813), 1,
      sym_text,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(61), 1,
      sym__left_delimiter,
    STATE(211), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11688] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(821), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(102), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11718] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(823), 1,
      sym_text,
    ACTIONS(825), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(827), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(64), 1,
      sym__left_delimiter,
    STATE(214), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11748] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(829), 1,
      sym_text,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(833), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(65), 1,
      sym__left_delimiter,
    STATE(216), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11778] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(835), 1,
      sym_text,
    ACTIONS(837), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(40), 1,
      sym__left_delimiter,
    STATE(180), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11808] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(841), 1,
      sym_text,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(68), 1,
      sym__left_delimiter,
    STATE(219), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11838] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(69), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11868] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(851), 1,
      sym_text,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(855), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(70), 1,
      sym__left_delimiter,
    STATE(221), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11898] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(857), 1,
      sym_text,
    ACTIONS(859), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(861), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(73), 1,
      sym__left_delimiter,
    STATE(224), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11928] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(863), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(77), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11958] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(867), 1,
      sym_text,
    ACTIONS(869), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(871), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(78), 1,
      sym__left_delimiter,
    STATE(225), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [11988] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(873), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(875), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(81), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12018] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(877), 1,
      sym_text,
    ACTIONS(879), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(881), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(51), 1,
      sym__left_delimiter,
    STATE(186), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12048] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(883), 1,
      sym_text,
    ACTIONS(885), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(83), 1,
      sym__left_delimiter,
    STATE(226), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12078] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(889), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(891), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12108] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(893), 1,
      sym_text,
    ACTIONS(895), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(897), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(26), 1,
      sym__left_delimiter,
    STATE(227), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12138] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12168] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(903), 1,
      sym_text,
    ACTIONS(905), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(907), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(89), 1,
      sym__left_delimiter,
    STATE(228), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12198] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(909), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(67), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12228] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(913), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(915), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(90), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12258] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(919), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(92), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12288] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(923), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(94), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12318] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(925), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(927), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(95), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12348] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(929), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(97), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12378] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(933), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(935), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(63), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12408] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(937), 1,
      sym_text,
    ACTIONS(939), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(11), 1,
      sym__left_delimiter,
    STATE(240), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12438] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(943), 1,
      sym_text,
    ACTIONS(945), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(103), 1,
      sym__left_delimiter,
    STATE(241), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12468] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(949), 1,
      sym_text,
    ACTIONS(951), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(953), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(101), 1,
      sym__left_delimiter,
    STATE(245), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12498] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(955), 1,
      sym_text,
    ACTIONS(957), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(959), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(9), 1,
      sym__left_delimiter,
    STATE(248), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12528] = 2,
    ACTIONS(543), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(545), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [12550] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(961), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(963), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(25), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12580] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(965), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(967), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12610] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(969), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(82), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12640] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(973), 1,
      sym_text,
    ACTIONS(975), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(977), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(96), 1,
      sym__left_delimiter,
    STATE(223), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12670] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(979), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(981), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(100), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12700] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(983), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(22), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12730] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(987), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(989), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(75), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12760] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(991), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(993), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(8), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12790] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(995), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(997), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(10), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12820] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(999), 1,
      sym_text,
    ACTIONS(1001), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1003), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(66), 1,
      sym__left_delimiter,
    STATE(249), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12850] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1005), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1007), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(48), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12880] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1009), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(36), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12910] = 2,
    ACTIONS(1015), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(1013), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [12932] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1017), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1019), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(17), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12962] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1021), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(45), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [12992] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1027), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(35), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13022] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1029), 1,
      sym_text,
    ACTIONS(1031), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1033), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(257), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13052] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1035), 1,
      sym_text,
    ACTIONS(1037), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1039), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(41), 1,
      sym__left_delimiter,
    STATE(265), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13082] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1041), 1,
      sym_text,
    ACTIONS(1043), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1045), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(38), 1,
      sym__left_delimiter,
    STATE(267), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13112] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1047), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1049), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(34), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13142] = 2,
    ACTIONS(571), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(573), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13164] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      sym_text,
    ACTIONS(1053), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1055), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(271), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13194] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1057), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(98), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13224] = 2,
    ACTIONS(1063), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(1061), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13246] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1065), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1067), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(33), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13276] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1069), 1,
      sym_text,
    ACTIONS(1071), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1073), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(93), 1,
      sym__left_delimiter,
    STATE(273), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13306] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1075), 1,
      sym_text,
    ACTIONS(1077), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1079), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(18), 1,
      sym__left_delimiter,
    STATE(236), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13336] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1081), 1,
      sym_text,
    ACTIONS(1083), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1085), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(91), 1,
      sym__left_delimiter,
    STATE(237), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13366] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1087), 1,
      sym_text,
    ACTIONS(1089), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(84), 1,
      sym__left_delimiter,
    STATE(259), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13396] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym_text,
    ACTIONS(1095), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1097), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(88), 1,
      sym__left_delimiter,
    STATE(239), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13426] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1099), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1101), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(74), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13456] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1103), 1,
      sym_text,
    ACTIONS(1105), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1107), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(72), 1,
      sym__left_delimiter,
    STATE(254), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13486] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1111), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(62), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13516] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1113), 1,
      sym_text,
    ACTIONS(1115), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1117), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(242), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13546] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1119), 1,
      sym_text,
    ACTIONS(1121), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(16), 1,
      sym__left_delimiter,
    STATE(243), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13576] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1125), 1,
      sym_text,
    ACTIONS(1127), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1129), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(54), 1,
      sym__left_delimiter,
    STATE(250), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13606] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1133), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(50), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13636] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1135), 1,
      sym_text,
    ACTIONS(1137), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1139), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(86), 1,
      sym__left_delimiter,
    STATE(246), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13666] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(547), 1,
      sym_text,
    ACTIONS(1141), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1143), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(29), 1,
      sym__left_delimiter,
    STATE(170), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13696] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(1145), 1,
      sym_text,
    ACTIONS(1147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1149), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(32), 1,
      sym__left_delimiter,
    STATE(202), 12,
      sym__block,
      sym_html,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [13726] = 3,
    ACTIONS(1153), 1,
      anon_sym_,
    ACTIONS(1155), 1,
      sym_identifier,
    ACTIONS(1151), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13742] = 2,
    ACTIONS(1157), 1,
      sym_identifier,
    ACTIONS(1153), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13756] = 2,
    ACTIONS(1161), 1,
      anon_sym_,
    ACTIONS(1159), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13769] = 4,
    ACTIONS(349), 1,
      anon_sym_,
    ACTIONS(1163), 1,
      anon_sym_COLON_EQ,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(347), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13786] = 1,
    ACTIONS(1161), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13797] = 3,
    ACTIONS(1167), 1,
      anon_sym_,
    STATE(285), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(361), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13811] = 3,
    ACTIONS(1171), 1,
      anon_sym_,
    ACTIONS(1173), 1,
      sym_identifier,
    ACTIONS(1169), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13825] = 5,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    ACTIONS(1179), 1,
      anon_sym_,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    STATE(280), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(1177), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13843] = 3,
    ACTIONS(1183), 1,
      anon_sym_,
    STATE(285), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(361), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13857] = 5,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1185), 1,
      anon_sym_,
    STATE(283), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(1177), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13875] = 3,
    ACTIONS(1189), 1,
      anon_sym_,
    STATE(285), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(1187), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13889] = 4,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_COLON_EQ,
    ACTIONS(1196), 1,
      anon_sym_EQ,
    ACTIONS(349), 4,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13905] = 3,
    ACTIONS(1194), 1,
      anon_sym_COLON_EQ,
    ACTIONS(1196), 1,
      anon_sym_EQ,
    ACTIONS(349), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [13919] = 2,
    ACTIONS(1198), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1200), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13930] = 2,
    ACTIONS(1202), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1204), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13941] = 2,
    ACTIONS(1206), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1208), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13952] = 2,
    ACTIONS(1210), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13963] = 2,
    ACTIONS(1214), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1216), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13974] = 2,
    ACTIONS(1218), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1220), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13985] = 2,
    ACTIONS(1222), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [13996] = 2,
    ACTIONS(1228), 1,
      anon_sym_,
    ACTIONS(1226), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14007] = 2,
    ACTIONS(1013), 1,
      anon_sym_,
    ACTIONS(1015), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14018] = 2,
    ACTIONS(1230), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14029] = 2,
    ACTIONS(1234), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1236), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14040] = 2,
    ACTIONS(1238), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1240), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14051] = 2,
    ACTIONS(1244), 1,
      anon_sym_,
    ACTIONS(1242), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14062] = 2,
    ACTIONS(1246), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1248), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14073] = 2,
    ACTIONS(1250), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1252), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14084] = 2,
    ACTIONS(1254), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14095] = 2,
    ACTIONS(1258), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14106] = 2,
    ACTIONS(1262), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14117] = 2,
    ACTIONS(1266), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14128] = 2,
    ACTIONS(1270), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14139] = 2,
    ACTIONS(1276), 1,
      anon_sym_,
    ACTIONS(1274), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14150] = 2,
    ACTIONS(1278), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1280), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14161] = 2,
    ACTIONS(1282), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14172] = 2,
    ACTIONS(1286), 1,
      sym_identifier,
    ACTIONS(1171), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14183] = 2,
    ACTIONS(1288), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14194] = 2,
    ACTIONS(1061), 1,
      anon_sym_,
    ACTIONS(1063), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14205] = 2,
    ACTIONS(1294), 1,
      anon_sym_,
    ACTIONS(1292), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14216] = 2,
    ACTIONS(1296), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14227] = 4,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1302), 1,
      anon_sym_,
    ACTIONS(1300), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14242] = 2,
    ACTIONS(1304), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14253] = 4,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1310), 1,
      anon_sym_,
    ACTIONS(1308), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14268] = 2,
    ACTIONS(1312), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14279] = 2,
    ACTIONS(1316), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14290] = 2,
    ACTIONS(1320), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1322), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14301] = 2,
    ACTIONS(1324), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1326), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14312] = 2,
    ACTIONS(1328), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1330), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14323] = 2,
    ACTIONS(1332), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1334), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14334] = 2,
    ACTIONS(1336), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1338), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14345] = 2,
    ACTIONS(1340), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14356] = 2,
    ACTIONS(1344), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1346), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14367] = 2,
    ACTIONS(1348), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14378] = 4,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1352), 1,
      anon_sym_,
    ACTIONS(1187), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14393] = 2,
    ACTIONS(1354), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1356), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14404] = 2,
    ACTIONS(1358), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1360), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14415] = 2,
    ACTIONS(1362), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14426] = 2,
    ACTIONS(1366), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1368), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14437] = 2,
    ACTIONS(1370), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1372), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14448] = 2,
    ACTIONS(1374), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14459] = 2,
    ACTIONS(1378), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14470] = 2,
    ACTIONS(1382), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14481] = 2,
    ACTIONS(1386), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14492] = 2,
    ACTIONS(1390), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1392), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14503] = 2,
    ACTIONS(1394), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1396), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14514] = 2,
    ACTIONS(1398), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1400), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14525] = 2,
    ACTIONS(1402), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1404), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14536] = 2,
    ACTIONS(1406), 2,
      sym_text,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1408), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14547] = 2,
    ACTIONS(1258), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1260), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14557] = 2,
    ACTIONS(1358), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1360), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14567] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(261), 1,
      sym__right_delimiter,
    ACTIONS(1414), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14581] = 1,
    ACTIONS(1228), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14589] = 2,
    ACTIONS(1258), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1260), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14599] = 2,
    ACTIONS(1234), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1236), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14609] = 2,
    ACTIONS(1348), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14619] = 1,
    ACTIONS(1244), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14627] = 2,
    ACTIONS(1210), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14637] = 2,
    ACTIONS(1218), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1220), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14647] = 2,
    ACTIONS(1234), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1236), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14657] = 2,
    ACTIONS(1348), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14667] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(359), 1,
      sym__right_delimiter,
    ACTIONS(1416), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14681] = 2,
    ACTIONS(1250), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1252), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14691] = 2,
    ACTIONS(1312), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1314), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14701] = 2,
    ACTIONS(1316), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1318), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14711] = 2,
    ACTIONS(1324), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1326), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14721] = 2,
    ACTIONS(1328), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1330), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14731] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(378), 1,
      sym__right_delimiter,
    ACTIONS(1418), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14745] = 2,
    ACTIONS(1250), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1252), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14755] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(238), 1,
      sym__right_delimiter,
    ACTIONS(1420), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14769] = 1,
    ACTIONS(1276), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14777] = 2,
    ACTIONS(1262), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14787] = 1,
    ACTIONS(1294), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14795] = 2,
    ACTIONS(1336), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1338), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14805] = 2,
    ACTIONS(1340), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14815] = 3,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1302), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14827] = 3,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1310), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [14839] = 2,
    ACTIONS(1206), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1208), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14849] = 2,
    ACTIONS(1312), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1314), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14859] = 2,
    ACTIONS(1214), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1216), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14869] = 2,
    ACTIONS(1266), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14879] = 2,
    ACTIONS(1222), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14889] = 2,
    ACTIONS(1270), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14899] = 2,
    ACTIONS(1316), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1318), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14909] = 2,
    ACTIONS(1230), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1232), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14919] = 2,
    ACTIONS(1210), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1212), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14929] = 2,
    ACTIONS(1238), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1240), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14939] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1326), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14949] = 2,
    ACTIONS(1246), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1248), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14959] = 2,
    ACTIONS(1278), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1280), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14969] = 2,
    ACTIONS(1254), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14979] = 2,
    ACTIONS(1282), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1284), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [14989] = 2,
    ACTIONS(1262), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [14999] = 2,
    ACTIONS(1266), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15009] = 2,
    ACTIONS(1270), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15019] = 2,
    ACTIONS(1328), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1330), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15029] = 2,
    ACTIONS(1278), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1280), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15039] = 2,
    ACTIONS(1282), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1284), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15049] = 2,
    ACTIONS(1288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15059] = 2,
    ACTIONS(1288), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1290), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15069] = 2,
    ACTIONS(1296), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1298), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15079] = 2,
    ACTIONS(1304), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1306), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15089] = 2,
    ACTIONS(1296), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1298), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15099] = 2,
    ACTIONS(1336), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1338), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15109] = 2,
    ACTIONS(1304), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1306), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15119] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(188), 1,
      sym__right_delimiter,
    ACTIONS(1422), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15133] = 2,
    ACTIONS(1340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15143] = 2,
    ACTIONS(1206), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1208), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15153] = 2,
    ACTIONS(1320), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1322), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15163] = 2,
    ACTIONS(1214), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1216), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15173] = 2,
    ACTIONS(1320), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1322), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15183] = 2,
    ACTIONS(1332), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1334), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15193] = 2,
    ACTIONS(1332), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1334), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15203] = 2,
    ACTIONS(1222), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15213] = 2,
    ACTIONS(1344), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1346), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15223] = 2,
    ACTIONS(1230), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1232), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15233] = 2,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1346), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15243] = 2,
    ACTIONS(1354), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1356), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15253] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(159), 1,
      sym__right_delimiter,
    ACTIONS(1424), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15267] = 2,
    ACTIONS(1238), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1240), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15277] = 2,
    ACTIONS(1246), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1248), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15287] = 2,
    ACTIONS(1370), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1372), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15297] = 2,
    ACTIONS(1254), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15307] = 2,
    ACTIONS(1378), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1380), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15317] = 2,
    ACTIONS(1198), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1200), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15327] = 2,
    ACTIONS(1386), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15337] = 2,
    ACTIONS(1390), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1392), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15347] = 2,
    ACTIONS(1398), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1400), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15357] = 2,
    ACTIONS(1402), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1404), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15367] = 2,
    ACTIONS(1202), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1204), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15377] = 2,
    ACTIONS(1362), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1364), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15387] = 2,
    ACTIONS(1374), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15397] = 2,
    ACTIONS(1382), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1384), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15407] = 2,
    ACTIONS(1394), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1396), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15417] = 2,
    ACTIONS(1406), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1408), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15427] = 2,
    ACTIONS(1366), 2,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1368), 3,
      sym_text,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [15437] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__right_delimiter,
    ACTIONS(1426), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15451] = 2,
    ACTIONS(1354), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15461] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(328), 1,
      sym__right_delimiter,
    ACTIONS(1428), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15475] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(268), 1,
      sym__right_delimiter,
    ACTIONS(1430), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15489] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(194), 1,
      sym__right_delimiter,
    ACTIONS(1432), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15503] = 2,
    ACTIONS(1358), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1360), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15513] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(198), 1,
      sym__right_delimiter,
    ACTIONS(1434), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15527] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym__right_delimiter,
    ACTIONS(1436), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15541] = 2,
    ACTIONS(1218), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1220), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15551] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(148), 1,
      sym__right_delimiter,
    ACTIONS(1438), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15565] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(230), 1,
      sym__right_delimiter,
    ACTIONS(1440), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15579] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(350), 1,
      sym__right_delimiter,
    ACTIONS(1442), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15593] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(233), 1,
      sym__right_delimiter,
    ACTIONS(1444), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15607] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(244), 1,
      sym__right_delimiter,
    ACTIONS(1446), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15621] = 2,
    ACTIONS(1370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1372), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15631] = 2,
    ACTIONS(1378), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1380), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15641] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(320), 1,
      sym__right_delimiter,
    ACTIONS(1448), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15655] = 2,
    ACTIONS(1198), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1200), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15665] = 2,
    ACTIONS(1386), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15675] = 4,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(355), 1,
      sym__right_delimiter,
    ACTIONS(1450), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15689] = 2,
    ACTIONS(1390), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1392), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15699] = 2,
    ACTIONS(1398), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1400), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15709] = 2,
    ACTIONS(1402), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1404), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15719] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1368), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15729] = 2,
    ACTIONS(1406), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1408), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15739] = 2,
    ACTIONS(1394), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1396), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15749] = 2,
    ACTIONS(1382), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1384), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15759] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15769] = 2,
    ACTIONS(1362), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1364), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15779] = 2,
    ACTIONS(1202), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1204), 4,
      ts_builtin_sym_end,
      sym_text,
      anon_sym_LT,
      anon_sym_LBRACE_LBRACE_DASH,
  [15789] = 4,
    ACTIONS(1452), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1454), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(526), 1,
      sym__left_delimiter,
  [15802] = 3,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1456), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [15813] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1458), 1,
      sym_raw_string_literal,
    STATE(118), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15824] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1460), 1,
      sym_raw_string_literal,
    STATE(618), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15835] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1462), 1,
      sym_raw_string_literal,
    STATE(117), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15846] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1464), 1,
      sym_raw_string_literal,
    STATE(119), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15857] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1466), 1,
      sym_raw_string_literal,
    STATE(484), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15868] = 3,
    ACTIONS(1468), 1,
      anon_sym_DQUOTE,
    STATE(482), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(1470), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [15879] = 3,
    ACTIONS(1472), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(1474), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [15890] = 4,
    ACTIONS(1476), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1478), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(489), 1,
      sym__left_delimiter,
  [15903] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1480), 1,
      sym_raw_string_literal,
    STATE(606), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15914] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1482), 1,
      sym_raw_string_literal,
    STATE(120), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15925] = 3,
    ACTIONS(1484), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(1486), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [15936] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1488), 1,
      sym_raw_string_literal,
    STATE(115), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15947] = 4,
    ACTIONS(1490), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1493), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(642), 1,
      sym__left_delimiter,
  [15960] = 4,
    ACTIONS(1496), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1498), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(540), 1,
      sym__left_delimiter,
  [15973] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(1500), 1,
      sym_raw_string_literal,
    STATE(116), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [15984] = 4,
    ACTIONS(1502), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1504), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(502), 1,
      sym__left_delimiter,
  [15997] = 4,
    ACTIONS(1506), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1508), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(580), 1,
      sym__left_delimiter,
  [16010] = 4,
    ACTIONS(1510), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1512), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(475), 1,
      aux_sym_if_action_repeat1,
    STATE(509), 1,
      sym__left_delimiter,
  [16023] = 3,
    ACTIONS(1514), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(1516), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [16034] = 3,
    ACTIONS(1519), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(1474), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [16045] = 2,
    STATE(392), 1,
      sym__right_delimiter,
    ACTIONS(1521), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16053] = 2,
    STATE(190), 1,
      sym__right_delimiter,
    ACTIONS(1523), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16061] = 2,
    STATE(301), 1,
      sym__right_delimiter,
    ACTIONS(1525), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16069] = 2,
    STATE(456), 1,
      sym__right_delimiter,
    ACTIONS(1527), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16077] = 2,
    STATE(305), 1,
      sym__right_delimiter,
    ACTIONS(1529), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16085] = 2,
    STATE(354), 1,
      sym__right_delimiter,
    ACTIONS(1531), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16093] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1533), 1,
      anon_sym_else,
    ACTIONS(1535), 1,
      anon_sym_end,
  [16103] = 2,
    STATE(306), 1,
      sym__right_delimiter,
    ACTIONS(1537), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16111] = 2,
    STATE(307), 1,
      sym__right_delimiter,
    ACTIONS(1539), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16119] = 2,
    STATE(309), 1,
      sym__right_delimiter,
    ACTIONS(1541), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16127] = 2,
    STATE(310), 1,
      sym__right_delimiter,
    ACTIONS(1543), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16135] = 2,
    STATE(457), 1,
      sym__right_delimiter,
    ACTIONS(1545), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16143] = 2,
    STATE(299), 1,
      sym__right_delimiter,
    ACTIONS(1547), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16151] = 2,
    STATE(312), 1,
      sym__right_delimiter,
    ACTIONS(1549), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16159] = 2,
    STATE(458), 1,
      sym__right_delimiter,
    ACTIONS(1551), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16167] = 2,
    STATE(315), 1,
      sym__right_delimiter,
    ACTIONS(1553), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16175] = 2,
    STATE(459), 1,
      sym__right_delimiter,
    ACTIONS(1555), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16183] = 2,
    STATE(317), 1,
      sym__right_delimiter,
    ACTIONS(1557), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16191] = 2,
    STATE(460), 1,
      sym__right_delimiter,
    ACTIONS(1559), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16199] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1561), 1,
      anon_sym_else,
    ACTIONS(1563), 1,
      anon_sym_end,
  [16209] = 2,
    STATE(386), 1,
      sym__right_delimiter,
    ACTIONS(1565), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16217] = 2,
    STATE(297), 1,
      sym__right_delimiter,
    ACTIONS(1567), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16225] = 2,
    STATE(453), 1,
      sym__right_delimiter,
    ACTIONS(1569), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16233] = 2,
    STATE(452), 1,
      sym__right_delimiter,
    ACTIONS(1571), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16241] = 2,
    STATE(294), 1,
      sym__right_delimiter,
    ACTIONS(1573), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16249] = 2,
    STATE(451), 1,
      sym__right_delimiter,
    ACTIONS(1575), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16257] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1577), 1,
      anon_sym_else,
    ACTIONS(1579), 1,
      anon_sym_end,
  [16267] = 2,
    STATE(449), 1,
      sym__right_delimiter,
    ACTIONS(1581), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16275] = 2,
    STATE(292), 1,
      sym__right_delimiter,
    ACTIONS(1583), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16283] = 2,
    STATE(448), 1,
      sym__right_delimiter,
    ACTIONS(1585), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16291] = 2,
    STATE(446), 1,
      sym__right_delimiter,
    ACTIONS(1587), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16299] = 2,
    STATE(290), 1,
      sym__right_delimiter,
    ACTIONS(1589), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16307] = 2,
    STATE(445), 1,
      sym__right_delimiter,
    ACTIONS(1591), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16315] = 2,
    STATE(436), 1,
      sym__right_delimiter,
    ACTIONS(1593), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16323] = 2,
    STATE(432), 1,
      sym__right_delimiter,
    ACTIONS(1595), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16331] = 2,
    STATE(326), 1,
      sym__right_delimiter,
    ACTIONS(1597), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16339] = 2,
    STATE(411), 1,
      sym__right_delimiter,
    ACTIONS(1599), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16347] = 2,
    STATE(428), 1,
      sym__right_delimiter,
    ACTIONS(1601), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16355] = 2,
    STATE(407), 1,
      sym__right_delimiter,
    ACTIONS(1603), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16363] = 2,
    STATE(405), 1,
      sym__right_delimiter,
    ACTIONS(1605), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16371] = 2,
    STATE(321), 1,
      sym__right_delimiter,
    ACTIONS(1607), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16379] = 2,
    STATE(396), 1,
      sym__right_delimiter,
    ACTIONS(1609), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16387] = 2,
    STATE(298), 1,
      sym__right_delimiter,
    ACTIONS(1611), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16395] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1613), 1,
      anon_sym_else,
    ACTIONS(1615), 1,
      anon_sym_end,
  [16405] = 2,
    STATE(395), 1,
      sym__right_delimiter,
    ACTIONS(1617), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16413] = 2,
    STATE(430), 1,
      sym__right_delimiter,
    ACTIONS(1619), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16421] = 2,
    STATE(454), 1,
      sym__right_delimiter,
    ACTIONS(1621), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16429] = 2,
    STATE(429), 1,
      sym__right_delimiter,
    ACTIONS(1623), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16437] = 3,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
  [16447] = 2,
    STATE(455), 1,
      sym__right_delimiter,
    ACTIONS(1627), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16455] = 2,
    STATE(425), 1,
      sym__right_delimiter,
    ACTIONS(1629), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16463] = 2,
    STATE(324), 1,
      sym__right_delimiter,
    ACTIONS(1631), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16471] = 2,
    STATE(274), 1,
      sym__right_delimiter,
    ACTIONS(1633), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16479] = 2,
    STATE(272), 1,
      sym__right_delimiter,
    ACTIONS(1635), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16487] = 2,
    STATE(393), 1,
      sym__right_delimiter,
    ACTIONS(1637), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16495] = 2,
    STATE(184), 1,
      sym__right_delimiter,
    ACTIONS(1639), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16503] = 2,
    STATE(426), 1,
      sym__right_delimiter,
    ACTIONS(1641), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16511] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1643), 1,
      anon_sym_else,
    ACTIONS(1645), 1,
      anon_sym_end,
  [16521] = 2,
    STATE(177), 1,
      sym__right_delimiter,
    ACTIONS(1647), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16529] = 2,
    STATE(304), 1,
      sym__right_delimiter,
    ACTIONS(1649), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16537] = 2,
    STATE(270), 1,
      sym__right_delimiter,
    ACTIONS(1651), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16545] = 2,
    STATE(384), 1,
      sym__right_delimiter,
    ACTIONS(1653), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16553] = 2,
    STATE(424), 1,
      sym__right_delimiter,
    ACTIONS(1655), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16561] = 2,
    STATE(423), 1,
      sym__right_delimiter,
    ACTIONS(1657), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16569] = 2,
    STATE(377), 1,
      sym__right_delimiter,
    ACTIONS(1659), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16577] = 2,
    STATE(375), 1,
      sym__right_delimiter,
    ACTIONS(1661), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16585] = 2,
    STATE(422), 1,
      sym__right_delimiter,
    ACTIONS(1663), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16593] = 2,
    STATE(421), 1,
      sym__right_delimiter,
    ACTIONS(1665), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16601] = 2,
    STATE(366), 1,
      sym__right_delimiter,
    ACTIONS(1667), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16609] = 2,
    STATE(420), 1,
      sym__right_delimiter,
    ACTIONS(1669), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16617] = 2,
    STATE(174), 1,
      sym__right_delimiter,
    ACTIONS(1671), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16625] = 2,
    STATE(419), 1,
      sym__right_delimiter,
    ACTIONS(1673), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16633] = 2,
    STATE(348), 1,
      sym__right_delimiter,
    ACTIONS(1675), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16641] = 2,
    STATE(175), 1,
      sym__right_delimiter,
    ACTIONS(1677), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16649] = 2,
    STATE(418), 1,
      sym__right_delimiter,
    ACTIONS(1679), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16657] = 2,
    STATE(266), 1,
      sym__right_delimiter,
    ACTIONS(1681), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16665] = 2,
    STATE(417), 1,
      sym__right_delimiter,
    ACTIONS(1683), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16673] = 2,
    STATE(178), 1,
      sym__right_delimiter,
    ACTIONS(1685), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16681] = 2,
    STATE(263), 1,
      sym__right_delimiter,
    ACTIONS(1687), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16689] = 2,
    STATE(415), 1,
      sym__right_delimiter,
    ACTIONS(1689), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16697] = 2,
    STATE(185), 1,
      sym__right_delimiter,
    ACTIONS(1691), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16705] = 2,
    STATE(416), 1,
      sym__right_delimiter,
    ACTIONS(1693), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16713] = 2,
    STATE(345), 1,
      sym__right_delimiter,
    ACTIONS(1695), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16721] = 2,
    STATE(412), 1,
      sym__right_delimiter,
    ACTIONS(1697), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16729] = 2,
    STATE(414), 1,
      sym__right_delimiter,
    ACTIONS(1699), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16737] = 2,
    STATE(193), 1,
      sym__right_delimiter,
    ACTIONS(1701), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16745] = 2,
    STATE(410), 1,
      sym__right_delimiter,
    ACTIONS(1703), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16753] = 2,
    STATE(408), 1,
      sym__right_delimiter,
    ACTIONS(1705), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16761] = 2,
    STATE(404), 1,
      sym__right_delimiter,
    ACTIONS(1707), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16769] = 2,
    STATE(204), 1,
      sym__right_delimiter,
    ACTIONS(1709), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16777] = 2,
    STATE(402), 1,
      sym__right_delimiter,
    ACTIONS(1711), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16785] = 2,
    STATE(209), 1,
      sym__right_delimiter,
    ACTIONS(1713), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16793] = 2,
    STATE(409), 1,
      sym__right_delimiter,
    ACTIONS(1715), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16801] = 2,
    STATE(260), 1,
      sym__right_delimiter,
    ACTIONS(1717), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16809] = 2,
    STATE(256), 1,
      sym__right_delimiter,
    ACTIONS(1719), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16817] = 2,
    STATE(253), 1,
      sym__right_delimiter,
    ACTIONS(1721), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16825] = 2,
    STATE(406), 1,
      sym__right_delimiter,
    ACTIONS(1723), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16833] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(1725), 1,
      anon_sym_else,
    ACTIONS(1727), 1,
      anon_sym_end,
  [16843] = 2,
    STATE(403), 1,
      sym__right_delimiter,
    ACTIONS(1729), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16851] = 2,
    STATE(401), 1,
      sym__right_delimiter,
    ACTIONS(1731), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16859] = 2,
    STATE(217), 1,
      sym__right_delimiter,
    ACTIONS(1733), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16867] = 2,
    STATE(252), 1,
      sym__right_delimiter,
    ACTIONS(1735), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16875] = 2,
    STATE(251), 1,
      sym__right_delimiter,
    ACTIONS(1737), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16883] = 2,
    STATE(399), 1,
      sym__right_delimiter,
    ACTIONS(1739), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16891] = 2,
    STATE(397), 1,
      sym__right_delimiter,
    ACTIONS(1741), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16899] = 2,
    STATE(394), 1,
      sym__right_delimiter,
    ACTIONS(1743), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16907] = 2,
    STATE(303), 1,
      sym__right_delimiter,
    ACTIONS(1745), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16915] = 2,
    STATE(391), 1,
      sym__right_delimiter,
    ACTIONS(1747), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16923] = 2,
    STATE(327), 1,
      sym__right_delimiter,
    ACTIONS(1749), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16931] = 2,
    STATE(389), 1,
      sym__right_delimiter,
    ACTIONS(1751), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16939] = 2,
    STATE(349), 1,
      sym__right_delimiter,
    ACTIONS(1753), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16947] = 2,
    STATE(388), 1,
      sym__right_delimiter,
    ACTIONS(1755), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16955] = 2,
    STATE(330), 1,
      sym__right_delimiter,
    ACTIONS(1757), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16963] = 2,
    STATE(331), 1,
      sym__right_delimiter,
    ACTIONS(1759), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16971] = 2,
    STATE(387), 1,
      sym__right_delimiter,
    ACTIONS(1761), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16979] = 2,
    STATE(344), 1,
      sym__right_delimiter,
    ACTIONS(1763), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16987] = 2,
    STATE(385), 1,
      sym__right_delimiter,
    ACTIONS(1765), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [16995] = 2,
    STATE(383), 1,
      sym__right_delimiter,
    ACTIONS(1767), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17003] = 2,
    STATE(381), 1,
      sym__right_delimiter,
    ACTIONS(1769), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17011] = 2,
    STATE(379), 1,
      sym__right_delimiter,
    ACTIONS(1771), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17019] = 2,
    STATE(376), 1,
      sym__right_delimiter,
    ACTIONS(1773), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17027] = 2,
    STATE(374), 1,
      sym__right_delimiter,
    ACTIONS(1775), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17035] = 2,
    STATE(372), 1,
      sym__right_delimiter,
    ACTIONS(1777), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17043] = 2,
    STATE(231), 1,
      sym__right_delimiter,
    ACTIONS(1779), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17051] = 2,
    STATE(334), 1,
      sym__right_delimiter,
    ACTIONS(1781), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17059] = 2,
    STATE(173), 1,
      sym__right_delimiter,
    ACTIONS(1783), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17067] = 2,
    STATE(336), 1,
      sym__right_delimiter,
    ACTIONS(1785), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17075] = 2,
    STATE(369), 1,
      sym__right_delimiter,
    ACTIONS(1787), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17083] = 2,
    STATE(333), 1,
      sym__right_delimiter,
    ACTIONS(1789), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17091] = 2,
    STATE(288), 1,
      sym__right_delimiter,
    ACTIONS(1791), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17099] = 2,
    STATE(343), 1,
      sym__right_delimiter,
    ACTIONS(1793), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17107] = 2,
    STATE(340), 1,
      sym__right_delimiter,
    ACTIONS(1795), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17115] = 2,
    STATE(337), 1,
      sym__right_delimiter,
    ACTIONS(1797), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17123] = 3,
    ACTIONS(1410), 1,
      anon_sym_PIPE,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1799), 1,
      anon_sym_RPAREN,
  [17133] = 2,
    STATE(335), 1,
      sym__right_delimiter,
    ACTIONS(1801), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17141] = 2,
    STATE(264), 1,
      sym__right_delimiter,
    ACTIONS(1803), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17149] = 2,
    STATE(332), 1,
      sym__right_delimiter,
    ACTIONS(1805), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17157] = 2,
    STATE(182), 1,
      sym__right_delimiter,
    ACTIONS(1807), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17165] = 2,
    STATE(289), 1,
      sym__right_delimiter,
    ACTIONS(1809), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17173] = 2,
    STATE(427), 1,
      sym__right_delimiter,
    ACTIONS(1811), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17181] = 2,
    STATE(342), 1,
      sym__right_delimiter,
    ACTIONS(1813), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17189] = 2,
    STATE(341), 1,
      sym__right_delimiter,
    ACTIONS(1815), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17197] = 2,
    STATE(269), 1,
      sym__right_delimiter,
    ACTIONS(1817), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17205] = 2,
    STATE(339), 1,
      sym__right_delimiter,
    ACTIONS(1819), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17213] = 2,
    STATE(205), 1,
      sym__right_delimiter,
    ACTIONS(1821), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17221] = 2,
    STATE(207), 1,
      sym__right_delimiter,
    ACTIONS(1823), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17229] = 2,
    STATE(208), 1,
      sym__right_delimiter,
    ACTIONS(1825), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17237] = 2,
    STATE(210), 1,
      sym__right_delimiter,
    ACTIONS(1827), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17245] = 2,
    STATE(212), 1,
      sym__right_delimiter,
    ACTIONS(1829), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17253] = 2,
    STATE(213), 1,
      sym__right_delimiter,
    ACTIONS(1831), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17261] = 2,
    STATE(215), 1,
      sym__right_delimiter,
    ACTIONS(1833), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17269] = 2,
    STATE(218), 1,
      sym__right_delimiter,
    ACTIONS(1835), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17277] = 2,
    STATE(220), 1,
      sym__right_delimiter,
    ACTIONS(1837), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17285] = 2,
    STATE(222), 1,
      sym__right_delimiter,
    ACTIONS(1839), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17293] = 2,
    STATE(338), 1,
      sym__right_delimiter,
    ACTIONS(1841), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [17301] = 2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(648), 1,
      sym_variable,
  [17308] = 2,
    ACTIONS(1843), 1,
      sym_identifier,
    STATE(155), 1,
      sym_field_identifier,
  [17315] = 2,
    ACTIONS(1845), 1,
      sym_identifier,
    STATE(172), 1,
      sym_field_identifier,
  [17322] = 1,
    ACTIONS(1847), 1,
      aux_sym_html_token1,
  [17326] = 1,
    ACTIONS(15), 1,
      anon_sym_elseif,
  [17330] = 1,
    ACTIONS(1849), 1,
      aux_sym_html_token1,
  [17334] = 1,
    ACTIONS(1851), 1,
      aux_sym_html_token1,
  [17338] = 1,
    ACTIONS(1853), 1,
      anon_sym_GT,
  [17342] = 1,
    ACTIONS(1855), 1,
      anon_sym_GT,
  [17346] = 1,
    ACTIONS(1857), 1,
      aux_sym_html_token1,
  [17350] = 1,
    ACTIONS(1859), 1,
      anon_sym_COLON_EQ,
  [17354] = 1,
    ACTIONS(1861), 1,
      aux_sym_html_token1,
  [17358] = 1,
    ACTIONS(1863), 1,
      anon_sym_GT,
  [17362] = 1,
    ACTIONS(1865), 1,
      aux_sym_html_token1,
  [17366] = 1,
    ACTIONS(1867), 1,
      aux_sym_html_token1,
  [17370] = 1,
    ACTIONS(1869), 1,
      ts_builtin_sym_end,
  [17374] = 1,
    ACTIONS(1871), 1,
      anon_sym_GT,
  [17378] = 1,
    ACTIONS(1873), 1,
      aux_sym_html_token1,
  [17382] = 1,
    ACTIONS(1875), 1,
      aux_sym_html_token1,
  [17386] = 1,
    ACTIONS(1877), 1,
      aux_sym_html_token1,
  [17390] = 1,
    ACTIONS(1879), 1,
      aux_sym_html_token1,
  [17394] = 1,
    ACTIONS(1881), 1,
      anon_sym_GT,
  [17398] = 1,
    ACTIONS(1883), 1,
      anon_sym_GT,
  [17402] = 1,
    ACTIONS(1885), 1,
      anon_sym_GT,
  [17406] = 1,
    ACTIONS(1887), 1,
      anon_sym_GT,
  [17410] = 1,
    ACTIONS(1889), 1,
      anon_sym_GT,
  [17414] = 1,
    ACTIONS(1891), 1,
      anon_sym_GT,
  [17418] = 1,
    ACTIONS(1893), 1,
      anon_sym_GT,
  [17422] = 1,
    ACTIONS(1895), 1,
      anon_sym_GT,
  [17426] = 1,
    ACTIONS(1897), 1,
      aux_sym_html_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 400,
  [SMALL_STATE(8)] = 480,
  [SMALL_STATE(9)] = 557,
  [SMALL_STATE(10)] = 634,
  [SMALL_STATE(11)] = 711,
  [SMALL_STATE(12)] = 788,
  [SMALL_STATE(13)] = 865,
  [SMALL_STATE(14)] = 942,
  [SMALL_STATE(15)] = 1019,
  [SMALL_STATE(16)] = 1096,
  [SMALL_STATE(17)] = 1173,
  [SMALL_STATE(18)] = 1250,
  [SMALL_STATE(19)] = 1327,
  [SMALL_STATE(20)] = 1404,
  [SMALL_STATE(21)] = 1481,
  [SMALL_STATE(22)] = 1558,
  [SMALL_STATE(23)] = 1635,
  [SMALL_STATE(24)] = 1712,
  [SMALL_STATE(25)] = 1789,
  [SMALL_STATE(26)] = 1866,
  [SMALL_STATE(27)] = 1940,
  [SMALL_STATE(28)] = 2014,
  [SMALL_STATE(29)] = 2088,
  [SMALL_STATE(30)] = 2162,
  [SMALL_STATE(31)] = 2236,
  [SMALL_STATE(32)] = 2310,
  [SMALL_STATE(33)] = 2384,
  [SMALL_STATE(34)] = 2458,
  [SMALL_STATE(35)] = 2532,
  [SMALL_STATE(36)] = 2606,
  [SMALL_STATE(37)] = 2680,
  [SMALL_STATE(38)] = 2754,
  [SMALL_STATE(39)] = 2828,
  [SMALL_STATE(40)] = 2902,
  [SMALL_STATE(41)] = 2976,
  [SMALL_STATE(42)] = 3050,
  [SMALL_STATE(43)] = 3124,
  [SMALL_STATE(44)] = 3198,
  [SMALL_STATE(45)] = 3272,
  [SMALL_STATE(46)] = 3346,
  [SMALL_STATE(47)] = 3420,
  [SMALL_STATE(48)] = 3494,
  [SMALL_STATE(49)] = 3568,
  [SMALL_STATE(50)] = 3642,
  [SMALL_STATE(51)] = 3716,
  [SMALL_STATE(52)] = 3790,
  [SMALL_STATE(53)] = 3864,
  [SMALL_STATE(54)] = 3938,
  [SMALL_STATE(55)] = 4012,
  [SMALL_STATE(56)] = 4086,
  [SMALL_STATE(57)] = 4160,
  [SMALL_STATE(58)] = 4234,
  [SMALL_STATE(59)] = 4308,
  [SMALL_STATE(60)] = 4382,
  [SMALL_STATE(61)] = 4456,
  [SMALL_STATE(62)] = 4530,
  [SMALL_STATE(63)] = 4604,
  [SMALL_STATE(64)] = 4678,
  [SMALL_STATE(65)] = 4752,
  [SMALL_STATE(66)] = 4826,
  [SMALL_STATE(67)] = 4900,
  [SMALL_STATE(68)] = 4974,
  [SMALL_STATE(69)] = 5048,
  [SMALL_STATE(70)] = 5122,
  [SMALL_STATE(71)] = 5196,
  [SMALL_STATE(72)] = 5270,
  [SMALL_STATE(73)] = 5344,
  [SMALL_STATE(74)] = 5418,
  [SMALL_STATE(75)] = 5492,
  [SMALL_STATE(76)] = 5566,
  [SMALL_STATE(77)] = 5640,
  [SMALL_STATE(78)] = 5714,
  [SMALL_STATE(79)] = 5788,
  [SMALL_STATE(80)] = 5862,
  [SMALL_STATE(81)] = 5936,
  [SMALL_STATE(82)] = 6010,
  [SMALL_STATE(83)] = 6084,
  [SMALL_STATE(84)] = 6158,
  [SMALL_STATE(85)] = 6232,
  [SMALL_STATE(86)] = 6306,
  [SMALL_STATE(87)] = 6380,
  [SMALL_STATE(88)] = 6454,
  [SMALL_STATE(89)] = 6528,
  [SMALL_STATE(90)] = 6602,
  [SMALL_STATE(91)] = 6676,
  [SMALL_STATE(92)] = 6750,
  [SMALL_STATE(93)] = 6824,
  [SMALL_STATE(94)] = 6898,
  [SMALL_STATE(95)] = 6972,
  [SMALL_STATE(96)] = 7046,
  [SMALL_STATE(97)] = 7120,
  [SMALL_STATE(98)] = 7194,
  [SMALL_STATE(99)] = 7268,
  [SMALL_STATE(100)] = 7342,
  [SMALL_STATE(101)] = 7416,
  [SMALL_STATE(102)] = 7490,
  [SMALL_STATE(103)] = 7564,
  [SMALL_STATE(104)] = 7638,
  [SMALL_STATE(105)] = 7709,
  [SMALL_STATE(106)] = 7780,
  [SMALL_STATE(107)] = 7851,
  [SMALL_STATE(108)] = 7911,
  [SMALL_STATE(109)] = 7969,
  [SMALL_STATE(110)] = 8028,
  [SMALL_STATE(111)] = 8085,
  [SMALL_STATE(112)] = 8142,
  [SMALL_STATE(113)] = 8201,
  [SMALL_STATE(114)] = 8257,
  [SMALL_STATE(115)] = 8313,
  [SMALL_STATE(116)] = 8370,
  [SMALL_STATE(117)] = 8427,
  [SMALL_STATE(118)] = 8484,
  [SMALL_STATE(119)] = 8541,
  [SMALL_STATE(120)] = 8598,
  [SMALL_STATE(121)] = 8655,
  [SMALL_STATE(122)] = 8708,
  [SMALL_STATE(123)] = 8761,
  [SMALL_STATE(124)] = 8814,
  [SMALL_STATE(125)] = 8864,
  [SMALL_STATE(126)] = 8914,
  [SMALL_STATE(127)] = 8964,
  [SMALL_STATE(128)] = 9014,
  [SMALL_STATE(129)] = 9064,
  [SMALL_STATE(130)] = 9114,
  [SMALL_STATE(131)] = 9164,
  [SMALL_STATE(132)] = 9214,
  [SMALL_STATE(133)] = 9264,
  [SMALL_STATE(134)] = 9314,
  [SMALL_STATE(135)] = 9364,
  [SMALL_STATE(136)] = 9414,
  [SMALL_STATE(137)] = 9464,
  [SMALL_STATE(138)] = 9514,
  [SMALL_STATE(139)] = 9564,
  [SMALL_STATE(140)] = 9614,
  [SMALL_STATE(141)] = 9664,
  [SMALL_STATE(142)] = 9700,
  [SMALL_STATE(143)] = 9736,
  [SMALL_STATE(144)] = 9772,
  [SMALL_STATE(145)] = 9808,
  [SMALL_STATE(146)] = 9842,
  [SMALL_STATE(147)] = 9878,
  [SMALL_STATE(148)] = 9914,
  [SMALL_STATE(149)] = 9947,
  [SMALL_STATE(150)] = 9970,
  [SMALL_STATE(151)] = 10003,
  [SMALL_STATE(152)] = 10036,
  [SMALL_STATE(153)] = 10069,
  [SMALL_STATE(154)] = 10102,
  [SMALL_STATE(155)] = 10125,
  [SMALL_STATE(156)] = 10148,
  [SMALL_STATE(157)] = 10181,
  [SMALL_STATE(158)] = 10214,
  [SMALL_STATE(159)] = 10247,
  [SMALL_STATE(160)] = 10280,
  [SMALL_STATE(161)] = 10313,
  [SMALL_STATE(162)] = 10346,
  [SMALL_STATE(163)] = 10379,
  [SMALL_STATE(164)] = 10412,
  [SMALL_STATE(165)] = 10445,
  [SMALL_STATE(166)] = 10478,
  [SMALL_STATE(167)] = 10511,
  [SMALL_STATE(168)] = 10544,
  [SMALL_STATE(169)] = 10577,
  [SMALL_STATE(170)] = 10610,
  [SMALL_STATE(171)] = 10643,
  [SMALL_STATE(172)] = 10676,
  [SMALL_STATE(173)] = 10698,
  [SMALL_STATE(174)] = 10728,
  [SMALL_STATE(175)] = 10758,
  [SMALL_STATE(176)] = 10788,
  [SMALL_STATE(177)] = 10818,
  [SMALL_STATE(178)] = 10848,
  [SMALL_STATE(179)] = 10878,
  [SMALL_STATE(180)] = 10908,
  [SMALL_STATE(181)] = 10938,
  [SMALL_STATE(182)] = 10968,
  [SMALL_STATE(183)] = 10998,
  [SMALL_STATE(184)] = 11028,
  [SMALL_STATE(185)] = 11058,
  [SMALL_STATE(186)] = 11088,
  [SMALL_STATE(187)] = 11118,
  [SMALL_STATE(188)] = 11148,
  [SMALL_STATE(189)] = 11178,
  [SMALL_STATE(190)] = 11208,
  [SMALL_STATE(191)] = 11238,
  [SMALL_STATE(192)] = 11268,
  [SMALL_STATE(193)] = 11298,
  [SMALL_STATE(194)] = 11328,
  [SMALL_STATE(195)] = 11358,
  [SMALL_STATE(196)] = 11388,
  [SMALL_STATE(197)] = 11418,
  [SMALL_STATE(198)] = 11448,
  [SMALL_STATE(199)] = 11478,
  [SMALL_STATE(200)] = 11508,
  [SMALL_STATE(201)] = 11538,
  [SMALL_STATE(202)] = 11568,
  [SMALL_STATE(203)] = 11598,
  [SMALL_STATE(204)] = 11628,
  [SMALL_STATE(205)] = 11658,
  [SMALL_STATE(206)] = 11688,
  [SMALL_STATE(207)] = 11718,
  [SMALL_STATE(208)] = 11748,
  [SMALL_STATE(209)] = 11778,
  [SMALL_STATE(210)] = 11808,
  [SMALL_STATE(211)] = 11838,
  [SMALL_STATE(212)] = 11868,
  [SMALL_STATE(213)] = 11898,
  [SMALL_STATE(214)] = 11928,
  [SMALL_STATE(215)] = 11958,
  [SMALL_STATE(216)] = 11988,
  [SMALL_STATE(217)] = 12018,
  [SMALL_STATE(218)] = 12048,
  [SMALL_STATE(219)] = 12078,
  [SMALL_STATE(220)] = 12108,
  [SMALL_STATE(221)] = 12138,
  [SMALL_STATE(222)] = 12168,
  [SMALL_STATE(223)] = 12198,
  [SMALL_STATE(224)] = 12228,
  [SMALL_STATE(225)] = 12258,
  [SMALL_STATE(226)] = 12288,
  [SMALL_STATE(227)] = 12318,
  [SMALL_STATE(228)] = 12348,
  [SMALL_STATE(229)] = 12378,
  [SMALL_STATE(230)] = 12408,
  [SMALL_STATE(231)] = 12438,
  [SMALL_STATE(232)] = 12468,
  [SMALL_STATE(233)] = 12498,
  [SMALL_STATE(234)] = 12528,
  [SMALL_STATE(235)] = 12550,
  [SMALL_STATE(236)] = 12580,
  [SMALL_STATE(237)] = 12610,
  [SMALL_STATE(238)] = 12640,
  [SMALL_STATE(239)] = 12670,
  [SMALL_STATE(240)] = 12700,
  [SMALL_STATE(241)] = 12730,
  [SMALL_STATE(242)] = 12760,
  [SMALL_STATE(243)] = 12790,
  [SMALL_STATE(244)] = 12820,
  [SMALL_STATE(245)] = 12850,
  [SMALL_STATE(246)] = 12880,
  [SMALL_STATE(247)] = 12910,
  [SMALL_STATE(248)] = 12932,
  [SMALL_STATE(249)] = 12962,
  [SMALL_STATE(250)] = 12992,
  [SMALL_STATE(251)] = 13022,
  [SMALL_STATE(252)] = 13052,
  [SMALL_STATE(253)] = 13082,
  [SMALL_STATE(254)] = 13112,
  [SMALL_STATE(255)] = 13142,
  [SMALL_STATE(256)] = 13164,
  [SMALL_STATE(257)] = 13194,
  [SMALL_STATE(258)] = 13224,
  [SMALL_STATE(259)] = 13246,
  [SMALL_STATE(260)] = 13276,
  [SMALL_STATE(261)] = 13306,
  [SMALL_STATE(262)] = 13336,
  [SMALL_STATE(263)] = 13366,
  [SMALL_STATE(264)] = 13396,
  [SMALL_STATE(265)] = 13426,
  [SMALL_STATE(266)] = 13456,
  [SMALL_STATE(267)] = 13486,
  [SMALL_STATE(268)] = 13516,
  [SMALL_STATE(269)] = 13546,
  [SMALL_STATE(270)] = 13576,
  [SMALL_STATE(271)] = 13606,
  [SMALL_STATE(272)] = 13636,
  [SMALL_STATE(273)] = 13666,
  [SMALL_STATE(274)] = 13696,
  [SMALL_STATE(275)] = 13726,
  [SMALL_STATE(276)] = 13742,
  [SMALL_STATE(277)] = 13756,
  [SMALL_STATE(278)] = 13769,
  [SMALL_STATE(279)] = 13786,
  [SMALL_STATE(280)] = 13797,
  [SMALL_STATE(281)] = 13811,
  [SMALL_STATE(282)] = 13825,
  [SMALL_STATE(283)] = 13843,
  [SMALL_STATE(284)] = 13857,
  [SMALL_STATE(285)] = 13875,
  [SMALL_STATE(286)] = 13889,
  [SMALL_STATE(287)] = 13905,
  [SMALL_STATE(288)] = 13919,
  [SMALL_STATE(289)] = 13930,
  [SMALL_STATE(290)] = 13941,
  [SMALL_STATE(291)] = 13952,
  [SMALL_STATE(292)] = 13963,
  [SMALL_STATE(293)] = 13974,
  [SMALL_STATE(294)] = 13985,
  [SMALL_STATE(295)] = 13996,
  [SMALL_STATE(296)] = 14007,
  [SMALL_STATE(297)] = 14018,
  [SMALL_STATE(298)] = 14029,
  [SMALL_STATE(299)] = 14040,
  [SMALL_STATE(300)] = 14051,
  [SMALL_STATE(301)] = 14062,
  [SMALL_STATE(302)] = 14073,
  [SMALL_STATE(303)] = 14084,
  [SMALL_STATE(304)] = 14095,
  [SMALL_STATE(305)] = 14106,
  [SMALL_STATE(306)] = 14117,
  [SMALL_STATE(307)] = 14128,
  [SMALL_STATE(308)] = 14139,
  [SMALL_STATE(309)] = 14150,
  [SMALL_STATE(310)] = 14161,
  [SMALL_STATE(311)] = 14172,
  [SMALL_STATE(312)] = 14183,
  [SMALL_STATE(313)] = 14194,
  [SMALL_STATE(314)] = 14205,
  [SMALL_STATE(315)] = 14216,
  [SMALL_STATE(316)] = 14227,
  [SMALL_STATE(317)] = 14242,
  [SMALL_STATE(318)] = 14253,
  [SMALL_STATE(319)] = 14268,
  [SMALL_STATE(320)] = 14279,
  [SMALL_STATE(321)] = 14290,
  [SMALL_STATE(322)] = 14301,
  [SMALL_STATE(323)] = 14312,
  [SMALL_STATE(324)] = 14323,
  [SMALL_STATE(325)] = 14334,
  [SMALL_STATE(326)] = 14345,
  [SMALL_STATE(327)] = 14356,
  [SMALL_STATE(328)] = 14367,
  [SMALL_STATE(329)] = 14378,
  [SMALL_STATE(330)] = 14393,
  [SMALL_STATE(331)] = 14404,
  [SMALL_STATE(332)] = 14415,
  [SMALL_STATE(333)] = 14426,
  [SMALL_STATE(334)] = 14437,
  [SMALL_STATE(335)] = 14448,
  [SMALL_STATE(336)] = 14459,
  [SMALL_STATE(337)] = 14470,
  [SMALL_STATE(338)] = 14481,
  [SMALL_STATE(339)] = 14492,
  [SMALL_STATE(340)] = 14503,
  [SMALL_STATE(341)] = 14514,
  [SMALL_STATE(342)] = 14525,
  [SMALL_STATE(343)] = 14536,
  [SMALL_STATE(344)] = 14547,
  [SMALL_STATE(345)] = 14557,
  [SMALL_STATE(346)] = 14567,
  [SMALL_STATE(347)] = 14581,
  [SMALL_STATE(348)] = 14589,
  [SMALL_STATE(349)] = 14599,
  [SMALL_STATE(350)] = 14609,
  [SMALL_STATE(351)] = 14619,
  [SMALL_STATE(352)] = 14627,
  [SMALL_STATE(353)] = 14637,
  [SMALL_STATE(354)] = 14647,
  [SMALL_STATE(355)] = 14657,
  [SMALL_STATE(356)] = 14667,
  [SMALL_STATE(357)] = 14681,
  [SMALL_STATE(358)] = 14691,
  [SMALL_STATE(359)] = 14701,
  [SMALL_STATE(360)] = 14711,
  [SMALL_STATE(361)] = 14721,
  [SMALL_STATE(362)] = 14731,
  [SMALL_STATE(363)] = 14745,
  [SMALL_STATE(364)] = 14755,
  [SMALL_STATE(365)] = 14769,
  [SMALL_STATE(366)] = 14777,
  [SMALL_STATE(367)] = 14787,
  [SMALL_STATE(368)] = 14795,
  [SMALL_STATE(369)] = 14805,
  [SMALL_STATE(370)] = 14815,
  [SMALL_STATE(371)] = 14827,
  [SMALL_STATE(372)] = 14839,
  [SMALL_STATE(373)] = 14849,
  [SMALL_STATE(374)] = 14859,
  [SMALL_STATE(375)] = 14869,
  [SMALL_STATE(376)] = 14879,
  [SMALL_STATE(377)] = 14889,
  [SMALL_STATE(378)] = 14899,
  [SMALL_STATE(379)] = 14909,
  [SMALL_STATE(380)] = 14919,
  [SMALL_STATE(381)] = 14929,
  [SMALL_STATE(382)] = 14939,
  [SMALL_STATE(383)] = 14949,
  [SMALL_STATE(384)] = 14959,
  [SMALL_STATE(385)] = 14969,
  [SMALL_STATE(386)] = 14979,
  [SMALL_STATE(387)] = 14989,
  [SMALL_STATE(388)] = 14999,
  [SMALL_STATE(389)] = 15009,
  [SMALL_STATE(390)] = 15019,
  [SMALL_STATE(391)] = 15029,
  [SMALL_STATE(392)] = 15039,
  [SMALL_STATE(393)] = 15049,
  [SMALL_STATE(394)] = 15059,
  [SMALL_STATE(395)] = 15069,
  [SMALL_STATE(396)] = 15079,
  [SMALL_STATE(397)] = 15089,
  [SMALL_STATE(398)] = 15099,
  [SMALL_STATE(399)] = 15109,
  [SMALL_STATE(400)] = 15119,
  [SMALL_STATE(401)] = 15133,
  [SMALL_STATE(402)] = 15143,
  [SMALL_STATE(403)] = 15153,
  [SMALL_STATE(404)] = 15163,
  [SMALL_STATE(405)] = 15173,
  [SMALL_STATE(406)] = 15183,
  [SMALL_STATE(407)] = 15193,
  [SMALL_STATE(408)] = 15203,
  [SMALL_STATE(409)] = 15213,
  [SMALL_STATE(410)] = 15223,
  [SMALL_STATE(411)] = 15233,
  [SMALL_STATE(412)] = 15243,
  [SMALL_STATE(413)] = 15253,
  [SMALL_STATE(414)] = 15267,
  [SMALL_STATE(415)] = 15277,
  [SMALL_STATE(416)] = 15287,
  [SMALL_STATE(417)] = 15297,
  [SMALL_STATE(418)] = 15307,
  [SMALL_STATE(419)] = 15317,
  [SMALL_STATE(420)] = 15327,
  [SMALL_STATE(421)] = 15337,
  [SMALL_STATE(422)] = 15347,
  [SMALL_STATE(423)] = 15357,
  [SMALL_STATE(424)] = 15367,
  [SMALL_STATE(425)] = 15377,
  [SMALL_STATE(426)] = 15387,
  [SMALL_STATE(427)] = 15397,
  [SMALL_STATE(428)] = 15407,
  [SMALL_STATE(429)] = 15417,
  [SMALL_STATE(430)] = 15427,
  [SMALL_STATE(431)] = 15437,
  [SMALL_STATE(432)] = 15451,
  [SMALL_STATE(433)] = 15461,
  [SMALL_STATE(434)] = 15475,
  [SMALL_STATE(435)] = 15489,
  [SMALL_STATE(436)] = 15503,
  [SMALL_STATE(437)] = 15513,
  [SMALL_STATE(438)] = 15527,
  [SMALL_STATE(439)] = 15541,
  [SMALL_STATE(440)] = 15551,
  [SMALL_STATE(441)] = 15565,
  [SMALL_STATE(442)] = 15579,
  [SMALL_STATE(443)] = 15593,
  [SMALL_STATE(444)] = 15607,
  [SMALL_STATE(445)] = 15621,
  [SMALL_STATE(446)] = 15631,
  [SMALL_STATE(447)] = 15641,
  [SMALL_STATE(448)] = 15655,
  [SMALL_STATE(449)] = 15665,
  [SMALL_STATE(450)] = 15675,
  [SMALL_STATE(451)] = 15689,
  [SMALL_STATE(452)] = 15699,
  [SMALL_STATE(453)] = 15709,
  [SMALL_STATE(454)] = 15719,
  [SMALL_STATE(455)] = 15729,
  [SMALL_STATE(456)] = 15739,
  [SMALL_STATE(457)] = 15749,
  [SMALL_STATE(458)] = 15759,
  [SMALL_STATE(459)] = 15769,
  [SMALL_STATE(460)] = 15779,
  [SMALL_STATE(461)] = 15789,
  [SMALL_STATE(462)] = 15802,
  [SMALL_STATE(463)] = 15813,
  [SMALL_STATE(464)] = 15824,
  [SMALL_STATE(465)] = 15835,
  [SMALL_STATE(466)] = 15846,
  [SMALL_STATE(467)] = 15857,
  [SMALL_STATE(468)] = 15868,
  [SMALL_STATE(469)] = 15879,
  [SMALL_STATE(470)] = 15890,
  [SMALL_STATE(471)] = 15903,
  [SMALL_STATE(472)] = 15914,
  [SMALL_STATE(473)] = 15925,
  [SMALL_STATE(474)] = 15936,
  [SMALL_STATE(475)] = 15947,
  [SMALL_STATE(476)] = 15960,
  [SMALL_STATE(477)] = 15973,
  [SMALL_STATE(478)] = 15984,
  [SMALL_STATE(479)] = 15997,
  [SMALL_STATE(480)] = 16010,
  [SMALL_STATE(481)] = 16023,
  [SMALL_STATE(482)] = 16034,
  [SMALL_STATE(483)] = 16045,
  [SMALL_STATE(484)] = 16053,
  [SMALL_STATE(485)] = 16061,
  [SMALL_STATE(486)] = 16069,
  [SMALL_STATE(487)] = 16077,
  [SMALL_STATE(488)] = 16085,
  [SMALL_STATE(489)] = 16093,
  [SMALL_STATE(490)] = 16103,
  [SMALL_STATE(491)] = 16111,
  [SMALL_STATE(492)] = 16119,
  [SMALL_STATE(493)] = 16127,
  [SMALL_STATE(494)] = 16135,
  [SMALL_STATE(495)] = 16143,
  [SMALL_STATE(496)] = 16151,
  [SMALL_STATE(497)] = 16159,
  [SMALL_STATE(498)] = 16167,
  [SMALL_STATE(499)] = 16175,
  [SMALL_STATE(500)] = 16183,
  [SMALL_STATE(501)] = 16191,
  [SMALL_STATE(502)] = 16199,
  [SMALL_STATE(503)] = 16209,
  [SMALL_STATE(504)] = 16217,
  [SMALL_STATE(505)] = 16225,
  [SMALL_STATE(506)] = 16233,
  [SMALL_STATE(507)] = 16241,
  [SMALL_STATE(508)] = 16249,
  [SMALL_STATE(509)] = 16257,
  [SMALL_STATE(510)] = 16267,
  [SMALL_STATE(511)] = 16275,
  [SMALL_STATE(512)] = 16283,
  [SMALL_STATE(513)] = 16291,
  [SMALL_STATE(514)] = 16299,
  [SMALL_STATE(515)] = 16307,
  [SMALL_STATE(516)] = 16315,
  [SMALL_STATE(517)] = 16323,
  [SMALL_STATE(518)] = 16331,
  [SMALL_STATE(519)] = 16339,
  [SMALL_STATE(520)] = 16347,
  [SMALL_STATE(521)] = 16355,
  [SMALL_STATE(522)] = 16363,
  [SMALL_STATE(523)] = 16371,
  [SMALL_STATE(524)] = 16379,
  [SMALL_STATE(525)] = 16387,
  [SMALL_STATE(526)] = 16395,
  [SMALL_STATE(527)] = 16405,
  [SMALL_STATE(528)] = 16413,
  [SMALL_STATE(529)] = 16421,
  [SMALL_STATE(530)] = 16429,
  [SMALL_STATE(531)] = 16437,
  [SMALL_STATE(532)] = 16447,
  [SMALL_STATE(533)] = 16455,
  [SMALL_STATE(534)] = 16463,
  [SMALL_STATE(535)] = 16471,
  [SMALL_STATE(536)] = 16479,
  [SMALL_STATE(537)] = 16487,
  [SMALL_STATE(538)] = 16495,
  [SMALL_STATE(539)] = 16503,
  [SMALL_STATE(540)] = 16511,
  [SMALL_STATE(541)] = 16521,
  [SMALL_STATE(542)] = 16529,
  [SMALL_STATE(543)] = 16537,
  [SMALL_STATE(544)] = 16545,
  [SMALL_STATE(545)] = 16553,
  [SMALL_STATE(546)] = 16561,
  [SMALL_STATE(547)] = 16569,
  [SMALL_STATE(548)] = 16577,
  [SMALL_STATE(549)] = 16585,
  [SMALL_STATE(550)] = 16593,
  [SMALL_STATE(551)] = 16601,
  [SMALL_STATE(552)] = 16609,
  [SMALL_STATE(553)] = 16617,
  [SMALL_STATE(554)] = 16625,
  [SMALL_STATE(555)] = 16633,
  [SMALL_STATE(556)] = 16641,
  [SMALL_STATE(557)] = 16649,
  [SMALL_STATE(558)] = 16657,
  [SMALL_STATE(559)] = 16665,
  [SMALL_STATE(560)] = 16673,
  [SMALL_STATE(561)] = 16681,
  [SMALL_STATE(562)] = 16689,
  [SMALL_STATE(563)] = 16697,
  [SMALL_STATE(564)] = 16705,
  [SMALL_STATE(565)] = 16713,
  [SMALL_STATE(566)] = 16721,
  [SMALL_STATE(567)] = 16729,
  [SMALL_STATE(568)] = 16737,
  [SMALL_STATE(569)] = 16745,
  [SMALL_STATE(570)] = 16753,
  [SMALL_STATE(571)] = 16761,
  [SMALL_STATE(572)] = 16769,
  [SMALL_STATE(573)] = 16777,
  [SMALL_STATE(574)] = 16785,
  [SMALL_STATE(575)] = 16793,
  [SMALL_STATE(576)] = 16801,
  [SMALL_STATE(577)] = 16809,
  [SMALL_STATE(578)] = 16817,
  [SMALL_STATE(579)] = 16825,
  [SMALL_STATE(580)] = 16833,
  [SMALL_STATE(581)] = 16843,
  [SMALL_STATE(582)] = 16851,
  [SMALL_STATE(583)] = 16859,
  [SMALL_STATE(584)] = 16867,
  [SMALL_STATE(585)] = 16875,
  [SMALL_STATE(586)] = 16883,
  [SMALL_STATE(587)] = 16891,
  [SMALL_STATE(588)] = 16899,
  [SMALL_STATE(589)] = 16907,
  [SMALL_STATE(590)] = 16915,
  [SMALL_STATE(591)] = 16923,
  [SMALL_STATE(592)] = 16931,
  [SMALL_STATE(593)] = 16939,
  [SMALL_STATE(594)] = 16947,
  [SMALL_STATE(595)] = 16955,
  [SMALL_STATE(596)] = 16963,
  [SMALL_STATE(597)] = 16971,
  [SMALL_STATE(598)] = 16979,
  [SMALL_STATE(599)] = 16987,
  [SMALL_STATE(600)] = 16995,
  [SMALL_STATE(601)] = 17003,
  [SMALL_STATE(602)] = 17011,
  [SMALL_STATE(603)] = 17019,
  [SMALL_STATE(604)] = 17027,
  [SMALL_STATE(605)] = 17035,
  [SMALL_STATE(606)] = 17043,
  [SMALL_STATE(607)] = 17051,
  [SMALL_STATE(608)] = 17059,
  [SMALL_STATE(609)] = 17067,
  [SMALL_STATE(610)] = 17075,
  [SMALL_STATE(611)] = 17083,
  [SMALL_STATE(612)] = 17091,
  [SMALL_STATE(613)] = 17099,
  [SMALL_STATE(614)] = 17107,
  [SMALL_STATE(615)] = 17115,
  [SMALL_STATE(616)] = 17123,
  [SMALL_STATE(617)] = 17133,
  [SMALL_STATE(618)] = 17141,
  [SMALL_STATE(619)] = 17149,
  [SMALL_STATE(620)] = 17157,
  [SMALL_STATE(621)] = 17165,
  [SMALL_STATE(622)] = 17173,
  [SMALL_STATE(623)] = 17181,
  [SMALL_STATE(624)] = 17189,
  [SMALL_STATE(625)] = 17197,
  [SMALL_STATE(626)] = 17205,
  [SMALL_STATE(627)] = 17213,
  [SMALL_STATE(628)] = 17221,
  [SMALL_STATE(629)] = 17229,
  [SMALL_STATE(630)] = 17237,
  [SMALL_STATE(631)] = 17245,
  [SMALL_STATE(632)] = 17253,
  [SMALL_STATE(633)] = 17261,
  [SMALL_STATE(634)] = 17269,
  [SMALL_STATE(635)] = 17277,
  [SMALL_STATE(636)] = 17285,
  [SMALL_STATE(637)] = 17293,
  [SMALL_STATE(638)] = 17301,
  [SMALL_STATE(639)] = 17308,
  [SMALL_STATE(640)] = 17315,
  [SMALL_STATE(641)] = 17322,
  [SMALL_STATE(642)] = 17326,
  [SMALL_STATE(643)] = 17330,
  [SMALL_STATE(644)] = 17334,
  [SMALL_STATE(645)] = 17338,
  [SMALL_STATE(646)] = 17342,
  [SMALL_STATE(647)] = 17346,
  [SMALL_STATE(648)] = 17350,
  [SMALL_STATE(649)] = 17354,
  [SMALL_STATE(650)] = 17358,
  [SMALL_STATE(651)] = 17362,
  [SMALL_STATE(652)] = 17366,
  [SMALL_STATE(653)] = 17370,
  [SMALL_STATE(654)] = 17374,
  [SMALL_STATE(655)] = 17378,
  [SMALL_STATE(656)] = 17382,
  [SMALL_STATE(657)] = 17386,
  [SMALL_STATE(658)] = 17390,
  [SMALL_STATE(659)] = 17394,
  [SMALL_STATE(660)] = 17398,
  [SMALL_STATE(661)] = 17402,
  [SMALL_STATE(662)] = 17406,
  [SMALL_STATE(663)] = 17410,
  [SMALL_STATE(664)] = 17414,
  [SMALL_STATE(665)] = 17418,
  [SMALL_STATE(666)] = 17422,
  [SMALL_STATE(667)] = 17426,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(145),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(143),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(106),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(106),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, .production_id = 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, .production_id = 7),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 8),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 8),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(157),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(141),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(104),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(104),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(170),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(144),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(105),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(105),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 20),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 20),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 12), SHIFT_REPEAT(105),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 12), SHIFT_REPEAT(105),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 3),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(137),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 13),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 13),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 3, .production_id = 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 3, .production_id = 2),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 6),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 6),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 6),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 6),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 12),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 12),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 2, .production_id = 5),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 5),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 6),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 6),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 16),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 16),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 18),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 18),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 19),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 19),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 10),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 10),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pipeline, 3),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pipeline, 3),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 19),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 19),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 15),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 15),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 21),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 21),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_pipeline, 3),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_pipeline, 3),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 22),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 22),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 10, .production_id = 12),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 10, .production_id = 12),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 5),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 5),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 10),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 10),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 6),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 6),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 6, .production_id = 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 6, .production_id = 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 13),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 13),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 7, .production_id = 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 7, .production_id = 2),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 12),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 12),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 12),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 12),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 23),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 23),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 21),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 21),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 30),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 30),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 16),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 16),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 27),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 27),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 25),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 25),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 18),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 18),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 29),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 29),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 23),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 23),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 15),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 15),
  [1406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 26),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 26),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_variable_definition, 5, .production_id = 14),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 11), SHIFT_REPEAT(642),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 11), SHIFT_REPEAT(642),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [1516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(481),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1869] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gotmpl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
