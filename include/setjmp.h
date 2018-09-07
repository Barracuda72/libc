/*
 * setjmp.h
 *
 * A part of C17 standard, 7.13
 *
 * Nonlocal jumps
 *
 */

#ifndef _SETJMP_H
#define _SETJMP_H 1

/*
 * Structure for context saving
 *
 * TODO: Saving only 8 64-bit registers
 */

struct _jmp_buf
{
  char data[8*8];
};

/*
 * Structure type as described by standard
 */
typedef struct _jmp_buf jmp_buf[1];

/*
 * Saves the calling environment, 7.13.1.1
 */
#define setjmp(x) _setjmp(x)

/*
 * Functions
 */

/*
 * Non-standard
 * Saves calling procedure context for later restore by longjmp
 */
int _setjmp(jmp_buf env);

/*
 * Restores environment saved by setjmp, 7.13.2.1
 */
_Noreturn void longjmp(jmp_buf env, int val);

#endif // _SETJMP_H
