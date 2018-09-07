/*
 * strcpy.c
 *
 * A part of C17 standard, 7.24.2.3
 *
 * Copies string s2 into s1
 *
 */

#include <stdint.h>
#include <string.h>

char *strcpy(char * restrict dest, const char * restrict src)
{
  char *d = dest;
  while (*dest++ = *src++);

  return d;
}
