/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
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
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
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
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
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
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
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
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, init_yuYJ6k5D1l1c5lO0bWkT5w)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NI initialSize);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo_1xdTQapFveM9bImKot7h9cdw)(NI x);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawGet_h9bD59bk9aSaP9ae9axJ475zaRgsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg t, NimStringDesc* key, NI* hc);
N_LIB_PRIVATE N_NIMCALL(NI, hash_6PCYkKlCNhq9cnRLnqWKkwQ)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isFilled_uHIMxs9aGYDEfZheaMnN2sQsets)(NI hcode);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
static N_INLINE(NI, nextTry_YQqpuaZxbzuIDQ5oZ9bnvuQsets)(NI h, NI maxHash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, mustRehash_DnOxWg9bLVgR82rOi9bLo4bwsets)(NI length, NI counter);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_S48V0eiEuyCalh7won1YWQ)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s);
static N_INLINE(NI, rawGetKnownHC_H4n01hI4Y1dhJhVV44eECQsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg t, NimStringDesc* key, NI hc);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_0WGPG59byJ2eMftxsrjD02A)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
TNimType NTI_CD8Dpv0WGmASelVaNSo6zg_;
TNimType NTI_QeWl6B6ffS4pU6WWrtcrDw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4eRCaZmrYLLw2k30GPTiMw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_4, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/setim"
"pl.nim(19, 10) `isPowerOfTwo(initialSize)` ", 106);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_5, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/setim"
"pl.nim(19, 10) `isPowerOfTwo(defaultInitialSize)` ", 113);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_8, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/hashc"
"ommon.nim(33, 9) `length > counter` ", 99);
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* a;
	NI T1_;
	a = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, init_yuYJ6k5D1l1c5lO0bWkT5w)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NI initialSize) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_1xdTQapFveM9bImKot7h9cdw(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_4));
	}
	LA4_: ;
	(*s).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
}

N_LIB_PRIVATE N_NIMCALL(void, initHashSet_rR3V3EXK6m72GYtth8OqcA)(NI initialSize, tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_CD8Dpv0WGmASelVaNSo6zg_));
	init_yuYJ6k5D1l1c5lO0bWkT5w(Result, initialSize);
}

static N_INLINE(NIM_BOOL, isFilled_uHIMxs9aGYDEfZheaMnN2sQsets)(NI hcode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((hcode == ((NI) 0)));
	return result;
}

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_YQqpuaZxbzuIDQ5oZ9bnvuQsets)(NI h, NI maxHash) {
	NI result;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_6;
	result = (NI)0;
	TM_0JXiWyhP5OCO8jWMA6sb1w_6 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_6) & maxHash);
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rawGet_h9bD59bk9aSaP9ae9axJ475zaRgsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
	NI T10_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_7;
{	result = (NI)0;
	(*hc) = hash_6PCYkKlCNhq9cnRLnqWKkwQ(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	{
		NI T7_;
		T7_ = (t.data ? t.data->Sup.len : 0);
		if (!(T7_ == ((NI) 0))) goto LA8_;
		result = ((NI) -1);
		goto BeforeRet_;
	}
	LA8_: ;
	T10_ = ((t.data ? t.data->Sup.len : 0)-1);
	h = (NI)((*hc) & T10_);
	{
		while (1) {
			NIM_BOOL T13_;
			NI T20_;
			if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
			T13_ = (NIM_BOOL)0;
			T13_ = isFilled_uHIMxs9aGYDEfZheaMnN2sQsets(t.data->data[h].Field0);
			if (!T13_) goto LA12;
			{
				NIM_BOOL T16_;
				T16_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T16_ = (t.data->data[h].Field0 == (*hc));
				if (!(T16_)) goto LA17_;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T16_ = eqStrings(t.data->data[h].Field1, key);
				LA17_: ;
				if (!T16_) goto LA18_;
				result = h;
				goto BeforeRet_;
			}
			LA18_: ;
			T20_ = ((t.data ? t.data->Sup.len : 0)-1);
			h = nextTry_YQqpuaZxbzuIDQ5oZ9bnvuQsets(h, T20_);
		} LA12: ;
	}
	TM_0JXiWyhP5OCO8jWMA6sb1w_7 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_7);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_DnOxWg9bLVgR82rOi9bLo4bwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_9;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_10;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_11;
	result = (NIM_BOOL)0;
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_8));
	}
	LA3_: ;
	T5_ = (NIM_BOOL)0;
	TM_0JXiWyhP5OCO8jWMA6sb1w_9 = mulInt(length, ((NI) 2));
	TM_0JXiWyhP5OCO8jWMA6sb1w_10 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_9) < (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_10));
	if (T5_) goto LA6_;
	TM_0JXiWyhP5OCO8jWMA6sb1w_11 = subInt(length, counter);
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_11) < ((NI) 4));
	LA6_: ;
	result = T5_;
	return result;
}

static N_INLINE(NI, rawGetKnownHC_H4n01hI4Y1dhJhVV44eECQsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
	NI T6_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_13;
{	result = (NI)0;
	{
		NI T3_;
		T3_ = (t.data ? t.data->Sup.len : 0);
		if (!(T3_ == ((NI) 0))) goto LA4_;
		result = ((NI) -1);
		goto BeforeRet_;
	}
	LA4_: ;
	T6_ = ((t.data ? t.data->Sup.len : 0)-1);
	h = (NI)(hc & T6_);
	{
		while (1) {
			NIM_BOOL T9_;
			NI T16_;
			if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
			T9_ = (NIM_BOOL)0;
			T9_ = isFilled_uHIMxs9aGYDEfZheaMnN2sQsets(t.data->data[h].Field0);
			if (!T9_) goto LA8;
			{
				NIM_BOOL T12_;
				T12_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T12_ = (t.data->data[h].Field0 == hc);
				if (!(T12_)) goto LA13_;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T12_ = eqStrings(t.data->data[h].Field1, key);
				LA13_: ;
				if (!T12_) goto LA14_;
				result = h;
				goto BeforeRet_;
			}
			LA14_: ;
			T16_ = ((t.data ? t.data->Sup.len : 0)-1);
			h = nextTry_YQqpuaZxbzuIDQ5oZ9bnvuQsets(h, T16_);
		} LA8: ;
	}
	TM_0JXiWyhP5OCO8jWMA6sb1w_13 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_13);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_0WGPG59byJ2eMftxsrjD02A)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h) {
	NimStringDesc* T11_;
	{
		NI T3_;
		T3_ = ((*data) ? (*data)->Sup.len : 0);
		if (!(T3_ == ((NI) 0))) goto LA4_;
		{
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = isPowerOfTwo_1xdTQapFveM9bImKot7h9cdw(((NI) 64));
			if (!!(T8_)) goto LA9_;
			failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_5));
		}
		LA9_: ;
		(*s).counter = ((NI) 0);
		unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) 64)));
	}
	LA4_: ;
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	T11_ = (NimStringDesc*)0;
	T11_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (T11_) nimGCunrefNoCycle(T11_);
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	(*data)->data[h].Field0 = hc;
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_S48V0eiEuyCalh7won1YWQ)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* n;
	NI T1_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_12;
	tySequence_4eRCaZmrYLLw2k30GPTiMw* T2_;
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T1_ = ((*s).data ? (*s).data->Sup.len : 0);
	TM_0JXiWyhP5OCO8jWMA6sb1w_12 = mulInt(T1_, ((NI) 2));
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI)chckRange((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_12), ((NI) 0), ((NI) IL64(9223372036854775807)))));
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
		T4_ = ((n ? n->Sup.len : 0)-1);
		colontmp_ = T4_;
		res = ((NI) 0);
		{
			while (1) {
				NI TM_0JXiWyhP5OCO8jWMA6sb1w_15;
				if (!(res <= colontmp_)) goto LA6;
				i = res;
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					NI TM_0JXiWyhP5OCO8jWMA6sb1w_14;
					if ((NU)(i) >= (NU)(n ? n->Sup.len : 0)) raiseIndexError2(i,(n ? n->Sup.len : 0)-1);
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_uHIMxs9aGYDEfZheaMnN2sQsets(n->data[i].Field0);
					if (!T9_) goto LA10_;
					if ((NU)(i) >= (NU)(n ? n->Sup.len : 0)) raiseIndexError2(i,(n ? n->Sup.len : 0)-1);
					if ((NU)(i) >= (NU)(n ? n->Sup.len : 0)) raiseIndexError2(i,(n ? n->Sup.len : 0)-1);
					T12_ = (NI)0;
					T12_ = rawGetKnownHC_H4n01hI4Y1dhJhVV44eECQsets((*s), n->data[i].Field1, n->data[i].Field0);
					TM_0JXiWyhP5OCO8jWMA6sb1w_14 = subInt(((NI) -1), T12_);
					j = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_14);
					if ((NU)(i) >= (NU)(n ? n->Sup.len : 0)) raiseIndexError2(i,(n ? n->Sup.len : 0)-1);
					if ((NU)(i) >= (NU)(n ? n->Sup.len : 0)) raiseIndexError2(i,(n ? n->Sup.len : 0)-1);
					rawInsert_0WGPG59byJ2eMftxsrjD02A(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA10_: ;
				TM_0JXiWyhP5OCO8jWMA6sb1w_15 = addInt(res, ((NI) 1));
				res = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_15);
			} LA6: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, incl_TMNSyv4q8yRKlH5e1bO09cA)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NimStringDesc* key) {
	NI hc;
	NI index;
	{
		NI T3_;
		T3_ = ((*s).data ? (*s).data->Sup.len : 0);
		if (!(T3_ == ((NI) 0))) goto LA4_;
		{
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = isPowerOfTwo_1xdTQapFveM9bImKot7h9cdw(((NI) 64));
			if (!!(T8_)) goto LA9_;
			failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_5));
		}
		LA9_: ;
		(*s).counter = ((NI) 0);
		unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) 64)));
	}
	LA4_: ;
	hc = (NI)0;
	index = rawGet_h9bD59bk9aSaP9ae9axJ475zaRgsets((*s), key, (&hc));
	{
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_16;
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_17;
		if (!(index < ((NI) 0))) goto LA13_;
		{
			NI T17_;
			NIM_BOOL T18_;
			T17_ = ((*s).data ? (*s).data->Sup.len : 0);
			T18_ = (NIM_BOOL)0;
			T18_ = mustRehash_DnOxWg9bLVgR82rOi9bLo4bwsets(T17_, (*s).counter);
			if (!T18_) goto LA19_;
			enlarge_S48V0eiEuyCalh7won1YWQ(s);
			index = rawGetKnownHC_H4n01hI4Y1dhJhVV44eECQsets((*s), key, hc);
		}
		LA19_: ;
		TM_0JXiWyhP5OCO8jWMA6sb1w_16 = subInt(((NI) -1), index);
		rawInsert_0WGPG59byJ2eMftxsrjD02A(s, (&(*s).data), key, hc, (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_16));
		TM_0JXiWyhP5OCO8jWMA6sb1w_17 = addInt((*s).counter, ((NI) 1));
		(*s).counter = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_17);
	}
	LA13_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_RafAVeUVSno4B47UdPqNlg)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI index;
	result = (NIM_BOOL)0;
	hc = (NI)0;
	index = rawGet_h9bD59bk9aSaP9ae9axJ475zaRgsets(s, key, (&hc));
	result = (((NI) 0) <= index);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_2_2[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_3_2[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_CD8Dpv0WGmASelVaNSo6zg_.size = sizeof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg);
NTI_CD8Dpv0WGmASelVaNSo6zg_.kind = 18;
NTI_CD8Dpv0WGmASelVaNSo6zg_.base = 0;
NTI_CD8Dpv0WGmASelVaNSo6zg_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_2_2[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.size = sizeof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw);
NTI_QeWl6B6ffS4pU6WWrtcrDw_.kind = 18;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.base = 0;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_3_2[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_3_2[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_3_2[0];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
NTI_4eRCaZmrYLLw2k30GPTiMw_.size = sizeof(tySequence_4eRCaZmrYLLw2k30GPTiMw*);
NTI_4eRCaZmrYLLw2k30GPTiMw_.kind = 24;
NTI_4eRCaZmrYLLw2k30GPTiMw_.base = (&NTI_QeWl6B6ffS4pU6WWrtcrDw_);
NTI_4eRCaZmrYLLw2k30GPTiMw_.flags = 2;
NTI_4eRCaZmrYLLw2k30GPTiMw_.marker = Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_4eRCaZmrYLLw2k30GPTiMw_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_2_2[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_2_2[0];
NTI_CD8Dpv0WGmASelVaNSo6zg_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
}

