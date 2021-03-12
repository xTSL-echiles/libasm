global _ft_strcmp
section .text
_ft_strcmp:
		cmp	rsi, rdi
		jz	exit
		xor	rax, rax
		xor	rcx, rcx
		jmp cmp
check:
		cmp al, 0
		je exit
cmp:
		mov	al, byte[rsi + rcx]
		mov	bl, byte[rdi + rcx]
		inc	rcx
		cmp	al, bl
		je	check
		jg	ret_2
		jl	ret_1
exit:	mov rax, 0
		ret
ret_1:	mov rax, 1
		ret
ret_2:	mov rax, -1
		ret