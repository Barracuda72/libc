/*
 * vsscanf.c
 *
 * A part of C17 standard, 7.21.6.14
 *
 * Reads formatted input from the buffer with the variable argument list
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

#include <int/stdio.h>

int vsscanf(const char* restrict s, const char* restrict format, va_list args)
{
  struct int_stdio_desc int_stream;

  int_stream.stream = NULL;
  int_stream.limited = false;
  int_stream.n = 0;
  int_stream.buffer = s;

  int items_count = int_xscanf(&int_stream, format, args);

  return items_count;
}
