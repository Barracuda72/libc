/*
 * isblank.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ пробельным
 *
 */

#include <ctype.h>

int isblank(int c)
{
  return ((c == ' ') || (c == '\t'));
}
