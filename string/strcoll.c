/*
 * strcoll.c
 *
 * A part of C17 standard, 7.24.4.3
 *
 * Compares contents of strings s1 and s2 with respect to locale settings
 *
 */

#include <stdint.h>
#include <string.h>

// TODO: locales a not supported (yes), so this is just another strcmp
int strcoll(const char *s1, const char *s2)
{
  while ((*s1 != 0) && (*s2 != 0) && (*s1++ == *s2++));

  return (unsigned char)*s1 - (unsigned char)*s2;
}
