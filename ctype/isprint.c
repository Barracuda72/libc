/*
 * isprint.c
 *
 * A part of C17 standard, 7.4.1.8
 *
 * Checks that symbol is a printing character (including space)
 *
 */

#include <ctype.h>

int isprint(int c)
{
  return ((c >= 0x20) && (c <= 0x7E));
}
