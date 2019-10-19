/*
 * rand.c
 *
 * A part of C17 standard, 7.22.2.1
 *
 * Computes a sequence of pseudo-random integers
 *
 */

#include <stdlib.h>

#include <int/rand_seed.h>

int rand(void)
{
  __rand_seed = __rand_seed * 1103515245 + 12345;
  return (unsigned int) (__rand_seed / 65536) % (RAND_MAX + 1);
}
