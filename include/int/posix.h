/*
 * int/posix.h
 *
 * Internal functions
 *
 * Posix definitions
 *
 */

#ifndef _INT_POSIX_H
#define _INT_POSIX_H 1

/*
 * Syscalls
 */

int sys_open(const char *path, int flags);
int sys_close(int fd);
int sys_read(int fd, void* buf, size_t count);
int sys_write(int fd, const void* buf, size_t count);

#endif // _INT_POSIX_H
