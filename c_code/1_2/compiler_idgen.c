/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_LIB_PRIVATE N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toGid_Fvw9bbsIDNn4yf7dHlKp4Bg)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, completeGeneratedFilePath_HuVe3BrX1qQpv7rNlSptLA)(NimStringDesc* f, NIM_BOOL createSubDir);
static N_INLINE(void, writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f, NimStringDesc** x, NI xLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ_2)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
NI gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng;
STRING_LITERAL(TM_OcNXKFm0N2ybP5hO0iXdjw_2, "nim.gid", 7);
STRING_LITERAL(TM_OcNXKFm0N2ybP5hO0iXdjw_3, "\012", 1);

N_LIB_PRIVATE N_NIMCALL(void, registerID_ZN2j9cT9c6WdU9bRORys9cZIAg)(tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* id) {
}

N_LIB_PRIVATE N_NIMCALL(void, idSynchronizationPoint_GU7xhi8Sthx1AieMTTUZqQ)(NI idRange) {
	gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng = (NI)((NI)((NI)((NI)(gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng / idRange) + ((NI) 1)) * idRange) + ((NI) 1));
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toGid_Fvw9bbsIDNn4yf7dHlKp4Bg)(NimStringDesc* f) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = completeGeneratedFilePath_HuVe3BrX1qQpv7rNlSptLA(((NimStringDesc*) &TM_OcNXKFm0N2ybP5hO0iXdjw_2), NIM_TRUE);
	return result;
}

static N_INLINE(void, writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f, NimStringDesc** x, NI xLen_0) {
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < xLen_0)) goto LA3;
				i = x[i_2];
				write_c4mGyJBvK73pdM22jiweKQ_2(f, i);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	write_c4mGyJBvK73pdM22jiweKQ_2(f, ((NimStringDesc*) &TM_OcNXKFm0N2ybP5hO0iXdjw_3));
}

N_LIB_PRIVATE N_NIMCALL(void, saveMaxIds_YGw2jee9aWCa1xh69bRnItGQ)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* T1_;
	tyArray_nHXaesL0DJZHyVS07ARPRA T2_;
	T1_ = (NimStringDesc*)0;
	T1_ = toGid_Fvw9bbsIDNn4yf7dHlKp4Bg(project);
	f = open_hqzpWQbdA2B8l9a6wwNoP4g(T1_, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) -1));
	memset((void*)T2_, 0, sizeof(T2_));
	T2_[0] = nimIntToStr(gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng);
	writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs(f, T2_, 1);
	close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

