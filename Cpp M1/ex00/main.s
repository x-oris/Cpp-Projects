	.text
	.file	"main.cpp"
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90                         # -- Begin function __cxx_global_var_init
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movabsq	$_ZStL8__ioinit, %rdi
	callq	_ZNSt8ios_base4InitC1Ev
	movabsq	$_ZNSt8ios_base4InitD1Ev, %rdi
	movabsq	$_ZStL8__ioinit, %rsi
	movabsq	$__dso_handle, %rdx
	callq	__cxa_atexit
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc
                                        # -- End function
	.text
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception0
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$224, %rsp
	movl	$0, -4(%rbp)
	leaq	-48(%rbp), %rdi
	movq	%rdi, -192(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-192(%rbp), %rdx                # 8-byte Reload
.Ltmp0:
	movl	$.L.str, %esi
	leaq	-40(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp1:
	jmp	.LBB1_1
.LBB1_1:
.Ltmp3:
	leaq	-40(%rbp), %rdi
	callq	_Z11randomChumpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.Ltmp4:
	jmp	.LBB1_2
.LBB1_2:
	leaq	-40(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-48(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	leaq	-112(%rbp), %rdi
	movq	%rdi, -200(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-200(%rbp), %rdx                # 8-byte Reload
.Ltmp6:
	movl	$.L.str.1, %esi
	leaq	-104(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp7:
	jmp	.LBB1_3
.LBB1_3:
.Ltmp9:
	leaq	-104(%rbp), %rdi
	callq	_Z9newZombieNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	movq	%rax, %rcx
.Ltmp10:
	movq	%rcx, -208(%rbp)                # 8-byte Spill
	jmp	.LBB1_4
.LBB1_4:
	leaq	-104(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-112(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	movq	-208(%rbp), %rax                # 8-byte Reload
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rdi
	callq	_ZN6Zombie8announceEv
	movq	-72(%rbp), %rax
	movq	%rax, -216(%rbp)                # 8-byte Spill
	cmpq	$0, %rax
	je	.LBB1_6
# %bb.5:
	movq	-216(%rbp), %rdi                # 8-byte Reload
	callq	_ZN6ZombieD1Ev
	movq	-216(%rbp), %rdi                # 8-byte Reload
	callq	_ZdlPv
.LBB1_6:
	leaq	-184(%rbp), %rdi
	movq	%rdi, -224(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-224(%rbp), %rdx                # 8-byte Reload
.Ltmp12:
	movl	$.L.str.2, %esi
	leaq	-176(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp13:
	jmp	.LBB1_7
.LBB1_7:
.Ltmp15:
	leaq	-144(%rbp), %rdi
	leaq	-176(%rbp), %rsi
	callq	_ZN6ZombieC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.Ltmp16:
	jmp	.LBB1_8
.LBB1_8:
	leaq	-176(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-184(%rbp), %rdi
	callq	_ZNSaIcED1Ev
.Ltmp18:
	leaq	-144(%rbp), %rdi
	callq	_ZN6Zombie8announceEv
.Ltmp19:
	jmp	.LBB1_9
.LBB1_9:
	movl	$0, -4(%rbp)
	leaq	-144(%rbp), %rdi
	callq	_ZN6ZombieD1Ev
	movl	-4(%rbp), %eax
	addq	$224, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB1_10:
	.cfi_def_cfa %rbp, 16
.Ltmp2:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	jmp	.LBB1_12
.LBB1_11:
.Ltmp5:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	leaq	-40(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB1_12:
	leaq	-48(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	jmp	.LBB1_20
.LBB1_13:
.Ltmp8:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	jmp	.LBB1_15
.LBB1_14:
.Ltmp11:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	leaq	-104(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB1_15:
	leaq	-112(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	jmp	.LBB1_20
.LBB1_16:
.Ltmp14:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	jmp	.LBB1_18
.LBB1_17:
.Ltmp17:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	leaq	-176(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB1_18:
	leaq	-184(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	jmp	.LBB1_20
.LBB1_19:
.Ltmp20:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -56(%rbp)
	movl	%eax, -60(%rbp)
	leaq	-144(%rbp), %rdi
	callq	_ZN6ZombieD1Ev
.LBB1_20:
	movq	-56(%rbp), %rdi
	callq	_Unwind_Resume@PLT
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table1:
.Lexception0:
	.byte	255                             # @LPStart Encoding = omit
	.byte	255                             # @TType Encoding = omit
	.byte	1                               # Call site Encoding = uleb128
	.uleb128 .Lcst_end0-.Lcst_begin0
.Lcst_begin0:
	.uleb128 .Ltmp0-.Lfunc_begin0           # >> Call Site 1 <<
	.uleb128 .Ltmp1-.Ltmp0                  #   Call between .Ltmp0 and .Ltmp1
	.uleb128 .Ltmp2-.Lfunc_begin0           #     jumps to .Ltmp2
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp3-.Lfunc_begin0           # >> Call Site 2 <<
	.uleb128 .Ltmp4-.Ltmp3                  #   Call between .Ltmp3 and .Ltmp4
	.uleb128 .Ltmp5-.Lfunc_begin0           #     jumps to .Ltmp5
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp6-.Lfunc_begin0           # >> Call Site 3 <<
	.uleb128 .Ltmp7-.Ltmp6                  #   Call between .Ltmp6 and .Ltmp7
	.uleb128 .Ltmp8-.Lfunc_begin0           #     jumps to .Ltmp8
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp9-.Lfunc_begin0           # >> Call Site 4 <<
	.uleb128 .Ltmp10-.Ltmp9                 #   Call between .Ltmp9 and .Ltmp10
	.uleb128 .Ltmp11-.Lfunc_begin0          #     jumps to .Ltmp11
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp10-.Lfunc_begin0          # >> Call Site 5 <<
	.uleb128 .Ltmp12-.Ltmp10                #   Call between .Ltmp10 and .Ltmp12
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp12-.Lfunc_begin0          # >> Call Site 6 <<
	.uleb128 .Ltmp13-.Ltmp12                #   Call between .Ltmp12 and .Ltmp13
	.uleb128 .Ltmp14-.Lfunc_begin0          #     jumps to .Ltmp14
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp15-.Lfunc_begin0          # >> Call Site 7 <<
	.uleb128 .Ltmp16-.Ltmp15                #   Call between .Ltmp15 and .Ltmp16
	.uleb128 .Ltmp17-.Lfunc_begin0          #     jumps to .Ltmp17
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp18-.Lfunc_begin0          # >> Call Site 8 <<
	.uleb128 .Ltmp19-.Ltmp18                #   Call between .Ltmp18 and .Ltmp19
	.uleb128 .Ltmp20-.Lfunc_begin0          #     jumps to .Ltmp20
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp19-.Lfunc_begin0          # >> Call Site 9 <<
	.uleb128 .Lfunc_end1-.Ltmp19            #   Call between .Ltmp19 and .Lfunc_end1
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
.Lcst_end0:
	.p2align	2
                                        # -- End function
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90                         # -- Begin function _GLOBAL__sub_I_main.cpp
	.type	_GLOBAL__sub_I_main.cpp,@function
_GLOBAL__sub_I_main.cpp:                # @_GLOBAL__sub_I_main.cpp
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	callq	__cxx_global_var_init
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end2:
	.size	_GLOBAL__sub_I_main.cpp, .Lfunc_end2-_GLOBAL__sub_I_main.cpp
	.cfi_endproc
                                        # -- End function
	.type	_ZStL8__ioinit,@object          # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Z3"
	.size	.L.str, 3

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"Z2"
	.size	.L.str.1, 3

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"Z1"
	.size	.L.str.2, 3

	.section	.init_array,"aw",@init_array
	.p2align	3
	.quad	_GLOBAL__sub_I_main.cpp
	.ident	"Ubuntu clang version 12.0.1-19ubuntu3"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym __cxx_global_var_init
	.addrsig_sym __cxa_atexit
	.addrsig_sym _Z11randomChumpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.addrsig_sym __gxx_personality_v0
	.addrsig_sym _Z9newZombieNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.addrsig_sym _ZN6Zombie8announceEv
	.addrsig_sym _ZdlPv
	.addrsig_sym _GLOBAL__sub_I_main.cpp
	.addrsig_sym _Unwind_Resume
	.addrsig_sym _ZStL8__ioinit
	.addrsig_sym __dso_handle
