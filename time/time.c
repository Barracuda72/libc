/*
 * time.c
 *
 * A part of C17 standard
 *
 * Функция определяет текущее календарное время
 *
 */

#include <time.h>

// TODO: реализовать!

time_t time(time_t *timer)
{
  time_t res = -1;

  if (timer != NULL)
    *timer = res;

  return res;
}
