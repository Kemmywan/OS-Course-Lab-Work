
main.c.dbg.obj:     file format elf64-littleaarch64


Disassembly of section .text:

0000000000000000 <main>:
   0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
   4:	910003fd 	mov	x29, sp
   8:	a90153f3 	stp	x19, x20, [sp, #16]
   c:	f90013f5 	str	x21, [sp, #32]
  10:	aa0003f3 	mov	x19, x0
  14:	aa0103f4 	mov	x20, x1
  18:	90000000 	adrp	x0, 0 <main>
  1c:	f9400000 	ldr	x0, [x0]
  20:	94000000 	bl	0 <lock_init>
  24:	2a0003f5 	mov	w21, w0
  28:	90000000 	adrp	x0, 0 <main>
  2c:	f9400000 	ldr	x0, [x0]
  30:	94000000 	bl	0 <printk>
  34:	35000935 	cbnz	w21, 158 <main+0x158>
  38:	94000000 	bl	0 <uart_init>
  3c:	90000000 	adrp	x0, 0 <main>
  40:	f9400000 	ldr	x0, [x0]
  44:	94000000 	bl	0 <printk>
  48:	52800000 	mov	w0, #0x0                   	// #0
  4c:	94000000 	bl	0 <init_per_cpu_info>
  50:	90000000 	adrp	x0, 0 <main>
  54:	f9400000 	ldr	x0, [x0]
  58:	94000000 	bl	0 <printk>
  5c:	aa1403e0 	mov	x0, x20
  60:	94000000 	bl	0 <mm_init>
  64:	90000000 	adrp	x0, 0 <main>
  68:	f9400000 	ldr	x0, [x0]
  6c:	94000000 	bl	0 <printk>
  70:	90000000 	adrp	x0, 0 <main>
  74:	f9400005 	ldr	x5, [x0]
  78:	90000000 	adrp	x0, 0 <main>
  7c:	f9400002 	ldr	x2, [x0]
  80:	d2800064 	mov	x4, #0x3                   	// #3
  84:	d2820003 	mov	x3, #0x1000                	// #4096
  88:	d2c02000 	mov	x0, #0x10000000000         	// #1099511627776
  8c:	8b000042 	add	x2, x2, x0
  90:	b2607fe1 	mov	x1, #0xffffffff00000000    	// #-4294967296
  94:	b2585fe0 	mov	x0, #0xffffff0000000000    	// #-1099511627776
  98:	8b0000a0 	add	x0, x5, x0
  9c:	94000000 	bl	0 <map_range_in_pgtbl_kernel>
  a0:	94000000 	bl	0 <arch_interrupt_init>
  a4:	94000000 	bl	0 <timer_init>
  a8:	90000000 	adrp	x0, 0 <main>
  ac:	f9400000 	ldr	x0, [x0]
  b0:	94000000 	bl	0 <printk>
  b4:	94000000 	bl	0 <pmu_init>
  b8:	90000000 	adrp	x0, 0 <main>
  bc:	f9400000 	ldr	x0, [x0]
  c0:	94000000 	bl	0 <printk>
  c4:	90000000 	adrp	x0, 0 <main>
  c8:	f9400000 	ldr	x0, [x0]
  cc:	94000000 	bl	0 <sched_init>
  d0:	90000000 	adrp	x0, 0 <main>
  d4:	f9400000 	ldr	x0, [x0]
  d8:	94000000 	bl	0 <printk>
  dc:	94000000 	bl	0 <init_fpu_owner_locks>
  e0:	aa1303e0 	mov	x0, x19
  e4:	94000000 	bl	0 <enable_smp_cores>
  e8:	90000000 	adrp	x0, 0 <main>
  ec:	f9400000 	ldr	x0, [x0]
  f0:	94000000 	bl	0 <printk>
  f4:	94000000 	bl	0 <disable_fpu_usage>
  f8:	94000000 	bl	0 <create_root_thread>
  fc:	90000000 	adrp	x0, 0 <main>
 100:	f9400000 	ldr	x0, [x0]
 104:	94000000 	bl	0 <printk>
 108:	90000000 	adrp	x0, 0 <main>
 10c:	f9400001 	ldr	x1, [x0]
 110:	90000000 	adrp	x0, 0 <main>
 114:	f9400000 	ldr	x0, [x0]
 118:	94000000 	bl	0 <printk>
 11c:	90000000 	adrp	x0, 0 <main>
 120:	f9400000 	ldr	x0, [x0]
 124:	f9400000 	ldr	x0, [x0]
 128:	f9400400 	ldr	x0, [x0, #8]
 12c:	d63f0000 	blr	x0
 130:	94000000 	bl	0 <switch_context>
 134:	94000000 	bl	0 <eret_to_thread>
 138:	528011e2 	mov	w2, #0x8f                  	// #143
 13c:	90000000 	adrp	x0, 0 <main>
 140:	f9400001 	ldr	x1, [x0]
 144:	90000000 	adrp	x0, 0 <main>
 148:	f9400000 	ldr	x0, [x0]
 14c:	94000000 	bl	0 <printk>
 150:	94000000 	bl	0 <backtrace>
 154:	14000000 	b	154 <main+0x154>
 158:	90000000 	adrp	x0, 0 <main>
 15c:	f9400003 	ldr	x3, [x0]
 160:	52800842 	mov	w2, #0x42                  	// #66
 164:	90000000 	adrp	x0, 0 <main>
 168:	f9400001 	ldr	x1, [x0]
 16c:	90000000 	adrp	x0, 0 <main>
 170:	f9400000 	ldr	x0, [x0]
 174:	94000000 	bl	0 <printk>
 178:	94000000 	bl	0 <backtrace>
 17c:	14000000 	b	17c <main+0x17c>
	...

0000000000000220 <secondary_start>:
 220:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
 224:	910003fd 	mov	x29, sp
 228:	f9000bf3 	str	x19, [sp, #16]
 22c:	2a0003f3 	mov	w19, w0
 230:	94000000 	bl	0 <init_per_cpu_info>
 234:	90000000 	adrp	x0, 0 <main>
 238:	f9400005 	ldr	x5, [x0]
 23c:	53134a61 	lsl	w1, w19, #13
 240:	d3747e62 	ubfiz	x2, x19, #12, #32
 244:	90000000 	adrp	x0, 0 <main>
 248:	f9400000 	ldr	x0, [x0]
 24c:	8b000042 	add	x2, x2, x0
 250:	d2800064 	mov	x4, #0x3                   	// #3
 254:	d2820003 	mov	x3, #0x1000                	// #4096
 258:	d2c02000 	mov	x0, #0x10000000000         	// #1099511627776
 25c:	8b000042 	add	x2, x2, x0
 260:	b2607fe0 	mov	x0, #0xffffffff00000000    	// #-4294967296
 264:	8b000021 	add	x1, x1, x0
 268:	b2585fe0 	mov	x0, #0xffffff0000000000    	// #-1099511627776
 26c:	8b0000a0 	add	x0, x5, x0
 270:	94000000 	bl	0 <map_range_in_pgtbl_kernel>
 274:	94000000 	bl	0 <arch_interrupt_init_per_cpu>
 278:	90000000 	adrp	x0, 0 <main>
 27c:	f9400000 	ldr	x0, [x0]
 280:	52800021 	mov	w1, #0x1                   	// #1
 284:	38334801 	strb	w1, [x0, w19, uxtw]
 288:	94000000 	bl	0 <timer_init>
 28c:	94000000 	bl	0 <pmu_init>
 290:	94000000 	bl	0 <disable_fpu_usage>
 294:	90000000 	adrp	x0, 0 <main>
 298:	f9400000 	ldr	x0, [x0]
 29c:	f9400000 	ldr	x0, [x0]
 2a0:	f9400400 	ldr	x0, [x0, #8]
 2a4:	d63f0000 	blr	x0
 2a8:	94000000 	bl	0 <switch_context>
 2ac:	94000000 	bl	0 <eret_to_thread>
 2b0:	f9400bf3 	ldr	x19, [sp, #16]
 2b4:	a8c27bfd 	ldp	x29, x30, [sp], #32
 2b8:	d65f03c0 	ret
 2bc:	d503201f 	nop
	...

Disassembly of section .bss:

0000000000000000 <empty_page>:
	...

Disassembly of section .rodata.str1.8:

0000000000000000 <.rodata.str1.8>:
   0:	464e495b 	.inst	0x464e495b ; undefined
   4:	5b205d4f 	.inst	0x5b205d4f ; undefined
   8:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
   c:	205d6572 	.inst	0x205d6572 ; undefined
  10:	6b636f6c 	.inst	0x6b636f6c ; undefined
  14:	696e6920 	ldpsw	x0, x26, [x9, #-144]
  18:	69662074 	ldpsw	x20, x8, [x3, #-208]
  1c:	6873696e 	.inst	0x6873696e ; undefined
  20:	000a6465 	.inst	0x000a6465 ; undefined
  24:	00000000 	.inst	0x00000000 ; undefined
  28:	20746572 	.inst	0x20746572 ; undefined
  2c:	30203d21 	adr	x1, 407d1 <secondary_start+0x405b1>
	...
  38:	3a475542 	.inst	0x3a475542 ; undefined
  3c:	3a732520 	.inst	0x3a732520 ; undefined
  40:	6f206425 	sqshlu	v5.4s, v1.4s, #0
  44:	6528206e 	.inst	0x6528206e ; undefined
  48:	29727078 	ldp	w24, w28, [x3, #-112]
  4c:	0a732520 	bic	w0, w9, w19, lsr #9
	...
  58:	464e495b 	.inst	0x464e495b ; undefined
  5c:	5b205d4f 	.inst	0x5b205d4f ; undefined
  60:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
  64:	205d6572 	.inst	0x205d6572 ; undefined
  68:	74726175 	.inst	0x74726175 ; undefined
  6c:	696e6920 	ldpsw	x0, x26, [x9, #-144]
  70:	69662074 	ldpsw	x20, x8, [x3, #-208]
  74:	6873696e 	.inst	0x6873696e ; undefined
  78:	000a6465 	.inst	0x000a6465 ; undefined
  7c:	00000000 	.inst	0x00000000 ; undefined
  80:	464e495b 	.inst	0x464e495b ; undefined
  84:	5b205d4f 	.inst	0x5b205d4f ; undefined
  88:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
  8c:	205d6572 	.inst	0x205d6572 ; undefined
  90:	2d726570 	ldp	s16, s25, [x11, #-112]
  94:	20555043 	.inst	0x20555043 ; undefined
  98:	6f666e69 	.inst	0x6f666e69 ; undefined
  9c:	696e6920 	ldpsw	x0, x26, [x9, #-144]
  a0:	69662074 	ldpsw	x20, x8, [x3, #-208]
  a4:	6873696e 	.inst	0x6873696e ; undefined
  a8:	000a6465 	.inst	0x000a6465 ; undefined
  ac:	00000000 	.inst	0x00000000 ; undefined
  b0:	464e495b 	.inst	0x464e495b ; undefined
  b4:	5b205d4f 	.inst	0x5b205d4f ; undefined
  b8:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
  bc:	205d6572 	.inst	0x205d6572 ; undefined
  c0:	69206d6d 	stgp	x13, x27, [x11, #-1024]
  c4:	2074696e 	.inst	0x2074696e ; undefined
  c8:	696e6966 	ldpsw	x6, x26, [x11, #-144]
  cc:	64656873 	.inst	0x64656873 ; undefined
  d0:	0000000a 	.inst	0x0000000a ; undefined
  d4:	00000000 	.inst	0x00000000 ; undefined
  d8:	464e495b 	.inst	0x464e495b ; undefined
  dc:	5b205d4f 	.inst	0x5b205d4f ; undefined
  e0:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
  e4:	205d6572 	.inst	0x205d6572 ; undefined
  e8:	65746e69 	fnmls	z9.h, p3/m, z19.h, z20.h
  ec:	70757272 	adr	x18, eaf3b <secondary_start+0xead1b>
  f0:	6e692074 	usubl2	v20.4s, v3.8h, v9.8h
  f4:	66207469 	.inst	0x66207469 ; undefined
  f8:	73696e69 	.inst	0x73696e69 ; undefined
  fc:	0a646568 	bic	w8, w11, w4, lsr #25
	...
 108:	464e495b 	.inst	0x464e495b ; undefined
 10c:	5b205d4f 	.inst	0x5b205d4f ; undefined
 110:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
 114:	205d6572 	.inst	0x205d6572 ; undefined
 118:	20756d70 	.inst	0x20756d70 ; undefined
 11c:	74696e69 	.inst	0x74696e69 ; undefined
 120:	6e696620 	umax	v0.8h, v17.8h, v9.8h
 124:	65687369 	fnmls	z9.h, p4/m, z27.h, z8.h
 128:	00000a64 	.inst	0x00000a64 ; undefined
 12c:	00000000 	.inst	0x00000000 ; undefined
 130:	464e495b 	.inst	0x464e495b ; undefined
 134:	5b205d4f 	.inst	0x5b205d4f ; undefined
 138:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
 13c:	205d6572 	.inst	0x205d6572 ; undefined
 140:	65686373 	fnmls	z19.h, p0/m, z27.h, z8.h
 144:	6e692064 	usubl2	v4.4s, v3.8h, v9.8h
 148:	66207469 	.inst	0x66207469 ; undefined
 14c:	73696e69 	.inst	0x73696e69 ; undefined
 150:	0a646568 	bic	w8, w11, w4, lsr #25
 154:	00000000 	.inst	0x00000000 ; undefined
 158:	464e495b 	.inst	0x464e495b ; undefined
 15c:	5b205d4f 	.inst	0x5b205d4f ; undefined
 160:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
 164:	205d6572 	.inst	0x205d6572 ; undefined
 168:	746f6f62 	.inst	0x746f6f62 ; undefined
 16c:	6c756d20 	ldnp	d0, d27, [x9, #-176]
 170:	6f636974 	umlsl2	v20.4s, v11.8h, v3.h[6]
 174:	66206572 	.inst	0x66206572 ; undefined
 178:	73696e69 	.inst	0x73696e69 ; undefined
 17c:	0a646568 	bic	w8, w11, w4, lsr #25
	...
 188:	464e495b 	.inst	0x464e495b ; undefined
 18c:	5b205d4f 	.inst	0x5b205d4f ; undefined
 190:	6f436843 	umlsl2	v3.4s, v2.8h, v3.h[4]
 194:	205d6572 	.inst	0x205d6572 ; undefined
 198:	61657263 	.inst	0x61657263 ; undefined
 19c:	69206574 	stgp	x20, x25, [x11, #-1024]
 1a0:	6974696e 	ldpsw	x14, x26, [x11, #-96]
 1a4:	74206c61 	.inst	0x74206c61 ; undefined
 1a8:	61657268 	.inst	0x61657268 ; undefined
 1ac:	6f642064 	umlal2	v4.4s, v3.8h, v4.h[2]
 1b0:	000a656e 	.inst	0x000a656e ; undefined
 1b4:	00000000 	.inst	0x00000000 ; undefined
 1b8:	464e495b 	.inst	0x464e495b ; undefined
 1bc:	45205d4f 	.inst	0x45205d4f ; undefined
 1c0:	6f20646e 	sqshlu	v14.4s, v3.4s, #0
 1c4:	654b2066 	.inst	0x654b2066 ; undefined
 1c8:	6c656e72 	ldnp	d18, d27, [x19, #-432]
 1cc:	65684320 	fnmla	z0.h, p0/m, z25.h, z8.h
 1d0:	6f706b63 	umlsl2	v3.4s, v27.8h, v0.h[7]
 1d4:	73746e69 	.inst	0x73746e69 ; undefined
 1d8:	7325203a 	.inst	0x7325203a ; undefined
 1dc:	0000000a 	.inst	0x0000000a ; undefined
 1e0:	3a475542 	.inst	0x3a475542 ; undefined
 1e4:	3a732520 	.inst	0x3a732520 ; undefined
 1e8:	5b206425 	.inst	0x5b206425 ; undefined
 1ec:	41544146 	.inst	0x41544146 ; undefined
 1f0:	53205d4c 	.inst	0x53205d4c ; undefined
 1f4:	6c756f68 	ldnp	d8, d27, [x27, #-176]
 1f8:	656e2064 	fmls	z4.h, p0/m, z3.h, z14.h
 1fc:	20726576 	.inst	0x20726576 ; undefined
 200:	68206562 	.inst	0x68206562 ; undefined
 204:	21657265 	.inst	0x21657265 ; undefined
 208:	Address 0x0000000000000208 is out of bounds.


Disassembly of section .rodata:

0000000000000000 <__func__.2328>:
   0:	6e69616d 	rsubhn2	v13.8h, v11.4s, v9.4s
	...

Disassembly of section .init.serial:

0000000000000000 <serial_number>:
       0:	45447830 	umullb	z16.h, z1.b, z4.b
       4:	45424441 	saddwt	z1.h, z2.h, z2.b
       8:	00004645 	.inst	0x00004645 ; undefined
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	43434700 	.inst	0x43434700 ; undefined
   4:	5528203a 	.inst	0x5528203a ; undefined
   8:	746e7562 	.inst	0x746e7562 ; undefined
   c:	2e392075 	usubl	v21.8h, v3.8b, v25.8b
  10:	2d302e34 	stp	s20, s11, [x17, #-128]
  14:	75627531 	.inst	0x75627531 ; undefined
  18:	3175746e 	adds	w14, w3, #0xd5d, lsl #12
  1c:	2e30327e 	usubw	v30.8h, v19.8h, v16.8b
  20:	322e3430 	orr	w16, w1, #0xfffc0000
  24:	2e392029 	usubl	v9.8h, v1.8b, v25.8b
  28:	00302e34 	.inst	0x00302e34 ; NYI

Disassembly of section .eh_frame:

0000000000000000 <.eh_frame>:
   0:	00000010 	.inst	0x00000010 ; undefined
   4:	00000000 	.inst	0x00000000 ; undefined
   8:	00527a01 	.inst	0x00527a01 ; undefined
   c:	011e7804 	.inst	0x011e7804 ; undefined
  10:	001f0c1b 	.inst	0x001f0c1b ; undefined
  14:	0000001c 	.inst	0x0000001c ; undefined
  18:	00000018 	.inst	0x00000018 ; undefined
  1c:	00000000 	.inst	0x00000000 ; undefined
  20:	00000180 	.inst	0x00000180 ; undefined
  24:	300e4100 	adr	x0, 1c845 <secondary_start+0x1c625>
  28:	059e069d 	mov	z29.s, p14/z, #52
  2c:	94049343 	bl	124d38 <secondary_start+0x124b18>
  30:	00029503 	.inst	0x00029503 ; undefined
  34:	00000020 	.inst	0x00000020 ; undefined
  38:	00000038 	.inst	0x00000038 ; undefined
  3c:	00000000 	.inst	0x00000000 ; undefined
  40:	0000009c 	.inst	0x0000009c ; undefined
  44:	200e4100 	.inst	0x200e4100 ; undefined
  48:	039e049d 	.inst	0x039e049d ; undefined
  4c:	63029342 	.inst	0x63029342 ; undefined
  50:	0ed3ddde 	.inst	0x0ed3ddde ; undefined
  54:	00000000 	.inst	0x00000000 ; undefined
