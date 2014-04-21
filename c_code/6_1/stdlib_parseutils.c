/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tslice79091 tslice79091;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct earithmetic2441 earithmetic2441;
typedef struct esynch2429 esynch2429;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41290 tcell41290;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41302 tcellset41302;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  tslice79091  {
NI A;
NI B;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  esynch2429  {
  E_Base Sup;
};
struct  earithmetic2441  {
  esynch2429 Sup;
};
struct  EOverflow  {
  earithmetic2441 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
typedef NI TY22818[16];
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
static N_INLINE(void, HEX2AHEX3D_85723)(NF* x_85729, NF y_85732);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tslice79091, HEX2EHEX2E_86221)(NI a_86225, NI b_86227);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(NI, rawparseint_85531)(NimStringDesc* s, NI64* b, NI start);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NF, tentothepowerof_85712)(NI b_85714);
STRING_LITERAL(TMP1138, "overflow", 8);
extern TFrame* frameptr_13038;
extern TNimType NTI18601; /* ref EOverflow */
extern TNimType NTI2445; /* EOverflow */
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(void, HEX2AHEX3D_85723)(NF* x_85729, NF y_85732) {
	nimfr("*=", "system.nim")
	nimln(2713, "system.nim");
	nimln(2713, "system.nim");
	(*x_85729) = ((NF)((*x_85729)) * (NF)(y_85732));
	popFrame();
}

static N_INLINE(tslice79091, HEX2EHEX2E_86221)(NI a_86225, NI b_86227) {
	tslice79091 result;
	nimfr("..", "system.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(179, "system.nim");
	result.A = a_86225;
	nimln(180, "system.nim");
	result.B = b_86227;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawparseint_85531)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	nimfr("rawParseInt", "parseutils.nim")
	result = 0;
	nimln(194, "parseutils.nim");
	sign = -1;
	nimln(195, "parseutils.nim");
	i = start;
	nimln(196, "parseutils.nim");
	{
		nimln(196, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(196, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(197, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(198, "parseutils.nim");
		i = addInt(i, 1);
		nimln(199, "parseutils.nim");
		sign = 1;
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(200, "parseutils.nim");
	{
		NI64 TMP1136;
		NI TMP1137;
		nimln(200, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10;
		nimln(201, "parseutils.nim");
		(*b) = 0;
		nimln(202, "parseutils.nim");
		while (1) {
			NI64 TMP1133;
			NI TMP1134;
			NI64 TMP1135;
			nimln(202, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA12;
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			TMP1133 = mulInt64((*b), 10);
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1134 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			TMP1135 = subInt64((NI64)(TMP1133), ((NI64) ((NI32)(TMP1134))));
			(*b) = (NI64)(TMP1135);
			nimln(204, "parseutils.nim");
			i = addInt(i, 1);
			nimln(205, "parseutils.nim");
			while (1) {
				nimln(205, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA13;
				nimln(205, "parseutils.nim");
				i = addInt(i, 1);
			} LA13: ;
		} LA12: ;
		nimln(206, "parseutils.nim");
		nimln(206, "parseutils.nim");
		TMP1136 = mulInt64((*b), sign);
		(*b) = (NI64)(TMP1136);
		nimln(207, "parseutils.nim");
		nimln(207, "parseutils.nim");
		TMP1137 = subInt(i, start);
		result = (NI32)(TMP1137);
	}
	LA10: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseBiggestInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(218, "parseutils.nim");
	result = rawparseint_85531(s, &res, start);
	nimln(219, "parseutils.nim");
	(*number) = res;
	popFrame();
	return result;
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(227, "parseutils.nim");
	result = npuParseBiggestInt(s, &res, start);
	nimln(228, "parseutils.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		EOverflow* e_85686;
		NimStringDesc* LOC9;
		nimln(228, "parseutils.nim");
		LOC3 = 0;
		LOC3 = NIM_TRUE;
		if (!(LOC3)) goto LA4;
		nimln(229, "parseutils.nim");
		LOC5 = 0;
		nimln(229, "parseutils.nim");
		LOC5 = (res < (-2147483647 -1));
		if (LOC5) goto LA6;
		nimln(229, "parseutils.nim");
		LOC5 = (2147483647 < res);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_85686 = 0;
		nimln(1991, "system.nim");
		e_85686 = (EOverflow*) newObj((&NTI18601), sizeof(EOverflow));
		(*e_85686).Sup.Sup.Sup.Sup.m_type = (&NTI2445);
		nimln(1992, "system.nim");
		LOC9 = 0;
		LOC9 = (*e_85686).Sup.Sup.Sup.message; (*e_85686).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1138));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(230, "parseutils.nim");
		raiseException((E_Base*)e_85686, "EOverflow");
	}
	goto LA1;
	LA7: ;
	{
		nimln(232, "parseutils.nim");
		(*number) = ((NI)chckRange64(res, (-2147483647 -1), 2147483647));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NF, tentothepowerof_85712)(NI b_85714) {
	NF result;
	NI b;
	NF a;
	nimfr("tenToThePowerOf", "parseutils.nim")
	result = 0;
	nimln(235, "parseutils.nim");
	b = b_85714;
	nimln(236, "parseutils.nim");
	a = 1.0000000000000000e+001;
	nimln(237, "parseutils.nim");
	result = 1.0000000000000000e+000;
	nimln(238, "parseutils.nim");
	while (1) {
		nimln(239, "parseutils.nim");
		{
			nimln(239, "parseutils.nim");
			nimln(239, "parseutils.nim");
			if (!(((NI) ((NI)(b & 1))) == 1)) goto LA4;
			nimln(240, "parseutils.nim");
			HEX2AHEX3D_85723(&result, a);
		}
		LA4: ;
		nimln(241, "parseutils.nim");
		nimln(241, "parseutils.nim");
		b = (NI)((NU32)(b) >> (NU32)(1));
		nimln(242, "parseutils.nim");
		{
			nimln(242, "parseutils.nim");
			if (!(b == 0)) goto LA8;
			nimln(242, "parseutils.nim");
			goto LA1;
		}
		LA8: ;
		nimln(243, "parseutils.nim");
		HEX2AHEX3D_85723(&a, a);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF esign;
	NF sign;
	NI i;
	NI exponent;
	NI flags;
	NF hd;
	NI TMP1862;
	nimfr("parseBiggestFloat", "parseutils.nim")
	result = 0;
	nimln(251, "parseutils.nim");
	esign = 1.0000000000000000e+000;
	nimln(252, "parseutils.nim");
	sign = 1.0000000000000000e+000;
	nimln(253, "parseutils.nim");
	i = start;
	exponent = 0;
	flags = 0;
	nimln(256, "parseutils.nim");
	(*number) = 0.0;
	nimln(257, "parseutils.nim");
	{
		nimln(257, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(257, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(258, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(259, "parseutils.nim");
		sign = -1.0000000000000000e+000;
		nimln(260, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(261, "parseutils.nim");
	{
		NIM_BOOL LOC10;
		nimln(261, "parseutils.nim");
		LOC10 = 0;
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(78));
		if (LOC10) goto LA11;
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(110));
		LA11: ;
		if (!LOC10) goto LA12;
		nimln(262, "parseutils.nim");
		{
			NIM_BOOL LOC16;
			NI TMP1843;
			NI TMP1844;
			nimln(262, "parseutils.nim");
			LOC16 = 0;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1843 = addInt(i, 1);
			if ((NU)((NI32)(TMP1843)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI32)(TMP1843)]) == (NU8)(65));
			if (LOC16) goto LA17;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1844 = addInt(i, 1);
			if ((NU)((NI32)(TMP1844)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI32)(TMP1844)]) == (NU8)(97));
			LA17: ;
			if (!LOC16) goto LA18;
			nimln(263, "parseutils.nim");
			{
				NIM_BOOL LOC22;
				NI TMP1845;
				NI TMP1846;
				nimln(263, "parseutils.nim");
				LOC22 = 0;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1845 = addInt(i, 2);
				if ((NU)((NI32)(TMP1845)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI32)(TMP1845)]) == (NU8)(78));
				if (LOC22) goto LA23;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1846 = addInt(i, 2);
				if ((NU)((NI32)(TMP1846)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI32)(TMP1846)]) == (NU8)(110));
				LA23: ;
				if (!LOC22) goto LA24;
				nimln(264, "parseutils.nim");
				{
					NI TMP1847;
					NI TMP1848;
					NI TMP1849;
					nimln(264, "parseutils.nim");
					nimln(264, "parseutils.nim");
					nimln(264, "parseutils.nim");
					TMP1847 = addInt(i, 3);
					if ((NU)((NI32)(TMP1847)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI32)(TMP1847)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI32)(TMP1847)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI32)(TMP1847)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI32)(TMP1847)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI32)(TMP1847)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI32)(TMP1847)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI32)(TMP1847)])) == ((NU8)(95))))) goto LA28;
					nimln(265, "parseutils.nim");
					(*number) = NAN;
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					TMP1848 = addInt(i, 3);
					TMP1849 = subInt((NI32)(TMP1848), start);
					result = (NI32)(TMP1849);
					goto BeforeRet;
				}
				LA28: ;
			}
			LA24: ;
		}
		LA18: ;
		nimln(267, "parseutils.nim");
		nimln(267, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA12: ;
	nimln(268, "parseutils.nim");
	{
		NIM_BOOL LOC32;
		nimln(268, "parseutils.nim");
		LOC32 = 0;
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(73));
		if (LOC32) goto LA33;
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(105));
		LA33: ;
		if (!LOC32) goto LA34;
		nimln(269, "parseutils.nim");
		{
			NIM_BOOL LOC38;
			NI TMP1850;
			NI TMP1851;
			nimln(269, "parseutils.nim");
			LOC38 = 0;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1850 = addInt(i, 1);
			if ((NU)((NI32)(TMP1850)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI32)(TMP1850)]) == (NU8)(78));
			if (LOC38) goto LA39;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1851 = addInt(i, 1);
			if ((NU)((NI32)(TMP1851)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI32)(TMP1851)]) == (NU8)(110));
			LA39: ;
			if (!LOC38) goto LA40;
			nimln(270, "parseutils.nim");
			{
				NIM_BOOL LOC44;
				NI TMP1852;
				NI TMP1853;
				nimln(270, "parseutils.nim");
				LOC44 = 0;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1852 = addInt(i, 2);
				if ((NU)((NI32)(TMP1852)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI32)(TMP1852)]) == (NU8)(70));
				if (LOC44) goto LA45;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1853 = addInt(i, 2);
				if ((NU)((NI32)(TMP1853)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI32)(TMP1853)]) == (NU8)(102));
				LA45: ;
				if (!LOC44) goto LA46;
				nimln(271, "parseutils.nim");
				{
					NI TMP1854;
					NI TMP1855;
					NI TMP1856;
					nimln(271, "parseutils.nim");
					nimln(271, "parseutils.nim");
					nimln(271, "parseutils.nim");
					TMP1854 = addInt(i, 3);
					if ((NU)((NI32)(TMP1854)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI32)(TMP1854)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI32)(TMP1854)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI32)(TMP1854)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI32)(TMP1854)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI32)(TMP1854)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI32)(TMP1854)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI32)(TMP1854)])) == ((NU8)(95))))) goto LA50;
					nimln(272, "parseutils.nim");
					nimln(272, "parseutils.nim");
					(*number) = ((NF)(INF) * (NF)(sign));
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					TMP1855 = addInt(i, 3);
					TMP1856 = subInt((NI32)(TMP1855), start);
					result = (NI32)(TMP1856);
					goto BeforeRet;
				}
				LA50: ;
			}
			LA46: ;
		}
		LA40: ;
		nimln(274, "parseutils.nim");
		nimln(274, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA34: ;
	nimln(275, "parseutils.nim");
	while (1) {
		NI TMP1857;
		nimln(275, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA52;
		nimln(277, "parseutils.nim");
		nimln(277, "parseutils.nim");
		flags = (NI)(flags | 1);
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		TMP1857 = subInt(((NI) (((NU8)(s->data[i])))), 48);
		(*number) = ((NF)(((NF)((*number)) * (NF)(1.0000000000000000e+001))) + (NF)(((double) (((NI) ((NI32)(TMP1857)))))));
		nimln(279, "parseutils.nim");
		i = addInt(i, 1);
		nimln(280, "parseutils.nim");
		while (1) {
			nimln(280, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA53;
			nimln(280, "parseutils.nim");
			i = addInt(i, 1);
		} LA53: ;
	} LA52: ;
	nimln(282, "parseutils.nim");
	{
		NF hd;
		nimln(282, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(46))) goto LA56;
		nimln(283, "parseutils.nim");
		hd = 1.0000000000000000e+000;
		nimln(284, "parseutils.nim");
		i = addInt(i, 1);
		nimln(285, "parseutils.nim");
		while (1) {
			NI TMP1858;
			nimln(285, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA58;
			nimln(287, "parseutils.nim");
			nimln(287, "parseutils.nim");
			flags = (NI)(flags | 2);
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1858 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			(*number) = ((NF)(((NF)((*number)) * (NF)(1.0000000000000000e+001))) + (NF)(((double) (((NI) ((NI32)(TMP1858)))))));
			nimln(289, "parseutils.nim");
			nimln(289, "parseutils.nim");
			hd = ((NF)(hd) * (NF)(1.0000000000000000e+001));
			nimln(290, "parseutils.nim");
			i = addInt(i, 1);
			nimln(291, "parseutils.nim");
			while (1) {
				nimln(291, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA59;
				nimln(291, "parseutils.nim");
				i = addInt(i, 1);
			} LA59: ;
		} LA58: ;
		nimln(292, "parseutils.nim");
		nimln(292, "parseutils.nim");
		(*number) = ((NF)((*number)) / (NF)(hd));
	}
	LA56: ;
	nimln(294, "parseutils.nim");
	{
		nimln(294, "parseutils.nim");
		if (!(flags == 0)) goto LA62;
		nimln(294, "parseutils.nim");
		nimln(294, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA62: ;
	nimln(296, "parseutils.nim");
	{
		nimln(296, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) == ((NU8)(101)) || ((NU8)(s->data[i])) == ((NU8)(69)))) goto LA66;
		nimln(297, "parseutils.nim");
		i = addInt(i, 1);
		nimln(298, "parseutils.nim");
		{
			nimln(298, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA70;
			nimln(299, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA70: ;
		{
			nimln(300, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA73;
			nimln(301, "parseutils.nim");
			esign = -1.0000000000000000e+000;
			nimln(302, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA73: ;
		LA68: ;
		nimln(303, "parseutils.nim");
		{
			nimln(303, "parseutils.nim");
			nimln(303, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57))))) goto LA77;
			nimln(304, "parseutils.nim");
			nimln(304, "parseutils.nim");
			result = 0;
			goto BeforeRet;
		}
		LA77: ;
		nimln(305, "parseutils.nim");
		while (1) {
			NI TMP1859;
			NI TMP1860;
			NI TMP1861;
			nimln(305, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA79;
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			TMP1859 = mulInt(exponent, 10);
			nimln(306, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1860 = addInt((NI32)(TMP1859), ((NI) (((NU8)(s->data[i])))));
			TMP1861 = subInt((NI32)(TMP1860), 48);
			exponent = (NI32)(TMP1861);
			nimln(307, "parseutils.nim");
			i = addInt(i, 1);
			nimln(308, "parseutils.nim");
			while (1) {
				nimln(308, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA80;
				nimln(308, "parseutils.nim");
				i = addInt(i, 1);
			} LA80: ;
		} LA79: ;
	}
	LA66: ;
	nimln(310, "parseutils.nim");
	hd = tentothepowerof_85712(exponent);
	nimln(311, "parseutils.nim");
	{
		nimln(311, "parseutils.nim");
		if (!(0.0 < esign)) goto LA83;
		nimln(311, "parseutils.nim");
		nimln(311, "parseutils.nim");
		(*number) = ((NF)((*number)) * (NF)(hd));
	}
	goto LA81;
	LA83: ;
	{
		nimln(312, "parseutils.nim");
		nimln(312, "parseutils.nim");
		(*number) = ((NF)((*number)) / (NF)(hd));
	}
	LA81: ;
	nimln(314, "parseutils.nim");
	nimln(314, "parseutils.nim");
	(*number) = ((NF)((*number)) * (NF)(sign));
	nimln(315, "parseutils.nim");
	nimln(315, "parseutils.nim");
	TMP1862 = subInt(i, start);
	result = (NI32)(TMP1862);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	nimfr("parseFloat", "parseutils.nim")
	result = 0;
	bf = 0;
	nimln(323, "parseutils.nim");
	result = npuParseBiggestFloat(s, &bf, start);
	nimln(324, "parseutils.nim");
	(*number) = bf;
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibparseutilsInit)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

N_NOINLINE(void, stdlibparseutilsDatInit)(void) {
}

