/*
 * tls.c
 *
 * User-level interface to Thread-Local Storage
 */

#include <errno.h>
#include <tls.h>

#include <int/rand_seed.h>

unsigned long __rand_seed = 1;

int *__errno_location(void)
{
  return (int *)&(((thread_ls *)TLS_ADDR)->errno_tls);
}

