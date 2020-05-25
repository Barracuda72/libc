/*
 * ferror.c
 *
 * A part of C17 standard, 7.21.10.3
 *
 * Tests the error indicator
 *
 */

#include <stdio.h>

int ferror(FILE* stream)
{
  return stream->error_indicator != 0;
}
