section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main

extern printf
extern scanf

main:
    ; Set up the stack frame for printf
    sub rsp, 8

    ; Call printf with the format string and hello string
    mov rdi, format
    mov rsi, hello
    mov rax, 0          ; printf syscall number
    call printf

    ; Clean up the stack frame
    add rsp, 8

    ; Exit the program
    mov rax, 60         ; exit syscall number
    xor rdi, rdi        ; exit code 0
    syscall
