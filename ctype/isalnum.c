/*
 * isalnum.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ буквой или цифрой
 *
 */

#include <ctype.h>

int isalnum(int c)
{
  return (isalpha(c)||isdigit(c));
}
