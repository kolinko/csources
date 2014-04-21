/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
static N_INLINE(NI, HEX21HEX26_118015)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, HEX21HEX24_118040)(NI h);
N_NIMCALL(NI, hashdata_118064)(void* data, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, hash_118401)(void* x);
static N_INLINE(NI, hash_118801)(NI x);
static N_INLINE(NI, hash_118807)(NI64 x);
static N_INLINE(NI, hash_118813)(NIM_CHAR x);
N_NIMCALL(NI, hash_118827)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, hashignorestyle_118859)(NimStringDesc* x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, hashignorecase_118935)(NimStringDesc* x);
static N_INLINE(NI, hash_119021)(NF x);
extern TFrame* frameptr_13038;
TNimType NTI118013; /* THash */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, HEX21HEX26_118015)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, HEX21HEX24_118040)(NI h) {
	NI result;
	nimfr("!$", "hashes.nim")
	result = 0;
	nimln(31, "hashes.nim");
	nimln(31, "hashes.nim");
	nimln(31, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)((NI)((NU32)(h) << (NU32)(3))));
	nimln(32, "hashes.nim");
	nimln(32, "hashes.nim");
	nimln(32, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(11)));
	nimln(33, "hashes.nim");
	nimln(33, "hashes.nim");
	nimln(33, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(15))));
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

N_NIMCALL(NI, hashdata_118064)(void* data, NI size) {
	NI result;
	NI h;
	NCSTRING p;
	NI i;
	NI s;
	nimfr("hashData", "hashes.nim")
	result = 0;
	nimln(37, "hashes.nim");
	h = 0;
	nimln(42, "hashes.nim");
	p = ((NCSTRING) (data));
	nimln(43, "hashes.nim");
	i = 0;
	nimln(44, "hashes.nim");
	s = size;
	nimln(45, "hashes.nim");
	while (1) {
		nimln(45, "hashes.nim");
		if (!(0 < s)) goto LA1;
		nimln(46, "hashes.nim");
		nimln(46, "hashes.nim");
		h = HEX21HEX26_118015(h, ((NI) (((NU8)(p[i])))));
		nimln(47, "hashes.nim");
		i = addInt(i, 1);
		nimln(48, "hashes.nim");
		s = subInt(s, 1);
	} LA1: ;
	nimln(49, "hashes.nim");
	result = HEX21HEX24_118040(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_118401)(void* x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(68, "hashes.nim");
	nimln(68, "hashes.nim");
	result = (NI)((NU32)(((NI) (x))) >> (NU32)(3));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_118801)(NI x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(80, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, hash_118807)(NI64 x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(84, "hashes.nim");
	nimln(84, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_118813)(NIM_CHAR x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(88, "hashes.nim");
	nimln(88, "hashes.nim");
	result = ((NI) (((NU8)(x))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_118827)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_118842;
	NI HEX3Atmp_118852;
	NI TMP270;
	NI res_118854;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(92, "hashes.nim");
	h = 0;
	i_118842 = 0;
	HEX3Atmp_118852 = 0;
	nimln(93, "hashes.nim");
	nimln(93, "hashes.nim");
	nimln(93, "hashes.nim");
	TMP270 = subInt(x->Sup.len, 1);
	HEX3Atmp_118852 = (NI32)(TMP270);
	nimln(1457, "system.nim");
	res_118854 = 0;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_118854 <= HEX3Atmp_118852)) goto LA1;
		nimln(1457, "system.nim");
		i_118842 = res_118854;
		nimln(94, "hashes.nim");
		nimln(94, "hashes.nim");
		if ((NU)(i_118842) > (NU)(x->Sup.len)) raiseIndexError();
		h = HEX21HEX26_118015(h, ((NI) (((NU8)(x->data[i_118842])))));
		nimln(1460, "system.nim");
		res_118854 = addInt(res_118854, 1);
	} LA1: ;
	nimln(95, "hashes.nim");
	result = HEX21HEX24_118040(h);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, hashignorestyle_118859)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_118874;
	NI HEX3Atmp_118927;
	NI TMP271;
	NI res_118929;
	nimfr("hashIgnoreStyle", "hashes.nim")
	result = 0;
	nimln(99, "hashes.nim");
	h = 0;
	i_118874 = 0;
	HEX3Atmp_118927 = 0;
	nimln(100, "hashes.nim");
	nimln(100, "hashes.nim");
	nimln(100, "hashes.nim");
	TMP271 = subInt(x->Sup.len, 1);
	HEX3Atmp_118927 = (NI32)(TMP271);
	nimln(1457, "system.nim");
	res_118929 = 0;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_118929 <= HEX3Atmp_118927)) goto LA1;
		nimln(1457, "system.nim");
		i_118874 = res_118929;
		{
			NIM_CHAR c;
			nimln(101, "hashes.nim");
			if ((NU)(i_118874) > (NU)(x->Sup.len)) raiseIndexError();
			c = x->data[i_118874];
			nimln(102, "hashes.nim");
			{
				nimln(102, "hashes.nim");
				if (!((NU8)(c) == (NU8)(95))) goto LA5;
				nimln(103, "hashes.nim");
				goto LA2;
			}
			LA5: ;
			nimln(104, "hashes.nim");
			{
				NI TMP272;
				nimln(104, "hashes.nim");
				if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA9;
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				nimln(105, "hashes.nim");
				TMP272 = addInt(((NI) (((NU8)(c)))), 32);
				c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP272), 0, 255))));
			}
			LA9: ;
			nimln(106, "hashes.nim");
			nimln(106, "hashes.nim");
			h = HEX21HEX26_118015(h, ((NI) (((NU8)(c)))));
		} LA2: ;
		nimln(1460, "system.nim");
		res_118929 = addInt(res_118929, 1);
	} LA1: ;
	nimln(107, "hashes.nim");
	result = HEX21HEX24_118040(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashignorecase_118935)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i_118950;
	NI HEX3Atmp_119002;
	NI TMP273;
	NI res_119004;
	nimfr("hashIgnoreCase", "hashes.nim")
	result = 0;
	nimln(111, "hashes.nim");
	h = 0;
	i_118950 = 0;
	HEX3Atmp_119002 = 0;
	nimln(112, "hashes.nim");
	nimln(112, "hashes.nim");
	nimln(112, "hashes.nim");
	TMP273 = subInt(x->Sup.len, 1);
	HEX3Atmp_119002 = (NI32)(TMP273);
	nimln(1457, "system.nim");
	res_119004 = 0;
	nimln(1458, "system.nim");
	while (1) {
		NIM_CHAR c;
		nimln(1458, "system.nim");
		if (!(res_119004 <= HEX3Atmp_119002)) goto LA1;
		nimln(1457, "system.nim");
		i_118950 = res_119004;
		nimln(113, "hashes.nim");
		if ((NU)(i_118950) > (NU)(x->Sup.len)) raiseIndexError();
		c = x->data[i_118950];
		nimln(114, "hashes.nim");
		{
			NI TMP274;
			nimln(114, "hashes.nim");
			if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA4;
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			nimln(115, "hashes.nim");
			TMP274 = addInt(((NI) (((NU8)(c)))), 32);
			c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP274), 0, 255))));
		}
		LA4: ;
		nimln(116, "hashes.nim");
		nimln(116, "hashes.nim");
		h = HEX21HEX26_118015(h, ((NI) (((NU8)(c)))));
		nimln(1460, "system.nim");
		res_119004 = addInt(res_119004, 1);
	} LA1: ;
	nimln(117, "hashes.nim");
	result = HEX21HEX24_118040(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_119021)(NF x) {
	NI result;
	NF y;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(126, "hashes.nim");
	nimln(126, "hashes.nim");
	y = ((NF)(x) + (NF)(1.0000000000000000e+000));
	nimln(127, "hashes.nim");
	result = (*((NI*) (&y)));
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibhashesInit)(void) {
	nimfr("hashes", "hashes.nim")
	popFrame();
}

N_NOINLINE(void, stdlibhashesDatInit)(void) {
NTI118013.size = sizeof(NI);
NTI118013.kind = 31;
NTI118013.base = 0;
NTI118013.flags = 3;
}

