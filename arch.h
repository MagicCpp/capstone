/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, Dang Hoang Vu <danghvu@gmail.com> 2013 */

#ifndef __ARCH_H__
#define __ARCH_H__

#define MAX_ARCH 32

void (*init_arch[MAX_ARCH]) (cs_struct *);
cs_err (*option_arch[MAX_ARCH]) (cs_struct*, cs_opt_type, size_t value);

#ifdef CS_SUPPORT_X86
#include "arch/X86/module.h"
#endif
#ifdef CS_SUPPORT_ARM
#include "arch/ARM/module.h"
#endif
#ifdef CS_SUPPORT_AARCH64
#include "arch/AArch64/module.h"
#endif
#ifdef CS_SUPPORT_MIPS
#include "arch/Mips/module.h"
#endif

#endif
