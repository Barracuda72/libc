/*
 * isspace.c
 *
 * A part of C17 standard
 *
 * Функция проверяет, является ли символ пробельным
 *
 */

#include <ctype.h>

int isspace(int c)
{
  return (
          (c == ' ') || (c == '\f') || (c == '\n') ||
          (c == '\r') || (c == '\t') || (c == '\t')
         );
}
