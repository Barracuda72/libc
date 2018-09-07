/*
 * timespec_get.c
 *
 * A part of C17 standard, 7.27.2.5
 *
 * Sets the ts structure fields based on current calendar time and base
 *
 */

#include <time.h>

// TODO: implement

int timespec_get(struct timespec *ts, int base)
{
  // We are always in 01.01.1970, 00:00
 
  ts->tv_sec = 0;
  ts->tv_nsec = 0;

  return base;
}
