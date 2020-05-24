/*
 * fgets.c
 *
 * A part of C17 standard, 7.21.7.2
 *
 * Reads n-1 characters from the stream into the buffer
 *
 */

#include <stdio.h>

char* fgets(char* restrict s, int n, FILE* restrict stream)
{
  for (int i = 0; i < n-1; i++)
  {
    char c = fgetc(stream);
    if (c == EOF)
      return NULL;
    s[i] = c;
  }

  s[n-1] = 0;

  return s;
}
