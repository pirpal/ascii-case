#ifndef ASCII_CASE_H_
#define ASCII_CASE_H_

/*
  ASCII_CASE
  Ascii basic A-Z and a-z case functions
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// ASCII LETTERS CODES
#define A_UPPER 65
#define Z_UPPER 90
#define A_LOWER 97
#define Z_LOWER 122


bool is_lower(const char c);

bool is_upper(const char c);

char uppercase(const char c);

char lowercase(const char c);

char togglecase(const char c);



#endif // ASCII_CASE_H_
