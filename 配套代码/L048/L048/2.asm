; Listing generated by Microsoft (R) Optimizing Compiler Version 19.24.28117.0 

include listing.inc

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

CONST	SEGMENT
$SG5097	DB	'Hello World!', 0aH, 00H
	ORG $+2
$SG5098	DB	'%d', 0aH, 00H
$SG5099	DB	'%d', 0aH, 00H
$SG5100	DB	'%d', 0aH, 00H
$SG5101	DB	'%d', 0aH, 00H
CONST	ENDS
PUBLIC	__local_stdio_printf_options
PUBLIC	_vfprintf_l
PUBLIC	printf
PUBLIC	?my_srand@@YAXI@Z				; my_srand
PUBLIC	?my_rand@@YAHXZ					; my_rand
PUBLIC	main
PUBLIC	?_OptionsStorage@?1??__local_stdio_printf_options@@9@4_KA ; `__local_stdio_printf_options'::`2'::_OptionsStorage
EXTRN	__acrt_iob_func:PROC
EXTRN	__stdio_common_vfprintf:PROC
;	COMDAT ?_OptionsStorage@?1??__local_stdio_printf_options@@9@4_KA
_BSS	SEGMENT
?_OptionsStorage@?1??__local_stdio_printf_options@@9@4_KA DQ 01H DUP (?) ; `__local_stdio_printf_options'::`2'::_OptionsStorage
_BSS	ENDS
_BSS	SEGMENT
?rand_state@@3IA DD 01H DUP (?)				; rand_state
_BSS	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$_vfprintf_l DD imagerel $LN3
	DD	imagerel $LN3+67
	DD	imagerel $unwind$_vfprintf_l
pdata	ENDS
;	COMDAT pdata
pdata	SEGMENT
$pdata$printf DD imagerel $LN3
	DD	imagerel $LN3+87
	DD	imagerel $unwind$printf
pdata	ENDS
pdata	SEGMENT
$pdata$main DD	imagerel $LN3
	DD	imagerel $LN3+109
	DD	imagerel $unwind$main
pdata	ENDS
xdata	SEGMENT
$unwind$main DD	010401H
	DD	04204H
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$printf DD 011801H
	DD	06218H
xdata	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$_vfprintf_l DD 011801H
	DD	06218H
xdata	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
main	PROC
; File C:\Users\libit\source\repos\L048\L048\L048.cpp
; Line 25
$LN3:
	sub	rsp, 40					; 00000028H
; Line 26
	lea	rcx, OFFSET FLAT:$SG5097
	call	printf
; Line 27
	mov	ecx, 4659				; 00001233H
	call	?my_srand@@YAXI@Z			; my_srand
; Line 28
	call	?my_rand@@YAHXZ				; my_rand
	mov	edx, eax
	lea	rcx, OFFSET FLAT:$SG5098
	call	printf
; Line 29
	call	?my_rand@@YAHXZ				; my_rand
	mov	edx, eax
	lea	rcx, OFFSET FLAT:$SG5099
	call	printf
; Line 30
	call	?my_rand@@YAHXZ				; my_rand
	mov	edx, eax
	lea	rcx, OFFSET FLAT:$SG5100
	call	printf
; Line 31
	call	?my_rand@@YAHXZ				; my_rand
	mov	edx, eax
	lea	rcx, OFFSET FLAT:$SG5101
	call	printf
; Line 32
	xor	eax, eax
	add	rsp, 40					; 00000028H
	ret	0
main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
?my_rand@@YAHXZ PROC					; my_rand
; File C:\Users\libit\source\repos\L048\L048\L048.cpp
; Line 18
	imul	eax, DWORD PTR ?rand_state@@3IA, 1664525 ; 0019660dH
	mov	DWORD PTR ?rand_state@@3IA, eax
; Line 19
	mov	eax, DWORD PTR ?rand_state@@3IA
	mov	rcx, 10103904223			; 000000025a3d57dfH
	add	rax, rcx
	mov	DWORD PTR ?rand_state@@3IA, eax
; Line 21
	mov	eax, DWORD PTR ?rand_state@@3IA
; Line 22
	ret	0
?my_rand@@YAHXZ ENDP					; my_rand
_TEXT	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
init$ = 8
?my_srand@@YAXI@Z PROC					; my_srand
; File C:\Users\libit\source\repos\L048\L048\L048.cpp
; Line 12
	mov	DWORD PTR [rsp+8], ecx
; Line 13
	mov	eax, DWORD PTR init$[rsp]
	mov	DWORD PTR ?rand_state@@3IA, eax
; Line 14
	ret	0
?my_srand@@YAXI@Z ENDP					; my_srand
_TEXT	ENDS
; Function compile flags: /Odtp
;	COMDAT printf
_TEXT	SEGMENT
_Result$ = 32
_ArgList$ = 40
_Format$ = 64
printf	PROC						; COMDAT
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.17763.0\ucrt\stdio.h
; Line 954
$LN3:
	mov	QWORD PTR [rsp+8], rcx
	mov	QWORD PTR [rsp+16], rdx
	mov	QWORD PTR [rsp+24], r8
	mov	QWORD PTR [rsp+32], r9
	sub	rsp, 56					; 00000038H
; Line 957
	lea	rax, QWORD PTR _Format$[rsp+8]
	mov	QWORD PTR _ArgList$[rsp], rax
; Line 958
	mov	ecx, 1
	call	__acrt_iob_func
	mov	r9, QWORD PTR _ArgList$[rsp]
	xor	r8d, r8d
	mov	rdx, QWORD PTR _Format$[rsp]
	mov	rcx, rax
	call	_vfprintf_l
	mov	DWORD PTR _Result$[rsp], eax
; Line 959
	mov	QWORD PTR _ArgList$[rsp], 0
; Line 960
	mov	eax, DWORD PTR _Result$[rsp]
; Line 961
	add	rsp, 56					; 00000038H
	ret	0
printf	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
;	COMDAT _vfprintf_l
_TEXT	SEGMENT
_Stream$ = 64
_Format$ = 72
_Locale$ = 80
_ArgList$ = 88
_vfprintf_l PROC					; COMDAT
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.17763.0\ucrt\stdio.h
; Line 642
$LN3:
	mov	QWORD PTR [rsp+32], r9
	mov	QWORD PTR [rsp+24], r8
	mov	QWORD PTR [rsp+16], rdx
	mov	QWORD PTR [rsp+8], rcx
	sub	rsp, 56					; 00000038H
; Line 643
	call	__local_stdio_printf_options
	mov	rcx, QWORD PTR _ArgList$[rsp]
	mov	QWORD PTR [rsp+32], rcx
	mov	r9, QWORD PTR _Locale$[rsp]
	mov	r8, QWORD PTR _Format$[rsp]
	mov	rdx, QWORD PTR _Stream$[rsp]
	mov	rcx, QWORD PTR [rax]
	call	__stdio_common_vfprintf
; Line 644
	add	rsp, 56					; 00000038H
	ret	0
_vfprintf_l ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
;	COMDAT __local_stdio_printf_options
_TEXT	SEGMENT
__local_stdio_printf_options PROC			; COMDAT
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.17763.0\ucrt\corecrt_stdio_config.h
; Line 88
	lea	rax, OFFSET FLAT:?_OptionsStorage@?1??__local_stdio_printf_options@@9@4_KA ; `__local_stdio_printf_options'::`2'::_OptionsStorage
; Line 89
	ret	0
__local_stdio_printf_options ENDP
_TEXT	ENDS
END
