.section .text

.global _start
.type _start, @function
_start:
  # Set the stack frames linked list end
  movq $0, %rbp
  pushq %rbp # rip=0
  pushq %rbp # rbp=0
  movq %rsp, %rbp
 
  # Save argc and argv for later use by main
  pushq %rsi
  pushq %rdi
 
  # Initialize signals, memory allocator, standard I/O etc.
  #call initialize_standard_library
 
  # Call global constructors
  #call _init
 
  # Restore argc and argv
  popq %rdi
  popq %rsi
 
  # Execute main function
  call main
  #call *(main@GOT)
 
  # End process
  mov %rax, %rdi
  # call exit
loop:
  jmp loop
