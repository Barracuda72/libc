/*
 * srand.c
 *
 * A part of C17 standard, 7.22.2.2
 *
 * Specifies seed for a new sequence of a pseudo-random integers
 *
 */

#include <stdlib.h>

#include <int/rand_seed.h>

void srand(unsigned int seed)
{
  __rand_seed = seed;
}
