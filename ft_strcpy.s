global	_ft_strcpy
section	.text
_ft_strcpy:
		cmp rsi, 0
		je exit
		xor rax, rax
cpy:
		mov ch, byte[rsi + rax]
		mov byte[rdi + rax], ch
		cmp byte[rsi + rax], 0
		je exit
		inc rax
		jmp cpy
exit:
		mov rax, rdi
		ret