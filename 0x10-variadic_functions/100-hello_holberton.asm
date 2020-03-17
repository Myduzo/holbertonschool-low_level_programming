msg db "Hello, Holberton",0,10,13 ;print message
len equ $-msg ;length of message


global _begin
_begin:
mov eax,4
mov ebx,1
mov ecx,msg
mov edx,len
int 0x80

mov eax,1
mov ebx,0
int 80h
