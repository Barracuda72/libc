/*
 * isupper.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ буквой верхнего регистра
 *
 */

#include <ctype.h>

int isupper(int c)
{
  return ((c >= 'A') && (c <= 'Z'));
}
