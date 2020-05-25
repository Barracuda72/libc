/*
 * feof.c
 *
 * A part of C17 standard, 7.21.10.2
 *
 * Tests the end-of-file indicator
 *
 */

#include <stdio.h>

int feof(FILE* stream)
{
  return stream->eof_indicator != 0;
}
