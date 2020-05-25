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
# include <stdbool.h>

struct int_stdio_desc
{
  FILE* stream;
  size_t n;
  char* buffer;
  bool limited;
};

/*
 * Generic *printf function
 */
int int_xprintf(struct int_stdio_desc* stream, const char* restrict format, va_list args);

/*
 * Generic *scanf function
 */
int int_xscanf(struct int_stdio_desc* stream, const char* restrict format, va_list args);

/*
 * stdio initialization function
 */
void stdio_init(void);

/*
 * stdio finalization function
 */
void stdio_fini(void);

/*
 * Array of all open files, size FOPEN_MAX
 */
extern FILE* int_open_files[];

#endif // _INT_STDIO_H
