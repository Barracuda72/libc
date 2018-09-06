/*
 * isdigit.c
 *
 * A part of C17 standard, 7.4.1.5
 *
 * Checks that symbol is a decimal digit
 *
 */

#include <ctype.h>

int isdigit(int c)
{
  return ((c >= '0') && (c <= '9'));
}
