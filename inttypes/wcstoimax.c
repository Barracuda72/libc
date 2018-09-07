/*
 * wcstoimax.c
 *
 * A part of C17 standard, 7.8.2.4
 *
 * Converts wide string to maximum-width signed integer
 *
 */

#include <stddef.h> // For wchar_t
#include <stdint.h>
#include <inttypes.h>

#include <errno.h>

intmax_t wcstoimax(const wchar_t * restrict nptr,
                   wchar_t ** restrict endptr, int base)
{
  intmax_t res;
  int sign;

  if (nptr[0] == '-')
  {
    nptr++;
    sign = -1;
  } else {
    sign = 1;
    if (nptr[0] == '+')
      nptr++;
  }

  res = wcstoumax(nptr, endptr, base);

  if (res == UINTMAX_MAX)
  {
    errno = ERANGE;

    if (sign == -1)
      return INTMAX_MIN;
    else
      return INTMAX_MAX;
  } else {
    return sign*res;
  }
}
