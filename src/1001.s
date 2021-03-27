	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 1
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rax
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rax, %rdi
	leaq	-20(%rbp), %rsi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	movl	-20(%rbp), %edi
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	__Z7callatzi
	xorl	%ecx, %ecx
	movl	%eax, -24(%rbp)
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__Z7callatzi            ## -- Begin function _Z7callatzi
	.p2align	4, 0x90
__Z7callatzi:                           ## @_Z7callatzi
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	LBB1_2
## %bb.1:
	movl	$0, -4(%rbp)
	jmp	LBB1_3
LBB1_2:
	movl	$1, -4(%rbp)
LBB1_3:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
