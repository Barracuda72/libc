/*
 * isupper.c
 *
 * A part of C17 standard, 7.4.1.11
 *
 * Checks that symbol is an upper-case letter
 *
 */

#include <ctype.h>

int isupper(int c)
{
  return ((c >= 'A') && (c <= 'Z'));
}
