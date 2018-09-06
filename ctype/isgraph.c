/*
 * isgraph.c
 *
 * A part of C17 standard, 7.4.1.6
 *
 * Checks that symbol is a printing character (excluding space)
 *
 */

#include <ctype.h>

int isgraph(int c)
{
  return ((c > 0x20) && (c <= 0x7E));
}
