/*
 * strchr.c
 *
 * A part of C17 standard, 7.24.4.2
 *
 * Locates the first occurence of c in the string s
 *
 */

#include <string.h>

char *strchr(const char *s, int c)
{
  char *t = (char*)s;

  do {
    if (*t == (char)c)
      return t;
  } while (*t++);

  return NULL;
}
