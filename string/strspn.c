/*
 * strspn.c
 *
 * A part of C17 standard, 7.24.5.6
 *
 * Computes the length of the maximum initial segment of the string s1 which
 * consists entirely of characters from the string s2
 *
 */

#include <string.h>

size_t strspn(const char *s1, const char *s2)
{
  size_t len = 0;

  while (strchr(s2, s1[len]))
    len++;

  return len;
}
