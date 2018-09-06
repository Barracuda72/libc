/*
 * toupper.c
 *
 * A part of C17 standard, 7.4.2.2
 *
 * Converts a lower-case letter to upper case
 *
 */

#include <ctype.h>

int toupper(int c)
{
  if (islower(c))
    return c - 'a' + 'A';
  else
    return c;
}
