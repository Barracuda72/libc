/*
 * puts.c
 *
 * A part of C17 standard, 7.21.7.9
 *
 * Writes the string with newline to the stdout
 *
 */

#include <stdio.h>

int puts(const char* restrict s)
{
  int result = 0;

  while (*s && (result != EOF))
  {
    result = fputc(*s, stdin);
    s++;
  }

  if (result != EOF)
    result = fputc('\n', stdin);

  return result;
}
