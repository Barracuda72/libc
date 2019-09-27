/*
 * strtok.c
 *
 * A part of C17 standard, 7.24.5.8
 *
 * Breaks the string s1 into a sequence of tokens using characters of s2 as
 * delimeters
 *
 */

#include <string.h>

static char *strtok_pointer = NULL;

// Aux function
// Finds in s1 first character that's not in the s2
// Inverse of strpbrk
static char* strnpbrk(const char *s1, const char *s2)
{
  while (*s1)
  {
    char *t = strchr(s2, *s1);
    if (!t)
      return (char*)s1;
    s1++;
  }

  return NULL;
}

char *strtok(char * restrict s1, const char * restrict s2)
{
  char *start = NULL;

  if (s1 != NULL)
  {
    // First call
    start = s1;
  } else {
    // Second call
    start = strtok_pointer;
  }

  // Parsing completed
  if (!*start)
    return NULL;

  // Search for the first character that's not in the delimiter string
  char *s = strnpbrk(start, s2);

  // If there isn't any, there are no tokens
  if (!s)
    return NULL;

  // Search for the end of the token
  char *t = strpbrk(s, s2);
    
  if (!t)
  {
    // There's no end, whole string is the token
    strtok_pointer = s;
    while (*strtok_pointer)
      strtok_pointer++;
    return s;
  } else {
    // Terminate current token and move to the next one
    *t = 0;
    strtok_pointer = t+1;
    return s;
  }

  return NULL;
}
