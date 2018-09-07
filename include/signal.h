/*
 * signal.h
 *
 * A part of C17 standard, 7.14
 *
 * Signal handling
 *
 */

#ifndef _SIGNAL_H
#define _SIGNAL_H 1

#ifndef __IGNORE_UNIMPLEMENTED
#error Not implemented
#endif

// NOT IMPLEMENTED

// TODO: change to something sensible!
typedef int sig_atomic_t;

/*
 * Values accepted as second parameter to signal function
 */

#define SIG_DFL 1
#define SIG_ERR 2
#define SIG_IGN 3

/*
 * Signal numbers
 */
#define SIGABRT 1
#define SIGFPE  2
#define SIGILL  3
#define SIGINT  4
#define SIGSEGV 5
#define SIGTERM 6

/*
 * Functions
 */

/*
 * Specifies signal handling details, 7.14.1.1
 */
void (*signal(int sig, void (*func)(int)))(int);

/*
 * Send signal, 7.14.2.1
 */
int raise(int sig);

#endif // _SIGNAL_H
