/*
 * strcpy.c
 *
 * A part of C17 standard
 *
 * Функция копирует содержимое строки s2 в строку s1
 *
 */

#include <stdint.h>
#include <string.h>

char *strcpy(char * restrict dest, const char * restrict src)
{
  char *d = dest;
  while (*dest++ = *src++);

  return d;
}
