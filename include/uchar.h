/*
 * uchar.h
 *
 * A part of C17 standard, 7.28
 *
 * Unicode utilities
 *
 */

#ifndef _UCHAR_H
#define _UCHAR_H 1

#include <stdint.h> // For uint_least*

#include <decl/size_t.h>
#include <decl/mbstate_t.h>

typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;

/*
 * Restartable multibyte/wide character conversion functions, 7.28.1
 */

/*
 * Converts some multibyte symbol, optionally specified by ps, into 16-bit
 * Unicode symbol, 7.28.1.1
 */
size_t mbrtoc16(char16_t * restrict pc16,
                const char * restrict s, size_t n,
                mbstate_t * restrict ps);

/*
 * Converts some 16-bit Unicode symbol into multibyte symbol, 7.28.1.2
 */
size_t c16rtomb(char * restrict s, char16_t c16,
                mbstate_t * restrict ps);

/*
 * Converts some multibyte symbol, optionally specified by ps, into 32-bit
 * Unicode symbol, 7.28.1.3
 */
size_t mbrtoc32(char32_t * restrict pc32,
                const char * restrict s, size_t n,
                mbstate_t * restrict ps);

/*
 * Converts some 32-bit Unicode symbol into multibyte symbol, 7.28.1.4
 */
size_t c32rtomb(char * restrict s, char32_t c32,
                mbstate_t * restrict ps);

#endif // _UCHAR_H
