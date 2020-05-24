/*
 * fscanf.c
 *
 * A part of C17 standard, 7.21.6.2
 *
 * Reads formatted input from the file
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int fscanf(FILE* restrict stream, const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int items_count = vfscanf(stream, format, args);
  va_end(args);

  return items_count;
}
