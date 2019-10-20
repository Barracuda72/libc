/*
 * div.c
 *
 * A part of C17 standard, 7.22.6.2
 *
 * Computes division and modulo in single operation
 *
 */

#include <stdlib.h>

div_t div(int numer, int denom)
{
  div_t result = {0};

  while (numer > denom)
  {
    numer -= denom;
    result.quot++;
  }

  result.rem = numer;

  return result;
}
