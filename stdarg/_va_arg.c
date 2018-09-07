/*
 * _va_arg.c
 *
 * Non-standard
 *
 * Returns next argument from variable-lenght list
 *
 */

#include <stdarg.h>

void *_va_arg(va_list *ap, int size)
{
  void *ptr = (void *)*((long *)*ap);
  // TODO: this should be fixed!
  //(*ap) += 8;//size;
  return ptr;
}
