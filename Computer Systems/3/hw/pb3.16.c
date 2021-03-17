// void cond(long a, long *p)
// {
//     if (p && a > *p) 
//         *p= a;
// }

// void cond(long a, long *p)
// a = $rdi  // p = $rsi

// cond:
    // testq $rsi $rsi
    // je .L1
    // cmpq %rdi, (%rsi)
    // jge .L1
    // movq %rdi, (%rsi)
// L1:
    // rep; ret
