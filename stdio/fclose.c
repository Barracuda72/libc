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

  if (ret < 0)
    return EOF;
  else
    return 0;
}
