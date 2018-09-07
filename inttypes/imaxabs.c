/*
 * imaxabs.c
 *
 * A part of C17 standard, 7.8.2.1
 *
 * Computes an absolute value of parameter
 *
 */

#include <stdint.h>
#include <inttypes.h>

intmax_t imaxabs(intmax_t j)
{
  if (j >= 0)
    return j;
  else
    return -j;
}
