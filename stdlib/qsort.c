/*
 * qsort.c
 *
 * A part of C17 standard, 7.22.5.2
 *
 * Sorts the array
 *
 */

#include <stdlib.h>
#include <string.h>

static void binary_sort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *))
{
  // That's a binary insertion sort

  char x[size];

  for (size_t i = 1; i < nmemb; i++)
  {
    if (compar(base + (i-1)*size, base + (i)*size) > 0)
    {
      memcpy((void*)x, base + (i)*size, size);

      int l = 0;
      int r = i-1;

      do {
        int m = (l+r) / 2;

        if (compar(base + (m)*size, x) < 0)
          l = m+1;
        else
          r = m-1;
      } while (l <= r);

      for (int j = i-1; j >= l; j--)
        memcpy(base + (j+1)*size, base + (j)*size, size);

      memcpy(base + (l)*size, (void*)x, size);
    }
  }
}

static void hoar_sort_base(void *base, size_t size,
           int (*compar)(const void *, const void *), size_t left, size_t right)
{
  // Recursive Hoar sort
  
  size_t i, j, pivot;
  char y[size], x[size];

	i = left;
	j = right;
  pivot = rand()%(right - left) + left;
  memcpy(x, base + pivot * size, size);

	do
	{
		while (compar(base + i*size, x) < 0) i++;
		while (compar(base + j*size, x) > 0) j--;

		if (i <= j)
		{
			if (compar(base + i*size, base + j*size) > 0)
			{
				memcpy(y, base + i*size, size);
				memcpy(base + i*size, base + j*size, size);
				memcpy(base + j*size, y, size);
			}
			i++;
			j--;
		}
	} while (i < j);

	if (left < j)
    hoar_sort_base(base, size, compar, left, j);

	if (i < right) 
    hoar_sort_base(base, size, compar, i, right);
}

static void hoar_sort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *))
{
  if (nmemb > 1)
    hoar_sort_base(base, size, compar, 0, nmemb-1);
}

void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *))
{
  hoar_sort(base, nmemb, size, compar);
}
