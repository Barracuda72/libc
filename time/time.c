/*
 * time.c
 *
 * A part of C17 standard, 7.27.2.4
 *
 * Determines current calendar time
 *
 */

#include <time.h>

// TODO: implement!

time_t time(time_t *timer)
{
  time_t res = -1;

  if (timer != NULL)
    *timer = res;

  return res;
}
