global	_ft_strlen
section	.text		
_ft_strlen:
		xor	rax, rax
str_len:
		cmp	byte[rdi + rax], 0
		je	exit
		inc rax
		jmp	str_len
exit:
		ret