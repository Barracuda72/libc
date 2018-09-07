/*
 * time.h
 *
 * A part of C17 standard, 7.27
 *
 * Date and time
 *
 */

#ifndef _TIME_H
#define _TIME_H 1

#include <decl/NULL.h>
#define CLOCKS_PER_SEC 1000000 // Defined by POSIX
#define TIME_UTC 1

#include <decl/size_t.h> // For size_t

/*
 * Types for clocks and time
 */
// TODO: should be floating-point!
typedef unsigned long clock_t;
typedef unsigned long time_t;

struct timespec {
  time_t tv_sec;  // >= 0
  long tv_nsec;   // [0, 999999999]
};

struct tm {
  int tm_sec;   // Seconds       [0, 60]
  int tm_min;   // Minutes       [0, 59]
  int tm_hour;  // Hours         [0, 23]
  int tm_mday;  // Day of month  [1, 31]
  int tm_mon;   // Month of year [0, 11]
  int tm_year;  // Year starting from 1900
  int tm_wday;  // Day of week   [0, 6], 0 - Sunday
  int tm_yday;  // Day of year   [0, 365]
  int tm_isdst; // Daylight Saving Time flag
};

/*
 * Time manipulating functions, 7.27.2
 */

/*
 * Returns processor time used, 7.27.2.1
 */
clock_t clock(void);

/*
 * Computes the difference between two calendar times, 7.27.2.2
 */
// TODO: implement!
// double difftime(time_t time1, time_t time0);
time_t difftime(time_t time1, time_t time0);

/*
 * Converts broken-down time into time_t, 7.27.2.3
 */
time_t mktime(struct tm *timeptr);

/*
 * Determines current calendar time, 7.27.2.4
 */
time_t time(time_t *timer);

/*
 * Sets the ts structure fields based on current calendar time and base,
 * 7.27.2.5
 */
int timespec_get(struct timespec *ts, int base);

/*
 * Time conversion functions, 7.27.3
 */

/*
 * Builds text representation of time from fields of tm structure, 7.27.3.1
 */
char *asctime(const struct tm *timeptr);

/*
 * Builds text representation of time from time_t, 7.27.3.2
 */
char *ctime(const time_t *timer);

/*
 * Fills tm structure fields (as UTC) from time_t, 7.27.3.3
 */
struct tm *gmtime(const time_t *timer);

/*
 * Fills tm structure fields (as localtime) from time_t, 7.27.3.4
 */
struct tm *localtime(const time_t *timer);

/*
 * Builds string representation of date according to format, 7.27.3.5
 */
size_t strftime(char * restrict s, size_t maxsize,
                const char * restrict format,
                const struct tm * restrict timeptr
               );

#endif // _TIME_H
