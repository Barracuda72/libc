/*
 * getchar.c
 *
 * A part of C17 standard, 7.21.7.6
 *
 * Reads the character from the stdin
 *
 */

#include <stdio.h>

int getchar(void)
{
  return fgetc(stdin);
}
