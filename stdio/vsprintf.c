/*
 * vsprintf.c
 *
 * A part of C17 standard, 7.21.6.12
 *
 * Writes formatted output to the buffer with the variable argument list
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

#include <int/stdio.h>

int vsprintf(char* restrict s, const char* restrict format, va_list args)
{
  struct int_stdio_desc int_stream;

  int_stream.stream = NULL;
  int_stream.limited = false;
  int_stream.buffer = s;
  int_stream.n = 0;

  int byte_count = int_xprintf(&int_stream, format, args);

  return byte_count;
}
