/*
 * decl/FILE.h
 *
 * Separate header file
 *
 * FILE type declaration
 *
 */

# ifndef _DECL_FILE_H
# define _DECL_FILE_H 1

# define UNGETC_STACK_SIZE 8

struct _FILE
{
  /* File position indicator */
  long int position_indicator;

  /* Buffering mode */
  int buffering_mode;
  /* Pointer to the associated buffer */
  char* buffer;
  /* Size of buffer */
  size_t buffer_size;
  /* Position inside the buffer */
  size_t buffer_position;
  /* Was that buffer allocated by libc or provided by user? */
  int buffer_needs_free;

  /* Error indicator */
  int error_indicator;
  /* EOF indicator */
  int eof_indicator;

  /* Is this stream capable of input, output or both? */
  int input_permitted;
  int output_permitted;

  /* Was input or output actually performed? */
  int io_performed;

  /* Characters pushed by ungetc */
  int ungetc_stack[UNGETC_STACK_SIZE];
  int ungetc_count;

  /* Platform-specific data */
  # ifdef _LIBC_POSIX
  /* File descriptor */
  int fd;
  # endif
};

typedef struct _FILE FILE;

# endif // _DECL_FILE_H
