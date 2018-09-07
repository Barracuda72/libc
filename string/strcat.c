/*
 * strcat.c
 *
 * A part of C17 standard, 7.24.3.1
 *
 * Appends string s2 to the end of s1
 *
 */

#include <stdint.h>
#include <string.h>

char *strcat(char * restrict dest, const char * restrict src)
{
  char *d = dest;
  while (*dest++);
  while (*dest++ = *src++);

  return d;
}
