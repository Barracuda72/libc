/*
 * system.c
 *
 * A part of C17 standard, 7.22.4.8
 *
 * Finds the command processor and runs the command
 *
 */

#include <stdlib.h>

int system(const char* string)
{
  if (string == NULL)
  {
    // Determine if the command processor is available

    return 0; // Not available
  } else {
    // Run the command and return exit status

    return EXIT_FAILURE; // Call was unsuccessful
  }
}
