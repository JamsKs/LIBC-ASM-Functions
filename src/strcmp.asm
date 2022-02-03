    global strcmp

    section .text

strcmp:
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
    jmp strcmp

return:
    movsx rax, r8b
    movsx rbx, r9b
    sub rax, rbx
    ret