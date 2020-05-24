/*
 * snprintf.c
 *
 * A part of C17 standard, 7.21.6.5
 *
 * Writes n-1 bytes of formatted output to the buffer
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int snprintf(char* restrict s, size_t n, const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int byte_count = vsnprintf(s, n, format, args);
  va_end(args);

  return byte_count;
}
