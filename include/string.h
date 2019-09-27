/*
 * string.h
 *
 * A part of C17 standard, 7.24
 *
 * String and memory handling
 * 
 */

# ifndef _STRING_H
# define _STRING_H 1

# include <decl/size_t.h>
# include <decl/NULL.h>

/*
 * Copying functions, 7.24.2
 */

/*
 * Copies contents of memory area s2 into s1, 7.24.2.1
 */
void *memcpy(void * restrict dest, const void * restrict src, size_t n);

/*
 * Copies contents of memory area s2 into s1 as if copying was performed with
 * third intermediate buffer, 7.24.2.2
 */
void *memmove(void * dest, const void * src, size_t n);

/*
 * Copies string s2 into s1, 7.24.2.3
 */
char *strcpy(char * restrict dest, const char * restrict src);

/*
 * Copies string s2 into s1 and pads with zeroes, if necessary, 7.24.2.4
 */
char *strncpy(char * restrict dest, const char * restrict src, size_t n);


/*
 * Concatenation functions, 7.24.3
 */

/*
 * Appends string s2 to the end of s1, 7.24.3.1
 */
char *strcat(char * restrict dest, const char * restrict src);

/*
 * Appends no more than n symbols from string s2 to the end of s1, 7.24.3.2
 */
char *strncat(char * restrict dest, const char * restrict src, size_t n);

/*
 * Comparison functions, 7.24.4
 */

/*
 * Compares contents of memory areas s1 and s2, 7.24.4.1
 */
int memcmp(const void *s1, const void *s2, size_t n);

/*
 * Compares contents of strings s1 and s2, 7.24.4.2
 */
int strcmp(const char *s1, const char *s2);

/*
 * Compares contents of strings s1 and s2 with respect to locale settings,
 * 7.24.4.3
 */
int strcoll(const char *s1, const char *s2);

/*
 * Compares contents of strings s1 and s2 up to n'th character, 7.24.4.4
 */
int strncmp(const char *s1, const char *s2, size_t n);

/*
 * Transforms string s2 into s1 so what result of strcmp on two modified
 * strings will be equal to result of strcoll on original strings, 7.24.4.5
 */
size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n);

/*
 * Search functions, 7.24.5
 */

/*
 * Locates the first occurence of c in the initial n characters of the object s,
 * 7.24.5.1
 */
void *memchr(const void *s, int c, size_t n);

/*
 * Locates the first occurence of c in the string s, 7.24.5.2
 */
char *strchr(const char *s, int c);

/*
 * Computes the length of the maximum initial segment of the string s1 which
 * consists entirely of characters not from the string s2, 7.24.5.3
 */
size_t strcspn(const char *s1, const char *s2);

/*
 * Locates the first occurence in the string s1 of any character from the
 * string s2, 7.24.5.4
 */
char *strpbrk(const char *s1, const char *s2);

/*
 * Locates the last occurence of c in the string s, 7.24.5.5
 */
char *strrchr(const char *s, int c);

/*
 * Computes the length of the maximum initial segment of the string s1 which
 * consists entirely of characters from the string s2, 7.24.5.6
 */
size_t strspn(const char *s1, const char *s2);

/*
 * Locates the first occurence of string s2 in the string s1
 */
char *strstr(const char *s1, const char *s2);

/*
 * Breaks the string s1 into a sequence of tokens using characters of s2 as
 * delimeters, 7.24.5.8
 */
char *strtok(char * restrict s1, const char * restrict s2);

/*
 * Miscellaneous functions, 7.24.6
 */
 
/*
 * Fills memory area with specified symbol, 7.24.6.1
 */
void *memset(void *s, int c, size_t n);

/*
 * Returns string description of error by it's code, 7.24.6.2
 */
char *strerror(int errnum);

/*
 * Returns the string lenght, 7.24.6.3
 */
size_t strlen(const char *s);

# endif // _STRING_H
