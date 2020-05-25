/*
 * ftell.c
 *
 * A part of C17 standard, 7.21.9.4
 *
 * Retrieves the file position indicator
 *
 */

#include <stdio.h>

long int ftell(FILE* stream)
{
  return stream->position_indicator;
}
