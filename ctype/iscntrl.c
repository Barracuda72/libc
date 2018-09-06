/*
 * iscntrl.c
 *
 * A part of C17 standard, 7.4.1.4
 *
 * Checks that symbol is control character
 *
 */

#include <ctype.h>

int iscntrl(int c)
{
  return (((c >= 0) && (c <= 0x1F)) || (c == 0x7F));
}
