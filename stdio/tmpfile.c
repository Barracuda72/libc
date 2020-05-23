/*
 * tmpfile.c
 *
 * A part of C17 standard, 7.21.4.3
 *
 * Creates a temporary binary file
 *
 */

#include <stdio.h>

FILE* tmpfile(void)
{
  char* name = tmpnam(NULL);
  FILE* f = fopen(name, "wb+");
  remove(name);
  return f;
}
