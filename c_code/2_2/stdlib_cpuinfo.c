/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix

N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	result = (NI)0;
	result = sysconf(((int) 84));
	{
		if (!(result <= ((NI) 0))) goto LA3_;
		result = ((NI) 0);
	}
	LA3_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void) {
}

