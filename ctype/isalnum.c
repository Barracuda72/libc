/*
 * isalnum.c
 *
 * A part of C17 standard, 7.4.1.1
 *
 * Checks that symbol is letter or digit
 *
 */

#include <ctype.h>

int isalnum(int c)
{
  return (isalpha(c)||isdigit(c));
}
