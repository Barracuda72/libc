/*
 * ctime.c
 *
 * A part of C17 standard, 7.27.3.2
 *
 * Builds text representation of time from time_t
 *
 */

#include <time.h>

char *ctime(const time_t *timer)
{
  return asctime(localtime(timer));
}
