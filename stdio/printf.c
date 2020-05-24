/*
 * printf.c
 *
 * A part of C17 standard, 7.21.6.3
 *
 * Writes formatted output to the stdout
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int printf(const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int byte_count = vfprintf(stdout, format, args);
  va_end(args);

  return byte_count;
}
