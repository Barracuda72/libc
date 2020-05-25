/*
 * decl/FILE.h
 *
 * Separate header file
 *
 * FILE type declaration
 *
 */

#ifndef _DECL_FILE_H
#define _DECL_FILE_H 1

struct _FILE
{
  /* File position indicator */
  long int position_indicator;
  /* Pointer to associated buffer */
  char* buffer;
  /* Error indicator */
  int error_indicator;
  /* EOF indicator */
  int eof_indicator;

  /* Buffering mode */
  int buffering_mode;
};

typedef struct _FILE FILE;

#endif // _DECL_FILE_H
