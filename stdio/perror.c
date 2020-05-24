/*
 * perror.c
 *
 * A part of C17 standard, 7.21.10.4
 *
 * Outputs message and error string
 *
 */

#include <errno.h> // For errno
#include <stdio.h>
#include <string.h> // For strerror

void perror(const char* s)
{
  if (s && *s)
  {
    fputs(s, stderr);
    fputs(": ", stderr);
  }

  fputs(strerror(errno), stderr);
  fputc('\n', stderr);
}
