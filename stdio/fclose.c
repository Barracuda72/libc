/*
 * fclose.c
 *
 * A part of C17 standard, 7.21.5.1
 *
 * Flush stream and close the file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <int/stdio.h>
#include <int/posix.h>

int fclose(FILE* stream)
{
  fflush(stream);

  int ret = 0;

  # ifdef _LIBC_POSIX
  ret = sys_close(stream->fd);
  # else
  # error Platform not supported
  # endif

  if (stream->buffer_needs_free)
    free(stream->buffer);

  free(stream);

  for (int i = 0; i < FOPEN_MAX; i++)
  {
    if (int_open_files[i] == stream)
    {
      int_open_files[i] = NULL;
      break;
    }
  }

  if (ret < 0)
    return EOF;
  else
    return 0;
}
