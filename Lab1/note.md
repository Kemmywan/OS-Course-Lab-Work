- qemu-system-aarch64 -M raspi3b -kernel kernel.img -s -S -nographic （在/build目录下执行） 作用：在1234端口（配置文件定义）启动一个qemu的实时编译调试服务，执行后另开终端执行别的命令
- gdb kernel.img 启动对于当前目录下kernel.img映像（大概？）的gdb调试服务，执行后进入gdb终端
- (gdb) set architecture aarch64 设置当前架构为aarch64
- (gdb) target remote localhost:1234 连接我们先前的qemu服务端口来进行动态调试

----

断点设置：

# 设置入口点断点
(gdb) break _start
Breakpoint 1 at 0x80080000

# 设置你的 TODO 函数断点
(gdb) break arm64_elX_to_el1
Breakpoint 2 at 0x...

（也可以直接break *0x80000）

# 查看设置的断点
(gdb) info breakpoints

# 开始执行程序
(gdb) continue
Continuing.

# 如果停在 arm64_elX_to_el1，查看代码
(gdb) disassemble

# 查看当前异常级别
(gdb) p/x ($CurrentEL >> 2) & 0x3

# 单步执行你的 TODO 1 代码
(gdb) stepi                    # mrs x9, CurrentEL
(gdb) p/x $x9                  # 查看原始 CurrentEL 值

(gdb) stepi                    # ubfx x9, x9, #2, #2
(gdb) p/x $x9                  # 查看提取的异常级别

# 查看所有线程（CPU核心）
(gdb) info threads

# 切换到主核心（通常是线程1）
(gdb) thread 1
(gdb) where

# 方法1：设置 PC 到 _start 函数
(gdb) set $pc = _start

# 方法2：使用具体地址（假设入口点是 0x80080000）
(gdb) set $pc = 0x80080000

# 方法3：跳转到 _start
(gdb) jump _start

# 查看当前 PC 位置
(gdb) p/x $pc

# 查看当前指令
(gdb) x/i $pc

# 查看当前位置
(gdb) where

# 查看寄存器
(gdb) info registers

# 谨慎使用set $pc=!!!
使用这条语句的时候，似乎并不会重置部分寄存器的值，包括CurrentEL可能依旧是el1（即使回到_start）
所以如果要重新调试，最好的方法是重新开一次gdb

4gb / 4kb = 1m 
1m / 512 = 2k - level3

2k / 512 = 4 - level2?

(gdb) break el1_mmu_activate
Breakpoint 1 at 0x8813c
(gdb) break start_kernel
Breakpoint 2 at 0xffffff000008e000

Dump of assembler code for function el1_mmu_activate:
   0x0000000000088134 <+0>:     stp     x29, x30, [sp, #-16]!
   0x0000000000088138 <+4>:     mov     x29, sp
   0x000000000008813c <+8>:     bl      0x880a0 <invalidate_cache_all>
   0x0000000000088140 <+12>:    tlbi    vmalle1is
   0x0000000000088144 <+16>:    isb
   0x0000000000088148 <+20>:    dsb     sy
   0x000000000008814c <+24>:    ldr     x8, 0x881c0
   0x0000000000088150 <+28>:    msr     mair_el1, x8
   0x0000000000088154 <+32>:    ldr     x8, 0x881c8
   0x0000000000088158 <+36>:    msr     tcr_el1, x8
   0x000000000008815c <+40>:    isb
=> 0x0000000000088160 <+44>:    adrp    x8, 0x86000 <boot_ttbr0_l0>
   0x0000000000088164 <+48>:    msr     ttbr0_el1, x8
   0x0000000000088168 <+52>:    adrp    x8, 0x87000 <boot_ttbr1_l0>
   0x000000000008816c <+56>:    msr     ttbr1_el1, x8
   0x0000000000088170 <+60>:    isb
   0x0000000000088174 <+64>:    mrs     x8, sctlr_el1
   0x0000000000088178 <+68>:    orr     x8, x8, #0x1
   0x000000000008817c <+72>:    and     x8, x8, #0xfffffffffffffffd
   0x0000000000088180 <+76>:    and     x8, x8, #0xffffffffffffffef
   0x0000000000088184 <+80>:    and     x8, x8, #0xfffffffffffffff7
   0x0000000000088188 <+84>:    orr     x8, x8, #0x40
   0x000000000008818c <+88>:    orr     x8, x8, #0x4
   0x0000000000088190 <+92>:    orr     x8, x8, #0x1000
   0x0000000000088194 <+96>:    msr     sctlr_el1, x8
   0x0000000000088198 <+100>:   ldp     x29, x30, [sp], #16
   0x000000000008819c <+104>:   ret

// 1. 启动代码通常链接在低地址
_start:          // 0x80080000
init_c:          // 0x88000
el1_mmu_activate: // 0x88140
your_current_pos: // 0x88198

// 2. MMU 启用后，这些地址变成虚拟地址
// 3. 需要 TTBR0 提供 0x80000000+ 的映射

// 启用 MMU 前：物理地址访问
PC = 0x88198  (物理地址)

// 启用 MMU 后：虚拟地址访问  
PC = 0x88198  (虚拟地址，需要页表转换)

// 如果没有身份映射：0x88198 虚拟地址 → 页错误
// 有身份映射：0x88198 虚拟地址 → 0x88198 物理地址 ✅

# 告诉 GDB 这是一个 long 数组
(gdb) p ((long*)0x88480)[0]           # 第一个元素
(gdb) p ((long*)0x88480)[1]           # 第二个元素
(gdb) p ((long*)0x88480)[2]           # 第三个元素
(gdb) p ((long*)0x88480)[3]           # 第四个元素

# 查看整个数组（假设有4个元素）
(gdb) p *((long(*)[4])0x88480)






