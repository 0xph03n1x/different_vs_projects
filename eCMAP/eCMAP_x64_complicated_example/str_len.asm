asm_strlen proc
    xor rax, rax
_loop_to_search_for_null:
    cmp byte ptr [rcx], 0h
    je _end_of_loop_to_search_for_null
    inc ax
    inc rcx
    jmp _loop_to_search_for_null
_end_of_loop_to_search_for_null:
    ret
asm_strlen endp
