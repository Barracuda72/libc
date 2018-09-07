/*
 * mktime.c
 *
 * A part of C17 standard, 7.27.2.3
 *
 * Converts broken-down time into time_t
 *
 */

#include <time.h>
#include <int/time.h>

time_t mktime(struct tm *timeptr)
{
  int dum = int_time_days_upto_month(timeptr->tm_mon, timeptr->tm_year + 1900);
  int duy = int_time_days_upto_year(timeptr->tm_year + 1900);

  time_t res = 
    timeptr->tm_sec +
    timeptr->tm_min*60 +
    timeptr->tm_hour*60*60 +
    (
      (timeptr->tm_mday-1) +
      dum + duy
    )*24*60*60;

  // 1.01.1970 - Thursday
  timeptr->tm_wday = (duy + dum + (timeptr->tm_mday - 1) + 4) % 7;
  timeptr->tm_yday = dum + timeptr->tm_mday - 1;

  res = res*CLOCKS_PER_SEC;

  return res;
}

