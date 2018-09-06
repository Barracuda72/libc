/*
 * toupper.c
 *
 * A part of C17 standard
 *
 * Функция преобразует символ в верхний регистр
 *
 */

#include <ctype.h>

int toupper(int c)
{
  if (islower(c))
    return c - 'a' + 'A';
  else
    return c;
}
