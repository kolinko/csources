/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw;
typedef struct RootObj RootObj;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NI bufLen;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars;
};
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NOCONV(void*, alloc_sVm4rDImKK2ZDdylByayiA)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_QbedUCk2XwI9c7bbRzXBY0g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
static N_INLINE(void, moveMem_E1xtACub5WcDa3vbrIXbwgnimlexbase)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readData_Gnwdizh7H5Q9cYivUoGHrVA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NOCONV(void*, realloc_y4TzCoc3hQhz9cedxS9cbemA)(void* p, NI newSize);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
N_LIB_PRIVATE N_NOCONV(void, dealloc_RCjNtRnHdRYntrcE7YtwWw)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, close_4ed7IXme7lqtClFI7s2sTQ)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_B6cGbTPhMsqMovc9cOcIHRw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_S9agCYBinaYZnGWcjTdxclg_;
extern TNimType NTI_r3Wc5tOoxP8rz1DvGVTUvw_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;

static N_INLINE(void, moveMem_E1xtACub5WcDa3vbrIXbwgnimlexbase)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}

N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_QbedUCk2XwI9c7bbRzXBY0g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI T5_;
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	toCopy = (NI)((NI)((*L).bufLen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < toCopy)) goto LA3_;
		moveMem_E1xtACub5WcDa3vbrIXbwgnimlexbase(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(toCopy * ((NI) 1)))));
	}
	LA3_: ;
	T5_ = (NI)0;
	T5_ = readData_Gnwdizh7H5Q9cYivUoGHrVA((*L).input, ((void*) ((&(*L).buf[toCopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsRead = (NI)(T5_ / ((NI) 1));
	s = (NI)(toCopy + charsRead);
	{
		if (!(charsRead < (NI)((*L).sentinel + ((NI) 1)))) goto LA8_;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6_;
	LA8_: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = (((NI) 0) <= s);
						if (!(T15_)) goto LA16_;
						T15_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf[s])))&7U)))!=0));
						LA16_: ;
						if (!T15_) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19_;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17_;
				LA19_: ;
				{
					void* T22_;
					NI T23_;
					oldBufLen = (*L).bufLen;
					(*L).bufLen = (NI)((*L).bufLen * ((NI) 2));
					T22_ = (void*)0;
					T22_ = realloc_y4TzCoc3hQhz9cedxS9cbemA(((void*) ((*L).buf)), ((NI) ((NI)((*L).bufLen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (T22_));
					T23_ = (NI)0;
					T23_ = readData_Gnwdizh7H5Q9cYivUoGHrVA((*L).input, ((void*) ((&(*L).buf[oldBufLen]))), (NI)(oldBufLen * ((NI) 1)));
					charsRead = (NI)(T23_ / ((NI) 1));
					{
						if (!(charsRead < oldBufLen)) goto LA26_;
						(*L).buf[(NI)(oldBufLen + charsRead)] = 0;
						(*L).sentinel = (NI)(oldBufLen + charsRead);
						goto LA11;
					}
					LA26_: ;
					s = (NI)((*L).bufLen - ((NI) 1));
				}
				LA17_: ;
			}
		} LA11: ;
	}
	LA6_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		(*L).bufpos += ((NI) 3);
		(*L).lineStart += ((NI) 3);
	}
	LA7_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, open_xmgaYJZNnO6QcDtac9bs3Vg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input, NI bufLen, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars) {
	void* T1_;
	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	(*L).bufLen = bufLen;
	memcpy((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	T1_ = (void*)0;
	T1_ = alloc_sVm4rDImKK2ZDdylByayiA(((NI) ((NI)(bufLen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (T1_));
	(*L).sentinel = (NI)(bufLen - ((NI) 1));
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	fillBuffer_QbedUCk2XwI9c7bbRzXBY0g(L);
	skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw(L);
}

N_LIB_PRIVATE N_NIMCALL(void, close_QbedUCk2XwI9c7bbRzXBY0g_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	dealloc_RCjNtRnHdRYntrcE7YtwWw(((void*) ((*L).buf)));
	close_4ed7IXme7lqtClFI7s2sTQ((*L).input);
}

N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	result = (NI)0;
	{
		if (!(pos < (*L).sentinel)) goto LA3_;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1_;
	LA3_: ;
	{
		fillBuffer_QbedUCk2XwI9c7bbRzXBY0g(L);
		(*L).offsetBase += pos;
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleCR_IwUEvMBOLRY9cqyar6XKEaw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw_2(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3_;
		result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw_2(L, result);
	}
	LA3_: ;
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleLF_IwUEvMBOLRY9cqyar6XKEaw_3)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw_2(L, pos);
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_9cj186ckGjLqyndkoW7bBdg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	result = (NI)0;
	result = ((NI)(pos - (*L).lineStart) > 0? ((NI)(pos - (*L).lineStart)) : -((NI)(pos - (*L).lineStart)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TM_k6p5NxDJat9aTyZxfZjCDJQ_2[9];
static TNimNode TM_k6p5NxDJat9aTyZxfZjCDJQ_0[11];
NTI_B6cGbTPhMsqMovc9cOcIHRw_.size = sizeof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw);
NTI_B6cGbTPhMsqMovc9cOcIHRw_.kind = 17;
NTI_B6cGbTPhMsqMovc9cOcIHRw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[0] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, bufpos);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[1] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, buf);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTI_S9agCYBinaYZnGWcjTdxclg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[2] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, bufLen);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "bufLen";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[3] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, input);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTI_r3Wc5tOoxP8rz1DvGVTUvw_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "input";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[4] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, lineNumber);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "lineNumber";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[5] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, sentinel);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "sentinel";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[6] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, lineStart);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "lineStart";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[7] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, offsetBase);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "offsetBase";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2[8] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9];
NTI_HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar_nmiMWKVIe46vacnhAFrQvw);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10].len = 0; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10].kind = 0;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.node = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, refillChars);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].name = "refillChars";
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 9; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM_k6p5NxDJat9aTyZxfZjCDJQ_2[0];
NTI_B6cGbTPhMsqMovc9cOcIHRw_.node = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}

