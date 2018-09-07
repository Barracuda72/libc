/*
 * strncmp.c
 *
 * A part of C17 standard, 7.24.4.4
 *
 * Compares contents of strings s1 and s2 up to n'th character
 *
 */

#include <stdint.h>
#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
  while ((*s1 != 0) && (*s2 != 0) && (*s1 == *s2) && (n > 0))
  {
    n--;
    s1++;
    s2++;
  }

  return (unsigned char)*s1 - (unsigned char)*s2;
}
