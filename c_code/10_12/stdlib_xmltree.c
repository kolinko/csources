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
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addEscaped_Sz4t9bYeRWG9bGp5ci6iq0Gg)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_2, "&lt;", 4);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_3, "&gt;", 4);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_4, "&amp;", 5);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_5, "&quot;", 6);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_6, "&#x27;", 6);
STRING_LITERAL(TM_qYyKc6OpDWHHaBXL9bX9aQ2A_7, "&#x2F;", 6);

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(void, addEscaped_Sz4t9bYeRWG9bGp5ci6iq0Gg)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_2));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_3));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_4));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_5));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_6));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM_qYyKc6OpDWHHaBXL9bX9aQ2A_7));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c);
				}
				break;
				}
				i += ((NI) 1);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, escape_zpJJik0owP9caseGcw2LLIQ)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
	addEscaped_Sz4t9bYeRWG9bGp5ci6iq0Gg((&result), s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit000)(void) {
}

