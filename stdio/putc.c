/*
 * putc.c
 *
 * A part of C17 standard, 7.21.7.7
 *
 * Writes the character to the stream
 *
 */

#include <stdio.h>

int putc(int c, FILE* stream)
{
  return fputc(c, stream);
}
