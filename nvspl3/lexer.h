#pragma once

#include <string>

enum Token {
    tok_eof = -1,

    // commands
    tok_def = -2,
    tok_extern = -3,

    // primary
    tok_identifier = -4,
    tok_number = -5,

    // control
    tok_if = -6,
    tok_then = -7,
    tok_else = -8,
    tok_for = -9,
    // tok_in = -10,

    // operators
    tok_binary = -11,
    tok_unary = -12,

    // var definition
    tok_var = -13,

    // block
    tok_openblock = -14,
    tok_closeblock = -15,
};

extern std::string IdentifierStr;
extern double NumVal;
extern int LastChar;

int gettok();