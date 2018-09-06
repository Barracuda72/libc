/*
 * iscntrl.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ управляющим
 *
 */

#include <ctype.h>

int iscntrl(int c)
{
  return (((c >= 0) && (c <= 0x1F)) || (c == 0x7F));
}
