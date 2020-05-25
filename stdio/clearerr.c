/*
 * clearerr.c
 *
 * A part of C17 standard, 7.21.10.1
 *
 * Clears end-of-file and error indicators
 *
 */

#include <stdio.h>

void clearerr(FILE* stream)
{
  stream->error_indicator = 0;
  stream->eof_indicator = 0;
}
