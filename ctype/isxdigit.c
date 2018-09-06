/*
 * isxdigit.c
 *
 * A part of C17 standard, 7.4.1.12
 *
 * Checks that symbol is a hexadecimal digit
 *
 */

#include <ctype.h>

int isxdigit(int c)
{
  return (
          ((c >= '0') && (c <= '9')) || 
          ((c >= 'a') && (c <= 'f')) ||
          ((c >= 'A') && (c <= 'F'))
         );
}
