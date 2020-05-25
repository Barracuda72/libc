/*
 * int/stdio.c
 *
 * Internal functions
 *
 * Internal I/O objects and functions
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <int/stdio.h>

FILE* stdin;
FILE* stdout;
FILE* stderr;

FILE* int_open_files[FOPEN_MAX];

static FILE* int_stdio_object(void)
{
  FILE* stream = (FILE*)malloc(sizeof(FILE));

  stream->position_indicator = 0;
  stream->buffering_mode = _IONBF;
  stream->buffer = NULL;
  stream->buffer_size = 0;
  stream->buffer_position = 0;
  stream->buffer_needs_free = 0;
  stream->error_indicator = 0;
  stream->eof_indicator = 0;
  stream->input_permitted = 0;
  stream->output_permitted = 0;
  stream->io_performed = 0;
  stream->ungetc_count = 0;

  return stream;
}

void stdio_init(void)
{
  /*
   * stdin
   */
  stdin = int_stdio_object();
  # ifdef _LIBC_POSIX
  stdin->fd = 0;
  # endif
  stdin->input_permitted = 1;
  setvbuf(stdin, NULL, _IOLBF, BUFSIZ);

  /*
   * stdout
   */
  stdout = int_stdio_object();
  # ifdef _LIBC_POSIX
  stdout->fd = 1;
  # endif
  stdout->output_permitted = 1;
  setvbuf(stdin, NULL, _IOLBF, BUFSIZ);

  /*
   * stderr
   */
  stderr = int_stdio_object();
  # ifdef _LIBC_POSIX
  stderr->fd = 2;
  # endif
  stderr->output_permitted = 1;
  setvbuf(stdin, NULL, _IONBF, 0);

  int_open_files[0] = stdin;
  int_open_files[1] = stdout;
  int_open_files[2] = stderr;
}

void stdio_fini(void)
{
  for (int i = 0; i < FOPEN_MAX; i++)
  {
    FILE* f = int_open_files[i];

    if (f != NULL)
      fclose(f);
  }
}
