/*
 * setlocale.c
 *
 * A part of C17 standard
 *
 * Функция устанавливает новую локаль
 *
 */

#include <locale.h>
#include <string.h>

// TODO: реализована только минимальная функциональность!

static const char *deflocale = "C";

char *setlocale(int category, const char *locale)
{
  if ((locale == NULL) || (!strncmp(deflocale, locale, 2)))
    return (char *)deflocale;
  else
    return NULL;
}
