section	.text
extern	___error
global _ft_read

_ft_read:
		xor rax, rax
		mov	rax, 0x2000003
		syscall
		jc problem
		ret
problem:
		mov r9, rax
		call ___error
		mov [rax], r9
		mov rax, -1
		ret