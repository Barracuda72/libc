/*
 * strchr.c
 *
 * A part of C17 standard, 7.24.4.5
 *
 * Locates the last occurence of c in the string s
 *
 */

#include <string.h>

char *strrchr(const char *s, int c)
{
  char *t = (char*)s;
  char *r = NULL;

  do {
    if (*t == (char)c)
      r = t;
  } while (*t++);

  return r;
}
