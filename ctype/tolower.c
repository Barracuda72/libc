/*
 * tolower.c
 *
 * A part of C17 standard
 *
 * Функция преобразует символ в нижний регистр
 *
 */

#include <ctype.h>

int tolower(int c)
{
  if (isupper(c))
    return c - 'A' + 'a';
  else
    return c;
}
