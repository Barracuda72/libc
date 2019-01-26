/*
 * stddef.h
 *
 * A part of C17 standard, 7.19
 *
 * Common definitions
 *
 */

# ifndef _STDDEF_H
# define _STDDEF_H 1

typedef signed   long  ptrdiff_t;
# include <decl/size_t.h> // For size_t
typedef unsigned long  max_align_t;
# include <decl/wchar_t.h> // For wchar_t

# include <decl/NULL.h>

# define offsetof(type, memder) \
  ( (size_t) & ((type*)0) -> member )

# endif // _STDDEF_H
