/*
 * locale.h
 *
 * A part of C17 standard, 7.11
 *
 * Localization
 *
 */

#ifndef _LOCALE_H
#define _LOCALE_H 1

/*
 * Structure that contains information about date and numeric formats in
 * specific locale
 */
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char *currency_symbol;
  char frac_digits;
  char p_cs_precedes;
  char n_cs_precedes;
  char p_sep_by_space;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char *int_curr_symbol;
  char int_frac_digits;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;
};

/*
 * Macroses
 */
#include <decl/NULL.h> // For NULL

/*
 * setlocale parameters
 */
#define LC_ALL      0
#define LC_COLLATE  1 // Affects strcoll and strxfrm
#define LC_CTYPE    2 // Affects symbol manipulation functions
#define LC_MONETARY 3 // Affects value returned by localeconv
#define LC_NUMERIC  4 // Affects numerical formatting
#define LC_TIME     5 // Affects strftime and wcsftime

/*
 * Functions
 */

/*
 * Changes locale settings, 7.11.1.1
 */
char *setlocale(int category, const char *locale);

/*
 * Returns lconv structure for current locale, 7.11.2.1
 */
struct lconv *localeconv(void);

#endif // _LOCALE_H
