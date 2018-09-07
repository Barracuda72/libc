/*
 * memcpy.c
 *
 * A part of C17 standard, 7.24.2.1
 *
 * Copies contents of memory area s2 into s1
 *
 */

#include <stdint.h>
#include <string.h>

void *memcpy(void * restrict dest, const void * restrict src, size_t n)
{
  char *d = (char *)dest;
  char *s = (char *)src;
  uint64_t i;
  for(i = 0; i < n; i++)
    d[i] = s[i];

  return dest;
}
