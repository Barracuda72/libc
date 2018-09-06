/*
 * tolower.c
 *
 * A part of C17 standard, 7.4.2.1
 *
 * Converts an upper-case letter to lower case
 *
 */

#include <ctype.h>

int tolower(int c)
{
  if (isupper(c))
    return c - 'A' + 'a';
  else
    return c;
}
