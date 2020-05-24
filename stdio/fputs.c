/*
 * fputs.c
 *
 * A part of C17 standard, 7.21.7.4
 *
 * Writes the string to the stream
 *
 */

#include <stdio.h>

int fputs(const char* restrict s, FILE* restrict stream)
{
  int result = 0;

  while (*s && (result != EOF))
  {
    result = fputc(*s, stream);
    s++;
  }

  return result;
}
