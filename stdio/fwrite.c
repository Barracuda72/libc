/*
 * fwrite.c
 *
 * A part of C17 standard, 7.21.8.2
 *
 * Writes nmemb elements of the specified size from the array into the stream
 *
 */

#include <stdio.h>

size_t fwrite(const void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream)
{
  const char* data = (const char*)ptr;

  size_t elements_written = 0;
  int result = 0;

  while ((elements_written < nmemb) && (result != EOF))
  {
    size_t i = 0;

    while ((i < size) && (result != EOF))
    {
      result = fputc(data[elements_written * size + i], stream);

      if (result != EOF)
      {
        i++;
      }
    }

    if (result != EOF)
      elements_written++;
  }

  return elements_written;
}
