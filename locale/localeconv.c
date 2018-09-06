/*
 * localeconv.c
 *
 * A part of C17 standard
 *
 * Функция возвращает описание текущей локали
 *
 */

#include <limits.h>
#include <locale.h>

// TODO: реализована только минимальная функциональность!

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

