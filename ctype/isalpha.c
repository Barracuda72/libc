/*
 * isalpha.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ буквой
 *
 */

#include <ctype.h>

int isalpha(int c)
{
  return (isupper(c) || islower(c));
}
