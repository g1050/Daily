	.file	"noname.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"\346\211\247\350\241\214\344\272\206\346\236\204\351\200\240\345\207\275\346\225\260"
	.section	.text._ZN4TestC2Eii,"axG",@progbits,_ZN4TestC5Eii,comdat
	.align 2
	.weak	_ZN4TestC2Eii
	.type	_ZN4TestC2Eii, @function
_ZN4TestC2Eii:
.LFB1519:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1519:
	.size	_ZN4TestC2Eii, .-_ZN4TestC2Eii
	.weak	_ZN4TestC1Eii
	.set	_ZN4TestC1Eii,_ZN4TestC2Eii
	.section	.rodata
.LC1:
	.string	"one\n"
	.section	.text._ZN4TestaSEOS_,"axG",@progbits,_ZN4TestaSEOS_,comdat
	.align 2
	.weak	_ZN4TestaSEOS_
	.type	_ZN4TestaSEOS_, @function
_ZN4TestaSEOS_:
.LFB1527:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	nop
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1527:
	.size	_ZN4TestaSEOS_, .-_ZN4TestaSEOS_
	.section	.rodata
.LC2:
	.string	"\346\211\247\350\241\214\344\272\206\346\236\220\346\236\204\345\207\275\346\225\260"
	.section	.text._ZN4TestD2Ev,"axG",@progbits,_ZN4TestD5Ev,comdat
	.align 2
	.weak	_ZN4TestD2Ev
	.type	_ZN4TestD2Ev, @function
_ZN4TestD2Ev:
.LFB1531:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1531
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1531:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN4TestD2Ev,"aG",@progbits,_ZN4TestD5Ev,comdat
.LLSDA1531:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1531-.LLSDACSB1531
.LLSDACSB1531:
.LLSDACSE1531:
	.section	.text._ZN4TestD2Ev,"axG",@progbits,_ZN4TestD5Ev,comdat
	.size	_ZN4TestD2Ev, .-_ZN4TestD2Ev
	.weak	_ZN4TestD1Ev
	.set	_ZN4TestD1Ev,_ZN4TestD2Ev
	.section	.rodata
.LC3:
	.string	"hell\n"
.LC4:
	.string	"g\n"
	.text
	.globl	_Z1fv
	.type	_Z1fv, @function
_Z1fv:
.LFB1533:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1533
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB0:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	-40(%rbp), %rax
	movl	$2, %edx
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN4TestC1Eii
.LEHE0:
	leaq	.LC4(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.LEHE1:
	jmp	.L9
.L8:
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L9:
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1533:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1533:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1533-.LLSDACSB1533
.LLSDACSB1533:
	.uleb128 .LEHB0-.LFB1533
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1533
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L8-.LFB1533
	.uleb128 0
	.uleb128 .LEHB2-.LFB1533
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1533:
	.text
	.size	_Z1fv, .-_Z1fv
	.globl	_Z2g1v
	.type	_Z2g1v, @function
_Z2g1v:
.LFB1534:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z1fv
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1534:
	.size	_Z2g1v, .-_Z2g1v
	.globl	_Z2g2v
	.type	_Z2g2v, @function
_Z2g2v:
.LFB1536:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z1fv
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1536:
	.size	_Z2g2v, .-_Z2g2v
	.globl	_Z2g3v
	.type	_Z2g3v, @function
_Z2g3v:
.LFB1537:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1537
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-48(%rbp), %rax
	movl	$4, %edx
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB3:
	call	_ZN4TestC1Eii
.LEHE3:
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
.LEHB4:
	call	_Z1fv
.LEHE4:
	leaq	-32(%rbp), %rax
	leaq	-40(%rbp), %rdx
	leaq	-48(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB5:
	call	_ZN4TestaSEOS_
.LEHE5:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L17
	jmp	.L20
.L19:
	movq	%rax, %rbx
	leaq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	jmp	.L16
.L18:
	movq	%rax, %rbx
.L16:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB6:
	call	_Unwind_Resume@PLT
.LEHE6:
.L20:
	call	__stack_chk_fail@PLT
.L17:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1537:
	.section	.gcc_except_table
.LLSDA1537:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1537-.LLSDACSB1537
.LLSDACSB1537:
	.uleb128 .LEHB3-.LFB1537
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB1537
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L18-.LFB1537
	.uleb128 0
	.uleb128 .LEHB5-.LFB1537
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L19-.LFB1537
	.uleb128 0
	.uleb128 .LEHB6-.LFB1537
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1537:
	.text
	.size	_Z2g3v, .-_Z2g3v
	.section	.rodata
	.align 8
.LC5:
	.string	"\342\221\241 \350\277\224\345\233\236\345\214\277\345\220\215\345\257\271\350\261\241\347\224\250\346\235\245\345\210\235\345\247\213\345\214\226"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1538:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC5(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_Z2g2v
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1538:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2027:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L25
	cmpl	$65535, -8(%rbp)
	jne	.L25
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L25:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2027:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z1fv, @function
_GLOBAL__sub_I__Z1fv:
.LFB2028:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2028:
	.size	_GLOBAL__sub_I__Z1fv, .-_GLOBAL__sub_I__Z1fv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z1fv
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1~18.10.1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
