/*
 * setlocale.c
 *
 * A part of C17 standard, 7.11.1.1
 *
 * Changes locale settings
 *
 */

#include <locale.h>
#include <string.h>

// TODO: only basic functionality!

static const char *deflocale = "C";

char *setlocale(int category, const char *locale)
{
  if ((locale == NULL) || (!strncmp(deflocale, locale, 2)))
    return (char *)deflocale;
  else
    return NULL;
}
