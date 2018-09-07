/*
 * imaxdiv.c
 *
 * A part of C17 standard, 7.8.2.2
 *
 * Performs an integer division
 *
 */

#include <stdint.h>
#include <inttypes.h>

imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom)
{
  imaxdiv_t res;
  res.quot = numer/denom;
  res.rem = numer%denom;
  return res;
}
