/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
TNimType NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_;

N_LIB_PRIVATE N_NIMCALL(tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q, prefixMatch_zwcMxnh9ceacVNwD0s9a4UVA)(NimStringDesc* p, NimStringDesc* s) {
	tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q result;
	NI i;
	NI L;
{	result = (tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q)0;
	{
		if (!((s ? s->Sup.len : 0) < (p ? p->Sup.len : 0))) goto LA3_;
		result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	L = (s ? s->Sup.len : 0);
	{
		while (1) {
			if (!(i < L)) goto LA6;
			{
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA9_;
				i += ((NI) 1);
			}
			LA9_: ;
			{
				NIM_CHAR T13_;
				NIM_CHAR T14_;
				NI ii;
				NI jj;
				T13_ = (NIM_CHAR)0;
				T13_ = nsuToLowerAsciiChar(s->data[i]);
				T14_ = (NIM_CHAR)0;
				T14_ = nsuToLowerAsciiChar(p->data[((NI) 0)]);
				if (!((NU8)(T13_) == (NU8)(T14_))) goto LA15_;
				ii = (NI)(i + ((NI) 1));
				jj = ((NI) 1);
				{
					while (1) {
						NIM_BOOL T19_;
						T19_ = (NIM_BOOL)0;
						T19_ = (ii < L);
						if (!(T19_)) goto LA20_;
						T19_ = (jj < (p ? p->Sup.len : 0));
						LA20_: ;
						if (!T19_) goto LA18;
						{
							if (!((NU8)(p->data[jj]) == (NU8)(95))) goto LA23_;
							jj += ((NI) 1);
						}
						LA23_: ;
						{
							if (!((NU8)(s->data[ii]) == (NU8)(95))) goto LA27_;
							ii += ((NI) 1);
						}
						LA27_: ;
						{
							NIM_CHAR T31_;
							NIM_CHAR T32_;
							T31_ = (NIM_CHAR)0;
							T31_ = nsuToLowerAsciiChar(s->data[ii]);
							T32_ = (NIM_CHAR)0;
							T32_ = nsuToLowerAsciiChar(p->data[jj]);
							if (!!(((NU8)(T31_) == (NU8)(T32_)))) goto LA33_;
							goto LA17;
						}
						LA33_: ;
						ii += ((NI) 1);
						jj += ((NI) 1);
					} LA18: ;
				} LA17: ;
				{
					if (!((p ? p->Sup.len : 0) <= jj)) goto LA37_;
					{
						if (!(i == ((NI) 0))) goto LA41_;
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 3);
						goto BeforeRet_;
					}
					goto LA39_;
					LA41_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 2);
						goto BeforeRet_;
					}
					LA39_: ;
				}
				LA37_: ;
			}
			LA15_: ;
			i += ((NI) 1);
		} LA6: ;
	}
	{
		NIM_CHAR T46_;
		NIM_CHAR T47_;
		NI j;
		T46_ = (NIM_CHAR)0;
		T46_ = nsuToLowerAsciiChar(s->data[((NI) 0)]);
		T47_ = (NIM_CHAR)0;
		T47_ = nsuToLowerAsciiChar(p->data[((NI) 0)]);
		if (!((NU8)(T46_) == (NU8)(T47_))) goto LA48_;
		i = ((NI) 1);
		j = ((NI) 1);
		{
			while (1) {
				if (!(i < (s ? s->Sup.len : 0))) goto LA51;
				{
					NIM_BOOL T54_;
					T54_ = (NIM_BOOL)0;
					T54_ = ((NU8)(s->data[i]) == (NU8)(95));
					if (!(T54_)) goto LA55_;
					T54_ = (i < (NI)((s ? s->Sup.len : 0) - ((NI) 1)));
					LA55_: ;
					if (!T54_) goto LA56_;
					{
						NIM_BOOL T60_;
						NIM_CHAR T62_;
						NIM_CHAR T63_;
						T60_ = (NIM_BOOL)0;
						T60_ = (j < (p ? p->Sup.len : 0));
						if (!(T60_)) goto LA61_;
						T62_ = (NIM_CHAR)0;
						T62_ = nsuToLowerAsciiChar(p->data[j]);
						T63_ = (NIM_CHAR)0;
						T63_ = nsuToLowerAsciiChar(s->data[(NI)(i + ((NI) 1))]);
						T60_ = ((NU8)(T62_) == (NU8)(T63_));
						LA61_: ;
						if (!T60_) goto LA64_;
						j += ((NI) 1);
					}
					goto LA58_;
					LA64_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
						goto BeforeRet_;
					}
					LA58_: ;
				}
				LA56_: ;
				{
					NIM_BOOL T69_;
					T69_ = (NIM_BOOL)0;
					T69_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)));
					if (!(T69_)) goto LA70_;
					T69_ = !((((NU8)(s->data[(NI)(i - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(s->data[(NI)(i - ((NI) 1))])) <= ((NU8)(90))));
					LA70_: ;
					if (!T69_) goto LA71_;
					{
						NIM_BOOL T75_;
						NIM_CHAR T77_;
						NIM_CHAR T78_;
						T75_ = (NIM_BOOL)0;
						T75_ = (j < (p ? p->Sup.len : 0));
						if (!(T75_)) goto LA76_;
						T77_ = (NIM_CHAR)0;
						T77_ = nsuToLowerAsciiChar(p->data[j]);
						T78_ = (NIM_CHAR)0;
						T78_ = nsuToLowerAsciiChar(s->data[i]);
						T75_ = ((NU8)(T77_) == (NU8)(T78_));
						LA76_: ;
						if (!T75_) goto LA79_;
						j += ((NI) 1);
					}
					goto LA73_;
					LA79_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
						goto BeforeRet_;
					}
					LA73_: ;
				}
				LA71_: ;
				i += ((NI) 1);
			} LA51: ;
		}
		{
			if (!((p ? p->Sup.len : 0) <= j)) goto LA84_;
			result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 1);
			goto BeforeRet_;
		}
		goto LA82_;
		LA84_: ;
		{
			result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
			goto BeforeRet_;
		}
		LA82_: ;
	}
	LA48_: ;
	result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_prefixmatchesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_prefixmatchesDatInit000)(void) {
static TNimNode* TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2[4];
NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4;
static char* NIM_CONST TM_P9b9adRChs9cbzL6i5n3jD9b9ag_3[4] = {
"None", 
"Abbrev", 
"Substr", 
"Prefix"};
static TNimNode TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[5];
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.size = sizeof(tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q);
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.kind = 14;
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.base = 0;
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.flags = 3;
for (TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4 = 0; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4 < 4; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4++) {
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4+0].kind = 1;
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4+0].offset = TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4;
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4+0].name = TM_P9b9adRChs9cbzL6i5n3jD9b9ag_3[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4];
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4] = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4+0];
}
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].len = 4; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].kind = 2; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].sons = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2[0];
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.node = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4];
}

