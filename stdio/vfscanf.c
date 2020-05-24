/*
 * vfscanf.c
 *
 * A part of C17 standard, 7.21.6.9
 *
 * Reads formatted input from the file with the variable argument list
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

#include <int/stdio.h>

int vfscanf(FILE* restrict stream, const char* restrict format, va_list args)
{
  struct int_stdio_desc int_stream;

  int_stream.stream = stream;
  int_stream.limited = false;
  int_stream.n = 0;
  int_stream.buffer = NULL;

  int items_count = int_xscanf(&int_stream, format, args);

  return items_count;
}
