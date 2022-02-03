    global memset

    section .text

memset:
    xor rcx, rcx
loop:
    cmp rdx, rcx
    jle dec
    mov [rdi], sil
    inc rdi
    inc rcx
    jmp loop

dec:
    cmp rcx, 0
    je return
    dec rdi
    dec rcx
    jmp dec

return:
    mov rax, rdi
    ret