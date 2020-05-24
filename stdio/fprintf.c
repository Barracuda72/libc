/*
 * fprintf.c
 *
 * A part of C17 standard, 7.21.6.1
 *
 * Writes formatted output to the file
 *
 */

#include <stdarg.h> // For va_* stuff
#include <stdio.h>

int fprintf(FILE* restrict stream, const char* restrict format, ...)
{
  va_list args;
  va_start(args, format);
  int byte_count = vfprintf(stream, format, args);
  va_end(args);

  return byte_count;
}
