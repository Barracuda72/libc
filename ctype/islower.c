/*
 * islower.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ буквой нижнего регистра
 *
 */

#include <ctype.h>

int islower(int c)
{
  return ((c >= 'a') && (c <= 'z'));
}
