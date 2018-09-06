/*
 * ispunct.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ пунктуационным
 *
 */

#include <ctype.h>

int ispunct(int c)
{
  return (isprint(c) && !isspace(c) && !isalnum(c));
}
