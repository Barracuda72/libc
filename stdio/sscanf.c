/*
 * sscanf.c
 *
 * A part of C17 standard, 7.21.6.7
 *
 * Reads formatted input from the buffer
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int sscanf(const char* restrict s, const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int items_count = vsscanf(s, format, args);
  va_end(args);

  return items_count;
}
