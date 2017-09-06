/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
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
typedef struct tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw;
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
typedef NU8 tyArray_qtqsWM5aXmcpMIVmvq3kAA[16];
typedef NU32 tyArray_FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 tyArray_JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 tyArray_w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw {
tyArray_FleBT9cC2nxhgiXmSYYnEKA state;
tyArray_JlnxiR65D9cjJpwi6uBZRtA count;
tyArray_w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 tyArray_U0SiHM0pVagA9c71oWelQMA[16];
typedef NU8 tyArray_cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(void, transform_BVJTPXCwb2rPwlDOJoCtcQ)(void* buffer, NU32* state);
N_NIMCALL(void, encode_bGGKHUKRgpt4lRMA6o8vJw)(NU32* dest, NCSTRING src);
N_NIMCALL(void, FF_CuD4I5y8bsueZlGqujuUZw)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, F_ojAq5rYkim7vo76QXO9beRwmd5)(NU32 x, NU32 y, NU32 z);
static N_INLINE(void, rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5)(NU32* x, NU8 n);
N_NIMCALL(void, GG_CuD4I5y8bsueZlGqujuUZw_2)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, G_ojAq5rYkim7vo76QXO9beRw_2md5)(NU32 x, NU32 y, NU32 z);
N_NIMCALL(void, HH_CuD4I5y8bsueZlGqujuUZw_3)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, H_ojAq5rYkim7vo76QXO9beRw_3md5)(NU32 x, NU32 y, NU32 z);
N_NIMCALL(void, II_CuD4I5y8bsueZlGqujuUZw_4)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, I_ojAq5rYkim7vo76QXO9beRw_4md5)(NU32 x, NU32 y, NU32 z);
N_NIMCALL(void, decode_RBet4Tm12y1uAF9bb9cqMfrA)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0);
N_NIMCALL(void, md5Update_2rxQixjUkbT0w5WdNOCwMw)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len);
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ_;
TNimType NTI_qtqsWM5aXmcpMIVmvq3kAA_;

static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(p, ((int) 0), ((size_t) (size)));
}

N_NIMCALL(void, md5Init_TD1qNpCBAlKjZlVJ9cbPeVg)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c) {
	(*c).state[(((NI) 0))- 0] = ((NU32) 1732584193);
	(*c).state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	(*c).state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	(*c).state[(((NI) 3))- 0] = ((NU32) 271733878);
	(*c).count[(((NI) 0))- 0] = ((NU32) 0);
	(*c).count[(((NI) 1))- 0] = ((NU32) 0);
	zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) ((*c).buffer)), ((NI) (((NI)sizeof(tyArray_w5VB8h5K8DB3oWrO5U2wqg)))));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

N_NIMCALL(void, encode_bGGKHUKRgpt4lRMA6o8vJw)(NU32* dest, NCSTRING src) {
	NI j;
	j = ((NI) 0);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 15))) goto LA3;
				i = ((NI) (res));
				dest[(i)- 0] = (unsigned int)((unsigned int)((unsigned int)(((NU32) (((NU8)(src[j])))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 1))]))))) << (NU64)(((NI) 8)))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 2))]))))) << (NU64)(((NI) 16)))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 3))]))))) << (NU64)(((NI) 24))));
				j += ((NI) 4);
				res += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(NU32, F_ojAq5rYkim7vo76QXO9beRwmd5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (unsigned int)((unsigned int)(x & y) | (unsigned int)((unsigned int)((NU32) ~(x)) & z));
	return result;
}

static N_INLINE(void, rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5)(NU32* x, NU8 n) {
	(*x) = (unsigned int)((NU32)((NU32)((*x)) << (NU32)(n)) | (NU32)((NU32)((*x)) >> (NU32)((NU32)((NU32)(((NU32) 32)) - (NU32)(((NU32) (n)))))));
}

N_NIMCALL(void, FF_CuD4I5y8bsueZlGqujuUZw)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = F_ojAq5rYkim7vo76QXO9beRwmd5(b, c, d);
	(*a) = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a, s);
	(*a) = (unsigned int)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, G_ojAq5rYkim7vo76QXO9beRw_2md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (unsigned int)((unsigned int)(x & z) | (unsigned int)(y & (unsigned int)((NU32) ~(z))));
	return result;
}

N_NIMCALL(void, GG_CuD4I5y8bsueZlGqujuUZw_2)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = G_ojAq5rYkim7vo76QXO9beRw_2md5(b, c, d);
	(*a) = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a, s);
	(*a) = (unsigned int)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, H_ojAq5rYkim7vo76QXO9beRw_3md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x ^ y) ^ z);
	return result;
}

N_NIMCALL(void, HH_CuD4I5y8bsueZlGqujuUZw_3)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = H_ojAq5rYkim7vo76QXO9beRw_3md5(b, c, d);
	(*a) = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a, s);
	(*a) = (unsigned int)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, I_ojAq5rYkim7vo76QXO9beRw_4md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)(y ^ (unsigned int)(x | (unsigned int)((NU32) ~(z))));
	return result;
}

N_NIMCALL(void, II_CuD4I5y8bsueZlGqujuUZw_4)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = I_ojAq5rYkim7vo76QXO9beRw_4md5(b, c, d);
	(*a) = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a, s);
	(*a) = (unsigned int)((NU32)((*a)) + (NU32)(b));
}

N_NIMCALL(void, transform_BVJTPXCwb2rPwlDOJoCtcQ)(void* buffer, NU32* state) {
	tyArray_U0SiHM0pVagA9c71oWelQMA myBlock;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	memset((void*)myBlock, 0, sizeof(myBlock));
	encode_bGGKHUKRgpt4lRMA6o8vJw(myBlock, ((NCSTRING) (buffer)));
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	FF_CuD4I5y8bsueZlGqujuUZw((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 7), ((NU32) IL64(3614090360)));
	FF_CuD4I5y8bsueZlGqujuUZw((&d), a, b, c, myBlock[(((NI) 1))- 0], ((NU8) 12), ((NU32) IL64(3905402710)));
	FF_CuD4I5y8bsueZlGqujuUZw((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 17), ((NU32) 606105819));
	FF_CuD4I5y8bsueZlGqujuUZw((&b), c, d, a, myBlock[(((NI) 3))- 0], ((NU8) 22), ((NU32) IL64(3250441966)));
	FF_CuD4I5y8bsueZlGqujuUZw((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 7), ((NU32) IL64(4118548399)));
	FF_CuD4I5y8bsueZlGqujuUZw((&d), a, b, c, myBlock[(((NI) 5))- 0], ((NU8) 12), ((NU32) 1200080426));
	FF_CuD4I5y8bsueZlGqujuUZw((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 17), ((NU32) IL64(2821735955)));
	FF_CuD4I5y8bsueZlGqujuUZw((&b), c, d, a, myBlock[(((NI) 7))- 0], ((NU8) 22), ((NU32) IL64(4249261313)));
	FF_CuD4I5y8bsueZlGqujuUZw((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 7), ((NU32) 1770035416));
	FF_CuD4I5y8bsueZlGqujuUZw((&d), a, b, c, myBlock[(((NI) 9))- 0], ((NU8) 12), ((NU32) IL64(2336552879)));
	FF_CuD4I5y8bsueZlGqujuUZw((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 17), ((NU32) IL64(4294925233)));
	FF_CuD4I5y8bsueZlGqujuUZw((&b), c, d, a, myBlock[(((NI) 11))- 0], ((NU8) 22), ((NU32) IL64(2304563134)));
	FF_CuD4I5y8bsueZlGqujuUZw((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 7), ((NU32) 1804603682));
	FF_CuD4I5y8bsueZlGqujuUZw((&d), a, b, c, myBlock[(((NI) 13))- 0], ((NU8) 12), ((NU32) IL64(4254626195)));
	FF_CuD4I5y8bsueZlGqujuUZw((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 17), ((NU32) IL64(2792965006)));
	FF_CuD4I5y8bsueZlGqujuUZw((&b), c, d, a, myBlock[(((NI) 15))- 0], ((NU8) 22), ((NU32) 1236535329));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 5), ((NU32) IL64(4129170786)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&d), a, b, c, myBlock[(((NI) 6))- 0], ((NU8) 9), ((NU32) IL64(3225465664)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 14), ((NU32) 643717713));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&b), c, d, a, myBlock[(((NI) 0))- 0], ((NU8) 20), ((NU32) IL64(3921069994)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 5), ((NU32) IL64(3593408605)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&d), a, b, c, myBlock[(((NI) 10))- 0], ((NU8) 9), ((NU32) 38016083));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 14), ((NU32) IL64(3634488961)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&b), c, d, a, myBlock[(((NI) 4))- 0], ((NU8) 20), ((NU32) IL64(3889429448)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 5), ((NU32) 568446438));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&d), a, b, c, myBlock[(((NI) 14))- 0], ((NU8) 9), ((NU32) IL64(3275163606)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 14), ((NU32) IL64(4107603335)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&b), c, d, a, myBlock[(((NI) 8))- 0], ((NU8) 20), ((NU32) 1163531501));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 5), ((NU32) IL64(2850285829)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&d), a, b, c, myBlock[(((NI) 2))- 0], ((NU8) 9), ((NU32) IL64(4243563512)));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 14), ((NU32) 1735328473));
	GG_CuD4I5y8bsueZlGqujuUZw_2((&b), c, d, a, myBlock[(((NI) 12))- 0], ((NU8) 20), ((NU32) IL64(2368359562)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 4), ((NU32) IL64(4294588738)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&d), a, b, c, myBlock[(((NI) 8))- 0], ((NU8) 11), ((NU32) IL64(2272392833)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 16), ((NU32) 1839030562));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&b), c, d, a, myBlock[(((NI) 14))- 0], ((NU8) 23), ((NU32) IL64(4259657740)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 4), ((NU32) IL64(2763975236)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&d), a, b, c, myBlock[(((NI) 4))- 0], ((NU8) 11), ((NU32) 1272893353));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 16), ((NU32) IL64(4139469664)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&b), c, d, a, myBlock[(((NI) 10))- 0], ((NU8) 23), ((NU32) IL64(3200236656)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 4), ((NU32) 681279174));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&d), a, b, c, myBlock[(((NI) 0))- 0], ((NU8) 11), ((NU32) IL64(3936430074)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 16), ((NU32) IL64(3572445317)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&b), c, d, a, myBlock[(((NI) 6))- 0], ((NU8) 23), ((NU32) 76029189));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 4), ((NU32) IL64(3654602809)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&d), a, b, c, myBlock[(((NI) 12))- 0], ((NU8) 11), ((NU32) IL64(3873151461)));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 16), ((NU32) 530742520));
	HH_CuD4I5y8bsueZlGqujuUZw_3((&b), c, d, a, myBlock[(((NI) 2))- 0], ((NU8) 23), ((NU32) IL64(3299628645)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 6), ((NU32) IL64(4096336452)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&d), a, b, c, myBlock[(((NI) 7))- 0], ((NU8) 10), ((NU32) 1126891415));
	II_CuD4I5y8bsueZlGqujuUZw_4((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 15), ((NU32) IL64(2878612391)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&b), c, d, a, myBlock[(((NI) 5))- 0], ((NU8) 21), ((NU32) IL64(4237533241)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 6), ((NU32) 1700485571));
	II_CuD4I5y8bsueZlGqujuUZw_4((&d), a, b, c, myBlock[(((NI) 3))- 0], ((NU8) 10), ((NU32) IL64(2399980690)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 15), ((NU32) IL64(4293915773)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&b), c, d, a, myBlock[(((NI) 1))- 0], ((NU8) 21), ((NU32) IL64(2240044497)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 6), ((NU32) 1873313359));
	II_CuD4I5y8bsueZlGqujuUZw_4((&d), a, b, c, myBlock[(((NI) 15))- 0], ((NU8) 10), ((NU32) IL64(4264355552)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 15), ((NU32) IL64(2734768916)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&b), c, d, a, myBlock[(((NI) 13))- 0], ((NU8) 21), ((NU32) 1309151649));
	II_CuD4I5y8bsueZlGqujuUZw_4((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 6), ((NU32) IL64(4149444226)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&d), a, b, c, myBlock[(((NI) 11))- 0], ((NU8) 10), ((NU32) IL64(3174756917)));
	II_CuD4I5y8bsueZlGqujuUZw_4((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 15), ((NU32) 718787259));
	II_CuD4I5y8bsueZlGqujuUZw_4((&b), c, d, a, myBlock[(((NI) 9))- 0], ((NU8) 21), ((NU32) IL64(3951481745)));
	state[(((NI) 0))- 0] = (unsigned int)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 1))- 0] = (unsigned int)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 2))- 0] = (unsigned int)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 3))- 0] = (unsigned int)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
}

N_NIMCALL(void, md5Update_2rxQixjUkbT0w5WdNOCwMw)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len) {
	NCSTRING input_2;
	NI Index;
	NI PartLen;
	input_2 = input;
	Index = ((NI) ((unsigned int)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU64)(((NI) 3))) & ((NI) 63))));
	(*c).count[(((NI) 0))- 0] = (unsigned int)((NU32)((*c).count[(((NI) 0))- 0]) + (NU32)((NU32)((NU64)(((NU32) (len))) << (NU64)(((NI) 3)))));
	{
		if (!((NU32)((*c).count[(((NI) 0))- 0]) < (NU32)((NU32)((NU64)(((NU32) (len))) << (NU64)(((NI) 3)))))) goto LA3_;
		(*c).count[(((NI) 1))- 0] = (unsigned int)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)(((NU32) 1)));
	}
	LA3_: ;
	(*c).count[(((NI) 1))- 0] = (unsigned int)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)((NU32)((NU32)(((NU32) (len))) >> (NU64)(((NI) 29)))));
	PartLen = (NI)(((NI) 64) - Index);
	{
		NI i;
		if (!(PartLen <= len)) goto LA7_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) (input_2)), ((NI) (PartLen)));
		transform_BVJTPXCwb2rPwlDOJoCtcQ(((void*) ((*c).buffer)), (*c).state);
		i = PartLen;
		{
			while (1) {
				if (!((NI)(i + ((NI) 63)) < len)) goto LA10;
				transform_BVJTPXCwb2rPwlDOJoCtcQ(((void*) ((&input_2[i]))), (*c).state);
				i += ((NI) 64);
			} LA10: ;
		}
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*c).buffer[(((NI) 0))- 0]))), ((void*) ((&input_2[i]))), ((NI) ((NI)(len - i))));
	}
	goto LA5_;
	LA7_: ;
	{
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) ((&input_2[((NI) 0)]))), ((NI) (len)));
	}
	LA5_: ;
}

N_NIMCALL(void, decode_RBet4Tm12y1uAF9bb9cqMfrA)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0) {
	NI i;
	i = ((NI) 0);
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (srcLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				j = res;
				dest[i] = ((NU8) ((unsigned int)(src[j] & ((NU32) 255))));
				dest[(NI)(i + ((NI) 1))] = ((NU8) ((unsigned int)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 8))) & ((NU32) 255))));
				dest[(NI)(i + ((NI) 2))] = ((NU8) ((unsigned int)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 16))) & ((NU32) 255))));
				dest[(NI)(i + ((NI) 3))] = ((NU8) ((unsigned int)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 24))) & ((NU32) 255))));
				i += ((NI) 4);
				res += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, md5Final_QVR9bnyINbQRLkYQjTeezvw)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NU8* digest) {
	tyArray_cdsir9aPB24hAk6k77P9b9bCA Bits;
	NI PadLen;
	NI Index;
	memset((void*)Bits, 0, sizeof(Bits));
	PadLen = (NI)0;
	decode_RBet4Tm12y1uAF9bb9cqMfrA(Bits, 8, (*c).count, 2);
	Index = ((NI) ((unsigned int)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU64)(((NI) 3))) & ((NI) 63))));
	{
		if (!(Index < ((NI) 56))) goto LA3_;
		PadLen = (NI)(((NI) 56) - Index);
	}
	goto LA1_;
	LA3_: ;
	{
		PadLen = (NI)(((NI) 120) - Index);
	}
	LA1_: ;
	md5Update_2rxQixjUkbT0w5WdNOCwMw(c, "\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000", PadLen);
	md5Update_2rxQixjUkbT0w5WdNOCwMw(c, ((NCSTRING) (Bits)), ((NI) 8));
	decode_RBet4Tm12y1uAF9bb9cqMfrA(digest, 16, (*c).state, 4);
	zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) (c)), ((NI) (((NI)sizeof(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw)))));
}
NIM_EXTERNC N_NOINLINE(void, stdlib_md5Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_md5DatInit000)(void) {
NTI_qtqsWM5aXmcpMIVmvq3kAA_.size = sizeof(tyArray_qtqsWM5aXmcpMIVmvq3kAA);
NTI_qtqsWM5aXmcpMIVmvq3kAA_.kind = 16;
NTI_qtqsWM5aXmcpMIVmvq3kAA_.base = (&NTI_k3HXouOuhqAKq0dx450lXQ_);
NTI_qtqsWM5aXmcpMIVmvq3kAA_.flags = 3;
}

