/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
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
NI align;
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
typedef NI tyArray_9agrCtWKhCnWWMJpKKugJag[16];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash);
static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter);
N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, init_dG7qwLANa3DTWvQLq7ZA7g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NI initialSize);
TNimType NTI_QeWl6B6ffS4pU6WWrtcrDw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4eRCaZmrYLLw2k30GPTiMw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_pOhUohTPuRItuGmDY0Ddzg_;

static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((hcode == ((NI) 0)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)(h + ((NI) 1)) & maxHash);
	return result;
}

static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
{	result = (NI)0;
	(*hc) = hash_uBstFm5SYVQeOL3j9c9bc58A(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	T5_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T8_) goto LA7;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = (s.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				T11_ = eqStrings(s.data->data[h].Field1, key);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			T15_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T15_);
		} LA7: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* a;
	NI T1_;
	a = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}

static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
	NI T1_;
{	result = (NI)0;
	T1_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T4_) goto LA3;
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (s.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				T7_ = eqStrings(s.data->data[h].Field1, key);
				LA8_: ;
				if (!T7_) goto LA9_;
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			T11_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T11_);
		} LA3: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* n;
	NI T1_;
	tySequence_4eRCaZmrYLLw2k30GPTiMw* T2_;
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T1_ = ((*s).data ? (*s).data->Sup.len : 0);
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) ((NI)(T1_ * ((NI) 2)))));
	T2_ = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T2_ = (*s).data;
	unsureAsgnRef((void**) (&(*s).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T4_ = (n ? (n->Sup.len-1) : -1);
		colontmp_ = T4_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA6;
				i = res;
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(n->data[i].Field0);
					if (!T9_) goto LA10_;
					T12_ = (NI)0;
					T12_ = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), n->data[i].Field1, n->data[i].Field0);
					j = (NI)(((NI) -1) - T12_);
					rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA10_: ;
				res += ((NI) 1);
			} LA6: ;
		}
	}
}

N_NIMCALL(void, incl_I6VFHFuzEfqdUNaUfyr6kA)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NimStringDesc* key) {
	NI hc;
	NI index;
	hc = (NI)0;
	index = rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets((*s), key, (&hc));
	{
		if (!(index < ((NI) 0))) goto LA3_;
		{
			NI T7_;
			NIM_BOOL T8_;
			T7_ = ((*s).data ? (*s).data->Sup.len : 0);
			T8_ = (NIM_BOOL)0;
			T8_ = mustRehash_flzFqVXoQqeNJHN4qDyOhwsets(T7_, (*s).counter);
			if (!T8_) goto LA9_;
			enlarge_AdJq4wBW1P1lPO9b8ZHnO2g(s);
			index = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), key, hc);
		}
		LA9_: ;
		rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), key, hc, (NI)(((NI) -1) - index));
		(*s).counter += ((NI) 1);
	}
	LA3_: ;
}

N_NIMCALL(void, init_dG7qwLANa3DTWvQLq7ZA7g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NI initialSize) {
	(*s).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) (initialSize))));
}

N_NIMCALL(void, initSet_Fwi9bjybHpZuLlzfdutND9cw)(NI initialSize, tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* Result) {
	init_dG7qwLANa3DTWvQLq7ZA7g(Result, initialSize);
}

N_NIMCALL(NIM_BOOL, contains_QUwFXAtgP2RpEd1T8OivlA)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI index;
	result = (NIM_BOOL)0;
	hc = (NI)0;
	index = rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets(s, key, (&hc));
	result = (((NI) 0) <= index);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_2[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_3[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.size = sizeof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw);
NTI_QeWl6B6ffS4pU6WWrtcrDw_.kind = 18;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.base = 0;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_2[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_2[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_2[0];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
NTI_4eRCaZmrYLLw2k30GPTiMw_.size = sizeof(tySequence_4eRCaZmrYLLw2k30GPTiMw*);
NTI_4eRCaZmrYLLw2k30GPTiMw_.kind = 24;
NTI_4eRCaZmrYLLw2k30GPTiMw_.base = (&NTI_QeWl6B6ffS4pU6WWrtcrDw_);
NTI_4eRCaZmrYLLw2k30GPTiMw_.flags = 2;
NTI_4eRCaZmrYLLw2k30GPTiMw_.marker = Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw;
NTI_pOhUohTPuRItuGmDY0Ddzg_.size = sizeof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg);
NTI_pOhUohTPuRItuGmDY0Ddzg_.kind = 18;
NTI_pOhUohTPuRItuGmDY0Ddzg_.base = 0;
NTI_pOhUohTPuRItuGmDY0Ddzg_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_3[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_4eRCaZmrYLLw2k30GPTiMw_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_3[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_3[0];
NTI_pOhUohTPuRItuGmDY0Ddzg_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
}

