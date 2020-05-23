/*
 * tmpnam.c
 *
 * A part of C17 standard, 7.21.4.4
 *
 * Generates temporary file name
 *
 */

#include <stdio.h>

static char _tmpnam_buffer[L_tmpnam];
static unsigned long _tmpnam_seed = 0;

char* tmpnam(char* s)
{
  if (!s)
  {
    s = _tmpnam_buffer;
  }

  s[0] = 't';
  s[1] = 'm';
  s[2] = 'p';

  /*
   * Very simple and dumb, but works fine for applications not concerned about security
   */

  unsigned long i = ++_tmpnam_seed;

  for (int j = 0; j < 5; j++)
  {
    char c = i & 0x3F;

    i = i >> 6;

    if (c < 10)
      c = c + '0';
    else if (c < 36)
      c = c - 10 + 'A';
    else if (c < 62)
      c = c - 36 + 'a';
    else if (c == 62)
      c = '-';
    else
      c = '_';

    s[j+3] = c;
  }

  return s;
}
