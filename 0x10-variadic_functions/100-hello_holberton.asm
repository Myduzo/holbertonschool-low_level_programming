global main

section .data
msg db "Hello, Holberton", 10 ;print message
len equ $ - msg ;length of message

section .text
main:
mov rax,1
mov rdi,1
mov rsi,msg
mov rdx,len
int 0x80

mov rax,1
mov rdi,0
int 0x80
