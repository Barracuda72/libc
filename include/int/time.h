/*
 * int/time.h
 *
 * Internal functions
 *
 * Date and time processing functions
 *
 */

#ifndef _INT_TIME_H
#define _INT_TIME_H 1

/*
 * Determines if the year is leap
 */
int int_time_isleap(int year);

/*
 * Returns the number of days in month
 */
int int_time_days_in_month(int mon, int year);

/*
 * Returns the number of days from start of the year up to current month
 */
int int_time_days_upto_month(int mon, int year);

/*
 * Returns the number of days since epoch (1970) up to current year
 */
int int_time_days_upto_year(int year);

#endif // _INT_TIME_H
