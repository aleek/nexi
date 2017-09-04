/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.33.1
 * Fri Dec 30 13:24:04 2016
 */
/*
 *	vmlinux.lds.S -- master linker script for m68knommu arch
 *
 *	(C) Copyright 2002-2006, Greg Ungerer <gerg@snapgear.com>
 *
 *	This linker script is equiped to build either ROM loaded or RAM
 *	run kernels.
 */
/*
 * Helper macros to support writing architecture specific
 * linker scripts.
 *
 * A minimal linker scripts has following content:
 * [This is a sample, architectures may have special requiriements]
 *
 * OUTPUT_FORMAT(...)
 * OUTPUT_ARCH(...)
 * ENTRY(...)
 * SECTIONS
 * {
 *	. = START;
 *	__init_begin = .;
 *	HEAD_TEXT_SECTION
 *	INIT_TEXT_SECTION(PAGE_SIZE)
 *	INIT_DATA_SECTION(...)
 *	PERCPU(PAGE_SIZE)
 *	__init_end = .;
 *
 *	_stext = .;
 *	TEXT_SECTION = 0
 *	_etext = .;
 *
 *      _sdata = .;
 *	RO_DATA_SECTION(PAGE_SIZE)
 *	RW_DATA_SECTION(...)
 *	_edata = .;
 *
 *	EXCEPTION_TABLE(...)
 *	NOTES
 *
 *	BSS_SECTION(0, 0, 0)
 *	_end = .;
 *
 *	STABS_DEBUG
 *	DWARF_DEBUG
 *
 *	DISCARDS		// must be the last
 * }
 *
 * [__init_begin, __init_end] is the init section that may be freed after init
 * [_stext, _etext] is the text section
 * [_sdata, _edata] is the data section
 *
 * Some of the included output section have their own set of constants.
 * Examples are: [__initramfs_start, __initramfs_end] for initramfs and
 *               [__nosave_begin, __nosave_end] for the nosave data
 */
/* Align . to a 8 byte boundary equals to maximum function alignment. */


/* The actual configuration determine if the init/exit sections
 * are handled as text/data or they can be discarded (which
 * often happens at runtime)
 */
/* .data section */
/*
 * Data section helpers
 */
/*
 * Read only Data
 */
/* RODATA & RO_DATA provided for backward compatibility.
 * All archs are supposed to use RO_DATA() */
/* .text section. Map to function alignment to avoid address changes
 * during second ld run in second ld pass when generating System.map */
/* sched.text is aling to function alignment to secure we have same
 * address even at second ld pass when generating System.map */
/* spinlock.text is aling to function alignment to secure we have same
 * address even at second ld pass when generating System.map */
/* Section used for early init (in .S files) */
/*
 * Exception table
 */
/*
 * Init task
 */
/* init and exit section handling */
/*
 * bss (Block Started by Symbol) - uninitialized data
 * zeroed during startup
 */
/*
 * DWARF debug sections.
 * Symbols in the DWARF debugging sections are relative to
 * the beginning of the section so we begin them at 0.
 */
  /* Stabs debugging sections.  */
/*
 * Default discarded sections.
 *
 * Some archs want to discard exit text/data at runtime rather than
 * link time due to cross-section references such as alt instructions,
 * bug table, eh_frame, etc.  DISCARDS must be the last of output
 * section definitions so that such archs put those in earlier section
 * definitions.
 */
/**
 * PERCPU_VADDR - define output section for percpu area
 * @vaddr: explicit base address (optional)
 * @phdr: destination PHDR (optional)
 *
 * Macro which expands to output section for percpu area.  If @vaddr
 * is not blank, it specifies explicit base address and all percpu
 * symbols will be offset from the given address.  If blank, @vaddr
 * always equals @laddr + LOAD_OFFSET.
 *
 * @phdr defines the output PHDR to use if not blank.  Be warned that
 * output PHDR is sticky.  If @phdr is specified, the next output
 * section in the linker script will go there too.  @phdr should have
 * a leading colon.
 *
 * Note that this macros defines __per_cpu_load as an absolute symbol.
 * If there is no need to put the percpu section at a predetermined
 * address, use PERCPU().
 */
/**
 * PERCPU - define output section for percpu area, simple version
 * @align: required alignment
 *
 * Align to @align and outputs output section for percpu area.  This
 * macro doesn't maniuplate @vaddr or @phdr and __per_cpu_load and
 * __per_cpu_start will be identical.
 *
 * This macro is equivalent to ALIGN(align); PERCPU_VADDR( , ) except
 * that __per_cpu_load is defined as a relative symbol against
 * .data.percpu which is required for relocatable x86_32
 * configuration.
 */
/*
 * Definition of the high level *_SECTION macros
 * They will fit only a subset of the architectures
 */
/*
 * Writeable data.
 * All sections are combined in a single .data section.
 * The sections following CONSTRUCTORS are arranged so their
 * typical alignment matches.
 * A cacheline is typical/always less than a PAGE_SIZE so
 * the sections that has this restriction (or similar)
 * is located before the ones requiring PAGE_SIZE alignment.
 * NOSAVE_DATA starts and ends with a PAGE_SIZE alignment which
 * matches the requirment of PAGE_ALIGNED_DATA.
 *
 * use 0 as page_align if page_aligned data is not used */
/* const.h: Macros for dealing with constants.  */
/* Some constant macros are used in both assembler and
 * C code.  Therefore we cannot annotate them always with
 * 'UL' and other type specifiers unilaterally.  We
 * use the following macros to deal with this.
 *
 * Similarly, _AT() will cast an expression with a type in C, but
 * leave it unchanged in asm.
 */
/* PAGE_SHIFT determines the page size */
/*
** asm/setup.h -- Definition of the Linux/m68k setup information
**
** Copyright 1992 by Greg Harp
**
** This file is subject to the terms and conditions of the GNU General Public
** License.  See the file COPYING in the main directory of this archive
** for more details.
**
** Created 09/29/92 by Greg Harp
**
** 5/2/94 Roman Hodek:
**   Added bi_atari part of the machine dependent union bi_un; for now it
**   contains just a model field to distinguish between TT and Falcon.
** 26/7/96 Roman Zippel:
**   Renamed to setup.h; added some useful macros to allow gcc some
**   optimizations if possible.
** 5/10/96 Geert Uytterhoeven:
**   Redesign of the boot information structure; moved boot information
**   structure to bootinfo.h
*/
    /*
     *  Linux/m68k Architectures
     */





    /*
     *  CPU, FPU and MMU types
     *
     *  Note: we may rely on the following equalities:
     *
     *      CPU_68020 == MMU_68851
     *      CPU_68030 == MMU_68030
     *      CPU_68040 == FPU_68040 == MMU_68040
     *      CPU_68060 == FPU_68060 == MMU_68060
     */
    /*
     *  Miscellaneous
     */
/* This handles the memory map.. */
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */
/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */
/*
 * asm-generic/int-ll64.h
 *
 * Integer declarations for architectures which use "long long"
 * for 64-bit types.
 */
/*
 * There seems to be no way of detecting this automatically from user
 * space, so 64 bit architectures should override this in their
 * bitsperlong.h. In particular, an architecture that supports
 * both 32 and 64 bit user space must not rely on CONFIG_64BIT
 * to decide it, but rather check a compiler provided macro.
 */
/*
 * FIXME: The check currently breaks x86-64 build, so it's
 * temporarily disabled. Please fix x86-64 and reenable
 */
/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
/* THREAD_SIZE should be 8k, so handle differently for 4k and 8k machines */
/* entry.S relies on these definitions!
 * bits 0-7 are tested at every exception exit
 * bits 8-15 are also tested at syscall exit
 */
OUTPUT_ARCH(m68k)
ENTRY(_start)
MEMORY {
 ram : ORIGIN = 0x400, LENGTH = (0x0 + 0x100000 - 0x400)
}
jiffies = jiffies_64 + 4;
SECTIONS {
 .text : {
  _text = .;
  _stext = . ;
  *(.head.text)
  . = ALIGN(8); *(.text.hot) *(.text) *(.ref.text) *(.text.unlikely)
  . = ALIGN(8); __sched_text_start = .; *(.sched.text) __sched_text_end = .;
  . = ALIGN(8); __lock_text_start = .; *(.spinlock.text) __lock_text_end = .;
         *(.text.lock)
  . = ALIGN(16); /* Exception table              */
  __start___ex_table = .;
  *(__ex_table)
  __stop___ex_table = .;
  *(.rodata) *(.rodata.*)
  *(__vermagic) /* Kernel version magic */
  *(__markers_strings)
  *(.rodata1)
  *(.rodata.str1.1)
  /* Kernel symbol table: Normal symbols */
  . = ALIGN(4);
  __start___ksymtab = .;
  *(__ksymtab)
  __stop___ksymtab = .;
  /* Kernel symbol table: GPL-only symbols */
  __start___ksymtab_gpl = .;
  *(__ksymtab_gpl)
  __stop___ksymtab_gpl = .;
  /* Kernel symbol table: Normal unused symbols */
  __start___ksymtab_unused = .;
  *(__ksymtab_unused)
  __stop___ksymtab_unused = .;
  /* Kernel symbol table: GPL-only unused symbols */
  __start___ksymtab_unused_gpl = .;
  *(__ksymtab_unused_gpl)
  __stop___ksymtab_unused_gpl = .;
  /* Kernel symbol table: GPL-future symbols */
  __start___ksymtab_gpl_future = .;
  *(__ksymtab_gpl_future)
  __stop___ksymtab_gpl_future = .;
  /* Kernel symbol table: Normal symbols */
  __start___kcrctab = .;
  *(__kcrctab)
  __stop___kcrctab = .;
  /* Kernel symbol table: GPL-only symbols */
  __start___kcrctab_gpl = .;
  *(__kcrctab_gpl)
  __stop___kcrctab_gpl = .;
  /* Kernel symbol table: Normal unused symbols */
  __start___kcrctab_unused = .;
  *(__kcrctab_unused)
  __stop___kcrctab_unused = .;
  /* Kernel symbol table: GPL-only unused symbols */
  __start___kcrctab_unused_gpl = .;
  *(__kcrctab_unused_gpl)
  __stop___kcrctab_unused_gpl = .;
  /* Kernel symbol table: GPL-future symbols */
  __start___kcrctab_gpl_future = .;
  *(__kcrctab_gpl_future)
  __stop___kcrctab_gpl_future = .;
  /* Kernel symbol table: strings */
  *(__ksymtab_strings)
  /* Built-in module parameters */
  . = ALIGN(4) ;
  __start___param = .;
  *(__param)
  __stop___param = .;
  *(.note.gnu.build-id)
  . = ALIGN(4) ;
  _etext = . ;
 } > ram
 .data : {
  . = ALIGN(4);
  _sdata = . ;
  *(.data) *(.ref.data) . = ALIGN(8); __start___markers = .; *(__markers) __stop___markers = .; . = ALIGN(32); __start___tracepoints = .; *(__tracepoints) __stop___tracepoints = .; . = ALIGN(8); __start___verbose = .; *(__verbose) __stop___verbose = .;
  . = ALIGN(32); *(.data.cacheline_aligned)
  . = ALIGN(4096); *(.data.init_task)
  _edata = . ;
 } > ram
 .init.text : {
  . = ALIGN((1 << (12)));
  __init_begin = .;
 } > ram
 . = ALIGN((1 << (12))); .init.text : AT(ADDR(.init.text) - 0) { _sinittext = .; *(.init.text) *(.devinit.text) *(.cpuinit.text) *(.meminit.text) _einittext = .; } > ram
 .init.data : AT(ADDR(.init.data) - 0) { *(.init.data) *(.devinit.data) *(.cpuinit.data) *(.meminit.data) . = ALIGN(8); __ctors_start = .; *(.ctors) __ctors_end = .; *(.init.rodata) *(.devinit.rodata) *(.cpuinit.rodata) *(.meminit.rodata) . = ALIGN(16); __setup_start = .; *(.init.setup) __setup_end = .; __initcall_start = .; *(.initcallearly.init) __early_initcall_end = .; *(.initcall0.init) *(.initcall0s.init) *(.initcall1.init) *(.initcall1s.init) *(.initcall2.init) *(.initcall2s.init) *(.initcall3.init) *(.initcall3s.init) *(.initcall4.init) *(.initcall4s.init) *(.initcall5.init) *(.initcall5s.init) *(.initcallrootfs.init) *(.initcall6.init) *(.initcall6s.init) *(.initcall7.init) *(.initcall7s.init) __initcall_end = .; __con_initcall_start = .; *(.con_initcall.init) __con_initcall_end = .; __security_initcall_start = .; *(.security_initcall.init) __security_initcall_end = .; } > ram
 .init.data : {
  . = ALIGN((1 << (12)));
  __init_end = .;
 } > ram
 .bss : {
  . = ALIGN(4);
  _sbss = . ;
  *(.bss)
  *(COMMON)
  . = ALIGN(4) ;
  _ebss = . ;
   _end = . ;
 } > ram
 /DISCARD/ : { *(.exit.text) *(.devexit.text) *(.cpuexit.text) *(.memexit.text) *(.exit.data) *(.devexit.data) *(.devexit.rodata) *(.cpuexit.data) *(.cpuexit.rodata) *(.memexit.data) *(.memexit.rodata) *(.exitcall.exit) *(.discard) }
}
