/*
 * strncpy.c
 *
 * A part of C17 standard, 7.24.2.4
 *
 * Copies string s2 into s1 and pads with zeroes, if necessary
 *
 */

#include <stdint.h>
#include <string.h>

char *strncpy(char * restrict dest, const char * restrict src, size_t n)
{
  uint64_t i;
  
  for(i = 0; (i < n) && (src[i] != 0); i++)
    dest[i] = src[i];
    
  for(i; i < n; i++)
    dest[i] = 0;
    
  return dest;
}
