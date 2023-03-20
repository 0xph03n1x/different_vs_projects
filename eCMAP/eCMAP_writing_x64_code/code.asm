.code
asm_factorial proc
    mov rax, 1h
_beginning_of_while_loop:
    cmp ecx, 1h
    jle _end_of_while_loop
    mul ecx
    dec ecx
    jmp _beginning_of_while_loop
_end_of_while_loop:
    ret
asm_factorial endp
end
