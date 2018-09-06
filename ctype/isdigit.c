/*
 * isdigit.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ цифрой
 *
 */

#include <ctype.h>

int isdigit(int c)
{
  return ((c >= '0') && (c <= '9'));
}
