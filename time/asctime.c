/*
 * asctime.c
 *
 * A part of C17 standard, 7.27.3.1
 *
 * Builds text representation of time from fields of tm structure
 *
 */

#include <stdio.h> // For snprintf
#include <time.h>

static const char wday_name[7][3] = {
  "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
};

static const char mon_name[12][3] = {
  "Jan", "Feb", "Mar", "Apr", "May", "Jun",
  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

static char result[26];

char *asctime(const struct tm *timeptr)
{
  snprintf(result, 26, "%.3s %.3s%3d %.2d:%.2d:%.2d %d\n",
          wday_name[timeptr->tm_wday],
          mon_name[timeptr->tm_mon],
          timeptr->tm_mday, timeptr->tm_hour,
          timeptr->tm_min, timeptr->tm_sec,
          1900 + timeptr->tm_year
         );
  return result;
}
