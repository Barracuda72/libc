/*
 * _va_start.c
 *
 * Non-standard
 *
 * Initializes variable-lenght list
 *
 */

/* 
 * void _va_start(va_list *ap, void *p, int size)
 */
.globl _va_start
_va_start:
  mov %rbp, %rax
  mov $120, %rcx // Don't go too deep into stack, functions
_va_start1:     // usually don't have too many parameters
  sub $4, %rax
  cmp %rsi, (%rax)
  je _va_start_found // Found and argument
  loop _va_start1

  xor %rax, %rax // Found nothing
  jmp _va_start_ret

_va_start_found:
  // sub %rdx, %rax
  add $0x20, %rax
  
_va_start_ret:
  mov %rax, (%rdi)
  ret
