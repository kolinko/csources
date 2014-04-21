/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode186813 tnode186813;
typedef struct ttype186847 ttype186847;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tsym186843 tsym186843;
typedef struct tident166019 tident166019;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct TY10665 TY10665;
typedef struct tcell41290 tcell41290;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41302 tcellset41302;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct TY186932 TY186932;
typedef struct tlistentry117017 tlistentry117017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode186813  {
ttype186847* Typ;
tlineinfo162527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym186843* Sym;
} S4;
struct {tident166019* Ident;
} S5;
struct {tnodeseq186807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY187025[20];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrtable186817  {
NI Counter;
tsymseq186815* Data;
};
struct  tloc186827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype186847* T;
trope144007* R;
trope144007* Heaproot;
NI A;
};
struct  tsym186843  {
  tidobj166013 Sup;
NU8 Kind;
union {
struct {ttypeseq186845* Typeinstcache;
tscope186837* Typscope;
} S1;
struct {TY186943* Procinstcache;
tscope186837* Scope;
} S2;
struct {TY186943* Usedgenerics;
tstrtable186817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype186847* Typ;
tident166019* Name;
tlineinfo162527 Info;
tsym186843* Owner;
NU32 Flags;
tnode186813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc186827 Loc;
tlib186831* Annex;
tnode186813* Constraint;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  ttype186847  {
  tidobj166013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq186845* Sons;
tnode186813* N;
tsym186843* Destructor;
tsym186843* Owner;
tsym186843* Sym;
NI64 Size;
NI Align;
tloc186827 Loc;
};
struct  tscope186837  {
NI Depthlevel;
tstrtable186817 Symbols;
tnodeseq186807* Usingsyms;
tscope186837* Parent;
};
struct  tinstantiation186833  {
tsym186843* Sym;
ttypeseq186845* Concretetypes;
TY186932* Usedby;
};
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tlib186831  {
  tlistentry117017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope144007* Name;
tnode186813* Path;
};
typedef NI TY22818[8];
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct ttypeseq186845 {
  TGenericSeq Sup;
  ttype186847* data[SEQ_DECL_SIZE];
};
struct TY186943 {
  TGenericSeq Sup;
  tinstantiation186833* data[SEQ_DECL_SIZE];
};
struct tsymseq186815 {
  TGenericSeq Sup;
  tsym186843* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, renderplainsymbolname_337007)(tnode186813* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_187274)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode186813*, HEX5BHEX5D_187711)(tnode186813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_210118)(tsym186843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_164591)(tlineinfo162527 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76080, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rendertype_337208)(tnode186813* n);
N_NIMCALL(NimStringDesc*, typetostring_222020)(ttype186847* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, renderparamtypes_339423)(TY10665** found, tnode186813* n);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(NimStringDesc*, renderparamtypes_339847)(tnode186813* n, NimStringDesc* sep);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4766, "", 0);
static NIM_CONST TY187025 TMP4767 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4768, "sons", 4);
static NIM_CONST TY187025 TMP4769 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4770, "ident", 5);
STRING_LITERAL(TMP4771, "*", 1);
static NIM_CONST TY187025 TMP4772 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4773, "sym", 3);
STRING_LITERAL(TMP4774, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4775, "not result.isNil ", 17);
STRING_LITERAL(TMP4776, "len(n) == 1 ", 12);
STRING_LITERAL(TMP4777, "ref.", 4);
STRING_LITERAL(TMP4778, "ptr.", 4);
STRING_LITERAL(TMP4779, "len(n) > 1 ", 11);
STRING_LITERAL(TMP4780, "params.kind == nkFormalParams ", 30);
STRING_LITERAL(TMP4781, "len(params) > 0 ", 16);
STRING_LITERAL(TMP4782, "proc(", 5);
STRING_LITERAL(TMP4783, "len(n) >= 3 ", 12);
STRING_LITERAL(TMP4785, "n[i].kind == nkIdent ", 21);
STRING_LITERAL(TMP4786, "len(n) > 0 ", 11);
STRING_LITERAL(TMP4787, "tuple[", 6);
STRING_LITERAL(TMP4788, "len(n) >= 2 ", 12);
STRING_LITERAL(TMP4790, "typePos > 0 ", 12);
STRING_LITERAL(TMP4793, "renderParamTypes(found,n) with ", 31);
extern TFrame* frameptr_13038;
extern TNimType NTI186023; /* TNodeKind */
extern tgcheap43216 gch_43244;
extern TNimType NTI10665; /* seq[string] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, len_187274)(tnode186813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP4767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4768));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP4767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4768));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(tnode186813*, HEX5BHEX5D_187711)(tnode186813* n, NI i) {
	tnode186813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP4767[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4768));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
	return result;
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

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_337007)(tnode186813* n) {
	NimStringDesc* result;
	nimfr("renderPlainSymbolName", "typesrenderer.nim")
	result = 0;
	nimln(11, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4766));
	nimln(12, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		NI i_337032;
		NI HEX3Atmp_337201;
		NI LOC2;
		NI res_337203;
		i_337032 = 0;
		HEX3Atmp_337201 = 0;
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_187274(n);
		HEX3Atmp_337201 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_337203 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NI LOC4;
			tnode186813* LOC5;
			nimln(1458, "system.nim");
			if (!(res_337203 <= HEX3Atmp_337201)) goto LA3;
			nimln(1457, "system.nim");
			i_337032 = res_337203;
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = len_187274(n);
			LOC5 = 0;
			LOC5 = HEX5BHEX5D_187711(n, subInt(LOC4, 1));
			result = renderplainsymbolname_337007(LOC5);
			nimln(16, "typesrenderer.nim");
			{
				nimln(16, "typesrenderer.nim");
				nimln(16, "typesrenderer.nim");
				if (!(0 < result->Sup.len)) goto LA8;
				nimln(17, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA8: ;
			nimln(1460, "system.nim");
			res_337203 = addInt(res_337203, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(19, "typesrenderer.nim");
		{
			nimln(19, "typesrenderer.nim");
			nimln(19, "typesrenderer.nim");
			if (!(((TMP4769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4770));
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4771)))) goto LA13;
			nimln(20, "typesrenderer.nim");
			if (!(((TMP4769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4770));
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA13: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(22, "typesrenderer.nim");
		if (!(((TMP4772[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4773));
		result = renderdefinitionname_210118((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode186813* LOC17;
		nimln(24, "typesrenderer.nim");
		nimln(24, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_187711(n, 0);
		result = renderplainsymbolname_337007(LOC17);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC19;
		tnode186813* LOC20;
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		LOC19 = 0;
		LOC19 = len_187274(n);
		LOC20 = 0;
		LOC20 = HEX5BHEX5D_187711(n, subInt(LOC19, 1));
		result = renderplainsymbolname_337007(LOC20);
	}
	break;
	default:
	{
		NimStringDesc* LOC22;
		nimln(28, "typesrenderer.nim");
		nimln(28, "typesrenderer.nim");
		LOC22 = 0;
		nimln(28, "typesrenderer.nim");
		LOC22 = rawNewString(reprEnum((*n).Kind, (&NTI186023))->Sup.len + 29);
appendString(LOC22, ((NimStringDesc*) &TMP4774));
appendString(LOC22, reprEnum((*n).Kind, (&NTI186023)));
		internalerror_164591((*n).Info, LOC22);
	}
	break;
	}
	nimln(29, "typesrenderer.nim");
	{
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA25;
		nimln(29, "typesrenderer.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP4775));
	}
	LA25: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, rendertype_337208)(tnode186813* n) {
	NimStringDesc* result;
	nimfr("renderType", "typesrenderer.nim")
	result = 0;
	nimln(33, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		nimln(34, "typesrenderer.nim");
		if (!(((TMP4769[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4770));
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		nimln(35, "typesrenderer.nim");
		if (!(((TMP4772[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4773));
		result = typetostring_222020((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 141):
	{
		tnode186813* LOC9;
		nimln(37, "typesrenderer.nim");
		{
			NI LOC6;
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			LOC6 = 0;
			LOC6 = len_187274(n);
			if (!!((LOC6 == 1))) goto LA7;
			nimln(37, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4776));
		}
		LA7: ;
		nimln(38, "typesrenderer.nim");
		nimln(38, "typesrenderer.nim");
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_187711(n, 0);
		result = rendertype_337208(LOC9);
	}
	break;
	case ((NU8) 139):
	{
		NimStringDesc* LOC16;
		tnode186813* LOC17;
		NimStringDesc* LOC18;
		nimln(40, "typesrenderer.nim");
		{
			NI LOC13;
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			LOC13 = 0;
			LOC13 = len_187274(n);
			if (!!((LOC13 == 1))) goto LA14;
			nimln(40, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4776));
		}
		LA14: ;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC16 = 0;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_187711(n, 0);
		LOC18 = 0;
		LOC18 = rendertype_337208(LOC17);
		LOC16 = rawNewString(LOC18->Sup.len + 4);
appendString(LOC16, ((NimStringDesc*) &TMP4777));
appendString(LOC16, LOC18);
		result = LOC16;
	}
	break;
	case ((NU8) 140):
	{
		NimStringDesc* LOC25;
		tnode186813* LOC26;
		NimStringDesc* LOC27;
		nimln(43, "typesrenderer.nim");
		{
			NI LOC22;
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			LOC22 = 0;
			LOC22 = len_187274(n);
			if (!!((LOC22 == 1))) goto LA23;
			nimln(43, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4776));
		}
		LA23: ;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC25 = 0;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC26 = 0;
		LOC26 = HEX5BHEX5D_187711(n, 0);
		LOC27 = 0;
		LOC27 = rendertype_337208(LOC26);
		LOC25 = rawNewString(LOC27->Sup.len + 4);
appendString(LOC25, ((NimStringDesc*) &TMP4778));
appendString(LOC25, LOC27);
		result = LOC25;
	}
	break;
	case ((NU8) 145):
	{
		tnode186813* params;
		NI i_338423;
		NI HEX3Atmp_339401;
		NI LOC43;
		NI res_339403;
		nimln(46, "typesrenderer.nim");
		{
			NI LOC31;
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			LOC31 = 0;
			LOC31 = len_187274(n);
			if (!!((1 < LOC31))) goto LA32;
			nimln(46, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4779));
		}
		LA32: ;
		nimln(47, "typesrenderer.nim");
		params = HEX5BHEX5D_187711(n, 0);
		nimln(48, "typesrenderer.nim");
		{
			nimln(48, "typesrenderer.nim");
			nimln(48, "typesrenderer.nim");
			if (!!(((*params).Kind == ((NU8) 76)))) goto LA36;
			nimln(48, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4780));
		}
		LA36: ;
		nimln(49, "typesrenderer.nim");
		{
			NI LOC40;
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			LOC40 = 0;
			LOC40 = len_187274(params);
			if (!!((0 < LOC40))) goto LA41;
			nimln(49, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4781));
		}
		LA41: ;
		nimln(50, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4782));
		i_338423 = 0;
		HEX3Atmp_339401 = 0;
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		LOC43 = 0;
		LOC43 = len_187274(params);
		HEX3Atmp_339401 = subInt(LOC43, 1);
		nimln(1457, "system.nim");
		res_339403 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC45;
			tnode186813* LOC46;
			NimStringDesc* LOC47;
			nimln(1458, "system.nim");
			if (!(res_339403 <= HEX3Atmp_339401)) goto LA44;
			nimln(1457, "system.nim");
			i_338423 = res_339403;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC45 = 0;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC46 = 0;
			LOC46 = HEX5BHEX5D_187711(params, i_338423);
			LOC47 = 0;
			LOC47 = rendertype_337208(LOC46);
			LOC45 = rawNewString(LOC47->Sup.len + 1);
appendString(LOC45, LOC47);
appendChar(LOC45, 44);
			result = resizeString(result, LOC45->Sup.len + 0);
appendString(result, LOC45);
			nimln(1460, "system.nim");
			res_339403 = addInt(res_339403, 1);
		} LA44: ;
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC54;
		NI TMP4784;
		NimStringDesc* typestr;
		tnode186813* LOC55;
		NI i_338624;
		NI HEX3Atmp_339405;
		NI res_339407;
		nimln(54, "typesrenderer.nim");
		{
			NI LOC51;
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			LOC51 = 0;
			LOC51 = len_187274(n);
			if (!!((3 <= LOC51))) goto LA52;
			nimln(54, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4783));
		}
		LA52: ;
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		LOC54 = 0;
		LOC54 = len_187274(n);
		TMP4784 = subInt(LOC54, 2);
		typepos = (NI64)(TMP4784);
		nimln(56, "typesrenderer.nim");
		nimln(56, "typesrenderer.nim");
		LOC55 = 0;
		LOC55 = HEX5BHEX5D_187711(n, typepos);
		typestr = rendertype_337208(LOC55);
		nimln(57, "typesrenderer.nim");
		result = copyString(typestr);
		i_338624 = 0;
		HEX3Atmp_339405 = 0;
		nimln(58, "typesrenderer.nim");
		nimln(58, "typesrenderer.nim");
		HEX3Atmp_339405 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_339407 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC62;
			nimln(1458, "system.nim");
			if (!(res_339407 <= HEX3Atmp_339405)) goto LA56;
			nimln(1457, "system.nim");
			i_338624 = res_339407;
			nimln(59, "typesrenderer.nim");
			{
				tnode186813* LOC59;
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				LOC59 = 0;
				LOC59 = HEX5BHEX5D_187711(n, i_338624);
				if (!!(((*LOC59).Kind == ((NU8) 2)))) goto LA60;
				nimln(59, "typesrenderer.nim");
				failedassertimpl_79821(((NimStringDesc*) &TMP4785));
			}
			LA60: ;
			nimln(60, "typesrenderer.nim");
			nimln(60, "typesrenderer.nim");
			LOC62 = 0;
			LOC62 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC62, 44);
appendString(LOC62, typestr);
			result = resizeString(result, LOC62->Sup.len + 0);
appendString(result, LOC62);
			nimln(1460, "system.nim");
			res_339407 = addInt(res_339407, 1);
		} LA56: ;
	}
	break;
	case ((NU8) 133):
	{
		NI i_339023;
		NI HEX3Atmp_339409;
		NI LOC69;
		NI res_339411;
		nimln(62, "typesrenderer.nim");
		{
			NI LOC66;
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			LOC66 = 0;
			LOC66 = len_187274(n);
			if (!!((0 < LOC66))) goto LA67;
			nimln(62, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4786));
		}
		LA67: ;
		nimln(63, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4787));
		i_339023 = 0;
		HEX3Atmp_339409 = 0;
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		LOC69 = 0;
		LOC69 = len_187274(n);
		HEX3Atmp_339409 = subInt(LOC69, 1);
		nimln(1457, "system.nim");
		res_339411 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC71;
			tnode186813* LOC72;
			NimStringDesc* LOC73;
			nimln(1458, "system.nim");
			if (!(res_339411 <= HEX3Atmp_339409)) goto LA70;
			nimln(1457, "system.nim");
			i_339023 = res_339411;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC71 = 0;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC72 = 0;
			LOC72 = HEX5BHEX5D_187711(n, i_339023);
			LOC73 = 0;
			LOC73 = rendertype_337208(LOC72);
			LOC71 = rawNewString(LOC73->Sup.len + 1);
appendString(LOC71, LOC73);
appendChar(LOC71, 44);
			result = resizeString(result, LOC71->Sup.len + 0);
appendString(result, LOC71);
			nimln(1460, "system.nim");
			res_339411 = addInt(res_339411, 1);
		} LA70: ;
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC80;
		tnode186813* LOC81;
		NimStringDesc* LOC82;
		NI i_339222;
		NI HEX3Atmp_339413;
		NI LOC83;
		NI res_339415;
		nimln(67, "typesrenderer.nim");
		{
			NI LOC77;
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			LOC77 = 0;
			LOC77 = len_187274(n);
			if (!!((2 <= LOC77))) goto LA78;
			nimln(67, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4788));
		}
		LA78: ;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC80 = 0;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC81 = 0;
		LOC81 = HEX5BHEX5D_187711(n, 0);
		LOC82 = 0;
		LOC82 = rendertype_337208(LOC81);
		LOC80 = rawNewString(LOC82->Sup.len + 1);
appendString(LOC80, LOC82);
appendChar(LOC80, 91);
		result = LOC80;
		i_339222 = 0;
		HEX3Atmp_339413 = 0;
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		LOC83 = 0;
		LOC83 = len_187274(n);
		HEX3Atmp_339413 = subInt(LOC83, 1);
		nimln(1457, "system.nim");
		res_339415 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC85;
			tnode186813* LOC86;
			NimStringDesc* LOC87;
			nimln(1458, "system.nim");
			if (!(res_339415 <= HEX3Atmp_339413)) goto LA84;
			nimln(1457, "system.nim");
			i_339222 = res_339415;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC85 = 0;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_187711(n, i_339222);
			LOC87 = 0;
			LOC87 = rendertype_337208(LOC86);
			LOC85 = rawNewString(LOC87->Sup.len + 1);
appendString(LOC85, LOC87);
appendChar(LOC85, 44);
			result = resizeString(result, LOC85->Sup.len + 0);
appendString(result, LOC85);
			nimln(1460, "system.nim");
			res_339415 = addInt(res_339415, 1);
		} LA84: ;
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	default:
	{
		nimln(71, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4766));
	}
	break;
	}
	nimln(72, "typesrenderer.nim");
	{
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA91;
		nimln(72, "typesrenderer.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP4775));
	}
	LA91: ;
	popFrame();
	return result;
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, renderparamtypes_339423)(TY10665** found, tnode186813* n) {
	nimfr("renderParamTypes", "typesrenderer.nim")
	nimln(81, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		NI i_339450;
		NI HEX3Atmp_339835;
		NI LOC2;
		NI res_339837;
		i_339450 = 0;
		HEX3Atmp_339835 = 0;
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_187274(n);
		HEX3Atmp_339835 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_339837 = 1;
		nimln(1458, "system.nim");
		while (1) {
			tnode186813* LOC4;
			nimln(1458, "system.nim");
			if (!(res_339837 <= HEX3Atmp_339835)) goto LA3;
			nimln(1457, "system.nim");
			i_339450 = res_339837;
			nimln(83, "typesrenderer.nim");
			nimln(83, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_187711(n, i_339450);
			renderparamtypes_339423(found, LOC4);
			nimln(1460, "system.nim");
			res_339837 = addInt(res_339837, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC6;
		NI TMP4789;
		NimStringDesc* typestr;
		tnode186813* LOC11;
		NI i_339647;
		NI HEX3Atmp_339839;
		NI res_339841;
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		LOC6 = 0;
		LOC6 = len_187274(n);
		TMP4789 = subInt(LOC6, 2);
		typepos = (NI64)(TMP4789);
		nimln(87, "typesrenderer.nim");
		{
			nimln(87, "typesrenderer.nim");
			nimln(87, "typesrenderer.nim");
			if (!!((0 < typepos))) goto LA9;
			nimln(87, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4790));
		}
		LA9: ;
		nimln(88, "typesrenderer.nim");
		nimln(88, "typesrenderer.nim");
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_187711(n, typepos);
		typestr = rendertype_337208(LOC11);
		nimln(89, "typesrenderer.nim");
		{
			NIM_BOOL LOC14;
			NI TMP4791;
			tnode186813* LOC16;
			ttype186847* typ;
			NI TMP4792;
			tnode186813* LOC19;
			nimln(89, "typesrenderer.nim");
			LOC14 = 0;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			LOC14 = (typestr->Sup.len < 1);
			if (!(LOC14)) goto LA15;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			TMP4791 = addInt(typepos, 1);
			LOC16 = 0;
			LOC16 = HEX5BHEX5D_187711(n, (NI64)(TMP4791));
			LOC14 = !(((*LOC16).Kind == ((NU8) 1)));
			LA15: ;
			if (!LOC14) goto LA17;
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			TMP4792 = addInt(typepos, 1);
			LOC19 = 0;
			LOC19 = HEX5BHEX5D_187711(n, (NI64)(TMP4792));
			typ = (*LOC19).Typ;
			nimln(92, "typesrenderer.nim");
			{
				nimln(92, "typesrenderer.nim");
				nimln(92, "typesrenderer.nim");
				if (!!(typ == 0)) goto LA22;
				nimln(92, "typesrenderer.nim");
				typestr = typetostring_222020(typ, ((NU8) 2));
			}
			LA22: ;
			nimln(93, "typesrenderer.nim");
			{
				nimln(93, "typesrenderer.nim");
				nimln(93, "typesrenderer.nim");
				if (!(typestr->Sup.len < 1)) goto LA26;
				nimln(93, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA26: ;
		}
		LA17: ;
		i_339647 = 0;
		HEX3Atmp_339839 = 0;
		nimln(94, "typesrenderer.nim");
		nimln(94, "typesrenderer.nim");
		HEX3Atmp_339839 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_339841 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC34;
			nimln(1458, "system.nim");
			if (!(res_339841 <= HEX3Atmp_339839)) goto LA28;
			nimln(1457, "system.nim");
			i_339647 = res_339841;
			nimln(95, "typesrenderer.nim");
			{
				tnode186813* LOC31;
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				LOC31 = 0;
				LOC31 = HEX5BHEX5D_187711(n, i_339647);
				if (!!(((*LOC31).Kind == ((NU8) 2)))) goto LA32;
				nimln(95, "typesrenderer.nim");
				failedassertimpl_79821(((NimStringDesc*) &TMP4785));
			}
			LA32: ;
			nimln(96, "typesrenderer.nim");
			(*found) = (TY10665*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
			LOC34 = 0;
			LOC34 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
			if (LOC34) nimGCunrefNoCycle(LOC34);
			nimln(1460, "system.nim");
			res_339841 = addInt(res_339841, 1);
		} LA28: ;
	}
	break;
	default:
	{
		NimStringDesc* LOC36;
		nimln(98, "typesrenderer.nim");
		nimln(98, "typesrenderer.nim");
		LOC36 = 0;
		nimln(98, "typesrenderer.nim");
		LOC36 = rawNewString(reprEnum((*n).Kind, (&NTI186023))->Sup.len + 31);
appendString(LOC36, ((NimStringDesc*) &TMP4793));
appendString(LOC36, reprEnum((*n).Kind, (&NTI186023)));
		internalerror_164591((*n).Info, LOC36);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, renderparamtypes_339847)(tnode186813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY10665* found;
	nimfr("renderParamTypes", "typesrenderer.nim")
	result = 0;
	nimln(107, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4766));
	nimln(108, "typesrenderer.nim");
	found = (TY10665*) newSeq((&NTI10665), 0);
	nimln(109, "typesrenderer.nim");
	renderparamtypes_339423(&found, n);
	nimln(110, "typesrenderer.nim");
	{
		nimln(110, "typesrenderer.nim");
		nimln(110, "typesrenderer.nim");
		if (!(0 < found->Sup.len)) goto LA3;
		nimln(111, "typesrenderer.nim");
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	popFrame();
	return result;
}
N_NOINLINE(void, typesrendererInit)(void) {
	nimfr("typesrenderer", "typesrenderer.nim")
	popFrame();
}

N_NOINLINE(void, typesrendererDatInit)(void) {
}

