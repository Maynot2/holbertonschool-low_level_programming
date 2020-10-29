section .data
	msg db "Hello, Holberton",15,10,0
section .text
	extern printf
	global main
	main:
		push rbp
		mov rbp, rsp

		mov rdi, msg
		call printf
		
		mov rsp, rbp
		pop rbp
		ret
