/*
 * memmove.c
 *
 * A part of C17 standard, 7.24.2.2
 *
 * Copies contents of memory area s2 into s1 as if copying was performed with
 * third intermediate buffer
 *
 */

#include <stdint.h>
#include <string.h>

void *memmove(void * dest, const void * src, size_t n)
{
  char *d = (char *)dest;
  char *s = (char *)src;
  
  uint64_t i;
  
  // If start of d is inside s, copying need to be done from the end
  if ((s+n > d) && (s < d))
  {
	  for (i = n; i > 0; i--)
	    d[i-1] = s[i-1];
  } else {
    for(i = 0; i < n; i++)
      d[i] = s[i];
  }
  return dest;
}
