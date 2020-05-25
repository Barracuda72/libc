/*
 * setvbuf.c
 *
 * A part of C17 standard, 7.21.5.6
 *
 * Set buffer and mode for file operations
 *
 */

#include <stdio.h>
#include <stdlib.h>

// TODO: figure out return values and make them non-arbitrary
int setvbuf(FILE* restrict stream, char* restrict buf, int mode, size_t size)
{
  if (stream->io_performed)
    return 1;

  if (mode != _IONBF && mode != _IOLBF && mode != _IOFBF)
    return 2;

  if (mode != _IONBF && size == 0)
    return 3;

  stream->buffering_mode = mode;

  stream->buffer_size = size;

  stream->buffer_position = 0;

  stream->buffer_dirty = 0;

  if (mode != _IONBF)
  {
    if (buf != NULL)
    {
      stream->buffer = buf;
      stream->buffer_needs_free = 0;
    } else {
      stream->buffer = (char*)malloc(size);
      stream->buffer_needs_free = 1;
    }
  } else {
    stream->buffer = NULL;
    stream->buffer_needs_free = 0;
  }

  stream->io_performed = 1;

  return 0;
}
