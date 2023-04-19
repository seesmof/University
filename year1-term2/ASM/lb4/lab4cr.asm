.model small    ; set program model as small
.stack 100h     ; set stack size to 100h

cseg segment para public 'code'     ; declare code segment
    assume cs:cseg, ss:sseg, es:nothing ; set segment register to corresponding ones

start:  ; declare program entry point
    assume ds:dseg  ; set data segment register
    mov bx, dseg    ; add data segment to bx register
    mov ds, bx  ; set ds register to bx register

    call main   ; call main function

    mov bl, 0h     ; set error code to 108 in hex
    call exit2os ; exit to OS

main proc near  ; declare main function
    lea dx, endl
    call outputString ; output with function

    lea dx, minp
    call outputString ; output with function
    
    lea dx, buff
    call inputString ; set output string

    sub bx, bx
    mov bl, blen
    mov [binp + bx], '$'

    lea dx, endl
    call outputString ; output with function

    lea dx, endl
    call outputString ; output with function

    lea dx, mout
    call outputString ; output with function

    lea dx, binp
    call outputString ; set output string
    lea dx, endl
    call outputString ; output with function

    ret     ; stop function execution
main endp   ; end main function

inputString proc near
    sub ax, ax
    mov ah, 0Ah
    int 21h
    ret
inputString endp

outputString proc near
    sub ax, ax
    mov ah, 09h
    int 21h
    ret
outputString endp

exit2os proc near
    mov ah, 04Ch     ; exit to OS
    int 21h     ; call interrupt
    ret         ; return from interrupt
exit2os endp
cseg ends   ; end code segment

sseg segment para stack 'stack'     ; declare stack segment
    db 256 dup(?)       ; reserve memory for stack
sseg ends   ; end stack segment 

dseg segment para public 'data'     ; declare data segment
    minp db 'Input stirng: ', '$'
    mout db 'Resulting string: ', '$'
    endl db 0Dh, 0Ah, '$'
    buff db 100
    blen db ?
    binp db 10 dup (' ')

    new_line db 0Dh, 0Ah, '$'
    input_string db 'Enter a string: ', '$'
    output_string db 'Your string: ', '$'

    in_buffer db 100
    in_length db ?
    buf_count db 100 dup (' ')
dseg ends   ; end data segment

end start   ; end program execution