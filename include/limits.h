/*
 * limits.h
 *
 * A part of C17 standard, 7.10 (5.2.4.2.1)
 *
 * Sizes of integer types
 *
 */

#ifndef _LIMITS_H
#define _LIMITS_H 1

/*
 * Number of bits in smallest non-bit object
 */
# define CHAR_BIT 8

/*
 * Minimum value for object of type signed char
 */
# define SCHAR_MIN (-128)

/*
 * Maximum value for object of type signed char
 */
# define SCHAR_MAX (+127)

/*
 * Maximum value for object of type unsigned char
 */
# define UCHAR_MAX 255

/*
 * Minimum value for object of type char
 */
# define CHAR_MIN SCHAR_MIN 

/*
 * Minimum value for object of type char
 */
# define CHAR_MAX SCHAR_MAX 

/*
 * Maximum number of bytes in a multi-byte character
 */
# define MB_LEN_MAX 1

/*
 * Minimum value for object of type short int
 */
# define SHRT_MIN (-32768)

/*
 * Maximum value for object of type short int
 */
# define SHRT_MAX (+32767)

/*
 * Maximum value for object of type unsigned short int
 */
# define USHRT_MAX 65535

/*
 * Minimum value for object of type int
 */
# define INT_MIN (-2147483648)

/*
 * Maximum value for object of type int
 */
# define INT_MAX (+2147483647)

/*
 * Maximum value for object of type unsigned int
 */
# define UINT_MAX 4294967295

/*
 * Minimum value for object of type long int
 */
# define LONG_MIN (-9223372036854775808)

/*
 * Maximum value for object of type long int
 */
# define LONG_MAX (+9223372036854775807)

/*
 * Maximum value for object of type unsigned long int
 */
# define ULONG_MAX 18446744073709551615

/*
 * Minimum value for object of type long long int
 */
# define LLONG_MIN LONG_MIN

/*
 * Maximum value for object of type long long int
 */
# define LLONG_MAX LONG_MAX

/*
 * Maximum value for object of type unsigned long long int
 */
# define ULLONG_MAX ULONG_MAX

#endif // _LIMITS_H
