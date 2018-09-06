/*
 * isgraph.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ отображаемым
 *
 */

#include <ctype.h>

int isgraph(int c)
{
  return ((c > 0x20) && (c <= 0x7E));
}
