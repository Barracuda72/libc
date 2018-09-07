/*
 * localeconv.c
 *
 * A part of C17 standard, 7.11.2.1
 *
 * Returns lconv structure for current locale
 *
 */

#include <limits.h>
#include <locale.h>

// TODO: only basic functionality!

static struct lconv deflconv = {
  ".",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  "",
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX,
  CHAR_MAX
};

struct lconv *localeconv(void)
{
  return &deflconv;
}

