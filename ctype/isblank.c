/*
 * isblank.c
 *
 * A part of C17 standard, 7.4.1.3
 *
 * Checks that symbol is space or tab
 *
 */

#include <ctype.h>

int isblank(int c)
{
  return ((c == ' ') || (c == '\t'));
}
