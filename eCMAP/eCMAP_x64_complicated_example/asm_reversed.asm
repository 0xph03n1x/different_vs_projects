.code
asm_copy_reversed proc
    mov [rsp + 8h], rcx
    mov [rsp + 10h], rdx
    sub rsp, 20h
    call asm_strlen
    add rsp, 20h
    mov rcx, [rsp + 8h]
    mov rdx, [rsp + 10h]
    mov r8, rax
    mov r10, rdx
    add r10, r8
    dec r10
_beginning_of_copy_loop:
    cmp r8, 0h
    je _end_of_copy_loop
    mov r11b, byte ptr[rcx]
    mov byte ptr[r10], r11b
    dec r8
    inc rcx
    dec r10
    jmp _beginning_of_copy_loop
_end_of_copy_loop:
    mov byte ptr [rdx + rax], 0h
    ret 
asm_copy_reversed endp
end