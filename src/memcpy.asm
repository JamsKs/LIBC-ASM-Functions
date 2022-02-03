    global memcpy

    section .text

memcpy:
    xor rcx, rcx

loop:
    cmp rdx, rcx
    jle dec
    mov r8b, byte [rsi + rcx]
    mov [rdi], r8b
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