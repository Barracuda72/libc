/*
 * sprintf.c
 *
 * A part of C17 standard, 7.21.6.6
 *
 * Writes formatted output to the buffer
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int sprintf(char* restrict s, const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int byte_count = vsprintf(s, format, args);
  va_end(args);

  return byte_count;
}
