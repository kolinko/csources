/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
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
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* tyArray_CBfZt49asUfAsBVM7a3Rc9cw[8192];
struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw {
tyArray_CBfZt49asUfAsBVM7a3Rc9cw buckets;
NI wordCounter;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* idAnon;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* idDelegator;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* emptyIdent;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU16 tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw;
typedef NimStringDesc* tyArray_iVw6y3Yu1zCasn9bcSX1I5g[268];
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_1nh2T19a2BrGbBBQRS39bxRw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op);
static N_NIMCALL(void, TM_L3r6bVdeFMiI9cwmLpWIeKw_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, Marker_tyRef_GFuL0q6Yj4iJze0S9cdD9avg)(void* p, NI op);
N_NIMCALL(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*, newIdentCache_9basvGvZH4FwEO4MVbYyP9aA)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NimStringDesc* identifier);
N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_62GxCdwHvMBvMwCLnw1wyg)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NCSTRING identifier, NI length, NI h);
N_NIMCALL(NI, cmpExact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NI, cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x);
N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_BlDQd0MZ58qhFoyY3ZHQIA)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NimStringDesc* identifier, NI h);
tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* legacy_AHP7NxhjlnSC9cf2jfY1fFg;
TNimType NTI_TzLHS09bRH9a0TYLs39cqcNaw_;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_raN9cHVgzmvaXisezY9aGg9cg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_4umxGerWTHGPwUms7Yqu3g_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_1nh2T19a2BrGbBBQRS39bxRw_;
TNimType NTI_CBfZt49asUfAsBVM7a3Rc9cw_;
TNimType NTI_lnkYNZP9asc88UfiEGjLrbA_;
TNimType NTI_GFuL0q6Yj4iJze0S9cdD9avg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_L3r6bVdeFMiI9cwmLpWIeKw_5, ":anonymous", 10);
STRING_LITERAL(TM_L3r6bVdeFMiI9cwmLpWIeKw_6, ":delegator", 10);
STRING_LITERAL(TM_L3r6bVdeFMiI9cwmLpWIeKw_7, "", 0);
extern NIM_CONST tyArray_iVw6y3Yu1zCasn9bcSX1I5g specialWords_jS3I1dUcvbZAEuApBSUHng;
static N_NIMCALL(void, Marker_tyRef_1nh2T19a2BrGbBBQRS39bxRw)(void* p, NI op) {
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* a;
	a = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
static N_NIMCALL(void, Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op) {
	tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* a;
	NI T1_;
	a = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 8192; T1_++) {
	nimGCvisit((void*)(*a).buckets[T1_], op);
	}
	nimGCvisit((void*)(*a).idAnon, op);
	nimGCvisit((void*)(*a).idDelegator, op);
	nimGCvisit((void*)(*a).emptyIdent, op);
}
static N_NIMCALL(void, TM_L3r6bVdeFMiI9cwmLpWIeKw_4)(void) {
	nimGCvisit((void*)legacy_AHP7NxhjlnSC9cf2jfY1fFg, 0);
}
static N_NIMCALL(void, Marker_tyRef_GFuL0q6Yj4iJze0S9cdD9avg)(void* p, NI op) {
	tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* a;
	a = (tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg*)p;
}

N_NIMCALL(NI, cmpExact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = !((result == ((NI) 0)));
				if (T5_) goto LA6_;
				T5_ = ((NU8)(aa) == (NU8)(0));
				LA6_: ;
				if (!T5_) goto LA7_;
				goto LA1;
			}
			LA7_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15_;
			result = ((NI) 1);
		}
		LA15_: ;
	}
	LA11_: ;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_NIMCALL(NI, cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	{
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA6;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					i += ((NI) 1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					j += ((NI) 1);
				} LA10: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)(65) <= (NU8)(aa));
				if (!(T13_)) goto LA14_;
				T13_ = ((NU8)(aa) <= (NU8)(90));
				LA14_: ;
				if (!T13_) goto LA15_;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa)))) + ((NI) 32))))));
			}
			LA15_: ;
			{
				NIM_BOOL T19_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((NU8)(65) <= (NU8)(bb));
				if (!(T19_)) goto LA20_;
				T19_ = ((NU8)(bb) <= (NU8)(90));
				LA20_: ;
				if (!T19_) goto LA21_;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb)))) + ((NI) 32))))));
			}
			LA21_: ;
			result = (NI)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = !((result == ((NI) 0)));
				if (T25_) goto LA26_;
				T25_ = ((NU8)(aa) == (NU8)(0));
				LA26_: ;
				if (!T25_) goto LA27_;
				goto LA5;
			}
			LA27_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result == ((NI) 0))) goto LA31_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA35_;
			result = ((NI) 1);
		}
		LA35_: ;
	}
	LA31_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_62GxCdwHvMBvMwCLnw1wyg)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NCSTRING identifier, NI length, NI h) {
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* result;
	NI idx;
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* last;
	NI id;
{	result = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
	idx = (NI)(h & ((NI) 8191));
	result = (*self).buckets[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = cmpExact_119akYztO9b7SG3fyF8j9bFgQ((*result).s->data, identifier, length);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				{
					if (!!((last == NIM_NIL))) goto LA10_;
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					asgnRefNoCycle((void**) (&(*result).next), (*self).buckets[(idx)- 0]);
					asgnRefNoCycle((void**) (&(*self).buckets[(idx)- 0]), result);
				}
				LA10_: ;
				goto BeforeRet_;
			}
			goto LA3_;
			LA6_: ;
			{
				NI T13_;
				T13_ = (NI)0;
				T13_ = cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2((*result).s->data, identifier, length);
				if (!(T13_ == ((NI) 0))) goto LA14_;
				id = (*result).Sup.id;
			}
			goto LA3_;
			LA14_: ;
			LA3_: ;
			last = result;
			result = (*result).next;
		} LA2: ;
	}
	result = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*) newObj((&NTI_1nh2T19a2BrGbBBQRS39bxRw_), sizeof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g));
	(*result).Sup.Sup.m_type = (&NTI_4umxGerWTHGPwUms7Yqu3g_);
	(*result).h = h;
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(length - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA18;
				i = res;
				(*result).s->data[i] = identifier[i];
				res += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).next), (*self).buckets[(idx)- 0]);
	asgnRefNoCycle((void**) (&(*self).buckets[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21_;
		(*self).wordCounter += ((NI) 1);
		(*result).Sup.id = ((NI64)-((*self).wordCounter));
	}
	goto LA19_;
	LA21_: ;
	{
		(*result).Sup.id = id;
	}
	LA19_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NimStringDesc* identifier) {
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* result;
	NI T1_;
	result = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
	T1_ = (NI)0;
	T1_ = hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_2(identifier);
	result = getIdent_62GxCdwHvMBvMwCLnw1wyg(self, identifier->data, (identifier ? identifier->Sup.len : 0), T1_);
	return result;
}

N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_BlDQd0MZ58qhFoyY3ZHQIA)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* self, NimStringDesc* identifier, NI h) {
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* result;
	result = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
	result = getIdent_62GxCdwHvMBvMwCLnw1wyg(self, identifier->data, (identifier ? identifier->Sup.len : 0), h);
	return result;
}

N_NIMCALL(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*, newIdentCache_9basvGvZH4FwEO4MVbYyP9aA)(void) {
	tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* result;
	result = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)0;
	{
		tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* T5_;
		if (!(legacy_AHP7NxhjlnSC9cf2jfY1fFg == 0)) goto LA3_;
		T5_ = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)0;
		T5_ = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*) newObj((&NTI_lnkYNZP9asc88UfiEGjLrbA_), sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw));
		result = T5_;
		asgnRefNoCycle((void**) (&(*result).idAnon), getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA(result, ((NimStringDesc*) &TM_L3r6bVdeFMiI9cwmLpWIeKw_5)));
		(*result).wordCounter = ((NI) 1);
		asgnRefNoCycle((void**) (&(*result).idDelegator), getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA(result, ((NimStringDesc*) &TM_L3r6bVdeFMiI9cwmLpWIeKw_6)));
		asgnRefNoCycle((void**) (&(*result).emptyIdent), getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA(result, ((NimStringDesc*) &TM_L3r6bVdeFMiI9cwmLpWIeKw_7)));
		{
			tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw s;
			NI res;
			s = (tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw)0;
			res = ((NI) 1);
			{
				while (1) {
					NI T9_;
					tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* T10_;
					if (!(res <= ((NI) 267))) goto LA8;
					s = ((tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw) (res));
					T9_ = (NI)0;
					T9_ = hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_2(specialWords_jS3I1dUcvbZAEuApBSUHng[(s)- 0]);
					T10_ = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
					T10_ = getIdent_BlDQd0MZ58qhFoyY3ZHQIA(result, specialWords_jS3I1dUcvbZAEuApBSUHng[(s)- 0], T9_);
					(*T10_).Sup.id = ((NI) (s));
					res += ((NI) 1);
				} LA8: ;
			}
		}
		asgnRefNoCycle((void**) (&legacy_AHP7NxhjlnSC9cf2jfY1fFg), result);
	}
	goto LA1_;
	LA3_: ;
	{
		result = legacy_AHP7NxhjlnSC9cf2jfY1fFg;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_oH8GBf4tG3b1F5BIuNPwtA)(NimStringDesc* identifier) {
	tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* result;
	result = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
	{
		tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* T5_;
		if (!(legacy_AHP7NxhjlnSC9cf2jfY1fFg == 0)) goto LA3_;
		T5_ = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)0;
		T5_ = newIdentCache_9basvGvZH4FwEO4MVbYyP9aA();
		T5_;
	}
	LA3_: ;
	result = getIdent_Y4Yr5rKoaxkzPcN8rPP9bWA(legacy_AHP7NxhjlnSC9cf2jfY1fFg, identifier);
	return result;
}

N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword_WhYAAh6vF1PoyH6Hsspu4Q)(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* id) {
	tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw result;
	result = (tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3_;
		result = ((tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw) ((*id).Sup.id));
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit000)(void) {
nimRegisterGlobalMarker(TM_L3r6bVdeFMiI9cwmLpWIeKw_4);
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit000)(void) {
static TNimNode* TM_L3r6bVdeFMiI9cwmLpWIeKw_2[5];
static TNimNode* TM_L3r6bVdeFMiI9cwmLpWIeKw_3[3];
static TNimNode TM_L3r6bVdeFMiI9cwmLpWIeKw_0[11];
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.size = sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw);
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.kind = 18;
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.base = 0;
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[0] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1];
NTI_raN9cHVgzmvaXisezY9aGg9cg_.size = sizeof(tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg);
NTI_raN9cHVgzmvaXisezY9aGg9cg_.kind = 17;
NTI_raN9cHVgzmvaXisezY9aGg9cg_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
NTI_raN9cHVgzmvaXisezY9aGg9cg_.flags = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].offset = offsetof(tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg, id);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].name = "id";
NTI_raN9cHVgzmvaXisezY9aGg9cg_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2];
NTI_4umxGerWTHGPwUms7Yqu3g_.size = sizeof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g);
NTI_4umxGerWTHGPwUms7Yqu3g_.kind = 17;
NTI_4umxGerWTHGPwUms7Yqu3g_.base = (&NTI_raN9cHVgzmvaXisezY9aGg9cg_);
NTI_4umxGerWTHGPwUms7Yqu3g_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[0] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].offset = offsetof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g, s);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].name = "s";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[1] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].offset = offsetof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g, next);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].name = "next";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[2] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].offset = offsetof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g, h);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].name = "h";
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].len = 3; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].kind = 2; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].sons = &TM_L3r6bVdeFMiI9cwmLpWIeKw_3[0];
NTI_4umxGerWTHGPwUms7Yqu3g_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3];
NTI_1nh2T19a2BrGbBBQRS39bxRw_.size = sizeof(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*);
NTI_1nh2T19a2BrGbBBQRS39bxRw_.kind = 22;
NTI_1nh2T19a2BrGbBBQRS39bxRw_.base = (&NTI_4umxGerWTHGPwUms7Yqu3g_);
NTI_1nh2T19a2BrGbBBQRS39bxRw_.flags = 2;
NTI_1nh2T19a2BrGbBBQRS39bxRw_.marker = Marker_tyRef_1nh2T19a2BrGbBBQRS39bxRw;
NTI_CBfZt49asUfAsBVM7a3Rc9cw_.size = sizeof(tyArray_CBfZt49asUfAsBVM7a3Rc9cw);
NTI_CBfZt49asUfAsBVM7a3Rc9cw_.kind = 16;
NTI_CBfZt49asUfAsBVM7a3Rc9cw_.base = (&NTI_1nh2T19a2BrGbBBQRS39bxRw_);
NTI_CBfZt49asUfAsBVM7a3Rc9cw_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, buckets);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].typ = (&NTI_CBfZt49asUfAsBVM7a3Rc9cw_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].name = "buckets";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[1] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, wordCounter);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].name = "wordCounter";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[2] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, idAnon);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].name = "idAnon";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[3] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, idDelegator);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].name = "idDelegator";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[4] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, emptyIdent);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].name = "emptyIdent";
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].len = 5; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].kind = 2; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].sons = &TM_L3r6bVdeFMiI9cwmLpWIeKw_2[0];
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0];
NTI_lnkYNZP9asc88UfiEGjLrbA_.size = sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*);
NTI_lnkYNZP9asc88UfiEGjLrbA_.kind = 22;
NTI_lnkYNZP9asc88UfiEGjLrbA_.base = (&NTI_TzLHS09bRH9a0TYLs39cqcNaw_);
NTI_lnkYNZP9asc88UfiEGjLrbA_.flags = 2;
NTI_lnkYNZP9asc88UfiEGjLrbA_.marker = Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA;
NTI_GFuL0q6Yj4iJze0S9cdD9avg_.size = sizeof(tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg*);
NTI_GFuL0q6Yj4iJze0S9cdD9avg_.kind = 22;
NTI_GFuL0q6Yj4iJze0S9cdD9avg_.base = (&NTI_raN9cHVgzmvaXisezY9aGg9cg_);
NTI_GFuL0q6Yj4iJze0S9cdD9avg_.marker = Marker_tyRef_GFuL0q6Yj4iJze0S9cdD9avg;
}

