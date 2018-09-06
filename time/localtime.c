/*
 * localtime.c
 *
 * A part of C17 standard
 *
 * Функция преобразует локальное календарное время, на которое указывает 
 * timer, в значения структуры tm
 *
 */

#include <time.h>

static struct tm localtm;

// TODO: реализовать!

struct tm *localtime(const time_t *timer)
{
  return gmtime(timer);
}

