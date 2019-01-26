/*
 * stdlib.h
 *
 * A part of C17 standard, 7.22
 *
 * Standard utilities
 *
 */

# ifndef _STDLIB_H
# define _STDLIB_H 1

# ifndef __IGNORE_UNIMPLEMENTED_STDLIB

# error Not implemented

# endif // __IGNORE_UNIMPLEMENTED_STDLIB

# include <decl/size_t.h>
# include <decl/wchar_t.h>
# include <decl/div_t.h>
# include <decl/ldiv_t.h>
# include <decl/lldiv_t.h>
# include <decl/NULL.h>

# define EXIT_FAILURE (-1)
# define EXIT_SUCCESS (0)
# define RAND_MAX 32767

# define MB_CUR_MAX 1 // No greater than MB_LEN_MAX

# endif // _STDLIB_H
