section .data
message db "Hello, Holberton", 0x0A
format: db "%s",0
section .text
extern printf
global main
main:
push rbp
mov rbp, rsp
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, 17
syscall
