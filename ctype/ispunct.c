/*
 * ispunct.c
 *
 * A part of C17 standard, 7.4.1.9
 *
 * Checks that symbol is a punctuation character
 *
 */

#include <ctype.h>

int ispunct(int c)
{
  return (isprint(c) && !isspace(c) && !isalnum(c));
}
