/*
 * stdarg.h
 *
 * A part of C17 standard, 7.16
 *
 * Variable arguments
 *
 */

#ifndef _STDARG_H
#define _STDARG_H 1

#if 1
/*
 * GCC specific
 */

typedef __builtin_va_list va_list;

#define va_start(v,l) __builtin_va_start(v,l)
#define va_arg(v,l)   __builtin_va_arg(v,l)
#define va_end(v)     __builtin_va_end(v)
#define va_copy(d,s)  __builtin_va_copy(d,s)

#else

/*
 * Generic implementation
 */

typedef void * va_list;

#define va_start(v,l) \
  _va_start(&v, (void *)l, sizeof(l))

#define va_arg(v,l) \
  (l)_va_arg(&v, sizeof(l))

#define va_end(v) \
  _va_end(&v)

#define va_copy(d,s) \
  _va_copy(&d,&s)

/*
 * Non-standard
 * Initializes variable-lenght list 
 */
void _va_start(va_list *ap, void *p, int size);

/*
 * Non-standard
 * Returns next argument from variable-lenght list
 */
void *_va_arg(va_list *ap, int size);

/*
 * Non-standard
 * Destroys variable-lenght list
 */
void _va_end(va_list *ap);

/*
 * Non-standard
 * Copies variable-lenght list
 */
void _va_copy(va_list *ap, va_list *bp);

#endif

#endif // _STDARG_H
