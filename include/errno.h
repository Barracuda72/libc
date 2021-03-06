/*
 * errno.h
 *
 * A part of C17 standard, 7.5
 *
 * Macroses for error detection and reporting
 *
 */

#ifndef _ERRNO_H
#define _ERRNO_H 1

int *__errno_location(void);
#define errno (*__errno_location ())

/*
 * Error codes
 */

#define EDOM    20
#define EILSEQ  21
#define ERANGE  22
#define EBADF   23
#define EINVAL  24
#define ENFILE  25
#define ENOENT  26
#define EBUSY   27
#define ENOTDIR 28
#define EXDEV   29
#define ENOMEM  30
#define EAGAIN  31
#define EMLINK  32
#define ECHILD  33

#define ELASTNUM ECHILD

#endif // _ERRNO_H
