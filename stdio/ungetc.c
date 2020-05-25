/*
 * ungetc.c
 *
 * A part of C17 standard, 7.21.7.10
 *
 * Pushes the character back onto input stream
 *
 */

#include <stdio.h>

int ungetc(int c, FILE* stream)
{
  if (stream->ungetc_count >= UNGETC_STACK_SIZE)
    return EOF;

  if (c == EOF)
    return EOF;

  stream->ungetc_stack[stream->ungetc_count] = c;
  stream->ungetc_count++;
  stream->position_indicator--;

  return c;
}
