/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef struct tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw;
typedef struct tySequence_mTiy9c8mw9a9au6ssROw72IaA tySequence_mTiy9c8mw9a9au6ssROw72IaA;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg;
typedef struct tySequence_5PunAJrNQYcB8dF0jau3pQ tySequence_5PunAJrNQYcB8dF0jau3pQ;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y, void* ClE_0);
void* ClE_0;
} tyProc_IYECAoZKK3KVT9azKuMVzsA;
typedef NU8 tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA;
struct TGenericSeq {
NI len;
NI reserved;
};
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
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_2) (tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_3) (tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y);
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (NimStringDesc* x, NimStringDesc* y, void* ClE_0);
void* ClE_0;
} tyProc_kTj9c3SX9agxDQPZYwemi6ug;
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_4) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_5) (NimStringDesc* x, NimStringDesc* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg x, tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg y, void* ClE_0);
void* ClE_0;
} tyProc_zzrK9cTwi9admDvOCMDMSIXQ;
struct tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linkTitle;
NimStringDesc* linkDesc;
};
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_6) (tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg x, tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_7) (tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg x, tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg y);
typedef NU8 tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
typedef NU8 tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q;
struct tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw {
tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ section;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* qualifiedPath;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
NimStringDesc* filePath;
NI line;
NI column;
NimStringDesc* doc;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw symkind;
NimStringDesc* forth;
NI quality;
NIM_BOOL isGlobal;
NIM_BOOL contextFits;
tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q prefix;
NI scope;
NI localUsages;
NI globalUsages;
NI tokenLen;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
struct tySequence_mTiy9c8mw9a9au6ssROw72IaA {
  TGenericSeq Sup;
  tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_5PunAJrNQYcB8dF0jau3pQ {
  TGenericSeq Sup;
  tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_GWMV2YOOR869aJn359cF21Gw)(tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** b, NI bLen_0, NI lo, NI m, NI hi, tyProc_IYECAoZKK3KVT9azKuMVzsA cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_KHePwML9ba2tSMRLHxcf3EQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, tyProc_kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
N_NIMCALL(void, merge_eK1oOcG1wrLw7IUmkc5hMQ)(tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, tyProc_zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
extern TNimType NTI_mTiy9c8mw9a9au6ssROw72IaA_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI_5PunAJrNQYcB8dF0jau3pQ_;

static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI result;
	NI y;
	result = (NI)0;
	y = (NI)(((NI) (order)) - ((NI) 1));
	result = (NI)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_GWMV2YOOR869aJn359cF21Gw)(tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** b, NI bLen_0, NI lo, NI m, NI hi, tyProc_IYECAoZKK3KVT9azKuMVzsA cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_2)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_3)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_E9cOgpqEVWNEOm6NGlX3U0w)(tyObject_SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, tyProc_IYECAoZKK3KVT9azKuMVzsA cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	tySequence_mTiy9c8mw9a9au6ssROw72IaA* b;
	NI s;
	n = aLen_0;
	b = (tySequence_mTiy9c8mw9a9au6ssROw72IaA*)0;
	b = (tySequence_mTiy9c8mw9a9au6ssROw72IaA*) newSeq((&NTI_mTiy9c8mw9a9au6ssROw72IaA_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_GWMV2YOOR869aJn359cF21Gw(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_KHePwML9ba2tSMRLHxcf3EQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, tyProc_kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_4)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_5)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_9a7klSx0Yu33UIahhT1Of7Q)(NimStringDesc** a, NI aLen_0, tyProc_kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* b;
	NI s;
	n = aLen_0;
	b = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	b = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_KHePwML9ba2tSMRLHxcf3EQ(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_eK1oOcG1wrLw7IUmkc5hMQ)(tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, tyProc_zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_6)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb].keyword), a[j].keyword);
			unsureAsgnRef((void**) (&b[bb].link), a[j].link);
			unsureAsgnRef((void**) (&b[bb].linkTitle), a[j].linkTitle);
			unsureAsgnRef((void**) (&b[bb].linkDesc), a[j].linkDesc);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_7)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
				unsureAsgnRef((void**) (&a[k].link), b[i].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k].keyword), a[j].keyword);
				unsureAsgnRef((void**) (&a[k].link), a[j].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), a[j].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), a[j].linkDesc);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
			unsureAsgnRef((void**) (&a[k].link), b[i].link);
			unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
			unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_LBrAL7WLeSCnpfzkOqm4Fg)(tyObject_IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyProc_zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	tySequence_5PunAJrNQYcB8dF0jau3pQ* b;
	NI s;
	n = aLen_0;
	b = (tySequence_5PunAJrNQYcB8dF0jau3pQ*)0;
	b = (tySequence_5PunAJrNQYcB8dF0jau3pQ*) newSeq((&NTI_5PunAJrNQYcB8dF0jau3pQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_eK1oOcG1wrLw7IUmkc5hMQ(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void) {
}

