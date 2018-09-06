/*
 * isspace.c
 *
 * A part of C17 standard, 7.4.1.10
 *
 * Checks that symbol is a standard white-space character
 *
 */

#include <ctype.h>

int isspace(int c)
{
  return (
          (c == ' ') || (c == '\f') || (c == '\n') ||
          (c == '\r') || (c == '\t') || (c == '\t')
         );
}
