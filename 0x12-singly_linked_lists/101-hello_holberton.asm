;;;;
;;;;101-hello_holberton.asm
;;;;

section .data

printf_prompt db "Hello, Holberton", 0xa
len equ $ - printf_prompt

; printf

section .text

extern printf
global main

main:

printf:
mov edx, len
mov ecx, printf_prompt
mov ebx, 1
mov eax, 4
int 0x80

mov eax, 1
int 0x80

call printf

ret
