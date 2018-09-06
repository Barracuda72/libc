/*
 * islower.c
 *
 * A part of C17 standard, 7.4.1.7
 *
 * Checks that symbol is lower-case letter
 *
 */

#include <ctype.h>

int islower(int c)
{
  return ((c >= 'a') && (c <= 'z'));
}
