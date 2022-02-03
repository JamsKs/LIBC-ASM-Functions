    global strchr

    section .text

strchr:
    mov rcx, 0

loop:
    cmp byte [rdi], SIL
    je return
    cmp byte [rdi], 0
    je return_null
    inc rcx
    inc rdi
    jmp loop

return:
    mov rax, rdi
    ret

return_null:
    xor rax, rax
    ret