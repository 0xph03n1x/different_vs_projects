.code
asm_factorial proc
    ;long long int result = 1;
    mov eax, 1h
    ;if (number > 1) {
    cmp ecx,1
    jle _end_of_if
    ; do {
_beginning_of_do_while_loop:
    ; result = number;
    mul ecx
    ; number--;
    ; } while (number > 0);
    loop _beginning_of_do_while_loop
    ;}
_end_of_if:
    ;return result;
    ;(result is already in eax)
    ret
asm_factorial endp
end
