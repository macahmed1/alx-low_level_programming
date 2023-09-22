section .data
	hello db "Hello, Holberton",10 ; The string to print, followed by a newline character (10)

section .text
	global main

extern printf

main:
push rbp
	mov rdi, hello ; Load the address of the string into rdi
	call printf   ; Call printf to print the string
	pop rbp

	; Exit the program
	mov rax, 60     ; syscall number for exit
	xor rdi, rdi    ; Exit status 0
	syscall

