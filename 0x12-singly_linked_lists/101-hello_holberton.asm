	section .data
hello:	db 'Hello, Holberton', 0
format: db '%s', 10, 0

	section .text
	global main
	extern printf

main:
	mov esi, hello
	mov edi, format
	mov eax, 0
	call printf

	mov eax, 0
	ret
