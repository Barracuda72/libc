/*
 * gmtime.c
 *
 * A part of C17 standard, 7.27.3.3
 *
 * Fills tm structure fields (as UTC) from time_t
 *
 */

#include <time.h>
#include <int/time.h>

static struct tm localtm;

struct tm *gmtime(const time_t *timer)
{
  unsigned long res = *timer / CLOCKS_PER_SEC;
  int i, j;

  localtm.tm_sec  = res % 60; res /= 60;
  localtm.tm_min  = res % 60; res /= 60;
  localtm.tm_hour = res % 24; res /= 24;
  
  // res holds the days since 01.01.1970

  for(i = 1970, j = 0; j <= res; i++)
    j = int_time_days_upto_year(i);

  i--; // i - current year

  j = int_time_days_upto_year(i);

  localtm.tm_year = i - 1900;
  localtm.tm_yday = res - j;

  for (j = 0; int_time_days_upto_month(j, i) <= localtm.tm_yday; j++);

  j--; // j - current month

  localtm.tm_mon = j;
  localtm.tm_mday = localtm.tm_yday - int_time_days_upto_month(j, i);

  localtm.tm_wday = (res + 4) % 7;

  localtm.tm_isdst = 0;

  return &localtm;
}

