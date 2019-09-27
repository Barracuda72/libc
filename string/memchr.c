/*
 * memchr.c
 *
 * A part of C17 standard, 7.24.5.1
 *
 * Locates the first occurence of c in the initial n characters of the object s
 *
 */

#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
  const unsigned char *t = (const unsigned char*)s;
  for (size_t i = 0; i < n; i++)
    if (t[i] == c)
      return (void*)(t+i);

  return NULL;
}
