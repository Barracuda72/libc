/*
 * isalpha.c
 *
 * A part of C17 standard, 7.4.1.2
 *
 * Checks that symbol is letter
 *
 */

#include <ctype.h>

int isalpha(int c)
{
  return (isupper(c) || islower(c));
}
