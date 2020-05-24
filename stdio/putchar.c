/*
 * putchar.c
 *
 * A part of C17 standard, 7.21.7.8
 *
 * Writes the character to the stdout
 *
 */

#include <stdio.h>

int putchar(int c)
{
  return fputc(c, stdout);
}
