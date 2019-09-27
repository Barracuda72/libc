/*
 * strstr.c
 *
 * A part of C17 standard, 7.24.5.7
 *
 * Locates the first occurence of string s2 in the string s1
 *
 */

#include <string.h>

char *strstr(const char *s1, const char *s2)
{
  if (*s2 == 0)
    return (char*)s1;

  while (*s1)
  {
    char *t1 = (char*)s1;
    char *t2 = (char*)s2;
    while (*t1 && *t2 && *t1 == *t2)
    {
      t1++;
      t2++;
    }
    if (*t2 == 0)
      return (char*)s1;
    s1++;
  }

  return NULL;
}
