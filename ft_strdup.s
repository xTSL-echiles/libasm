global	_ft_strdup
extern	_malloc
section	.text
_ft_strdup:
		xor rax, rax
		push rdi
strlen:
		xor	rcx, rcx
str_len:
		cmp	byte[rdi + rcx], 0
		je	dup
		inc rcx
		jmp	str_len
dup:
		mov r12, rcx
		mov rdi, rcx
		call _malloc
		jz error
		pop rdi
		mov rsi, rax
		mov rcx, r12
		inc rcx
cpy_2:
		mov bl, byte[rdi + rcx - 1]
		mov byte[rsi + rcx - 1], bl
		loop cpy_2
exit:
		mov rax, rsi
		ret
error:
		pop	rdi
		ret
