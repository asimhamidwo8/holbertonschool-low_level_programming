section .data
	msg db "Hello, World", 10
	len equ $ - msg

section .text
	global main

main:
	mov rax, 1          ; syscall: write
	mov rdi, 1          ; stdout
	mov rsi, msg        ; message
	mov rdx, len        ; length
	syscall

	mov rax, 60         ; syscall: exit
	mov rdi, 0
	syscall
