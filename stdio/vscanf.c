/*
 * vscanf.c
 *
 * A part of C17 standard, 7.21.6.11
 *
 * Reads formatted output from the stdin with the variable argument list
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int vscanf(const char* restrict format, va_list args)
{
  int items_count = vfscanf(stdin, format, args);

  return items_count;
}
