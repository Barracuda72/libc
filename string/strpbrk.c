/*
 * strpbrk.c
 *
 * A part of C17 standard, 7.24.5.4
 *
 * Locates the first occurence in the string s1 of any character from the
 * string s2
 *
 */

#include <string.h>

char *strpbrk(const char *s1, const char *s2)
{
  while (*s2)
  {
    char *t = strchr(s1, *s2);
    if (t)
      return t;
    s2++;
  }

  return NULL;
}
