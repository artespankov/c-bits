void decode1(long *xp, long *yp, long *zp){
// xp in %rdi, 
// yp in %rsi, 
// zp in %rdx

// movq (%rdi), %r8
long x = *xp;

// movq (%rsi) , %rcx
long y = *yp;

//movq (%rdx), %rax
long z = *zp;

// movq %r8, (%rsi)
*yp = x;

//movq %rcx, (%rdx)
*zp = y;

// movq %rax, (%rdi)
*xp = z;
}

