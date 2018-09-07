/*
 * strlen.c
 *
 * A part of C17 standard, 7.24.6.3
 *
 * Returns the string lenght
 *
 */

#include <stdint.h>
#include <string.h>

size_t strlen(const char *s)
{
  size_t i = 0;
  
  while (*s++) i++;
  
  return i;
}
