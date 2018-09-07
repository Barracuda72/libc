/*
 * wcstoumax.c
 *
 * A part of C17 standard, 7.8.2.4
 *
 * Converts wide string to maximum-width unsigned integer
 *
 */

#include <stddef.h> // For wchar_t
#include <stdint.h>
#include <inttypes.h>

#include <errno.h> // For errno

#include <ctype.h> // For isalnum

#include <locale.h> // For NULL

uintmax_t wcstoumax(const wchar_t * restrict nptr,
                   wchar_t ** restrict endptr, int base)
{
  uintmax_t res;

  res = 0;
  while (isalnum(*nptr) && ((tolower(*nptr) - '0') < base))
  {
    // Overflow check
    if (res > res*base)
    {
      errno = ERANGE;
      res = UINTMAX_MAX;
      break;
    }

    res = (*nptr - '0') + res*base;
    nptr++;
  }

  if (endptr != NULL)
    *endptr = (wchar_t *)nptr;
  return res;
}
