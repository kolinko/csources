/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, getEnv_rVXof6qIUKJ3J9cw79conT2g)(NimStringDesc* key);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TM_h5LhXa1x7tiRXpXshXFkHA_2, "NUMBER_OF_PROCESSORS", 20);

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	NimStringDesc* x;
	result = (NI)0;
	x = getEnv_rVXof6qIUKJ3J9cw79conT2g(((NimStringDesc*) &TM_h5LhXa1x7tiRXpXshXFkHA_2));
	{
		if (!(((NI) 0) < (x ? x->Sup.len : 0))) goto LA3_;
		result = nsuParseInt(x);
	}
	LA3_: ;
	{
		if (!(result <= ((NI) 0))) goto LA7_;
		result = ((NI) 0);
	}
	LA7_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void) {
}

