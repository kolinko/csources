/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream_IHsOGFu33dIY69a9bLlFHlHw Tllstream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
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
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
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
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tllstream_IHsOGFu33dIY69a9bLlFHlHw  {
  TNimObject Sup;
Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Filemode_fVUBHvW79bXUw1j55Oo9avSQ;
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
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
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
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, Marker_TY_f4WZajr79aZLBPITqz2rcdA)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f0, NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NIM_BOOL, readline_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f0, NimStringDesc** line0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NI, readbuffer_1qjbrvfnPD4PaIieHVDvhw_2)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(NI, llreadfromstdin_rgyTKC8s50wthTlyUpoMQg_2)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, void* buf0, NI buflen0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readlinefromstdin_uSz3afZdESO5uHQzkWghlQ)(NimStringDesc* prompt0, NimStringDesc** line0);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NI, counttriples_c9cKaDHVjOVjZCf9b4gTUrFg)(NimStringDesc* s0);
static N_INLINE(NIM_BOOL, continueline_65hI3axOH0fBcQFDum9aTZgllstream)(NimStringDesc* line0, NIM_BOOL intriplestring0);
N_NIMCALL(NIM_BOOL, endswith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x0, TY_nmiMWKVIe46vacnhAFrQvw_Set s0);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f0);
N_NIMCALL(NI, writebuffer_1qjbrvfnPD4PaIieHVDvhw)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(void, llstreamwrite_p1fwzwO1YKdwAKg6V27RTw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc* data0);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA;
TNimType NTI_IHsOGFu33dIY69a9bLlFHlHw;
TNimType NTI_jVcKY16LbOamXE9bxXUD6pQ;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_f4WZajr79aZLBPITqz2rcdA;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_ml9aueblxGz9aYsRLKvPmpow_6, "", 0);
STRING_LITERAL(T_ml9aueblxGz9aYsRLKvPmpow_7, "\015\012", 2);
STRING_LITERAL(T_ml9aueblxGz9aYsRLKvPmpow_8, ">>> ", 4);
STRING_LITERAL(T_ml9aueblxGz9aYsRLKvPmpow_9, "... ", 4);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_ml9aueblxGz9aYsRLKvPmpow_10 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_ml9aueblxGz9aYsRLKvPmpow_11 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static N_NIMCALL(void, Marker_TY_f4WZajr79aZLBPITqz2rcdA)(void* p, NI op) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* a;
	a = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)p;
	nimGCvisit((void*)(*a).s, op);
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, llstreamopen_TMcHzC3C639c0ccC0wtKA2w)(NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA), sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result0).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw);
	(*result0).kind = ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_sEp0GH2306oGo9bqBpj5oTQ(&(*result0).f, filename0, mode0, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result0 = NIM_NIL;
	}
	LA4: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_Qwm1ilRhcaI3znjOGn4xBg)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc** line0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	(*line0) = setLengthStr((*line0), ((NI) 0));
	switch ((*s0).kind) {
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s0).rd < ((*s0).s ? (*s0).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s0).s->data[(*s0).rd]))) {
				case 13:
				{
					(*s0).rd += ((NI) 1);
					{
						if (!((NU8)((*s0).s->data[(*s0).rd]) == (NU8)(10))) goto LA8;
						(*s0).rd += ((NI) 1);
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s0).rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					(*line0) = addChar((*line0), (*s0).s->data[(*s0).rd]);
					(*s0).rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = (NIM_BOOL)0;
		LOC12 = (((NI) 0) < ((*line0) ? (*line0)->Sup.len : 0));
		if (LOC12) goto LA13;
		LOC12 = ((*s0).rd < ((*s0).s ? (*s0).s->Sup.len : 0));
		LA13: ;
		result0 = LOC12;
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result0 = readline_sO1bQXVRA6RP9cdYJXNKeSw((*s0).f, line0);
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result0 = readline_sO1bQXVRA6RP9cdYJXNKeSw(stdin, line0);
	}
	break;
	}
	return result0;
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
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

N_NIMCALL(NIM_BOOL, readlinefromstdin_uSz3afZdESO5uHQzkWghlQ)(NimStringDesc* prompt0, NimStringDesc** line0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	write_c4mGyJBvK73pdM22jiweKQ(stdout, prompt0);
	result0 = readline_sO1bQXVRA6RP9cdYJXNKeSw(stdin, line0);
	{
		if (!!(result0)) goto LA3;
		write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_7));
		exit(((NI) 0));
	}
	LA3: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NI, counttriples_c9cKaDHVjOVjZCf9b4gTUrFg)(NimStringDesc* s0) {
	NI result0;
	NI i0;
	result0 = (NI)0;
	i0 = ((NI) 0);
	{
		while (1) {
			if (!(i0 < (s0 ? s0->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = (NIM_BOOL)0;
				LOC6 = (NIM_BOOL)0;
				LOC6 = ((NU8)(s0->data[i0]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s0->data[(NI)(i0 + ((NI) 1))]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s0->data[(NI)(i0 + ((NI) 2))]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result0 += ((NI) 1);
				i0 += ((NI) 2);
			}
			LA9: ;
			i0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, endswith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x0, TY_nmiMWKVIe46vacnhAFrQvw_Set s0) {
	NIM_BOOL result0;
	NI i0;
	result0 = (NIM_BOOL)0;
	i0 = (NI)((x0 ? x0->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = (((NI) 0) <= i0);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x0->data[i0]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i0 -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (((NI) 0) <= i0);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s0[(NU)(((NU8)(x0->data[i0])))>>3] &(1U<<((NU)(((NU8)(x0->data[i0])))&7U)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_TRUE;
	}
	LA9: ;
	return result0;
}

static N_INLINE(NIM_BOOL, continueline_65hI3axOH0fBcQFDum9aTZgllstream)(NimStringDesc* line0, NIM_BOOL intriplestring0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = intriplestring0;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line0->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_RTbJaR5kDAZUyj9bXErnbyg(line0, T_ml9aueblxGz9aYsRLKvPmpow_10);
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, llreadfromstdin_rgyTKC8s50wthTlyUpoMQg_2)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, void* buf0, NI buflen0) {
	NI result0;
	NimStringDesc* LOC1;
	NimStringDesc* line0;
	NI triples0;
	result0 = (NI)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*s0).s; (*s0).s = copyStringRC1(((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_6));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s0).rd = ((NI) 0);
	line0 = rawNewString(((NI) 120));
	triples0 = ((NI) 0);
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = (NimStringDesc*)0;
			{
				if (!(((*s0).s ? (*s0).s->Sup.len : 0) == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_8));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_9));
			}
			LA5: ;
			LOC10 = (NIM_BOOL)0;
			LOC10 = readlinefromstdin_uSz3afZdESO5uHQzkWghlQ(LOC4, (&line0));
			if (!LOC10) goto LA3;
			(*s0).s = resizeString((*s0).s, line0->Sup.len + 0);
appendString((*s0).s, line0);
			(*s0).s = resizeString((*s0).s, 2);
appendString((*s0).s, ((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_7));
			LOC11 = (NI)0;
			LOC11 = counttriples_c9cKaDHVjOVjZCf9b4gTUrFg(line0);
			triples0 += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = (NIM_BOOL)0;
				LOC14 = continueline_65hI3axOH0fBcQFDum9aTZgllstream(line0, (((NI) ((NI)(triples0 & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s0).lineoffset += ((NI) 1);
	result0 = ((buflen0 <= (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd)) ? buflen0 : (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd));
	{
		if (!(((NI) 0) < result0)) goto LA19;
		copymem_E1xtACub5WcDa3vbrIXbwgsystem(buf0, ((void*) ((&(*s0).s->data[(*s0).rd]))), ((NI) (result0)));
		(*s0).rd += result0;
	}
	LA19: ;
	return result0;
}

N_NIMCALL(NI, llstreamread_rgyTKC8s50wthTlyUpoMQg)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, void* buf0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	switch ((*s0).kind) {
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result0 = ((NI) 0);
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		result0 = ((buflen0 <= (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd)) ? buflen0 : (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd));
		{
			if (!(((NI) 0) < result0)) goto LA5;
			copymem_E1xtACub5WcDa3vbrIXbwgsystem(buf0, ((void*) ((&(*s0).s->data[(NI)(((NI) 0) + (*s0).rd)]))), ((NI) (result0)));
			(*s0).rd += result0;
		}
		LA5: ;
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result0 = readbuffer_1qjbrvfnPD4PaIieHVDvhw_2((*s0).f, buf0, ((NI) (buflen0)));
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result0 = llreadfromstdin_rgyTKC8s50wthTlyUpoMQg_2(s0, buf0, buflen0);
	}
	break;
	}
	return result0;
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, llstreamopen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data0) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	NimStringDesc* LOC1;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA), sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result0).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).s; (*result0).s = copyStringRC1(data0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).kind = ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1);
	return result0;
}

N_NIMCALL(void, llstreamclose_TQe1mwqs39ccgay5ywsr9azw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0) {
	switch ((*s0).kind) {
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		close_BWnr8V7RERYno9bIdPmw8Hw_2((*s0).f);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_p1fwzwO1YKdwAKg6V27RTw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc* data0) {
	switch ((*s0).kind) {
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		(*s0).s = resizeString((*s0).s, data0->Sup.len + 0);
appendString((*s0).s, data0);
		(*s0).wr += (data0 ? data0->Sup.len : 0);
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		write_c4mGyJBvK73pdM22jiweKQ((*s0).f, data0);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_PeZavdQq7bAHwH9b808pP4g)(NimStringDesc* x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = endswith_RTbJaR5kDAZUyj9bXErnbyg(x0, T_ml9aueblxGz9aYsRLKvPmpow_11);
	return result0;
}

N_NIMCALL(void, llstreamwrite_qahxCxkD1WgPXDAm4CZKqw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NIM_CHAR data0) {
	NIM_CHAR c0;
	c0 = (NIM_CHAR)0;
	switch ((*s0).kind) {
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		(*s0).s = addChar((*s0).s, data0);
		(*s0).wr += ((NI) 1);
	}
	break;
	case ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		NI LOC4;
		c0 = data0;
		LOC4 = (NI)0;
		LOC4 = writebuffer_1qjbrvfnPD4PaIieHVDvhw((*s0).f, ((void*) ((&c0))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_p1fwzwO1YKdwAKg6V27RTw_2)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc* data0) {
	llstreamwrite_p1fwzwO1YKdwAKg6V27RTw(s0, data0);
	llstreamwrite_p1fwzwO1YKdwAKg6V27RTw(s0, ((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_7));
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, llstreamopen_8hTxoBHhwtwZR9cM9bBLMsCQ)(FILE* f0) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA), sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result0).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw);
	(*result0).f = f0;
	(*result0).kind = ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 2);
	return result0;
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, llstreamopenstdin_SrHwYi0hR04lgsK58IEpNA)(void) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	NimStringDesc* LOC1;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA), sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result0).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw);
	(*result0).kind = ((Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ) 3);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).s; (*result0).s = copyStringRC1(((NimStringDesc*) &T_ml9aueblxGz9aYsRLKvPmpow_6));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).lineoffset = ((NI) -1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit000)(void) {
static TNimNode* T_ml9aueblxGz9aYsRLKvPmpow_2[6];
static TNimNode* T_ml9aueblxGz9aYsRLKvPmpow_3[4];
NI T_ml9aueblxGz9aYsRLKvPmpow_5;
static char* NIM_CONST T_ml9aueblxGz9aYsRLKvPmpow_4[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode T_ml9aueblxGz9aYsRLKvPmpow_0[12];
NTI_IHsOGFu33dIY69a9bLlFHlHw.size = sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw);
NTI_IHsOGFu33dIY69a9bLlFHlHw.kind = 17;
NTI_IHsOGFu33dIY69a9bLlFHlHw.base = (&NTI_13RNkKqUOX1TtorOUlKtqA);
T_ml9aueblxGz9aYsRLKvPmpow_2[0] = &T_ml9aueblxGz9aYsRLKvPmpow_0[1];
NTI_jVcKY16LbOamXE9bxXUD6pQ.size = sizeof(Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ);
NTI_jVcKY16LbOamXE9bxXUD6pQ.kind = 14;
NTI_jVcKY16LbOamXE9bxXUD6pQ.base = 0;
NTI_jVcKY16LbOamXE9bxXUD6pQ.flags = 3;
for (T_ml9aueblxGz9aYsRLKvPmpow_5 = 0; T_ml9aueblxGz9aYsRLKvPmpow_5 < 4; T_ml9aueblxGz9aYsRLKvPmpow_5++) {
T_ml9aueblxGz9aYsRLKvPmpow_0[T_ml9aueblxGz9aYsRLKvPmpow_5+2].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[T_ml9aueblxGz9aYsRLKvPmpow_5+2].offset = T_ml9aueblxGz9aYsRLKvPmpow_5;
T_ml9aueblxGz9aYsRLKvPmpow_0[T_ml9aueblxGz9aYsRLKvPmpow_5+2].name = T_ml9aueblxGz9aYsRLKvPmpow_4[T_ml9aueblxGz9aYsRLKvPmpow_5];
T_ml9aueblxGz9aYsRLKvPmpow_3[T_ml9aueblxGz9aYsRLKvPmpow_5] = &T_ml9aueblxGz9aYsRLKvPmpow_0[T_ml9aueblxGz9aYsRLKvPmpow_5+2];
}
T_ml9aueblxGz9aYsRLKvPmpow_0[6].len = 4; T_ml9aueblxGz9aYsRLKvPmpow_0[6].kind = 2; T_ml9aueblxGz9aYsRLKvPmpow_0[6].sons = &T_ml9aueblxGz9aYsRLKvPmpow_3[0];
NTI_jVcKY16LbOamXE9bxXUD6pQ.node = &T_ml9aueblxGz9aYsRLKvPmpow_0[6];
T_ml9aueblxGz9aYsRLKvPmpow_0[1].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[1].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, kind);
T_ml9aueblxGz9aYsRLKvPmpow_0[1].typ = (&NTI_jVcKY16LbOamXE9bxXUD6pQ);
T_ml9aueblxGz9aYsRLKvPmpow_0[1].name = "kind";
T_ml9aueblxGz9aYsRLKvPmpow_2[1] = &T_ml9aueblxGz9aYsRLKvPmpow_0[7];
T_ml9aueblxGz9aYsRLKvPmpow_0[7].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[7].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, f);
T_ml9aueblxGz9aYsRLKvPmpow_0[7].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w);
T_ml9aueblxGz9aYsRLKvPmpow_0[7].name = "f";
T_ml9aueblxGz9aYsRLKvPmpow_2[2] = &T_ml9aueblxGz9aYsRLKvPmpow_0[8];
T_ml9aueblxGz9aYsRLKvPmpow_0[8].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[8].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, s);
T_ml9aueblxGz9aYsRLKvPmpow_0[8].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_ml9aueblxGz9aYsRLKvPmpow_0[8].name = "s";
T_ml9aueblxGz9aYsRLKvPmpow_2[3] = &T_ml9aueblxGz9aYsRLKvPmpow_0[9];
T_ml9aueblxGz9aYsRLKvPmpow_0[9].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[9].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, rd);
T_ml9aueblxGz9aYsRLKvPmpow_0[9].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ml9aueblxGz9aYsRLKvPmpow_0[9].name = "rd";
T_ml9aueblxGz9aYsRLKvPmpow_2[4] = &T_ml9aueblxGz9aYsRLKvPmpow_0[10];
T_ml9aueblxGz9aYsRLKvPmpow_0[10].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[10].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, wr);
T_ml9aueblxGz9aYsRLKvPmpow_0[10].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ml9aueblxGz9aYsRLKvPmpow_0[10].name = "wr";
T_ml9aueblxGz9aYsRLKvPmpow_2[5] = &T_ml9aueblxGz9aYsRLKvPmpow_0[11];
T_ml9aueblxGz9aYsRLKvPmpow_0[11].kind = 1;
T_ml9aueblxGz9aYsRLKvPmpow_0[11].offset = offsetof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw, lineoffset);
T_ml9aueblxGz9aYsRLKvPmpow_0[11].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ml9aueblxGz9aYsRLKvPmpow_0[11].name = "lineOffset";
T_ml9aueblxGz9aYsRLKvPmpow_0[0].len = 6; T_ml9aueblxGz9aYsRLKvPmpow_0[0].kind = 2; T_ml9aueblxGz9aYsRLKvPmpow_0[0].sons = &T_ml9aueblxGz9aYsRLKvPmpow_2[0];
NTI_IHsOGFu33dIY69a9bLlFHlHw.node = &T_ml9aueblxGz9aYsRLKvPmpow_0[0];
NTI_f4WZajr79aZLBPITqz2rcdA.size = sizeof(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*);
NTI_f4WZajr79aZLBPITqz2rcdA.kind = 22;
NTI_f4WZajr79aZLBPITqz2rcdA.base = (&NTI_IHsOGFu33dIY69a9bLlFHlHw);
NTI_f4WZajr79aZLBPITqz2rcdA.marker = Marker_TY_f4WZajr79aZLBPITqz2rcdA;
}
