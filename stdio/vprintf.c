/*
 * vprintf.c
 *
 * A part of C17 standard, 7.21.6.10
 *
 * Writes formatted output to the stdout with the variable argument list
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int vprintf(const char* restrict format, va_list args)
{
  int byte_count = vfprintf(stdout, format, args);

  return byte_count;
}
