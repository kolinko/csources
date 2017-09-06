/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
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
typedef NU8 tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg;
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(int, getFileHandle_bZ9c2yojtXoDTUpfyl8h8Rg)(FILE* f);
NI gFG_g7w4T3anr20OMlWloNx2tQ;
NI gBG_dgmeknpHWrtwqMJGQAp9atA;
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_2, "\033[", 2);
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_3, "\033[0m", 4);

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, setStyle_zEKKPPIjKZs9bVYu4TwenLg)(FILE* f, tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA style) {
	{
		tyEnum_Style_NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style_NXKayqTLMsAibFwNceBlpA)0;
		i = ((NI) 1);
		{
			while (1) {
				if (!(i <= ((NI) 8))) goto LA3;
				{
					NimStringDesc* T8_;
					NimStringDesc* T9_;
					if (!((style &(1U<<((NU)((((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) (i))- 1))&7U)))!=0)) goto LA6_;
					s = ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) (i));
					T8_ = (NimStringDesc*)0;
					T9_ = (NimStringDesc*)0;
					T9_ = nimIntToStr(((NI) (s)));
					T8_ = rawNewString(T9_->Sup.len + 3);
appendString(T8_, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_2));
appendString(T8_, T9_);
appendChar(T8_, 109);
					write_c4mGyJBvK73pdM22jiweKQ(f, T8_);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, resetAttributes_tFIu39aFSR3N0M64Ynwugng)(FILE* f) {
	write_c4mGyJBvK73pdM22jiweKQ(f, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_3));
}

N_NIMCALL(void, setForegroundColor_Tw7yxMupneOmAicqiYt3NA)(FILE* f, tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringDesc* T5_;
	NimStringDesc* T6_;
	gFG_g7w4T3anr20OMlWloNx2tQ = ((NI) (fg));
	{
		if (!bright) goto LA3_;
		gFG_g7w4T3anr20OMlWloNx2tQ += ((NI) 60);
	}
	LA3_: ;
	T5_ = (NimStringDesc*)0;
	T6_ = (NimStringDesc*)0;
	T6_ = nimIntToStr(gFG_g7w4T3anr20OMlWloNx2tQ);
	T5_ = rawNewString(T6_->Sup.len + 3);
appendString(T5_, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_2));
appendString(T5_, T6_);
appendChar(T5_, 109);
	write_c4mGyJBvK73pdM22jiweKQ(f, T5_);
}

N_NIMCALL(NIM_BOOL, isatty_POoHvosCWg3Yl5ieYeLHrg)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle_bZ9c2yojtXoDTUpfyl8h8Rg(f);
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	gFG_g7w4T3anr20OMlWloNx2tQ = ((NI) 0);
	gBG_dgmeknpHWrtwqMJGQAp9atA = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}

