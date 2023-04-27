section .data
	hello db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
	global main

main:
	move rdi, format
	move rsi, hello
	;call printf function
	xor eax, eax
	call printf
	;exit
	xor eax, eax
	ret
