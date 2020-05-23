/*
 * setbuf.c
 *
 * A part of C17 standard, 7.21.5.5
 *
 * Set buffer for file operations
 *
 */

#include <stdio.h>

void setbuf(FILE* restrict stream, char* restrict buf)
{
  if (!buf)
    setvbuf(stream, NULL, 0, _IONBF);
  else
    setvbuf(stream, buf, BUFSIZ, _IOFBF);
}
