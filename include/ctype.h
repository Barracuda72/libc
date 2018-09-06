/*
 * ctype.h
 *
 * A part of C17 standard, 7.4
 *
 * Character handling
 *
 */

#ifndef _CTYPE_H
#define _CTYPE_H 1

/*
 * Character classification functions, 7.4.1
 */

/*
 * Checks that symbol is letter or digit
 */
int isalnum(int c);

/*
 * Checks that symbol is letter
 */
int isalpha(int c);

/*
 * Checks that symbol is decimal digit
 */
int isdigit(int c);

/*
 * Checks that symbol is space or tab
 */
int isblank(int c);

/*
 * Checks that symbol is control character
 */
int iscntrl(int c);

/*
 * Checks that symbol is printing character (excluding space)
 */
int isgraph(int c);

/*
 * Checks that symbol is lower-case letter
 */
int islower(int c);

/*
 * Checks that symbol is printing character (including space)
 */
int isprint(int c);

/*
 * Checks that symbol is punctuation character
 */
int ispunct(int c);

/*
 * Checks that symbol is a standard white-space character
 */
int isspace(int c);

/*
 * Checks that symbol is an upper-case letter
 */
int isupper(int c);

/*
 * Checks that symbol is a hexadecimal digit
 */
int isxdigit(int c);

/*
 * Character case mapping functions, 7.4.2
 */

/*
 * Converts an upper-case letter to lower case
 */
int tolower(int c);

/*
 * Converts a lower-case letter to upper case
 */
int toupper(int c);

#endif // _CTYPE_H
