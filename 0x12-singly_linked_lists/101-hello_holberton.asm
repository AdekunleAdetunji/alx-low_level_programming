section .data
	hello: db 'Hello, Holberton', 0Ah, 00

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, hello
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
