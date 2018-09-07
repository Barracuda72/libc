/*
 * memset.c
 *
 * A part of C17 standard, 7.24.6.1
 *
 * Fills memory area with specified symbol
 *
 */

#include <stdint.h>
#include <string.h>

void *memset(void *s, int c, size_t n)
{ 
  uint8_t *src = s;
  uint64_t i;
  
  for (i = 0; i < n; i++)
    src[i] = (uint8_t)c;
  
  return s;
}
