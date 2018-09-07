/*
 * int/time.c
 *
 * Internal functions
 *
 * Date and time processing functions
 *
 */

#include <time.h>
#include <int/time.h>

/*
 * Determines if the year is leap
 */
int int_time_isleap(int year)
{
  return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

/*
 * Returns the number of days in month
 */
int int_time_days_in_month(int mon, int year)
{
  switch (mon)
  {
    case  0: /* January */
    case  2: /* March */
    case  4: /* May */
    case  6: /* July */
    case  7: /* August */
    case  9: /* October */
    case 11: /* December */
      return 31;

    case  1: /* February */
      return 28 + int_time_isleap(year);

    case  3: /* April */
    case  5: /* June */
    case  8: /* September */
    case 10: /* November */
    default: /* Unknownember */
      return 30;
  }
}

/*
 * Returns the number of days from start of the year up to current month
 */
int int_time_days_upto_month(int mon, int year)
{
  int i, res;

  res = 0;

  for (i = 0; i < mon; i++)
    res += int_time_days_in_month(i, year);

  return res;
}

/*
 * Returns the number of days since epoch (1970) up to current year
 */
int int_time_days_upto_year(int year)
{
  int i, res;

  res = 0;
  for (i = 1970; i < year; i++)
    res += 365 + int_time_isleap(i);

  return res;
}

