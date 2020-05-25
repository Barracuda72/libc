/*
 * fflush.c
 *
 * A part of C17 standard, 7.21.5.2
 *
 * Flush unwritten data into the stream
 *
 */

#include <stdio.h>

#include <int/stdio.h>

#ifdef _LIBC_POSIX
#include <int/posix.h>
#endif

int fflush(FILE* stream)
{
  if (stream == NULL)
  {
    for (int i = 0; i < FOPEN_MAX; i++)
    {
      FILE* f = int_open_files[i];

      if (f)
        fflush(f);
    }
  }

  if (stream->buffer_position == 0)
    return 0;

  if (!stream->output_permitted)
    return 0;

  int ret = 0;

  #ifdef _LIBC_POSIX
  /* Posix - specific */
  ret = sys_write(stream->fd, stream->buffer, stream->buffer_position);
  #else
  #error Platform not supported
  #endif

  stream->buffer_position = 0;

  if (ret < 0)
  {
    stream->error_indicator = -ret;
    return EOF;
  }

  return 0;
}
