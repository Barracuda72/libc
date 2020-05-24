/*
 * getc.c
 *
 * A part of C17 standard, 7.21.7.5
 *
 * Reads the character from the stream
 *
 */

#include <stdio.h>

int getc(FILE* stream)
{
  return fgetc(stream);
}
