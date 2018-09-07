/*
 * strtoumax.c
 *
 * A part of C17 standard, 7.8.2.3
 *
 * Converts string to maximum-width unsigned integer
 *
 */

#include <stdint.h>
#include <inttypes.h>

#include <errno.h> // For errno

#include <ctype.h> // For isalnum

#include <locale.h> // For NULL

uintmax_t strtoumax(const char * restrict nptr,
                   char ** restrict endptr, int base)
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
    *endptr = (char *)nptr;
  return res;
}
