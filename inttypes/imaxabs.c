/*
 * imaxabs.c
 *
 * A part of C17 standard
 *
 * Функция вычисляет абсолютное значение параметра
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
