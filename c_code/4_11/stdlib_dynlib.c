/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct TNimType TNimType;
typedef struct Cellseq_Axo1XVm9aaQueTOldv8le5w Cellseq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Gcheap_1TRH1TZMaVZTnLNcIHuNFQ Gcheap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct Gcstack_7fytPA5bBsob6See21YMRA Gcstack_7fytPA5bBsob6See21YMRA;
typedef struct Memregion_x81NhDv59b8ercDZ9bi85jyg Memregion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct Smallchunk_tXn60W2f8h3jgAYdEmy5NQ Smallchunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct Llchunk_XsENErzHIZV9bhvyJx56wGw Llchunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct Bigchunk_Rv9c70Uhp2TytkX7eH78qEg Bigchunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct Intset_EZObFrE3NC9bIb3YMkY9crZA Intset_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct Avlnode_IaqjtwKhxLEpvDS9bct9blEw Avlnode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct Gcstat_0RwLoVBHZPfUAcLczmfQAg Gcstat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct Cellset_jG87P0AI9aZtss9ccTYBIISQ Cellset_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct Pagedesc_fublkgIY4LG3mT51LU2WHg Pagedesc_fublkgIY4LG3mT51LU2WHg;
typedef struct TNimNode TNimNode;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  Cellseq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  Intset_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
struct  Memregion_x81NhDv59b8ercDZ9bi85jyg  {
NI minlargeobj;
NI maxlargeobj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freesmallchunks;
Llchunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* freechunkslist;
Intset_EZObFrE3NC9bIb3YMkY9crZA chunkstarts;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* root;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* last;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* freeavlnodes;
NIM_BOOL locked;
NIM_BOOL blockchunksizeincrease;
NI nextchunksize;
};
struct  Gcstat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
Pagedesc_fublkgIY4LG3mT51LU2WHg* head;
Pagedesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  Gcheap_1TRH1TZMaVZTnLNcIHuNFQ  {
Gcstack_7fytPA5bBsob6See21YMRA* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq_Axo1XVm9aaQueTOldv8le5w zct;
Cellseq_Axo1XVm9aaQueTOldv8le5w decstack;
Cellseq_Axo1XVm9aaQueTOldv8le5w tempstack;
NI recgclock;
Memregion_x81NhDv59b8ercDZ9bi85jyg region;
Gcstat_0RwLoVBHZPfUAcLczmfQAg stat;
Cellset_jG87P0AI9aZtss9ccTYBIISQ marked;
Cellseq_Axo1XVm9aaQueTOldv8le5w additionalroots;
};
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  Gcstack_7fytPA5bBsob6See21YMRA  {
Gcstack_7fytPA5bBsob6See21YMRA* prev;
Gcstack_7fytPA5bBsob6See21YMRA* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk_tXn60W2f8h3jgAYdEmy5NQ  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* next;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
Freecell_u6M5LHprqzkn9axr04yg9bGQ* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
Llchunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  Bigchunk_Rv9c70Uhp2TytkX7eH78qEg  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* next;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NI align;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef Avlnode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  Avlnode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc_fublkgIY4LG3mT51LU2WHg  {
Pagedesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s0, NIM_CHAR sub0, NI start0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_WPWyPKk58Cr5a6XFFviMjg, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(void, libcandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s0, TY_sM4lkSb7zS6F7OVMvW9cffQ** dest0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result0;
}

static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	addzct_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
	c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
}

N_NIMCALL(void, libcandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s0, TY_sM4lkSb7zS6F7OVMvW9cffQ** dest0) {
	NI le0;
	NI ri0;
	le0 = nsuFindChar(s0, 40, ((NI) 0));
	ri0 = nsuFindChar(s0, 41, ((NI) ((NI)(le0 + ((NI) 1)))));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix0;
		NimStringDesc* suffix0;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= le0);
		if (!(LOC3)) goto LA4;
		LOC3 = (le0 < ri0);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix0 = copyStrLast(s0, ((NI) 0), (NI)(le0 - ((NI) 1)));
		suffix0 = copyStr(s0, (NI)(ri0 + ((NI) 1)));
		{
			NimStringDesc* middle_mQnab18JFb5gceJouyn5bQ;
			NimStringDesc* HEX3Atmp_Q53amcj1be9anZePon9ahpNg;
			NI last_9c0GMfC5FR8YGOOLBXaONOw;
			NI splits_gdklbLp8DMwWunLEsKElYg;
			middle_mQnab18JFb5gceJouyn5bQ = (NimStringDesc*)0;
			HEX3Atmp_Q53amcj1be9anZePon9ahpNg = (NimStringDesc*)0;
			HEX3Atmp_Q53amcj1be9anZePon9ahpNg = copyStrLast(s0, (NI)(le0 + ((NI) 1)), (NI)(ri0 - ((NI) 1)));
			last_9c0GMfC5FR8YGOOLBXaONOw = ((NI) 0);
			splits_gdklbLp8DMwWunLEsKElYg = ((NI) -1);
			{
				if (!(((NI) 0) < (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0))) goto LA10;
				{
					while (1) {
						NI first_zyLxzTLKf9cZsnxydGyYqzA;
						NimStringDesc* LOC22;
						if (!(last_9c0GMfC5FR8YGOOLBXaONOw <= (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0))) goto LA13;
						first_zyLxzTLKf9cZsnxydGyYqzA = last_9c0GMfC5FR8YGOOLBXaONOw;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = (NIM_BOOL)0;
								LOC16 = (last_9c0GMfC5FR8YGOOLBXaONOw < (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_Q53amcj1be9anZePon9ahpNg->data[last_9c0GMfC5FR8YGOOLBXaONOw]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_9c0GMfC5FR8YGOOLBXaONOw += ((NI) 1);
							} LA15: ;
						}
						{
							if (!(splits_gdklbLp8DMwWunLEsKElYg == ((NI) 0))) goto LA20;
							last_9c0GMfC5FR8YGOOLBXaONOw = (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0);
						}
						LA20: ;
						middle_mQnab18JFb5gceJouyn5bQ = copyStrLast(HEX3Atmp_Q53amcj1be9anZePon9ahpNg, first_zyLxzTLKf9cZsnxydGyYqzA, (NI)(last_9c0GMfC5FR8YGOOLBXaONOw - ((NI) 1)));
						LOC22 = (NimStringDesc*)0;
						LOC22 = rawNewString(prefix0->Sup.len + middle_mQnab18JFb5gceJouyn5bQ->Sup.len + suffix0->Sup.len + 0);
appendString(LOC22, prefix0);
appendString(LOC22, middle_mQnab18JFb5gceJouyn5bQ);
appendString(LOC22, suffix0);
						libcandidates_z61W6kN39aBKDgNtbcWn9cSg(LOC22, dest0);
						{
							if (!(splits_gdklbLp8DMwWunLEsKElYg == ((NI) 0))) goto LA25;
							goto LA12;
						}
						LA25: ;
						splits_gdklbLp8DMwWunLEsKElYg -= ((NI) 1);
						last_9c0GMfC5FR8YGOOLBXaONOw += ((NI) 1);
					} LA13: ;
				} LA12: ;
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC28;
		(*dest0) = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&((*dest0))->Sup, sizeof(NimStringDesc*));
		LOC28 = (NimStringDesc*)0;
		LOC28 = (*dest0)->data[(*dest0)->Sup.len]; (*dest0)->data[(*dest0)->Sup.len] = copyStringRC1(s0);
		if (LOC28) nimGCunrefNoCycle(LOC28);
		++(*dest0)->Sup.len;
	}
	LA1: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}

