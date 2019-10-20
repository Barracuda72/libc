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

/*
 * Numeric conversion functions, 7.22.1
 */

/*
 * Converts initial portion of string to double representation, 7.22.1.1
 */
// TODO: not implemented!
double atof(const char *nptr);

/*
 * Convert initial portion of string to int, long int or long long int, 7.22.1.2
 */
// TODO: not implemented!
int atoi(const char *nptr);
long int atol(const char *nptr);
long long int atoll(const char *nptr);

/*
 * Convert initial portion of string to float, double or long double, 7.22.1.3
 */
// TODO: not implemented!
float strtof(const char * restrict nptr, char ** restrict endptr);
double strtod(const char * restrict nptr, char ** restrict endptr);
long double strtold(const char * restrict nptr, char ** restrict endptr);

/*
 * Convert initial portion of string to long int or long long int, both signed
 * and unsigned, 7.22.1.4
 */
// TODO: not implemented!
long int strtol(const char * restrict nptr, 
                char ** restrict endptr, int base);
long long int strtoll(const char * restrict nptr, 
                      char ** restrict endptr, int base);
unsigned long int strtoul(const char * restrict nptr, 
                          char ** restrict endptr, int base);
unsigned long long int strtoull(const char * restrict nptr, 
                                char ** restrict endptr, int base);

/*
 * Pseudo-random sequence generation functions, 7.22.2
 */

/*
 * Computes a sequence of pseudo-random integers, 7.22.2.1
 */
int rand(void);

/*
 * Specifies seed for a new sequence of a pseudo-random integers, 7.22.2.2
 */
void srand(unsigned int seed);

/*
 * Memory management functions. 7.22.3
 */

/*
 * Allocates space for an object whose alignment is specified by the first
 * argument, 7.22.3.1
 */
// TODO: not implemented!
void * aligned_alloc(size_t alignment, size_t size);

/*
 * Allocates space for an nmemb objects of specified size and zeros it out,
 * 7.22.3.2
 */
// TODO: not implemented!
void * calloc(size_t nmemb, size_t size);

/*
 * Deallocates space, 7.22.3.3
 */
// TODO: not implemented!
void free(void *ptr);

/*
 * Allocates space for an object, 7.22.3.4
 */
// TODO: not implemented!
void * malloc(size_t size);

/*
 * Allocates new memory pointer, moves content into it and deallocates the old
 * one, 7.22.3.5
 */
// TODO: not implemented!
void * realloc(void *ptr, size_t size);

/*
 * Communicating with the environment, 7.22.4
 */

/*
 * Causes abnormal program termination, 7.22.4.1
 */
// TODO: not implemented!
_Noreturn void abort(void);

/*
 * Registers function to be called at the normal program termination, 7.22.4.2
 */
// TODO: not implemented!
int atexit(void (*func)(void));

/*
 * Registers function to be called at the quick_exit call, 7.22.4.3
 */
// TODO: not implemented!
int at_quick_exit(void (*func)(void));

/*
 * Causes normal program termination with cleanup and callbacks, 7.22.4.4
 */
// TODO: not implemented!
_Noreturn void exit(int status);

/*
 * Causes normal program termination without cleanup and callbacks, 7.22.4.5
 */
// TODO: not implemented!
_Noreturn void _Exit(int status);

/*
 * Searches the environment list for a string that matches name, 7.22.4.6
 */
// TODO: not implemented!
char * getenv(const char *name);

/*
 * Causes normal program termination without cleanup, but with callbacks,
 * 7.22.4.7
 */
// TODO: not implemented!
_Noreturn void quick_exit(int status);

/* 
 * Finds the command processor and runs the command, 7.22.4.8
 */
int system(const char *string);

/*
 * Searching and sorting utilities, 7.22.5
 */

/*
 * Searches the array for a matching element, 7.22.5.1
 */
void * bsearch(const void *key, const void *base, 
               size_t nmemb, size_t size, 
               int (*compar)(const void *, const void *));

/*
 * Sorts the array, 7.22.5.2
 */
void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));

/*
 * Integer arithmetic functions, 7.22.6
 */

/*
 * Compute the absolute value of an integer, 7.22.6.1
 */
// TODO: not implemented!
int abs(int j);
long int labs(long int j);
long long int llabs(long long int j);

/*
 * Compute division and modulo in single operation, 7.22.6.2
 */
div_t div(int numer, int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);

/*
 * Multibyte/wide character conversion functions, 7.22.7
 */

/*
 * Determines the number of bytes in multibyte character, 7.22.7.1
 */
// TODO: not implemented!
int mblen(const char *s, size_t n);

/*
 * Converts multi-byte character to wide character, 7.22.7.2
 */
// TODO: not implemented!
int mbtowc(wchar_t * restrict pwc, const char * restrict s, size_t n);

/*
 * Converts wide character to multi-byte, 7.22.7.3
 */
// TODO: not implemented!
int wctomb(char *s, wchar_t wc);

/*
 * Multibyte/wide string conversion functions, 7.22.8
 */

/*
 * Converts multi-byte character string to wide character string, 7.22.8.1
 */
// TODO: not implemented!
size_t mbstowcs(wchar_t * restrict pwcs, const char * restrict s, size_t n);

/*
 * Converts wide-character string to multi-byte string, 7.22.8.2
 */
// TODO: not implemented!
size_t wcstombs(char * restrict s, const wchar_t * restrict pwcs, size_t n);

# endif // _STDLIB_H
