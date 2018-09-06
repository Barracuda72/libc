/*
 * strcat.c
 *
 * A part of C17 standard
 *
 * Функция дописывает строку s2 в конец строки s1
 *
 */

#include <stdint.h>
#include <string.h>

char *strcat(char * restrict dest, const char * restrict src)
{
  char *d = dest;
  while (*dest++);
  while (*dest++ = *src++);

  return d;
}
