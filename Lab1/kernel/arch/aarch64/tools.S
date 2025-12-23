
tools.S.dbg.obj:     file format elf64-littleaarch64


Disassembly of section .text:

0000000000000000 <flush_dcache_area>:
   0:	d53b0023 	mrs	x3, ctr_el0
   4:	d503201f 	nop
   8:	d3504c63 	ubfx	x3, x3, #16, #4
   c:	d2800082 	mov	x2, #0x4                   	// #4
  10:	9ac32042 	lsl	x2, x2, x3
  14:	8b010001 	add	x1, x0, x1
  18:	d1000443 	sub	x3, x2, #0x1
  1c:	8a230000 	bic	x0, x0, x3
  20:	d50b7e20 	dc	civac, x0
  24:	8b020000 	add	x0, x0, x2
  28:	eb01001f 	cmp	x0, x1
  2c:	54ffffa3 	b.cc	20 <flush_dcache_area+0x20>  // b.lo, b.ul, b.last
  30:	d5033f9f 	dsb	sy
  34:	d65f03c0 	ret

0000000000000038 <put32>:
  38:	b9000001 	str	w1, [x0]
  3c:	d65f03c0 	ret

0000000000000040 <get32>:
  40:	b9400000 	ldr	w0, [x0]
  44:	d65f03c0 	ret

0000000000000048 <put64>:
  48:	f9000001 	str	x1, [x0]
  4c:	d65f03c0 	ret

0000000000000050 <get64>:
  50:	f9400000 	ldr	x0, [x0]
  54:	d65f03c0 	ret
