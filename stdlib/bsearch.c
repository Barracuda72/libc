/*
 * bsearch.c
 *
 * A part of C17 standard, 7.22.5.1
 *
 * Searches the array for a matching element
 *
 */

#include <stdlib.h>

static void * binary_search(const void *key, const void *base,
               size_t nmemb, size_t size,
               int (*compar)(const void *, const void *))
{
  size_t step = nmemb / 2;
  size_t current = nmemb / 2;

  while (step > 0)
  {
    int cmp = compar(key, base + current * size);
    if (cmp == 0)
      return (void*)base + current * size;
    else {
      step /= 2;
      current += (cmp > 0 ? 1 : -1) * step;
    }
  }

  return NULL;
}

static void * linear_search(const void *key, const void *base,
               size_t nmemb, size_t size,
               int (*compar)(const void *, const void *))
{
  for (size_t i = 0; i < nmemb; i++)
  {
    const void* elem = base + i*size;
    if (compar(key, elem) == 0)
      return (void*)elem;
  }

  return NULL;
}

void * bsearch(const void *key, const void *base,
               size_t nmemb, size_t size,
               int (*compar)(const void *, const void *))
{
  if (
    ((key - base) % size != 0) ||
    (key < base) ||  
    (key >= (base + nmemb * size))
  )
    return NULL;

  if (nmemb > 0)
    return binary_search(key, base, nmemb, size, compar);

  return NULL;
}
