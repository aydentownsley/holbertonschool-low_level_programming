    global    start
    section   .text
start:
    mov       rax, 1
    mov       rdi, 1
    mov       rsi, message
    mov       rdx, 17
    syscall
    mov       rax, 0x02000001
    xor       rdi, rdi
    syscall
    section   .data
message:
    db        "Hello, Holberton", 10
