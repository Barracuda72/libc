/*
 * localtime.c
 *
 * A part of C17 standard, 7.27.3.4
 *
 * Fills tm structure fields (as localtime) from time_t
 *
 */

#include <time.h>

static struct tm localtm;

// TODO: implement!

struct tm *localtime(const time_t *timer)
{
  return gmtime(timer);
}

