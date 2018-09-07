/*
 * strxfrm.c
 *
 * A part of C17 standard, 7.24.4.5
 *
 * Transforms string s2 into s1 so what result of strcmp on two modified
 * strings will be equal to result of strcoll on original strings
 *
 */

#include <stdint.h>
#include <string.h>

// TODO: because libc does not support locales (yet), strcmp and strcoll are
// equal and no transformations required. Thus this function is just another
// strncpy.
size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n)
{
  uint64_t i,l;
  
  l = strlen(s2);
  
  for(i = 0; (i < n) && (s2[i] != 0); i++)
    s1[i] = s2[i];
    
  for(; i < n; i++)
    s1[i] = 0;
    
  return l;
}
