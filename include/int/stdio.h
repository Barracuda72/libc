/*
 * int/stdio.h
 *
 * Internal functions
 *
 * Input/output
 *
 */

#ifndef _INT_STDIO_H
#define _INT_STDIO_H 1

# include <decl/FILE.h>
# include <decl/size_t.h>
# include <stdarg.h>

struct int_stdio_desc
{
  FILE* stream;
  size_t n;
  char* buffer;
};

/*
 * Generic *printf function
 */
int int_xprintf(struct int_stdio_desc* stream, const char* restrict format, va_list args);

/*
 * Generic *scanf function
 */
int int_xscanf(struct int_stdio_desc* stream, const char* restrict format, va_list args);

#endif // _INT_STDIO_H
