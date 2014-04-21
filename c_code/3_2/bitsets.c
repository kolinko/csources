/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tbitset242012 tbitset242012;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tbitset242012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_242059)(tbitset242012* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_242047)(tbitset242012** x, NI64 elem);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_242053)(tbitset242012** x, NI64 elem);
N_NIMCALL(void, bitsetinit_242017)(tbitset242012** b, NI length);
N_NIMCALL(void, TMP3148)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_242023)(tbitset242012** x, tbitset242012* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_242029)(tbitset242012** x, tbitset242012* y);
N_NIMCALL(void, bitsetsymdiff_242035)(tbitset242012** x, tbitset242012* y);
N_NIMCALL(void, bitsetintersect_242041)(tbitset242012** x, tbitset242012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_242064)(tbitset242012* x, tbitset242012* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_242069)(tbitset242012* x, tbitset242012* y);
STRING_LITERAL(TMP3141, "elem >= 0 ", 10);
extern TFrame* frameptr_13238;
extern TNimType NTI108; /* int8 */
TNimType NTI242012; /* TBitSet */

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(NIM_BOOL, bitsetin_242059)(tbitset242012* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP3139;
	NI64 TMP3140;
	nimfr("bitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3139 = divInt64(e, 8);
	if ((NU)((NI64)(TMP3139)) >= (NU)(x->Sup.len)) raiseIndexError();
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3140 = modInt64(e, 8);
	result = !(((NI8)(x->data[(NI64)(TMP3139)] & ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(TMP3140)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, bitsetincl_242047)(tbitset242012** x, NI64 elem) {
	NI64 TMP3142;
	NI64 TMP3143;
	NI64 TMP3144;
	nimfr("bitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		nimln(38, "bitsets.nim");
		nimln(38, "bitsets.nim");
		if (!!((0 <= elem))) goto LA3;
		nimln(38, "bitsets.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP3141));
	}
	LA3: ;
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3142 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3142)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3143 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3143)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	TMP3144 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3142)] = (NI8)((*x)->data[(NI64)(TMP3143)] | ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(TMP3144))))))));
	popFrame();
}

N_NIMCALL(void, bitsetexcl_242053)(tbitset242012** x, NI64 elem) {
	NI64 TMP3145;
	NI64 TMP3146;
	NI64 TMP3147;
	nimfr("bitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3145 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3145)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3146 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3146)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	TMP3147 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3145)] = (NI8)((*x)->data[(NI64)(TMP3146)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(TMP3147))))))))));
	popFrame();
}
N_NIMCALL(void, TMP3148)(void* p, NI op) {
	tbitset242012* a;
	NI LOC1;
	a = (tbitset242012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_242017)(tbitset242012** b, NI length) {
	nimfr("bitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) &(*b), (tbitset242012*) newSeq((&NTI242012), length));
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

N_NIMCALL(void, bitsetunion_242023)(tbitset242012** x, tbitset242012* y) {
	NI i_242254;
	NI HEX3Atmp_242255;
	NI res_242257;
	nimfr("bitSetUnion", "bitsets.nim")
	i_242254 = 0;
	HEX3Atmp_242255 = 0;
	nimln(50, "bitsets.nim");
	nimln(50, "bitsets.nim");
	HEX3Atmp_242255 = ((*x)->Sup.len-1);
	nimln(1450, "system.nim");
	res_242257 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242257 <= HEX3Atmp_242255)) goto LA1;
		nimln(1450, "system.nim");
		i_242254 = res_242257;
		nimln(50, "bitsets.nim");
		if ((NU)(i_242254) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(50, "bitsets.nim");
		if ((NU)(i_242254) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_242254) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_242254] = (NI8)((*x)->data[i_242254] | y->data[i_242254]);
		nimln(1453, "system.nim");
		res_242257 = addInt(res_242257, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetdiff_242029)(tbitset242012** x, tbitset242012* y) {
	NI i_242279;
	NI HEX3Atmp_242280;
	NI res_242282;
	nimfr("bitSetDiff", "bitsets.nim")
	i_242279 = 0;
	HEX3Atmp_242280 = 0;
	nimln(53, "bitsets.nim");
	nimln(53, "bitsets.nim");
	HEX3Atmp_242280 = ((*x)->Sup.len-1);
	nimln(1450, "system.nim");
	res_242282 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242282 <= HEX3Atmp_242280)) goto LA1;
		nimln(1450, "system.nim");
		i_242279 = res_242282;
		nimln(53, "bitsets.nim");
		if ((NU)(i_242279) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_242279) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_242279) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_242279] = (NI8)((*x)->data[i_242279] & (NI8)((NU8) ~(y->data[i_242279])));
		nimln(1453, "system.nim");
		res_242282 = addInt(res_242282, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetsymdiff_242035)(tbitset242012** x, tbitset242012* y) {
	NI i_242304;
	NI HEX3Atmp_242305;
	NI res_242307;
	nimfr("bitSetSymDiff", "bitsets.nim")
	i_242304 = 0;
	HEX3Atmp_242305 = 0;
	nimln(56, "bitsets.nim");
	nimln(56, "bitsets.nim");
	HEX3Atmp_242305 = ((*x)->Sup.len-1);
	nimln(1450, "system.nim");
	res_242307 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242307 <= HEX3Atmp_242305)) goto LA1;
		nimln(1450, "system.nim");
		i_242304 = res_242307;
		nimln(56, "bitsets.nim");
		if ((NU)(i_242304) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(56, "bitsets.nim");
		if ((NU)(i_242304) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_242304) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_242304] = (NI8)((*x)->data[i_242304] ^ y->data[i_242304]);
		nimln(1453, "system.nim");
		res_242307 = addInt(res_242307, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetintersect_242041)(tbitset242012** x, tbitset242012* y) {
	NI i_242329;
	NI HEX3Atmp_242330;
	NI res_242332;
	nimfr("bitSetIntersect", "bitsets.nim")
	i_242329 = 0;
	HEX3Atmp_242330 = 0;
	nimln(59, "bitsets.nim");
	nimln(59, "bitsets.nim");
	HEX3Atmp_242330 = ((*x)->Sup.len-1);
	nimln(1450, "system.nim");
	res_242332 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242332 <= HEX3Atmp_242330)) goto LA1;
		nimln(1450, "system.nim");
		i_242329 = res_242332;
		nimln(59, "bitsets.nim");
		if ((NU)(i_242329) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(59, "bitsets.nim");
		if ((NU)(i_242329) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_242329) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_242329] = (NI8)((*x)->data[i_242329] & y->data[i_242329]);
		nimln(1453, "system.nim");
		res_242332 = addInt(res_242332, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, bitsetequals_242064)(tbitset242012* x, tbitset242012* y) {
	NIM_BOOL result;
	NI i_242354;
	NI HEX3Atmp_242355;
	NI res_242357;
	nimfr("bitSetEquals", "bitsets.nim")
	result = 0;
	i_242354 = 0;
	HEX3Atmp_242355 = 0;
	nimln(62, "bitsets.nim");
	nimln(62, "bitsets.nim");
	HEX3Atmp_242355 = (x->Sup.len-1);
	nimln(1450, "system.nim");
	res_242357 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242357 <= HEX3Atmp_242355)) goto LA1;
		nimln(1450, "system.nim");
		i_242354 = res_242357;
		nimln(63, "bitsets.nim");
		{
			nimln(63, "bitsets.nim");
			nimln(63, "bitsets.nim");
			if ((NU)(i_242354) >= (NU)(x->Sup.len)) raiseIndexError();
			if ((NU)(i_242354) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!((x->data[i_242354] == y->data[i_242354]))) goto LA4;
			nimln(64, "bitsets.nim");
			nimln(64, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_242357 = addInt(res_242357, 1);
	} LA1: ;
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_242069)(tbitset242012* x, tbitset242012* y) {
	NIM_BOOL result;
	NI i_242379;
	NI HEX3Atmp_242380;
	NI res_242382;
	nimfr("bitSetContains", "bitsets.nim")
	result = 0;
	i_242379 = 0;
	HEX3Atmp_242380 = 0;
	nimln(68, "bitsets.nim");
	nimln(68, "bitsets.nim");
	HEX3Atmp_242380 = (x->Sup.len-1);
	nimln(1450, "system.nim");
	res_242382 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_242382 <= HEX3Atmp_242380)) goto LA1;
		nimln(1450, "system.nim");
		i_242379 = res_242382;
		nimln(69, "bitsets.nim");
		{
			nimln(69, "bitsets.nim");
			nimln(69, "bitsets.nim");
			nimln(69, "bitsets.nim");
			if ((NU)(i_242379) >= (NU)(x->Sup.len)) raiseIndexError();
			nimln(69, "bitsets.nim");
			if ((NU)(i_242379) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!(((NI8)(x->data[i_242379] & (NI8)((NU8) ~(y->data[i_242379]))) == ((NI8) 0)))) goto LA4;
			nimln(70, "bitsets.nim");
			nimln(70, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_242382 = addInt(res_242382, 1);
	} LA1: ;
	nimln(71, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, bitsetsInit)(void) {
	nimfr("bitsets", "bitsets.nim")
	popFrame();
}

N_NOINLINE(void, bitsetsDatInit)(void) {
NTI242012.size = sizeof(tbitset242012*);
NTI242012.kind = 24;
NTI242012.base = (&NTI108);
NTI242012.flags = 2;
NTI242012.marker = TMP3148;
}

