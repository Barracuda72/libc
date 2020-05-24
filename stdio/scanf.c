/*
 * scanf.c
 *
 * A part of C17 standard, 7.21.6.4
 *
 * Reads formatted input from the stdin
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int scanf(const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int items_count = vfscanf(stdin, format, args);
  va_end(args);

  return items_count;
}
