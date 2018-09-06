/*
 * ctime.c
 *
 * A part of C17 standard
 *
 * Функция преобразует значения сруктуры tm для составления текстового
 * описания локальных даты и времени
 *
 */

#include <time.h>

char *ctime(const time_t *timer)
{
  return asctime(localtime(timer));
}
