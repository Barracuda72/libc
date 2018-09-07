/*
 * _setjmp.c
 *
 * Non-standard
 *
 * Saves calling procedure context for later restore by longjmp
 *
 */

/* 
 * int _setjmp(jmp_buf env)
 */
.globl _setjmp
_setjmp:
  // According to x86-64 ABI, save registers %rbp, %rbx, %rsp and %r12 - %r15
  mov %r12,   (%rdi)
  mov %r13,  8(%rdi)
  mov %r14, 16(%rdi)
  mov %r15, 24(%rdi)
  mov %rbp, 32(%rdi)
  mov %rbx, 40(%rdi)
  mov %rsp, 48(%rdi)
  mov (%rsp), %rax
  mov %rax, 56(%rdi)
  xor %rax, %rax
  ret
