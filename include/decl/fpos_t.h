/*
 * decl/fpos_t.h
 *
 * Separate header file
 *
 * fpos_t type declaration
 *
 */

#ifndef _DECL_FPOS_T_H
#define _DECL_FPOS_T_H 1

#include <stdint.h>
#include <decl/mbstate_t.h>

struct _fpos_t
{
  mbstate_t state;
  long int position;
};

typedef struct _fpos_t fpos_t;

#endif // _DECL_FPOS_T_H
