// FILE: include/asm-i386/segment.h

#ifndef _ASM_SEGMENT_H
#define _ASM_SEGMENT_H

#define __KERNEL_CS	0x10 	// 内核代码段, index=2 TI=0 RPL=0
#define __KERNEL_DS	0x18 	// 内核数据段, index=3 TI=0 RPL=0

#define __USER_CS	0x23 	// 用户代码段, index=4 TI=0 RPL=3
#define __USER_DS	0x2B 	// 用户数据段, index=5 TI=0 RPL=3

#endif
