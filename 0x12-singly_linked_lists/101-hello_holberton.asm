;"Hello, world" in assembly language for Linux
;
;to build an executable:
;	nasm -f elf hello.asm
;	ld -s -0 hello hello.o

section .text
  global_start

section .data
msg db 'Hello, Holberton',0xa ;our dear string
len equ $ -msg

section .text

_start;

;write the string to stdout:

  mov edx,len
  mov ecx,msg
  mov ebx,1
  mov eax,4
  int 0x80

;Exit via the kernel

  mov ebx,0
  mov eax,1
  int 0x80
