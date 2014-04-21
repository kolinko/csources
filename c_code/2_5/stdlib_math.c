/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <math.h>

#include <stdlib.h>
typedef struct trunningstat134630 trunningstat134630;
struct  trunningstat134630  {
NI N;
NF Sum;
NF Min;
NF Max;
NF Mean;
NF Oldm;
NF Olds;
NF News;
};
N_NIMCALL(NU8, classify_133220)(NF x);
N_NIMCALL(NI, binom_133230)(NI n, NI k);
N_NIMCALL(NI, fac_133255)(NI n);
N_NIMCALL(NIM_BOOL, ispoweroftwo_133278)(NI x);
N_NIMCALL(NI, nextpoweroftwo_133284)(NI x);
N_NIMCALL(NI, countbits32_133824)(NI32 n);
N_NIMCALL(NF, sum_133885)(NF* x_133891, NI x_133891Len0);
N_NIMCALL(NF, mean_133878)(NF* x, NI xLen0);
N_NIMCALL(NF, variance_133946)(NF* x, NI xLen0);
N_NIMCALL(NF, log2_134018)(NF x);
N_NIMCALL(NF, random_133983)(NF max);
N_NIMCALL(void, randomize_134002)(void);
N_NIMCALL(void, randomize_134005)(NI seed);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, random_133979)(NI max);
N_NIMCALL(NF, mod_134602)(NF x, NF y);
N_NIMCALL(void, push_134640)(trunningstat134630* s, NF x);
N_NIMCALL(void, push_134664)(trunningstat134630* s, NI x);
N_NIMCALL(NF, variance_134671)(trunningstat134630* s);
N_NIMCALL(NF, standarddeviation_134678)(trunningstat134630* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_13038;

N_NIMCALL(NU8, classify_133220)(NF x) {
	NU8 result;
	result = 0;
	{
		if (!(x == 0.0)) goto LA3;
		{
			if (!(((NF)(1.0000000000000000e+000) / (NF)(x)) == INF)) goto LA7;
			result = ((NU8) 2);
			goto BeforeRet;
		}
		goto LA5;
		LA7: ;
		{
			result = ((NU8) 3);
			goto BeforeRet;
		}
		LA5: ;
	}
	LA3: ;
	{
		if (!(((NF)(x) * (NF)(5.0000000000000000e-001)) == x)) goto LA12;
		{
			if (!(0.0 < x)) goto LA16;
			result = ((NU8) 5);
			goto BeforeRet;
		}
		goto LA14;
		LA16: ;
		{
			result = ((NU8) 6);
			goto BeforeRet;
		}
		LA14: ;
	}
	LA12: ;
	{
		if (!!((x == x))) goto LA21;
		result = ((NU8) 4);
		goto BeforeRet;
	}
	LA21: ;
	result = ((NU8) 0);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, binom_133230)(NI n, NI k) {
	NI result;
	NI i_133248;
	NI res_133250;
	result = 0;
	{
		if (!(k <= 0)) goto LA3;
		result = 1;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(n < (NI32)(2 * k))) goto LA7;
		result = binom_133230(n, (NI32)(n - k));
		goto BeforeRet;
	}
	LA7: ;
	result = n;
	i_133248 = 0;
	res_133250 = 2;
	while (1) {
		if (!(res_133250 <= k)) goto LA9;
		i_133248 = res_133250;
		result = (NI32)((NI32)(result * (NI32)((NI32)(n + 1) - i_133248)) / i_133248);
		res_133250 += 1;
	} LA9: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fac_133255)(NI n) {
	NI result;
	NI i_133271;
	NI res_133273;
	result = 0;
	result = 1;
	i_133271 = 0;
	res_133273 = 2;
	while (1) {
		if (!(res_133273 <= n)) goto LA1;
		i_133271 = res_133273;
		result = (NI32)(result * i_133271);
		res_133273 += 1;
	} LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, ispoweroftwo_133278)(NI x) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = !((x == 0));
	if (!(LOC1)) goto LA2;
	LOC1 = ((NI)(x & (NI32)(x - 1)) == 0);
	LA2: ;
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nextpoweroftwo_133284)(NI x) {
	NI result;
	result = 0;
	result = (NI32)(x - 1);
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(4)));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(2)));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(1)));
	result += ((NI) ((NI32)(1 + ((NI) ((x <= 0))))));
	return result;
}

N_NIMCALL(NI, countbits32_133824)(NI32 n) {
	NI result;
	NI32 v;
	result = 0;
	v = n;
	v = (NI32)((NU32)(v) - (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 1))) & ((NI32) 1431655765))));
	v = (NI32)((NU32)((NI32)(v & ((NI32) 858993459))) + (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 2))) & ((NI32) 858993459))));
	result = ((NI) ((NI32)((NU32)((NI32)((NU32)((NI32)((NI32)((NU32)(v) + (NU32)((NI32)((NU32)(v) >> (NU32)(((NI32) 4))))) & ((NI32) 252645135))) * (NU32)(((NI32) 16843009)))) >> (NU32)(((NI32) 24)))));
	return result;
}

N_NIMCALL(NF, sum_133885)(NF* x_133891, NI x_133891Len0) {
	NF result;
	NF i_133932;
	NI i_133934;
	result = 0;
	i_133932 = 0;
	i_133934 = 0;
	while (1) {
		if (!(i_133934 < x_133891Len0)) goto LA1;
		i_133932 = x_133891[i_133934];
		result = ((NF)(result) + (NF)(i_133932));
		i_133934 += 1;
	} LA1: ;
	return result;
}

N_NIMCALL(NF, mean_133878)(NF* x, NI xLen0) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sum_133885(x, xLen0);
	result = ((NF)(LOC1) / (NF)(((double) (xLen0))));
	return result;
}

N_NIMCALL(NF, variance_133946)(NF* x, NI xLen0) {
	NF result;
	NF m;
	NI i_133963;
	NI HEX3Atmp_133972;
	NI res_133974;
	result = 0;
	result = 0.0;
	m = mean_133878(x, xLen0);
	i_133963 = 0;
	HEX3Atmp_133972 = 0;
	HEX3Atmp_133972 = (xLen0-1);
	res_133974 = 0;
	while (1) {
		NF diff;
		if (!(res_133974 <= HEX3Atmp_133972)) goto LA1;
		i_133963 = res_133974;
		diff = ((NF)(x[i_133963]) - (NF)(m));
		result = ((NF)(result) + (NF)(((NF)(diff) * (NF)(diff))));
		res_133974 += 1;
	} LA1: ;
	result = ((NF)(result) / (NF)(((double) (xLen0))));
	return result;
}

N_NIMCALL(NF, log2_134018)(NF x) {
	NF result;
	NF LOC1;
	NF LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = log(x);
	LOC2 = 0;
	LOC2 = log(2.0000000000000000e+000);
	result = ((NF)(LOC1) / (NF)(LOC2));
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NF, random_133983)(NF max) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = drand48();
	result = ((NF)(LOC1) * (NF)(max));
	return result;
}

N_NIMCALL(void, randomize_134005)(NI seed) {
	srand(((int) (seed)));
	srand48(seed);
}

N_NIMCALL(void, randomize_134002)(void) {
	union { NF source; NI dest; } LOC1;
	LOC1.source = ntepochTime();
	randomize_134005(LOC1.dest);
}

N_NIMCALL(NI, random_133979)(NI max) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rand();
	result = (NI32)(((NI) (LOC1)) % max);
	return result;
}

N_NIMCALL(NF, mod_134602)(NF x, NF y) {
	NF result;
	result = 0;
	{
		if (!(y == 0.0)) goto LA3;
		result = x;
	}
	goto LA1;
	LA3: ;
	{
		NF LOC6;
		LOC6 = 0;
		LOC6 = floor(((NF)(x) / (NF)(y)));
		result = ((NF)(x) - (NF)(((NF)(y) * (NF)(LOC6))));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, push_134640)(trunningstat134630* s, NF x) {
	(*s).N += 1;
	{
		if (!((*s).N == 1)) goto LA3;
		(*s).Min = x;
		(*s).Max = x;
		(*s).Oldm = x;
		(*s).Mean = x;
		(*s).Olds = 0.0;
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!(x < (*s).Min)) goto LA8;
			(*s).Min = x;
		}
		LA8: ;
		{
			if (!((*s).Max < x)) goto LA12;
			(*s).Max = x;
		}
		LA12: ;
		(*s).Mean = ((NF)((*s).Oldm) + (NF)(((NF)(((NF)(x) - (NF)((*s).Oldm))) / (NF)(((double) ((*s).N))))));
		(*s).News = ((NF)((*s).Olds) + (NF)(((NF)(((NF)(x) - (NF)((*s).Oldm))) * (NF)(((NF)(x) - (NF)((*s).Mean))))));
		(*s).Oldm = (*s).Mean;
		(*s).Olds = (*s).News;
	}
	LA1: ;
	(*s).Sum = ((NF)((*s).Sum) + (NF)(x));
}

N_NIMCALL(void, push_134664)(trunningstat134630* s, NI x) {
	push_134640(s, ((double) (x)));
}

N_NIMCALL(NF, variance_134671)(trunningstat134630* s) {
	NF result;
	result = 0;
	{
		if (!(1 < (*s).N)) goto LA3;
		result = ((NF)((*s).News) / (NF)(((double) ((NI32)((*s).N - 1)))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(NF, standarddeviation_134678)(trunningstat134630* s) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = variance_134671(s);
	result = sqrt(LOC1);
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}
N_NOINLINE(void, stdlibmathInit)(void) {
	nimfr("math", "math.nim")
	popFrame();
}

N_NOINLINE(void, stdlibmathDatInit)(void) {
}

