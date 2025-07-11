                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module pisca
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _delay_meio_segundo
                                     12 	.globl _CY
                                     13 	.globl _AC
                                     14 	.globl _F0
                                     15 	.globl _RS1
                                     16 	.globl _RS0
                                     17 	.globl _OV
                                     18 	.globl _F1
                                     19 	.globl _P
                                     20 	.globl _PS
                                     21 	.globl _PT1
                                     22 	.globl _PX1
                                     23 	.globl _PT0
                                     24 	.globl _PX0
                                     25 	.globl _RD
                                     26 	.globl _WR
                                     27 	.globl _T1
                                     28 	.globl _T0
                                     29 	.globl _INT1
                                     30 	.globl _INT0
                                     31 	.globl _TXD
                                     32 	.globl _RXD
                                     33 	.globl _P3_7
                                     34 	.globl _P3_6
                                     35 	.globl _P3_5
                                     36 	.globl _P3_4
                                     37 	.globl _P3_3
                                     38 	.globl _P3_2
                                     39 	.globl _P3_1
                                     40 	.globl _P3_0
                                     41 	.globl _EA
                                     42 	.globl _ES
                                     43 	.globl _ET1
                                     44 	.globl _EX1
                                     45 	.globl _ET0
                                     46 	.globl _EX0
                                     47 	.globl _P2_7
                                     48 	.globl _P2_6
                                     49 	.globl _P2_5
                                     50 	.globl _P2_4
                                     51 	.globl _P2_3
                                     52 	.globl _P2_2
                                     53 	.globl _P2_1
                                     54 	.globl _P2_0
                                     55 	.globl _SM0
                                     56 	.globl _SM1
                                     57 	.globl _SM2
                                     58 	.globl _REN
                                     59 	.globl _TB8
                                     60 	.globl _RB8
                                     61 	.globl _TI
                                     62 	.globl _RI
                                     63 	.globl _P1_7
                                     64 	.globl _P1_6
                                     65 	.globl _P1_5
                                     66 	.globl _P1_4
                                     67 	.globl _P1_3
                                     68 	.globl _P1_2
                                     69 	.globl _P1_1
                                     70 	.globl _P1_0
                                     71 	.globl _TF1
                                     72 	.globl _TR1
                                     73 	.globl _TF0
                                     74 	.globl _TR0
                                     75 	.globl _IE1
                                     76 	.globl _IT1
                                     77 	.globl _IE0
                                     78 	.globl _IT0
                                     79 	.globl _P0_7
                                     80 	.globl _P0_6
                                     81 	.globl _P0_5
                                     82 	.globl _P0_4
                                     83 	.globl _P0_3
                                     84 	.globl _P0_2
                                     85 	.globl _P0_1
                                     86 	.globl _P0_0
                                     87 	.globl _B
                                     88 	.globl _ACC
                                     89 	.globl _PSW
                                     90 	.globl _IP
                                     91 	.globl _P3
                                     92 	.globl _IE
                                     93 	.globl _P2
                                     94 	.globl _SBUF
                                     95 	.globl _SCON
                                     96 	.globl _P1
                                     97 	.globl _TH1
                                     98 	.globl _TH0
                                     99 	.globl _TL1
                                    100 	.globl _TL0
                                    101 	.globl _TMOD
                                    102 	.globl _TCON
                                    103 	.globl _PCON
                                    104 	.globl _DPH
                                    105 	.globl _DPL
                                    106 	.globl _SP
                                    107 	.globl _P0
                                    108 	.globl _delay_meio_segundo
                                    109 	.globl _main
                                    110 ;--------------------------------------------------------
                                    111 ; special function registers
                                    112 ;--------------------------------------------------------
                                    113 	.area RSEG    (ABS,DATA)
      000000                        114 	.org 0x0000
                           000080   115 _P0	=	0x0080
                           000081   116 _SP	=	0x0081
                           000082   117 _DPL	=	0x0082
                           000083   118 _DPH	=	0x0083
                           000087   119 _PCON	=	0x0087
                           000088   120 _TCON	=	0x0088
                           000089   121 _TMOD	=	0x0089
                           00008A   122 _TL0	=	0x008a
                           00008B   123 _TL1	=	0x008b
                           00008C   124 _TH0	=	0x008c
                           00008D   125 _TH1	=	0x008d
                           000090   126 _P1	=	0x0090
                           000098   127 _SCON	=	0x0098
                           000099   128 _SBUF	=	0x0099
                           0000A0   129 _P2	=	0x00a0
                           0000A8   130 _IE	=	0x00a8
                           0000B0   131 _P3	=	0x00b0
                           0000B8   132 _IP	=	0x00b8
                           0000D0   133 _PSW	=	0x00d0
                           0000E0   134 _ACC	=	0x00e0
                           0000F0   135 _B	=	0x00f0
                                    136 ;--------------------------------------------------------
                                    137 ; special function bits
                                    138 ;--------------------------------------------------------
                                    139 	.area RSEG    (ABS,DATA)
      000000                        140 	.org 0x0000
                           000080   141 _P0_0	=	0x0080
                           000081   142 _P0_1	=	0x0081
                           000082   143 _P0_2	=	0x0082
                           000083   144 _P0_3	=	0x0083
                           000084   145 _P0_4	=	0x0084
                           000085   146 _P0_5	=	0x0085
                           000086   147 _P0_6	=	0x0086
                           000087   148 _P0_7	=	0x0087
                           000088   149 _IT0	=	0x0088
                           000089   150 _IE0	=	0x0089
                           00008A   151 _IT1	=	0x008a
                           00008B   152 _IE1	=	0x008b
                           00008C   153 _TR0	=	0x008c
                           00008D   154 _TF0	=	0x008d
                           00008E   155 _TR1	=	0x008e
                           00008F   156 _TF1	=	0x008f
                           000090   157 _P1_0	=	0x0090
                           000091   158 _P1_1	=	0x0091
                           000092   159 _P1_2	=	0x0092
                           000093   160 _P1_3	=	0x0093
                           000094   161 _P1_4	=	0x0094
                           000095   162 _P1_5	=	0x0095
                           000096   163 _P1_6	=	0x0096
                           000097   164 _P1_7	=	0x0097
                           000098   165 _RI	=	0x0098
                           000099   166 _TI	=	0x0099
                           00009A   167 _RB8	=	0x009a
                           00009B   168 _TB8	=	0x009b
                           00009C   169 _REN	=	0x009c
                           00009D   170 _SM2	=	0x009d
                           00009E   171 _SM1	=	0x009e
                           00009F   172 _SM0	=	0x009f
                           0000A0   173 _P2_0	=	0x00a0
                           0000A1   174 _P2_1	=	0x00a1
                           0000A2   175 _P2_2	=	0x00a2
                           0000A3   176 _P2_3	=	0x00a3
                           0000A4   177 _P2_4	=	0x00a4
                           0000A5   178 _P2_5	=	0x00a5
                           0000A6   179 _P2_6	=	0x00a6
                           0000A7   180 _P2_7	=	0x00a7
                           0000A8   181 _EX0	=	0x00a8
                           0000A9   182 _ET0	=	0x00a9
                           0000AA   183 _EX1	=	0x00aa
                           0000AB   184 _ET1	=	0x00ab
                           0000AC   185 _ES	=	0x00ac
                           0000AF   186 _EA	=	0x00af
                           0000B0   187 _P3_0	=	0x00b0
                           0000B1   188 _P3_1	=	0x00b1
                           0000B2   189 _P3_2	=	0x00b2
                           0000B3   190 _P3_3	=	0x00b3
                           0000B4   191 _P3_4	=	0x00b4
                           0000B5   192 _P3_5	=	0x00b5
                           0000B6   193 _P3_6	=	0x00b6
                           0000B7   194 _P3_7	=	0x00b7
                           0000B0   195 _RXD	=	0x00b0
                           0000B1   196 _TXD	=	0x00b1
                           0000B2   197 _INT0	=	0x00b2
                           0000B3   198 _INT1	=	0x00b3
                           0000B4   199 _T0	=	0x00b4
                           0000B5   200 _T1	=	0x00b5
                           0000B6   201 _WR	=	0x00b6
                           0000B7   202 _RD	=	0x00b7
                           0000B8   203 _PX0	=	0x00b8
                           0000B9   204 _PT0	=	0x00b9
                           0000BA   205 _PX1	=	0x00ba
                           0000BB   206 _PT1	=	0x00bb
                           0000BC   207 _PS	=	0x00bc
                           0000D0   208 _P	=	0x00d0
                           0000D1   209 _F1	=	0x00d1
                           0000D2   210 _OV	=	0x00d2
                           0000D3   211 _RS0	=	0x00d3
                           0000D4   212 _RS1	=	0x00d4
                           0000D5   213 _F0	=	0x00d5
                           0000D6   214 _AC	=	0x00d6
                           0000D7   215 _CY	=	0x00d7
                                    216 ;--------------------------------------------------------
                                    217 ; overlayable register banks
                                    218 ;--------------------------------------------------------
                                    219 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        220 	.ds 8
                                    221 ;--------------------------------------------------------
                                    222 ; internal ram data
                                    223 ;--------------------------------------------------------
                                    224 	.area DSEG    (DATA)
                                    225 ;--------------------------------------------------------
                                    226 ; overlayable items in internal ram
                                    227 ;--------------------------------------------------------
                                    228 	.area	OSEG    (OVR,DATA)
                                    229 ;--------------------------------------------------------
                                    230 ; Stack segment in internal ram
                                    231 ;--------------------------------------------------------
                                    232 	.area SSEG
      000008                        233 __start__stack:
      000008                        234 	.ds	1
                                    235 
                                    236 ;--------------------------------------------------------
                                    237 ; indirectly addressable internal ram data
                                    238 ;--------------------------------------------------------
                                    239 	.area ISEG    (DATA)
                                    240 ;--------------------------------------------------------
                                    241 ; absolute internal ram data
                                    242 ;--------------------------------------------------------
                                    243 	.area IABS    (ABS,DATA)
                                    244 	.area IABS    (ABS,DATA)
                                    245 ;--------------------------------------------------------
                                    246 ; bit data
                                    247 ;--------------------------------------------------------
                                    248 	.area BSEG    (BIT)
                                    249 ;--------------------------------------------------------
                                    250 ; paged external ram data
                                    251 ;--------------------------------------------------------
                                    252 	.area PSEG    (PAG,XDATA)
                                    253 ;--------------------------------------------------------
                                    254 ; uninitialized external ram data
                                    255 ;--------------------------------------------------------
                                    256 	.area XSEG    (XDATA)
                                    257 ;--------------------------------------------------------
                                    258 ; absolute external ram data
                                    259 ;--------------------------------------------------------
                                    260 	.area XABS    (ABS,XDATA)
                                    261 ;--------------------------------------------------------
                                    262 ; initialized external ram data
                                    263 ;--------------------------------------------------------
                                    264 	.area XISEG   (XDATA)
                                    265 	.area HOME    (CODE)
                                    266 	.area GSINIT0 (CODE)
                                    267 	.area GSINIT1 (CODE)
                                    268 	.area GSINIT2 (CODE)
                                    269 	.area GSINIT3 (CODE)
                                    270 	.area GSINIT4 (CODE)
                                    271 	.area GSINIT5 (CODE)
                                    272 	.area GSINIT  (CODE)
                                    273 	.area GSFINAL (CODE)
                                    274 	.area CSEG    (CODE)
                                    275 ;--------------------------------------------------------
                                    276 ; interrupt vector
                                    277 ;--------------------------------------------------------
                                    278 	.area HOME    (CODE)
      000000                        279 __interrupt_vect:
      000000 02 00 4C         [24]  280 	ljmp	__sdcc_gsinit_startup
                                    281 ; restartable atomic support routines
      000003                        282 	.ds	5
      000008                        283 sdcc_atomic_exchange_rollback_start::
      000008 00               [12]  284 	nop
      000009 00               [12]  285 	nop
      00000A                        286 sdcc_atomic_exchange_pdata_impl:
      00000A E2               [24]  287 	movx	a, @r0
      00000B FB               [12]  288 	mov	r3, a
      00000C EA               [12]  289 	mov	a, r2
      00000D F2               [24]  290 	movx	@r0, a
      00000E 80 2C            [24]  291 	sjmp	sdcc_atomic_exchange_exit
      000010 00               [12]  292 	nop
      000011 00               [12]  293 	nop
      000012                        294 sdcc_atomic_exchange_xdata_impl:
      000012 E0               [24]  295 	movx	a, @dptr
      000013 FB               [12]  296 	mov	r3, a
      000014 EA               [12]  297 	mov	a, r2
      000015 F0               [24]  298 	movx	@dptr, a
      000016 80 24            [24]  299 	sjmp	sdcc_atomic_exchange_exit
      000018                        300 sdcc_atomic_compare_exchange_idata_impl:
      000018 E6               [12]  301 	mov	a, @r0
      000019 B5 02 02         [24]  302 	cjne	a, ar2, .+#5
      00001C EB               [12]  303 	mov	a, r3
      00001D F6               [12]  304 	mov	@r0, a
      00001E 22               [24]  305 	ret
      00001F 00               [12]  306 	nop
      000020                        307 sdcc_atomic_compare_exchange_pdata_impl:
      000020 E2               [24]  308 	movx	a, @r0
      000021 B5 02 02         [24]  309 	cjne	a, ar2, .+#5
      000024 EB               [12]  310 	mov	a, r3
      000025 F2               [24]  311 	movx	@r0, a
      000026 22               [24]  312 	ret
      000027 00               [12]  313 	nop
      000028                        314 sdcc_atomic_compare_exchange_xdata_impl:
      000028 E0               [24]  315 	movx	a, @dptr
      000029 B5 02 02         [24]  316 	cjne	a, ar2, .+#5
      00002C EB               [12]  317 	mov	a, r3
      00002D F0               [24]  318 	movx	@dptr, a
      00002E 22               [24]  319 	ret
      00002F                        320 sdcc_atomic_exchange_rollback_end::
                                    321 
      00002F                        322 sdcc_atomic_exchange_gptr_impl::
      00002F 30 F6 E0         [24]  323 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000032 A8 82            [24]  324 	mov	r0, dpl
      000034 20 F5 D3         [24]  325 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000037                        326 sdcc_atomic_exchange_idata_impl:
      000037 EA               [12]  327 	mov	a, r2
      000038 C6               [12]  328 	xch	a, @r0
      000039 F5 82            [12]  329 	mov	dpl, a
      00003B 22               [24]  330 	ret
      00003C                        331 sdcc_atomic_exchange_exit:
      00003C 8B 82            [24]  332 	mov	dpl, r3
      00003E 22               [24]  333 	ret
      00003F                        334 sdcc_atomic_compare_exchange_gptr_impl::
      00003F 30 F6 E6         [24]  335 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000042 A8 82            [24]  336 	mov	r0, dpl
      000044 20 F5 D9         [24]  337 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000047 80 CF            [24]  338 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    339 ;--------------------------------------------------------
                                    340 ; global & static initialisations
                                    341 ;--------------------------------------------------------
                                    342 	.area HOME    (CODE)
                                    343 	.area GSINIT  (CODE)
                                    344 	.area GSFINAL (CODE)
                                    345 	.area GSINIT  (CODE)
                                    346 	.globl __sdcc_gsinit_startup
                                    347 	.globl __sdcc_program_startup
                                    348 	.globl __start__stack
                                    349 	.globl __mcs51_genXINIT
                                    350 	.globl __mcs51_genXRAMCLEAR
                                    351 	.globl __mcs51_genRAMCLEAR
                                    352 	.area GSFINAL (CODE)
      0000A5 02 00 49         [24]  353 	ljmp	__sdcc_program_startup
                                    354 ;--------------------------------------------------------
                                    355 ; Home
                                    356 ;--------------------------------------------------------
                                    357 	.area HOME    (CODE)
                                    358 	.area HOME    (CODE)
      000049                        359 __sdcc_program_startup:
      000049 02 00 C8         [24]  360 	ljmp	_main
                                    361 ;	return from main will return to caller
                                    362 ;--------------------------------------------------------
                                    363 ; code
                                    364 ;--------------------------------------------------------
                                    365 	.area CSEG    (CODE)
                                    366 ;------------------------------------------------------------
                                    367 ;Allocation info for local variables in function 'delay_meio_segundo'
                                    368 ;------------------------------------------------------------
                                    369 ;i             Allocated to registers r6 r7 
                                    370 ;j             Allocated to registers r4 r5 
                                    371 ;------------------------------------------------------------
                                    372 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/delay.h:7: void delay_meio_segundo(void)
                                    373 ;	-----------------------------------------
                                    374 ;	 function delay_meio_segundo
                                    375 ;	-----------------------------------------
      0000A8                        376 _delay_meio_segundo:
                           000007   377 	ar7 = 0x07
                           000006   378 	ar6 = 0x06
                           000005   379 	ar5 = 0x05
                           000004   380 	ar4 = 0x04
                           000003   381 	ar3 = 0x03
                           000002   382 	ar2 = 0x02
                           000001   383 	ar1 = 0x01
                           000000   384 	ar0 = 0x00
                                    385 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/delay.h:10: for (i = 0; i < 500; i++)
      0000A8 7E 00            [12]  386 	mov	r6,#0x00
      0000AA 7F 00            [12]  387 	mov	r7,#0x00
                                    388 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/delay.h:11: for (j = 0; j < 100; j++);
      0000AC                        389 00110$:
      0000AC 7C 64            [12]  390 	mov	r4,#0x64
      0000AE 7D 00            [12]  391 	mov	r5,#0x00
      0000B0                        392 00105$:
      0000B0 1C               [12]  393 	dec	r4
      0000B1 BC FF 01         [24]  394 	cjne	r4,#0xff,00130$
      0000B4 1D               [12]  395 	dec	r5
      0000B5                        396 00130$:
      0000B5 EC               [12]  397 	mov	a,r4
      0000B6 4D               [12]  398 	orl	a,r5
      0000B7 70 F7            [24]  399 	jnz	00105$
                                    400 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/delay.h:10: for (i = 0; i < 500; i++)
      0000B9 0E               [12]  401 	inc	r6
      0000BA BE 00 01         [24]  402 	cjne	r6,#0x00,00132$
      0000BD 0F               [12]  403 	inc	r7
      0000BE                        404 00132$:
      0000BE C3               [12]  405 	clr	c
      0000BF EE               [12]  406 	mov	a,r6
      0000C0 94 F4            [12]  407 	subb	a,#0xf4
      0000C2 EF               [12]  408 	mov	a,r7
      0000C3 94 01            [12]  409 	subb	a,#0x01
      0000C5 40 E5            [24]  410 	jc	00110$
                                    411 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/delay.h:12: }
      0000C7 22               [24]  412 	ret
                                    413 ;------------------------------------------------------------
                                    414 ;Allocation info for local variables in function 'main'
                                    415 ;------------------------------------------------------------
                                    416 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:27: int main(void)
                                    417 ;	-----------------------------------------
                                    418 ;	 function main
                                    419 ;	-----------------------------------------
      0000C8                        420 _main:
                                    421 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:29: while(1){
      0000C8                        422 00102$:
                                    423 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:30: LED=1;
                                    424 ;	assignBit
      0000C8 D2 90            [12]  425 	setb	_P1_0
                                    426 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:31: delay_meio_segundo();
      0000CA 12 00 A8         [24]  427 	lcall	_delay_meio_segundo
                                    428 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:32: delay_meio_segundo();
      0000CD 12 00 A8         [24]  429 	lcall	_delay_meio_segundo
                                    430 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:33: LED=0;
                                    431 ;	assignBit
      0000D0 C2 90            [12]  432 	clr	_P1_0
                                    433 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:34: delay_meio_segundo();
      0000D2 12 00 A8         [24]  434 	lcall	_delay_meio_segundo
                                    435 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:35: delay_meio_segundo();
      0000D5 12 00 A8         [24]  436 	lcall	_delay_meio_segundo
                                    437 ;	/home/marcelocavl/repositorios/estudando8051/piscaLed/src/pisca.c:38: }
      0000D8 80 EE            [24]  438 	sjmp	00102$
                                    439 	.area CSEG    (CODE)
                                    440 	.area CONST   (CODE)
                                    441 	.area XINIT   (CODE)
                                    442 	.area CABS    (ABS,CODE)
