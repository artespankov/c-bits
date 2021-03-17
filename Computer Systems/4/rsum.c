long rsum(long *start, long count)
{
    if (count <= 0)
        return 0;

    return *start + rsum(start+1, count-1);
}

// long rsum(long * start, long count)
// start in %rdi, count in %rsi
// rsum:
// 	movl	$0, %eax
// 	andq	%rsi, %rsi
// 	je return
// 	pushq	%rbx
// 	movq	(%rdi), %rbx
// 	subq	$1, %rsi
// 	addq	$8, %rdi
// 	call	rsum
// 	addq	%rbx, %rax
// 	popq	%rbx
// .L9:
// 	rep; ret
