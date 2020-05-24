/*
 * rewind.c
 *
 * A part of C17 standard, 7.21.9.5
 *
 * Sets file position indicator to the beginning of the file and clears error indicator
 *
 */

#include <stdio.h>

void rewind(FILE* stream)
{
  fseek(stream, 0, SEEK_SET);
  clearerr(stream);
}
