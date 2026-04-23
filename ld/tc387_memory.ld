/*
 * tc387_memory.ld - TC387完整内存区域定义
 * 包含所有核的PSPR、DSPR、PFlash、LMU等
 */
OUTPUT_FORMAT("elf32-tricore")
OUTPUT_ARCH(tricore)

/* 入口点 */
ENTRY(_start)


__TRICORE_DERIVATE_MEMORY_MAP__ = 0x3870;

/* ============================================================================
 * PFlash - 程序闪存 (每个核独立)
 * ============================================================================ */
MEMORY
{
    /* CPU0 PFlash - 3MB */
    pflash0_cpu0 (rx!p)  : org = 0x80000000, len = 3M
    
    /* CPU1 PFlash - 3MB */
    pflash1_cpu1 (rx!p)  : org = 0x80300000, len = 3M
    
    /* CPU2 PFlash - 3MB */
    pflash2_cpu2 (rx!p)  : org = 0x80600000, len = 3M
    
    /* CPU3 PFlash - 1MB */
    pflash3_cpu3 (rx!p)  : org = 0x80900000, len = 1M
    
    /* 共享PFlash - 2MB */
    pflash_shared (rx!p) : org = 0x80A00000, len = 2M

/* ============================================================================
 * PSPR - 程序缓存RAM (每个核64K)
 * ============================================================================ */
    /* CPU0 PSPR - 本地地址和全局地址 */
    pspr0_local (rx!p)   : org = 0xC0000000, len = 64K
    pspr0_global (rx!p)  : org = 0x70100000, len = 64K
    
    /* CPU1 PSPR */
    pspr1_local (rx!p)   : org = 0xC0000000, len = 64K
    pspr1_global (rx!p)  : org = 0x60100000, len = 64K
    
    /* CPU2 PSPR */
    pspr2_local (rx!p)   : org = 0xC0000000, len = 64K
    pspr2_global (rx!p)  : org = 0x50100000, len = 64K
    
    /* CPU3 PSPR */
    pspr3_local (rx!p)   : org = 0xC0000000, len = 64K
    pspr3_global (rx!p)  : org = 0x40100000, len = 64K

/* ============================================================================
 * DSPR - 数据RAM (各核大小不同)
 * ============================================================================ */
    /* CPU0 DSPR - 240K */
    dspr0_local (w!x)    : org = 0xD0000000, len = 240K
    dspr0_global (w!x)   : org = 0x70000000, len = 240K
    
    /* CPU1 DSPR - 240K */
    dspr1_local (w!x)    : org = 0xD0000000, len = 240K
    dspr1_global (w!x)   : org = 0x60000000, len = 240K
    
    /* CPU2 DSPR - 96K */
    dspr2_local (w!x)    : org = 0xD0000000, len = 96K
    dspr2_global (w!x)   : org = 0x50000000, len = 96K
    
    /* CPU3 DSPR - 96K */
    dspr3_local (w!x)    : org = 0xD0000000, len = 96K
    dspr3_global (w!x)   : org = 0x40000000, len = 96K


/* ============================================================================
 * LMU - 共享内存
 * ============================================================================ */
    /* 各核私有dLMU */
    dlmu0_cpu0 (w!x)     : org = 0x90000000, len = 64K
    dlmu1_cpu1 (w!x)     : org = 0x90010000, len = 64K
    dlmu2_cpu2 (w!x)     : org = 0x90020000, len = 64K
    dlmu3_cpu3 (w!x)     : org = 0x90030000, len = 64K
    
    /* LMU共享区 */
    lmu_shared (w!x)     : org = 0x90040000, len = 128K
    dam_sram (w!x)       : org = 0x90400000, len = 64K
    lmu_tram (w!x)       : org = 0x98000000, len = 8K

/* ============================================================================
 * DFlash - 数据闪存
 * ============================================================================ */
    dflash0 (w!xp)       : org = 0xAF000000, len = 512K
    dflash1 (w!xp)       : org = 0xAFC00000, len = 128K
}

/* ============================================================================
 * CPU0 堆栈和CSA大小定义
 * ============================================================================ */
__USTACK_SIZE_CPU0 = DEFINED(__USTACK_SIZE_CPU0) ? __USTACK_SIZE_CPU0 : 4K;
__ISTACK_SIZE_CPU0 = DEFINED(__ISTACK_SIZE_CPU0) ? __ISTACK_SIZE_CPU0 : 1K;
__CSA_SIZE_CPU0    = DEFINED(__CSA_SIZE_CPU0)    ? __CSA_SIZE_CPU0    : 8K;
__HEAP_SIZE_CPU0   = DEFINED(__HEAP_SIZE_CPU0)   ? __HEAP_SIZE_CPU0   : 2K;
/* ============================================================================
 * CPU0 小数据区基址定义 - 直接设置为段起始物理地址
 * 这些符号将用于启动代码初始化A0/A1/A8/A9寄存器
 * ============================================================================ */
/* 注意：这些值将由链接器根据段放置位置自动填充 */

SECTIONS
{
    /* ========================================================================
     * CPU0 启动代码段 - 放在PFlash开头
     * ======================================================================== */
    .core0_startup (ORIGIN(pflash0_cpu0)) :
    {
        PROVIDE(__START0 = .);
        *(.start)
        *(.startup)
        *(.text.Ifx_Ssw_Tc0.*)
        *(.text.Cpu0_Main.*)
        KEEP(*(.start))
    } > pflash0_cpu0
    
    /* ========================================================================
     * CPU0 陷阱表 - 64字节对齐
     * ======================================================================== */
    .core0_traptab : ALIGN(64)
    {
        __TRAPTAB_CPU0 = .;
		KEEP(*(*.OS_EXCVEC_CORE0_CODE));
        *(.traptab)
        *(.traptab.*)
        . = ALIGN(4096);
    } > pflash0_cpu0
    
    /* ========================================================================
     * CPU0 中断向量表 - 256字节对齐
     * ======================================================================== */
    .core0_inttab : FLAGS(axl)
    {
		. = ALIGN(32);
        __INTTAB_CPU0 = .;
		KEEP(*(*.OS_INTVEC_CORE0_CODE));
        *(.inttab);
        *(.inttab.*);
        . = ALIGN(1024);
    } > pflash0_cpu0
    
    /* ========================================================================
     * CPU0 代码段
     * ======================================================================== */
    .core0_text : ALIGN(8)
    {
	    _OS_CODE_START = ABSOLUTE(.);
        *(.text)
        *(.text.*)
        *(.text.Cpu0*)
        *(.text.core0*)
        *(.text.cpu0*)
		_OS_CODE_LIMIT = ABSOLUTE(.);
    } > pflash0_cpu0
    
    /* ========================================================================
     * CPU0 只读数据段
     * ======================================================================== */
    .core0_rodata : ALIGN(8)
    {
        *(.rodata)
        *(.rodata.*)
        *(.rodata.Cpu0*)
        *(.rodata.core0*)
    } > pflash0_cpu0
    
    /* ========================================================================
     * CPU0 构造函数表
     * ======================================================================== */
    .core0_ctors : ALIGN(8)
    {
        __CTOR_LIST__CPU0 = .;
        LONG((__CTOR_END__CPU0 - __CTOR_LIST__CPU0) / 4 - 2);
        KEEP(*crtbegin.o(.ctors))
        KEEP(*(EXCLUDE_FILE(*crtend.o) .ctors))
        KEEP(*(SORT(.ctors.*)))
        KEEP(*(.ctors))
        LONG(0)
        __CTOR_END__CPU0 = .;
    } > pflash0_cpu0
    

    
    /* ========================================================================
     * CPU0 小数据区 - A0寻址 (sdata/sbss)
     * 基址直接设置为段起始物理地址
     * ======================================================================== */
    .core0_sdata_a0 : FLAGS(arsl)
    {
	    . = ALIGN(32);
		__A0_MEM = .;
        *(.sdata)
        *(.sdata.*)
        *(.gnu.linkonce.s.*)
        *(.sdata.Cpu0*)
        . = ALIGN(4);
        __SDATA_A0_END_CPU0 = .;
    } > dspr0_global AT> pflash0_cpu0
	/*_SMALL_DATA_ = SIZEOF(.core0_sdata_a0) ? ADDR(.core0_sdata_a0) : (ADDR(.core0_sdata_a0) & 0xF0000000) + 32k;
	__A0_MEM = _SMALL_DATA_;*/
		
    .core0_sbss_a0 (NOLOAD) : ALIGN(4)
    {
        *(.sbss)
        *(.sbss.*)
        *(.gnu.linkonce.sb.*)
        *(.sbss.Cpu0*)
        . = ALIGN(4);
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 小数据区 - A1寻址 (sdata2/sbss2) - 通常用于只读小数据
     * ======================================================================== */
    .core0_sdata_a1 : FLAGS(arsl)
    {		
		. = ALIGN(32);
		__A1_MEM = .;
		*(.srodata)
		*(.srodata.*)
        *(.sdata2)
        *(.sdata2.*)
        *(.sdata.rodata)
        *(.sdata.rodata.*)
        . = ALIGN(4);
        __SDATA_A1_END_CPU0 = .;
    } > dspr0_global AT> pflash0_cpu0
	/*_SMALL_DATA1_ = SIZEOF(.core0_sdata_a1) ? ADDR(.core0_sdata_a1) : (ADDR(.core0_sdata_a1) & 0xF0000000) + 32k;
	__A1_MEM = _SMALL_DATA1_;   */ 

    .core0_sbss_a1 (NOLOAD) : ALIGN(4)
    {
        *(.sbss2)
        *(.sbss2.*)
        . = ALIGN(4);
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 小数据区 - A8寻址 (sdata3/sbss3)
     * ======================================================================== */
    .core0_sdata_a8 : FLAGS(arsl)
    {
        . = ALIGN(32);
		__A8_MEM = .;
        *(.sdata3)
        *(.sdata3.*)
        *(.sdata3.Cpu0*)
        . = ALIGN(4);
        __SDATA_A8_END_CPU0 = .;
    } > dspr0_global AT> pflash0_cpu0
	/*_SMALL_DATA3_ = SIZEOF(.core0_sdata_a8) ? ADDR(.core0_sdata_a8) : (ADDR(.core0_sdata_a8) & 0xF0000000) + 32k;
	__A8_MEM = _SMALL_DATA3_;  */    

    .core0_sbss_a8 (NOLOAD) : ALIGN(4)
    {
        *(.sbss3)
        *(.sbss3.*)
        *(.sbss3.Cpu0*)
        . = ALIGN(4);
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 小数据区 - A9寻址 (sdata4/sbss4)
     * ======================================================================== */
    .core0_sdata_a9 : FLAGS(arsl)
    {
        . = ALIGN(32);
		__A9_MEM = .;
        *(.sdata4)
        *(.sdata4.*)
        *(.sdata4.Cpu0*)
        . = ALIGN(4);
        __SDATA_A9_END_CPU0 = .;
    } > dspr0_global AT> pflash0_cpu0
	/*_SMALL_DATA4_ = SIZEOF(.core0_sdata_a9) ? ADDR(.core0_sdata_a9) : (ADDR(.core0_sdata_a9) & 0xF0000000) + 32k;
	__A9_MEM = _SMALL_DATA4_; */      

    .core0_sbss_a9 (NOLOAD) : ALIGN(4)
    {
        *(.sbss4)
        *(.sbss4.*)
        *(.sbss4.Cpu0*)
        . = ALIGN(4);
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 常规数据段
     * ======================================================================== */
    .core0_data : ALIGN(8)
    {
        *(.data)
        *(.data.*)
        *(.data.Cpu0*)
        *(.data.core0*)
    } > dspr0_global AT> pflash0_cpu0
    
    .core0_bss (NOLOAD) : ALIGN(8)
    {
        *(.bss)
        *(.bss.*)
        *(.bss.Cpu0*)
        *(.bss.core0*)
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 快速代码段 - 放在PSPR中运行
     * ======================================================================== */
    .core0_fasttext : ALIGN(8)
    {
        *(.fasttext)
        *(.fasttext.*)
        *(.text.fast.Cpu0*)
    } > pspr0_global AT> pflash0_cpu0
    
    /* ========================================================================
     * CPU0 CSA (上下文保存区) - 64字节对齐
     * ======================================================================== */
    .core0_csa (NOLOAD) : ALIGN(64)
    {
        __CSA0 = .;
        . += __CSA_SIZE_CPU0;
        __CSA0_END = .;
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 用户栈
     * ======================================================================== */
    .core0_ustack (NOLOAD) : ALIGN(8)
    {
        __USTACK_BEGIN_CPU0 = .;
        . += __USTACK_SIZE_CPU0;
        __USTACK0 = .;
    } > dspr0_global
    
    /* ========================================================================
     * CPU0 中断栈
     * ======================================================================== */
    .core0_istack (NOLOAD) : ALIGN(8)
    {
        __ISTACK_BEGIN_CPU0 = .;
        . += __ISTACK_SIZE_CPU0;
        PROVIDE(__ISTACK0 = .);
    } > dspr0_global

	.core0_heap (NOLOAD) : ALIGN(8) FLAGS(aw)
	{
		. = ALIGN(8);
		__HEAP_START_CPU0 = .;
		__HEAP = ABSOLUTE(.);
		. += __HEAP_SIZE_CPU0;
		__HEAP_END = ABSOLUTE(.);
		__HEAP_END_CPU0 = .;
	} > dspr0_global

    /* ========================================================================
     * CPU0 私有DLMU段
     * ======================================================================== */
    .core0_dlmu_data : ALIGN(8)
    {
        *(.dlmu0.data)
        *(.dlmu0.data.*)
        *(.dlmu.data.Cpu0*)
    } > dlmu0_cpu0 AT> pflash0_cpu0
    
    .core0_dlmu_bss (NOLOAD) : ALIGN(8)
    {
        *(.dlmu0.bss)
        *(.dlmu0.bss.*)
        *(.dlmu.bss.Cpu0*)
    } > dlmu0_cpu0
    
    /* ========================================================================
     * CPU0 地址对齐检查
     * ======================================================================== */
    . = ASSERT((ADDR(.core0_csa) & 0x3F) == 0, "CPU0 CSA未64字节对齐");
    . = ASSERT((ADDR(.core0_istack) & 7) == 0, "CPU0 ISTACK未双字对齐");
    . = ASSERT((ADDR(.core0_ustack) & 7) == 0, "CPU0 USTACK未双字对齐");
}

/* ============================================================================
 * CPU1 堆栈和CSA大小定义
 * ============================================================================ */
__USTACK_SIZE_CPU1 = DEFINED(__USTACK_SIZE_CPU1) ? __USTACK_SIZE_CPU1 : 4K;
__ISTACK_SIZE_CPU1 = DEFINED(__ISTACK_SIZE_CPU1) ? __ISTACK_SIZE_CPU1 : 1K;
__CSA_SIZE_CPU1    = DEFINED(__CSA_SIZE_CPU1)    ? __CSA_SIZE_CPU1    : 8K;

/* ============================================================================
 * CPU1 小数据区基址定义
 * ============================================================================ */
PROVIDE(__A0_MEM_CPU1 = 0x8000);
PROVIDE(__A1_MEM_CPU1 = 0x8000);
PROVIDE(__A8_MEM_CPU1 = 0x8000);
PROVIDE(__A9_MEM_CPU1 = 0x8000);

SECTIONS
{
    /* ========================================================================
     * CPU1 启动代码段
     * ======================================================================== */
    .core1_startup (ORIGIN(pflash1_cpu1)) :
    {
	    PROVIDE(__START1 = .);
        *(.start_cpu1)
        *(.startup)
        *(.text.Ifx_Ssw_Tc1.*)
        *(.text.Cpu1_Main.*)
        KEEP(*(.start_cpu1))
    } > pflash1_cpu1
    
    /* ========================================================================
     * CPU1 陷阱表
     * ======================================================================== */
    .core1_traptab : ALIGN(64)
    {
        __TRAPTAB_CPU1 = .;
		KEEP(*(*.OS_EXCVEC_CORE1_CODE));
        *(.traptab)
        *(.traptab.*)
        . = ALIGN(4096);
    } > pflash1_cpu1
    
    /* ========================================================================
     * CPU1 中断向量表
     * ======================================================================== */
    .core1_inttab : FLAGS(axl)
    {
		. = ALIGN(32);
        __INTTAB_CPU1 = .;
		KEEP(*(*.OS_INTVEC_CORE1_CODE));
        *(.inttab);
        *(.inttab.*);
        . = ALIGN(1024);
    } > pflash1_cpu1
    
    /* ========================================================================
     * CPU1 构造函数表
     * ======================================================================== */
    .core1_ctors : ALIGN(8)
    {
        __CTOR_LIST__CPU1 = .;
        LONG((__CTOR_END__CPU1 - __CTOR_LIST__CPU1) / 4 - 2);
        KEEP(*crtbegin.o(.ctors))
        KEEP(*(EXCLUDE_FILE(*crtend.o) .ctors))
        KEEP(*(SORT(.ctors.*)))
        KEEP(*(.ctors))
        LONG(0)
        __CTOR_END__CPU1 = .;
    } > pflash1_cpu1
    
    /* ========================================================================
     * CPU1 代码段
     * ======================================================================== */
    .core1_text : ALIGN(8)
    {
        *(.text)
        *(.text.*)
        *(.text.Cpu1*)
        *(.text.core1*)
        *(.text.cpu1*)
    } > pflash1_cpu1
    
    /* ========================================================================
     * CPU1 只读数据段
     * ======================================================================== */
    .core1_rodata : ALIGN(8)
    {
        *(.rodata)
        *(.rodata.*)
        *(.rodata.Cpu1*)
        *(.rodata.core1*)
    } > pflash1_cpu1
    
    
    /* ========================================================================
     * CPU1 小数据区 - A0寻址
     * ======================================================================== */
    .core1_sdata_a0 : ALIGN(4)
    {
        __SDATA_A0_BASE_CPU1 = .;
        *(.sdata)
        *(.sdata.*)
        *(.gnu.linkonce.s.*)
        *(.sdata.Cpu1*)
        . = ALIGN(4);
        __SDATA_A0_END_CPU1 = .;
    } > dspr1_global AT> pflash1_cpu1
    
    .core1_sbss_a0 (NOLOAD) : ALIGN(4)
    {
        *(.sbss)
        *(.sbss.*)
        *(.gnu.linkonce.sb.*)
        *(.sbss.Cpu1*)
        . = ALIGN(4);
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 小数据区 - A8寻址
     * ======================================================================== */
    .core1_sdata_a8 : ALIGN(4)
    {
        __SDATA_A8_BASE_CPU1 = .;
        *(.sdata3)
        *(.sdata3.*)
        *(.sdata3.Cpu1*)
        . = ALIGN(4);
        __SDATA_A8_END_CPU1 = .;
    } > dspr1_global AT> pflash1_cpu1
    
    .core1_sbss_a8 (NOLOAD) : ALIGN(4)
    {
        *(.sbss3)
        *(.sbss3.*)
        *(.sbss3.Cpu1*)
        . = ALIGN(4);
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 小数据区 - A9寻址
     * ======================================================================== */
    .core1_sdata_a9 : ALIGN(4)
    {
        __SDATA_A9_BASE_CPU1 = .;
        *(.sdata4)
        *(.sdata4.*)
        *(.sdata4.Cpu1*)
        . = ALIGN(4);
        __SDATA_A9_END_CPU1 = .;
    } > dspr1_global AT> pflash1_cpu1
    
    .core1_sbss_a9 (NOLOAD) : ALIGN(4)
    {
        *(.sbss4)
        *(.sbss4.*)
        *(.sbss4.Cpu1*)
        . = ALIGN(4);
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 常规数据段
     * ======================================================================== */
    .core1_data : ALIGN(8)
    {
        *(.data)
        *(.data.*)
        *(.data.Cpu1*)
        *(.data.core1*)
    } > dspr1_global AT> pflash1_cpu1
    
    .core1_bss (NOLOAD) : ALIGN(8)
    {
        *(.bss)
        *(.bss.*)
        *(.bss.Cpu1*)
        *(.bss.core1*)
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 快速代码段
     * ======================================================================== */
    .core1_fasttext : ALIGN(8)
    {
        *(.fasttext)
        *(.fasttext.*)
        *(.text.fast.Cpu1*)
    } > pspr1_global AT> pflash1_cpu1
    
    /* ========================================================================
     * CPU1 CSA区
     * ======================================================================== */
    .core1_csa (NOLOAD) : ALIGN(64)
    {
        __CSA1 = .;
        . += __CSA_SIZE_CPU1;
        __CSA1_END = .;
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 用户栈
     * ======================================================================== */
    .core1_ustack (NOLOAD) : ALIGN(8)
    {
        __USTACK_BEGIN_CPU1 = .;
        . += __USTACK_SIZE_CPU1;
        __USTACK1 = .;
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 中断栈
     * ======================================================================== */
    .core1_istack (NOLOAD) : ALIGN(8)
    {
        __ISTACK_BEGIN_CPU1 = .;
        . += __ISTACK_SIZE_CPU1;
        __ISTACK1 = .;
    } > dspr1_global
    
    /* ========================================================================
     * CPU1 私有DLMU段
     * ======================================================================== */
    .core1_dlmu_data : ALIGN(8)
    {
        *(.dlmu1.data)
        *(.dlmu1.data.*)
        *(.dlmu.data.Cpu1*)
    } > dlmu1_cpu1 AT> pflash1_cpu1
    
    .core1_dlmu_bss (NOLOAD) : ALIGN(8)
    {
        *(.dlmu1.bss)
        *(.dlmu1.bss.*)
        *(.dlmu.bss.Cpu1*)
    } > dlmu1_cpu1
    
    /* ========================================================================
     * CPU1 地址对齐检查
     * ======================================================================== */
    . = ASSERT((ADDR(.core1_csa) & 0x3F) == 0, "CPU1 CSA未64字节对齐");
    . = ASSERT((ADDR(.core1_istack) & 7) == 0, "CPU1 ISTACK未双字对齐");
    . = ASSERT((ADDR(.core1_ustack) & 7) == 0, "CPU1 USTACK未双字对齐");
}

/* ============================================================================
 * CPU2 堆栈和CSA大小定义 (DSPR较小，适当减小)
 * ============================================================================ */
__USTACK_SIZE_CPU2 = DEFINED(__USTACK_SIZE_CPU2) ? __USTACK_SIZE_CPU2 : 2K;
__ISTACK_SIZE_CPU2 = DEFINED(__ISTACK_SIZE_CPU2) ? __ISTACK_SIZE_CPU2 : 1K;
__CSA_SIZE_CPU2    = DEFINED(__CSA_SIZE_CPU2)    ? __CSA_SIZE_CPU2    : 4K;

/* ============================================================================
 * CPU2 小数据区基址定义
 * ============================================================================ */
PROVIDE(__A0_MEM_CPU2 = 0x8000);
PROVIDE(__A1_MEM_CPU2 = 0x8000);
PROVIDE(__A8_MEM_CPU2 = 0x8000);
PROVIDE(__A9_MEM_CPU2 = 0x8000);

SECTIONS
{
    /* ========================================================================
     * CPU2 启动代码段
     * ======================================================================== */
    .core2_startup (ORIGIN(pflash2_cpu2)) :
    {
	    PROVIDE(__START2 = .);
        *(.start_cpu2)
        *(.startup)
        *(.text.Ifx_Ssw_Tc2.*)
        *(.text.Cpu2_Main.*)
        KEEP(*(.start_cpu2))
    } > pflash2_cpu2
    
    /* ========================================================================
     * CPU2 陷阱表
     * ======================================================================== */
    .core2_traptab : ALIGN(64)
    {
        __TRAPTAB_CPU2 = .;
		KEEP(*(*.OS_EXCVEC_CORE2_CODE));
        *(.traptab)
        *(.traptab.*)
        . = ALIGN(4096);
    } > pflash2_cpu2
    
    /* ========================================================================
     * CPU2 中断向量表
     * ======================================================================== */
    .core2_inttab : FLAGS(axl)
    {
		. = ALIGN(32);
        __INTTAB_CPU2 = .;
		KEEP(*(*.OS_INTVEC_CORE2_CODE));
        *(.inttab);
        *(.inttab.*);
        . = ALIGN(1024);
    } > pflash2_cpu2
    
    /* ========================================================================
     * CPU2 代码段
     * ======================================================================== */
    .core2_text : ALIGN(8)
    {
        *(.text)
        *(.text.*)
        *(.text.Cpu2*)
        *(.text.core2*)
        *(.text.cpu2*)
    } > pflash2_cpu2
    
    /* ========================================================================
     * CPU2 只读数据段
     * ======================================================================== */
    .core2_rodata : ALIGN(8)
    {
        *(.rodata)
        *(.rodata.*)
        *(.rodata.Cpu2*)
        *(.rodata.core2*)
    } > pflash2_cpu2
    
    
    /* ========================================================================
     * CPU2 小数据区 - A0寻址
     * ======================================================================== */
    .core2_sdata_a0 : ALIGN(4)
    {
        __SDATA_A0_BASE_CPU2 = .;
        *(.sdata)
        *(.sdata.*)
        *(.gnu.linkonce.s.*)
        *(.sdata.Cpu2*)
        . = ALIGN(4);
        __SDATA_A0_END_CPU2 = .;
    } > dspr2_global AT> pflash2_cpu2
    
    .core2_sbss_a0 (NOLOAD) : ALIGN(4)
    {
        *(.sbss)
        *(.sbss.*)
        *(.gnu.linkonce.sb.*)
        *(.sbss.Cpu2*)
        . = ALIGN(4);
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 小数据区 - A8寻址
     * ======================================================================== */
    .core2_sdata_a8 : ALIGN(4)
    {
        __SDATA_A8_BASE_CPU2 = .;
        *(.sdata3)
        *(.sdata3.*)
        *(.sdata3.Cpu2*)
        . = ALIGN(4);
        __SDATA_A8_END_CPU2 = .;
    } > dspr2_global AT> pflash2_cpu2
    
    .core2_sbss_a8 (NOLOAD) : ALIGN(4)
    {
        *(.sbss3)
        *(.sbss3.*)
        *(.sbss3.Cpu2*)
        . = ALIGN(4);
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 小数据区 - A9寻址
     * ======================================================================== */
    .core2_sdata_a9 : ALIGN(4)
    {
        __SDATA_A9_BASE_CPU2 = .;
        *(.sdata4)
        *(.sdata4.*)
        *(.sdata4.Cpu2*)
        . = ALIGN(4);
        __SDATA_A9_END_CPU2 = .;
    } > dspr2_global AT> pflash2_cpu2
    
    .core2_sbss_a9 (NOLOAD) : ALIGN(4)
    {
        *(.sbss4)
        *(.sbss4.*)
        *(.sbss4.Cpu2*)
        . = ALIGN(4);
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 常规数据段
     * ======================================================================== */
    .core2_data : ALIGN(8)
    {
        *(.data)
        *(.data.*)
        *(.data.Cpu2*)
        *(.data.core2*)
    } > dspr2_global AT> pflash2_cpu2
    
    .core2_bss (NOLOAD) : ALIGN(8)
    {
        *(.bss)
        *(.bss.*)
        *(.bss.Cpu2*)
        *(.bss.core2*)
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 快速代码段
     * ======================================================================== */
    .core2_fasttext : ALIGN(8)
    {
        *(.fasttext)
        *(.fasttext.*)
        *(.text.fast.Cpu2*)
    } > pspr2_global AT> pflash2_cpu2
    
    /* ========================================================================
     * CPU2 CSA区
     * ======================================================================== */
    .core2_csa (NOLOAD) : ALIGN(64)
    {
        __CSA2 = .;
        . += __CSA_SIZE_CPU2;
        __CSA2_END = .;
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 用户栈
     * ======================================================================== */
    .core2_ustack (NOLOAD) : ALIGN(8)
    {
        __USTACK_BEGIN_CPU2 = .;
        . += __USTACK_SIZE_CPU2;
        __USTACK2 = .;
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 中断栈
     * ======================================================================== */
    .core2_istack (NOLOAD) : ALIGN(8)
    {
        __ISTACK_BEGIN_CPU2 = .;
        . += __ISTACK_SIZE_CPU2;
        __ISTACK2 = .;
    } > dspr2_global
    
    /* ========================================================================
     * CPU2 私有DLMU段
     * ======================================================================== */
    .core2_dlmu_data : ALIGN(8)
    {
        *(.dlmu2.data)
        *(.dlmu2.data.*)
        *(.dlmu.data.Cpu2*)
    } > dlmu2_cpu2 AT> pflash2_cpu2
    
    .core2_dlmu_bss (NOLOAD) : ALIGN(8)
    {
        *(.dlmu2.bss)
        *(.dlmu2.bss.*)
        *(.dlmu.bss.Cpu2*)
    } > dlmu2_cpu2
    
    /* ========================================================================
     * CPU2 地址对齐检查
     * ======================================================================== */
    . = ASSERT((ADDR(.core2_csa) & 0x3F) == 0, "CPU2 CSA未64字节对齐");
    . = ASSERT((ADDR(.core2_istack) & 7) == 0, "CPU2 ISTACK未双字对齐");
    . = ASSERT((ADDR(.core2_ustack) & 7) == 0, "CPU2 USTACK未双字对齐");
}

/* ============================================================================
 * CPU3 堆栈和CSA大小定义 (DSPR较小，适当减小)
 * ============================================================================ */
__USTACK_SIZE_CPU3 = DEFINED(__USTACK_SIZE_CPU3) ? __USTACK_SIZE_CPU3 : 2K;
__ISTACK_SIZE_CPU3 = DEFINED(__ISTACK_SIZE_CPU3) ? __ISTACK_SIZE_CPU3 : 1K;
__CSA_SIZE_CPU3    = DEFINED(__CSA_SIZE_CPU3)    ? __CSA_SIZE_CPU3    : 4K;

/* ============================================================================
 * CPU3 小数据区基址定义
 * ============================================================================ */
PROVIDE(__A0_MEM_CPU3 = 0x8000);
PROVIDE(__A1_MEM_CPU3 = 0x8000);
PROVIDE(__A8_MEM_CPU3 = 0x8000);
PROVIDE(__A9_MEM_CPU3 = 0x8000);

SECTIONS
{
    /* ========================================================================
     * CPU3 启动代码段
     * ======================================================================== */
    .core3_startup (ORIGIN(pflash3_cpu3)) :
    {
	    PROVIDE(__START3 = .);
        *(.start_cpu3)
        *(.startup)
        *(.text.Ifx_Ssw_Tc3.*)
        *(.text.Cpu3_Main.*)
        KEEP(*(.start_cpu3))
    } > pflash3_cpu3
    
    /* ========================================================================
     * CPU3 陷阱表
     * ======================================================================== */
    .core3_traptab : ALIGN(64)
    {
        __TRAPTAB_CPU3 = .;
		KEEP(*(*.OS_EXCVEC_CORE3_CODE));
        *(.traptab)
        *(.traptab.*)
        . = ALIGN(4096);
    } > pflash3_cpu3
    
    /* ========================================================================
     * CPU3 中断向量表
     * ======================================================================== */
    .core3_inttab : FLAGS(axl)
    {
		. = ALIGN(32);
        __INTTAB_CPU3 = .;
		KEEP(*(*.OS_INTVEC_CORE3_CODE));
        *(.inttab);
        *(.inttab.*);
        . = ALIGN(1024);
    } > pflash3_cpu3
    
    /* ========================================================================
     * CPU3 代码段
     * ======================================================================== */
    .core3_text : ALIGN(8)
    {
        *(.text)
        *(.text.*)
        *(.text.Cpu3*)
        *(.text.core3*)
        *(.text.cpu3*)
    } > pflash3_cpu3
    
    /* ========================================================================
     * CPU3 只读数据段
     * ======================================================================== */
    .core3_rodata : ALIGN(8)
    {
        *(.rodata)
        *(.rodata.*)
        *(.rodata.Cpu3*)
        *(.rodata.core3*)
    } > pflash3_cpu3
    
    
    /* ========================================================================
     * CPU3 小数据区 - A0寻址
     * ======================================================================== */
    .core3_sdata_a0 : ALIGN(4)
    {
        __SDATA_A0_BASE_CPU3 = .;
        *(.sdata)
        *(.sdata.*)
        *(.gnu.linkonce.s.*)
        *(.sdata.Cpu3*)
        . = ALIGN(4);
        __SDATA_A0_END_CPU3 = .;
    } > dspr3_global AT> pflash3_cpu3
    
    .core3_sbss_a0 (NOLOAD) : ALIGN(4)
    {
        *(.sbss)
        *(.sbss.*)
        *(.gnu.linkonce.sb.*)
        *(.sbss.Cpu3*)
        . = ALIGN(4);
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 小数据区 - A8寻址
     * ======================================================================== */
    .core3_sdata_a8 : ALIGN(4)
    {
        __SDATA_A8_BASE_CPU3 = .;
        *(.sdata3)
        *(.sdata3.*)
        *(.sdata3.Cpu3*)
        . = ALIGN(4);
        __SDATA_A8_END_CPU3 = .;
    } > dspr3_global AT> pflash3_cpu3
    
    .core3_sbss_a8 (NOLOAD) : ALIGN(4)
    {
        *(.sbss3)
        *(.sbss3.*)
        *(.sbss3.Cpu3*)
        . = ALIGN(4);
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 小数据区 - A9寻址
     * ======================================================================== */
    .core3_sdata_a9 : ALIGN(4)
    {
        __SDATA_A9_BASE_CPU3 = .;
        *(.sdata4)
        *(.sdata4.*)
        *(.sdata4.Cpu3*)
        . = ALIGN(4);
        __SDATA_A9_END_CPU3 = .;
    } > dspr3_global AT> pflash3_cpu3
    
    .core3_sbss_a9 (NOLOAD) : ALIGN(4)
    {
        *(.sbss4)
        *(.sbss4.*)
        *(.sbss4.Cpu3*)
        . = ALIGN(4);
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 常规数据段
     * ======================================================================== */
    .core3_data : ALIGN(8)
    {
        *(.data)
        *(.data.*)
        *(.data.Cpu3*)
        *(.data.core3*)
    } > dspr3_global AT> pflash3_cpu3
    
    .core3_bss (NOLOAD) : ALIGN(8)
    {
        *(.bss)
        *(.bss.*)
        *(.bss.Cpu3*)
        *(.bss.core3*)
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 快速代码段
     * ======================================================================== */
    .core3_fasttext : ALIGN(8)
    {
        *(.fasttext)
        *(.fasttext.*)
        *(.text.fast.Cpu3*)
    } > pspr3_global AT> pflash3_cpu3
    
    /* ========================================================================
     * CPU3 CSA区
     * ======================================================================== */
    .core3_csa (NOLOAD) : ALIGN(64)
    {
        __CSA3 = .;
        . += __CSA_SIZE_CPU3;
        __CSA3_END = .;
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 用户栈
     * ======================================================================== */
    .core3_ustack (NOLOAD) : ALIGN(8)
    {
        __USTACK_BEGIN_CPU3 = .;
        . += __USTACK_SIZE_CPU3;
        __USTACK3 = .;
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 中断栈
     * ======================================================================== */
    .core3_istack (NOLOAD) : ALIGN(8)
    {
        __ISTACK_BEGIN_CPU3 = .;
        . += __ISTACK_SIZE_CPU3;
        __ISTACK3 = .;
    } > dspr3_global
    
    /* ========================================================================
     * CPU3 私有DLMU段
     * ======================================================================== */
    .core3_dlmu_data : ALIGN(8)
    {
        *(.dlmu3.data)
        *(.dlmu3.data.*)
        *(.dlmu.data.Cpu3*)
    } > dlmu3_cpu3 AT> pflash3_cpu3
    
    .core3_dlmu_bss (NOLOAD) : ALIGN(8)
    {
        *(.dlmu3.bss)
        *(.dlmu3.bss.*)
        *(.dlmu.bss.Cpu3*)
    } > dlmu3_cpu3
    
    /* ========================================================================
     * CPU3 地址对齐检查
     * ======================================================================== */
    . = ASSERT((ADDR(.core3_csa) & 0x3F) == 0, "CPU3 CSA未64字节对齐");
    . = ASSERT((ADDR(.core3_istack) & 7) == 0, "CPU3 ISTACK未双字对齐");
    . = ASSERT((ADDR(.core3_ustack) & 7) == 0, "CPU3 USTACK未双字对齐");
}

SECTIONS
{
    /* ========================================================================
     * 共享只读数据 - 放在共享PFlash
     * ======================================================================== */
    .shared_rodata : ALIGN(8)
    {
        *(.rodata.shared)
        *(.rodata.shared.*)
        *(.rodata.Common)
        *(.rodata.Global)
    } > pflash0_cpu0
    
    /* ========================================================================
     * 共享小数据区 - A1寻址 (sdata2/sbss2)
     * 用于只读小数据，通过A1寄存器访问
     * ======================================================================== */
    .shared_sdata_a1 : ALIGN(4)
    {
        __SDATA_A1_BASE = .;
        *(.sdata2)
        *(.sdata2.*)
        *(.sdata.rodata)
        *(.sdata.rodata.*)
        . = ALIGN(4);
        __SDATA_A1_END = .;
    } > lmu_shared AT> pflash0_cpu0
    
    .shared_sbss_a1 (NOLOAD) : ALIGN(4)
    {
        *(.sbss2)
        *(.sbss2.*)
        . = ALIGN(4);
    } > lmu_shared
    
    /* ========================================================================
     * 共享数据段
     * ======================================================================== */
    .shared_data : ALIGN(8)
    {
        *(.data.shared)
        *(.data.shared.*)
        *(.data.Common)
        *(.data.Global)
    } > lmu_shared AT> pflash0_cpu0
    
    .shared_bss (NOLOAD) : ALIGN(8)
    {
        *(.bss.shared)
        *(.bss.shared.*)
        *(.bss.Common)
        *(.bss.Global)
    } > lmu_shared
    
    /* ========================================================================
     * DAM SRAM段 - 默认应用内存
     * ======================================================================== */
    .dam_data : ALIGN(8)
    {
        *(.dam.data)
        *(.dam.data.*)
    } > dam_sram AT> pflash0_cpu0
    
    .dam_bss (NOLOAD) : ALIGN(8)
    {
        *(.dam.bss)
        *(.dam.bss.*)
    } > dam_sram
    
    /* ========================================================================
     * 堆区 - 放在LMU共享区
     * ======================================================================== */
    __HEAP_SIZE = DEFINED(__HEAP_SIZE) ? __HEAP_SIZE : 16K;
    
    .heap (NOLOAD) : ALIGN(8)
    {
        __HEAP_BEGIN = .;
        . += __HEAP_SIZE;
        __HEAP_END = .;
    } > lmu_shared
    
    /* ========================================================================
     * 清除表 - 用于BSS段初始化
     * ======================================================================== */
    .clear_table : FLAGS(arl)
    {
	    . = ALIGN(32);
        PROVIDE(__clear_table = .);
        
        /* CPU0 BSS段 */
        LONG(0 + ADDR(.core0_sbss_a0));   LONG(SIZEOF(.core0_sbss_a0));
        LONG(0 + ADDR(.core0_sbss_a8));   LONG(SIZEOF(.core0_sbss_a8));
        LONG(0 + ADDR(.core0_sbss_a9));   LONG(SIZEOF(.core0_sbss_a9));
        LONG(0 + ADDR(.core0_bss));       LONG(SIZEOF(.core0_bss));
        LONG(0 + ADDR(.core0_dlmu_bss));  LONG(SIZEOF(.core0_dlmu_bss));

        /* CPU1 BSS段 */
        LONG(0 + ADDR(.core1_sbss_a0));   LONG(SIZEOF(.core1_sbss_a0));
        LONG(0 + ADDR(.core1_sbss_a8));   LONG(SIZEOF(.core1_sbss_a8));
        LONG(0 + ADDR(.core1_sbss_a9));   LONG(SIZEOF(.core1_sbss_a9));
        LONG(0 + ADDR(.core1_bss));       LONG(SIZEOF(.core1_bss));
        LONG(0 + ADDR(.core1_dlmu_bss));  LONG(SIZEOF(.core1_dlmu_bss));

        /* CPU2 BSS段 */
        LONG(0 + ADDR(.core2_sbss_a0));   LONG(SIZEOF(.core2_sbss_a0));
        LONG(0 + ADDR(.core2_sbss_a8));   LONG(SIZEOF(.core2_sbss_a8));
        LONG(0 + ADDR(.core2_sbss_a9));   LONG(SIZEOF(.core2_sbss_a9));
        LONG(0 + ADDR(.core2_bss));       LONG(SIZEOF(.core2_bss));
        LONG(0 + ADDR(.core2_dlmu_bss));  LONG(SIZEOF(.core2_dlmu_bss));

        /* CPU3 BSS段 */
        LONG(0 + ADDR(.core3_sbss_a0));   LONG(SIZEOF(.core3_sbss_a0));
        LONG(0 + ADDR(.core3_sbss_a8));   LONG(SIZEOF(.core3_sbss_a8));
        LONG(0 + ADDR(.core3_sbss_a9));   LONG(SIZEOF(.core3_sbss_a9));
        LONG(0 + ADDR(.core3_bss));       LONG(SIZEOF(.core3_bss));
        LONG(0 + ADDR(.core3_dlmu_bss));  LONG(SIZEOF(.core3_dlmu_bss));

        /* 共享BSS段 */
        LONG(0 + ADDR(.shared_sbss_a1));  LONG(SIZEOF(.shared_sbss_a1));
        LONG(0 + ADDR(.shared_bss));      LONG(SIZEOF(.shared_bss));
        LONG(0 + ADDR(.dam_bss));         LONG(SIZEOF(.dam_bss));       
        LONG(-1);                         LONG(-1);
		. = ALIGN(8);
    } > pflash0_cpu0
    
    /* ========================================================================
     * 复制表 - 用于初始化数据段
     * ======================================================================== */
    .copy_table : FLAGS(arl)
    {
	    . = ALIGN(32);
        PROVIDE(__copy_table = .);
        
        /* CPU0 数据段 */
        LONG(LOADADDR(.core0_sdata_a0));  LONG(0 + ADDR(.core0_sdata_a0));  LONG(SIZEOF(.core0_sdata_a0));
        LONG(LOADADDR(.core0_sdata_a8));  LONG(0 + ADDR(.core0_sdata_a8));  LONG(SIZEOF(.core0_sdata_a8));
        LONG(LOADADDR(.core0_sdata_a9));  LONG(0 + ADDR(.core0_sdata_a9));  LONG(SIZEOF(.core0_sdata_a9));
        LONG(LOADADDR(.core0_data));      LONG(0 + ADDR(.core0_data));      LONG(SIZEOF(.core0_data));
        LONG(LOADADDR(.core0_fasttext));  LONG(0 + ADDR(.core0_fasttext));  LONG(SIZEOF(.core0_fasttext));
        LONG(LOADADDR(.core0_dlmu_data)); LONG(0 + ADDR(.core0_dlmu_data)); LONG(SIZEOF(.core0_dlmu_data));

        /* CPU1 数据段 */
        LONG(LOADADDR(.core1_sdata_a0));  LONG(0 + ADDR(.core1_sdata_a0));  LONG(SIZEOF(.core1_sdata_a0));
        LONG(LOADADDR(.core1_sdata_a8));  LONG(0 + ADDR(.core1_sdata_a8));  LONG(SIZEOF(.core1_sdata_a8));
        LONG(LOADADDR(.core1_sdata_a9));  LONG(0 + ADDR(.core1_sdata_a9));  LONG(SIZEOF(.core1_sdata_a9));
        LONG(LOADADDR(.core1_data));      LONG(0 + ADDR(.core1_data));      LONG(SIZEOF(.core1_data));
        LONG(LOADADDR(.core1_fasttext));  LONG(0 + ADDR(.core1_fasttext));  LONG(SIZEOF(.core1_fasttext));
        LONG(LOADADDR(.core1_dlmu_data)); LONG(0 + ADDR(.core1_dlmu_data)); LONG(SIZEOF(.core1_dlmu_data));

        /* CPU2 数据段 */ 
        LONG(LOADADDR(.core2_sdata_a0));  LONG(0 + ADDR(.core2_sdata_a0));  LONG(SIZEOF(.core2_sdata_a0));
        LONG(LOADADDR(.core2_sdata_a8));  LONG(0 + ADDR(.core2_sdata_a8));  LONG(SIZEOF(.core2_sdata_a8));
        LONG(LOADADDR(.core2_sdata_a9));  LONG(0 + ADDR(.core2_sdata_a9));  LONG(SIZEOF(.core2_sdata_a9));
        LONG(LOADADDR(.core2_data));      LONG(0 + ADDR(.core2_data));      LONG(SIZEOF(.core2_data));
        LONG(LOADADDR(.core2_fasttext));  LONG(0 + ADDR(.core2_fasttext));  LONG(SIZEOF(.core2_fasttext));
        LONG(LOADADDR(.core2_dlmu_data)); LONG(0 + ADDR(.core2_dlmu_data)); LONG(SIZEOF(.core2_dlmu_data));

        /* CPU3 数据段 */
        LONG(LOADADDR(.core3_sdata_a0));  LONG(0 + ADDR(.core3_sdata_a0));  LONG(SIZEOF(.core3_sdata_a0));
        LONG(LOADADDR(.core3_sdata_a8));  LONG(0 + ADDR(.core3_sdata_a8));  LONG(SIZEOF(.core3_sdata_a8));
        LONG(LOADADDR(.core3_sdata_a9));  LONG(0 + ADDR(.core3_sdata_a9));  LONG(SIZEOF(.core3_sdata_a9));
        LONG(LOADADDR(.core3_data));      LONG(0 + ADDR(.core3_data));      LONG(SIZEOF(.core3_data));
        LONG(LOADADDR(.core3_fasttext));  LONG(0 + ADDR(.core3_fasttext));  LONG(SIZEOF(.core3_fasttext));
        LONG(LOADADDR(.core3_dlmu_data)); LONG(0 + ADDR(.core3_dlmu_data)); LONG(SIZEOF(.core3_dlmu_data));

        /* 共享数据段 */
        LONG(LOADADDR(.shared_sdata_a1)); LONG(0 + ADDR(.shared_sdata_a1)); LONG(SIZEOF(.shared_sdata_a1));
        LONG(LOADADDR(.shared_data));     LONG(0 + ADDR(.shared_data));     LONG(SIZEOF(.shared_data));
        LONG(LOADADDR(.dam_data));        LONG(0 + ADDR(.dam_data));        LONG(SIZEOF(.dam_data));
        
        LONG(-1);                        LONG(-1);                          LONG(-1);
		. = ALIGN(8);
    } > pflash0_cpu0
}