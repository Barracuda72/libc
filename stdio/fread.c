/*
 * fread.c
 *
 * A part of C17 standard, 7.21.8.1
 *
 * Reads into array nmemb elements of the specified size from the stream
 *
 */

#include <stdio.h>

size_t fread(void* restrict ptr, size_t size, size_t nmemb, FILE* restrict stream)
{
  char* data = (char*)ptr;

  size_t elements_read = 0;
  int result = 0;

  while ((elements_read < nmemb) && (result != EOF))
  {
    size_t i = 0;

    while ((i < size) && (result != EOF))
    {
      result = fgetc(stream);
      
      if (result != EOF)
      {
        data[elements_read * size + i] = (unsigned char)result;
        i++;
      }
    }

    if (result != EOF)
      elements_read++;
  }

  return elements_read;
}
