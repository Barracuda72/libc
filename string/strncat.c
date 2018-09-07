/*
 * strncat.c
 *
 * A part of C17 standard, 7.24.3.2
 *
 * Appends no more than n symbols from string s2 to the end of s1
 *
 */

#include <stdint.h>
#include <string.h>

char *strncat(char * restrict dest, const char * restrict src, size_t n)
{
  char *d = dest;
  uint64_t i;
  
  while (*dest++);
  for (i = 0; (i < n) && (src[i] != 0); i++)
    *dest++ = *src++;
    
  dest[i] = 0;

  return d;
}
