
section	.text
		extern	___error
		global _ft_write

_ft_write:
		xor	rax, rax
		mov	rax, 0x2000004
		syscall
		jc	problem
		ret

problem:
		push	r8
		mov		r8, rax
		call ___error    
		mov		[rax], r8
		mov		rax, -1
		pop		r8
		ret