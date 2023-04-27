	SECTION .data
message:	db "Hello, Holberton", 0
format:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, message
	move edi, format
	move eax, 0
	call printf

	move eax, 0
	ret
