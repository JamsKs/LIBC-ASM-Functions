    global strncmp

    section .text

strncmp:
    xor rcx, rcx

loop:
    mov r8b, byte [rdi]
    mov r9b, byte [rsi]
    cmp byte r8b, 0
    je return
    cmp byte r9b, 0
    je return
    cmp r8b, r9b
    jne return
    inc rdi
    inc rsi
    inc rcx
    cmp rdx, rcx
    je return
    jmp loop

return:
    movsx rax, r8b
    movsx rbx, r9b
    sub rax, rbx
    ret