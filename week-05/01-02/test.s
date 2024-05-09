	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 14, 2
	.globl	_add                            ## -- Begin function add
	.p2align	4, 0x90
_add:                                   ## @add
## %bb.0:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%eax
	movl	12(%ebp), %eax
	movl	8(%ebp), %eax
	movl	8(%ebp), %eax
	addl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	addl	$4, %esp
	popl	%ebp
	retl
                                        ## -- End function
.subsections_via_symbols
