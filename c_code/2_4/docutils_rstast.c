/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trstnode296009 trstnode296009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY296084 TY296084;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41288 tcell41288;
typedef struct tcellseq41304 tcellseq41304;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41300 tcellset41300;
typedef struct tpagedesc41296 tpagedesc41296;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct trendercontext296211 trendercontext296211;
typedef struct TY291134 TY291134;
typedef struct tjsonnode291114 tjsonnode291114;
typedef struct TY291130 TY291130;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY291129 TY291129;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode296009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY296084* Sons;
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
struct  tcell41288  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41304  {
NI Len;
NI Cap;
tcell41288** D;
};
struct  tcellset41300  {
NI Counter;
NI Max;
tpagedesc41296* Head;
tpagedesc41296** Data;
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
tcellseq41304 Zct;
tcellseq41304 Decstack;
tcellset41300 Cycleroots;
tcellseq41304 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
typedef NIM_CHAR TY296258[9];
struct  trendercontext296211  {
NI Indent;
NI Verbatim;
};
struct TY291130 {
NimStringDesc* Field0;
tjsonnode291114* Field1;
};
typedef TY291130 TY296586[2];
typedef NI TY22818[16];
struct  tpagedesc41296  {
tpagedesc41296* Next;
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
struct  tjsonnode291114  {
NU8 Kind;
union {
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY291129* Fields;
} S6;
struct {TY291134* Elems;
} S7;
} kindU;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct TY296084 {
  TGenericSeq Sup;
  trstnode296009* data[SEQ_DECL_SIZE];
};
struct TY291134 {
  TGenericSeq Sup;
  tjsonnode291114* data[SEQ_DECL_SIZE];
};
struct TY291129 {
  TGenericSeq Sup;
  TY291130 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_296080)(trstnode296009* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(trstnode296009*, newrstnode_296097)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3776)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(trstnode296009*, newrstnode_296139)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(trstnode296009*, lastson_296146)(trstnode296009* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_296163)(trstnode296009* father, trstnode296009* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_296187)(trstnode296009* father, trstnode296009* son);
N_NIMCALL(void, renderrstsons_296223)(trendercontext296211* d, trstnode296009* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_296215)(trendercontext296211* d, trstnode296009* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76080, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_296557)(trstnode296009* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_296591)(TY296084* x_296597, TY296084* y_296602);
static N_INLINE(void*, seqtoptr_296607)(TY296084* x_296613);
N_NIMCALL(TY291134*, newseq_296745)(NI len_296749);
N_NIMCALL(tjsonnode291114*, renderrsttojsonnode_296567)(trstnode296009* node);
N_NIMCALL(tjsonnode291114*, HEX25_291619)(TY291130* keyvals, NI keyvalsLen0);
N_NIMCALL(tjsonnode291114*, HEX25_291475)(NimStringDesc* s);
N_NIMCALL(tjsonnode291114*, HEX25_291511)(NI64 n);
N_NIMCALL(void, add_292844)(tjsonnode291114* obj, NimStringDesc* key, tjsonnode291114* val);
N_NIMCALL(tjsonnode291114*, HEX25_291745)(tjsonnode291114** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_296847)(trstnode296009* node);
N_NIMCALL(NimStringDesc*, pretty_294151)(tjsonnode291114* node, NI indent);
NIM_CONST TY296258 lvltochar_296257 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP3779, "\012", 1);
STRING_LITERAL(TMP3781, "", 0);
STRING_LITERAL(TMP3783, "\012\012", 2);
STRING_LITERAL(TMP3785, "* ", 2);
STRING_LITERAL(TMP3786, "(#) ", 4);
STRING_LITERAL(TMP3787, "  ", 2);
STRING_LITERAL(TMP3791, "| ", 2);
STRING_LITERAL(TMP3792, "`", 1);
STRING_LITERAL(TMP3793, "`_", 2);
STRING_LITERAL(TMP3794, " <", 2);
STRING_LITERAL(TMP3795, ">`_", 3);
STRING_LITERAL(TMP3796, "`:", 2);
STRING_LITERAL(TMP3797, "`:sub:", 6);
STRING_LITERAL(TMP3798, "`:sup:", 6);
STRING_LITERAL(TMP3799, "`:idx:", 6);
STRING_LITERAL(TMP3800, "*", 1);
STRING_LITERAL(TMP3801, "**", 2);
STRING_LITERAL(TMP3802, "***", 3);
STRING_LITERAL(TMP3803, "``", 2);
STRING_LITERAL(TMP3804, "\\", 1);
STRING_LITERAL(TMP3805, "\\\\", 2);
STRING_LITERAL(TMP3806, ".. index::\012", 11);
STRING_LITERAL(TMP3807, ".. contents::", 13);
STRING_LITERAL(TMP3808, "Error: cannot render: ", 22);
STRING_LITERAL(TMP3810, "kind", 4);
STRING_LITERAL(TMP3811, "level", 5);
STRING_LITERAL(TMP3812, "text", 4);
STRING_LITERAL(TMP3813, "sons", 4);
extern TFrame* frameptr_13038;
TNimType NTI296009; /* TRstNode */
TNimType NTI296003; /* TRstNodeKind */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
extern TNimType NTI296084; /* seq[PRstNode] */
TNimType NTI296005; /* PRstNode */
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NI, len_296080)(trstnode296009* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	nimln(75, "rstast.nim");
	result = (*n).Sons->Sup.len;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP3776)(void* p, NI op) {
	trstnode296009* a;
	a = (trstnode296009*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell41288*, usrtocell_44643)(void* usr) {
	tcell41288* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41288*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41288))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41288* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41288* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(trstnode296009*, newrstnode_296097)(NU8 kind) {
	trstnode296009* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (trstnode296009*) newObj((&NTI296005), sizeof(trstnode296009));
	nimln(79, "rstast.nim");
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (TY296084*) newSeqRC1((&NTI296084), 0);
	nimln(80, "rstast.nim");
	(*result).Kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(trstnode296009*, newrstnode_296139)(NU8 kind, NimStringDesc* s) {
	trstnode296009* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_296097(kind);
	nimln(84, "rstast.nim");
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
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

N_NIMCALL(trstnode296009*, lastson_296146)(trstnode296009* n) {
	trstnode296009* result;
	NI TMP3777;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	TMP3777 = subInt((*n).Sons->Sup.len, 1);
	if ((NU)((NI32)(TMP3777)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP3777)];
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41288* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44643(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41288* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44643((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, add_296163)(trstnode296009* father, trstnode296009* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).Sons = (TY296084*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode296009*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_296187)(trstnode296009* father, trstnode296009* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		nimln(93, "rstast.nim");
		nimln(93, "rstast.nim");
		if (!!((son == NIM_NIL))) goto LA3;
		nimln(93, "rstast.nim");
		add_296163(father, son);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, renderrstsons_296223)(trendercontext296211* d, trstnode296009* n, NimStringDesc** result) {
	NI i_296242;
	NI HEX3Atmp_296243;
	NI LOC1;
	NI TMP3778;
	NI res_296245;
	nimfr("renderRstSons", "rstast.nim")
	i_296242 = 0;
	HEX3Atmp_296243 = 0;
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	LOC1 = 0;
	LOC1 = len_296080(n);
	TMP3778 = subInt(LOC1, 1);
	HEX3Atmp_296243 = (NI32)(TMP3778);
	nimln(1450, "system.nim");
	res_296245 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_296245 <= HEX3Atmp_296243)) goto LA2;
		nimln(1450, "system.nim");
		i_296242 = res_296245;
		nimln(105, "rstast.nim");
		if ((NU)(i_296242) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[i_296242], result);
		nimln(1453, "system.nim");
		res_296245 = addInt(res_296245, 1);
	} LA2: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, renderrsttorst_296215)(trendercontext296211* d, trstnode296009* n, NimStringDesc** result) {
	NimStringDesc* ind;
	nimfr("renderRstToRst", "rstast.nim")
	nimln(112, "rstast.nim");
	{
		nimln(112, "rstast.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(112, "rstast.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(113, "rstast.nim");
	ind = nsuRepeatChar((*d).Indent, 32);
	nimln(114, "rstast.nim");
	switch ((*n).Kind) {
	case ((NU8) 0):
	{
		nimln(116, "rstast.nim");
		renderrstsons_296223(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP3780;
		NimStringDesc* LOC7;
		nimln(118, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(121, "rstast.nim");
		nimln(121, "rstast.nim");
		oldlen = (*result)->Sup.len;
		nimln(122, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		TMP3780 = subInt((*result)->Sup.len, oldlen);
		headlinelen = (NI32)(TMP3780);
		nimln(125, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(127, "rstast.nim");
		nimln(127, "rstast.nim");
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(headlinelen, lvltochar_296257[((*n).Level)- 0]);
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP3782;
		nimln(129, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(132, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP3781));
		nimln(133, "rstast.nim");
		renderrstsons_296223(d, n, &headline);
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		TMP3782 = subInt(headline->Sup.len, (*d).Indent);
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		lvl = nsuRepeatChar((NI32)(TMP3782), lvltochar_296257[((*n).Level)- 0]);
		nimln(136, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(140, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(142, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
	}
	break;
	case ((NU8) 3):
	{
		NI TMP3784;
		NimStringDesc* LOC10;
		nimln(144, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		TMP3784 = subInt(78, (*d).Indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar((NI32)(TMP3784), 45);
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(147, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
	}
	break;
	case ((NU8) 4):
	{
		nimln(149, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(151, "rstast.nim");
		renderrstsons_296223(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NimStringDesc* tmp;
		nimln(153, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(154, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3781));
		nimln(155, "rstast.nim");
		renderrstsons_296223(d, n, &tmp);
		nimln(156, "rstast.nim");
		{
			nimln(156, "rstast.nim");
			nimln(156, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA15;
			nimln(157, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA15: ;
		nimln(161, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 8):
	{
		NimStringDesc* tmp;
		nimln(163, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 4);
		nimln(164, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3781));
		nimln(165, "rstast.nim");
		renderrstsons_296223(d, n, &tmp);
		nimln(166, "rstast.nim");
		{
			nimln(166, "rstast.nim");
			nimln(166, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA20;
			nimln(167, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3786));
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA20: ;
		nimln(171, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 4);
	}
	break;
	case ((NU8) 17):
	case ((NU8) 13):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 26):
	case ((NU8) 15):
	case ((NU8) 16):
	case ((NU8) 37):
	case ((NU8) 5):
	case ((NU8) 7):
	{
		nimln(174, "rstast.nim");
		renderrstsons_296223(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(176, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(178, "rstast.nim");
		renderrstsons_296223(d, n, result);
	}
	break;
	case ((NU8) 12):
	{
		nimln(180, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(181, "rstast.nim");
		{
			nimln(181, "rstast.nim");
			nimln(181, "rstast.nim");
			if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).Sons->data[0]).Kind == ((NU8) 5)))) goto LA27;
			nimln(182, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3787));
		}
		LA27: ;
		nimln(185, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(186, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI l;
		NI TMP3788;
		NI TMP3789;
		NI TMP3790;
		NimStringDesc* LOC30;
		nimln(188, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3781));
		nimln(189, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[0], &tmp);
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		TMP3788 = addInt(tmp->Sup.len, 3);
		l = (((NI32)(TMP3788) >= 30) ? (NI32)(TMP3788) : 30);
		nimln(192, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, l);
		nimln(194, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(196, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(197, "rstast.nim");
		(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		nimln(198, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		TMP3789 = subInt(l, tmp->Sup.len);
		TMP3790 = subInt((NI32)(TMP3789), 2);
		LOC30 = 0;
		LOC30 = nsuRepeatChar((NI32)(TMP3790), 32);
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(200, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[1], result);
		nimln(202, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, l);
	}
	break;
	case ((NU8) 27):
	{
		nimln(204, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3791));
		nimln(207, "rstast.nim");
		renderrstsons_296223(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		nimln(209, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(210, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(211, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 39):
	{
		nimln(213, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3792));
		nimln(214, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(215, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3793));
	}
	break;
	case ((NU8) 38):
	{
		nimln(217, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(218, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[0], result);
		nimln(219, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3794));
		nimln(220, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[1], result);
		nimln(221, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3795));
	}
	break;
	case ((NU8) 53):
	{
		nimln(223, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(224, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[0], result);
		nimln(225, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3796));
		nimln(226, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_296215(d, (*n).Sons->data[1], result);
		nimln(227, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(229, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(230, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(231, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3797));
	}
	break;
	case ((NU8) 55):
	{
		nimln(233, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(234, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(235, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3798));
	}
	break;
	case ((NU8) 56):
	{
		nimln(237, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(238, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(239, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3799));
	}
	break;
	case ((NU8) 57):
	{
		nimln(241, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3800));
		nimln(242, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(243, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3800));
	}
	break;
	case ((NU8) 58):
	{
		nimln(245, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3801));
		nimln(246, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(247, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3801));
	}
	break;
	case ((NU8) 59):
	{
		nimln(249, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3802));
		nimln(250, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(251, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3802));
	}
	break;
	case ((NU8) 60):
	{
		nimln(253, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(254, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(255, "rstast.nim");
		(*result) = addChar((*result), 96);
	}
	break;
	case ((NU8) 61):
	{
		nimln(257, "rstast.nim");
		(*d).Verbatim = addInt((*d).Verbatim, 1);
		nimln(258, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3803));
		nimln(259, "rstast.nim");
		renderrstsons_296223(d, n, result);
		nimln(260, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3803));
		nimln(261, "rstast.nim");
		(*d).Verbatim = subInt((*d).Verbatim, 1);
	}
	break;
	case ((NU8) 63):
	{
		nimln(263, "rstast.nim");
		(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
	}
	break;
	case ((NU8) 64):
	{
		nimln(265, "rstast.nim");
		{
			NIM_BOOL LOC48;
			nimln(265, "rstast.nim");
			LOC48 = 0;
			nimln(265, "rstast.nim");
			LOC48 = ((*d).Verbatim == 0);
			if (!(LOC48)) goto LA49;
			nimln(265, "rstast.nim");
			LOC48 = eqStrings((*n).Text, ((NimStringDesc*) &TMP3804));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(266, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3805));
		}
		goto LA46;
		LA50: ;
		{
			nimln(268, "rstast.nim");
			(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
		}
		LA46: ;
	}
	break;
	case ((NU8) 51):
	{
		nimln(270, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP3806));
		nimln(274, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 3);
		nimln(275, "rstast.nim");
		{
			nimln(275, "rstast.nim");
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*n).Sons->data[2] == NIM_NIL))) goto LA56;
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			renderrstsons_296223(d, (*n).Sons->data[2], result);
		}
		LA56: ;
		nimln(276, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 3);
	}
	break;
	case ((NU8) 44):
	{
		nimln(278, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP3807));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(282, "rstast.nim");
		nimln(282, "rstast.nim");
		LOC60 = 0;
		nimln(282, "rstast.nim");
		LOC60 = rawNewString(reprEnum((*n).Kind, (&NTI296003))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP3808));
appendString(LOC60, reprEnum((*n).Kind, (&NTI296003)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_296557)(trstnode296009* n, NimStringDesc** result) {
	trendercontext296211 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)&d, 0, sizeof(d));
	nimln(287, "rstast.nim");
	renderrsttorst_296215(&d, n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_296607)(TY296084* x_296613) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1658, "system.nim");
	result = ((void*) (x_296613));
	popFrame();
	return result;
}

N_NIMCALL(tjsonnode291114*, renderrsttojsonnode_296567)(trstnode296009* node) {
	tjsonnode291114* result;
	TY296586 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(290, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP3810));
	nimln(292, "rstast.nim");
	nimln(292, "rstast.nim");
	LOC1[0].Field1 = HEX25_291475(reprEnum((*node).Kind, (&NTI296003)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP3811));
	nimln(293, "rstast.nim");
	LOC1[1].Field1 = HEX25_291511(((NI64) ((*node).Level)));
	result = HEX25_291619(LOC1, 2);
	nimln(295, "rstast.nim");
	{
		tjsonnode291114* LOC6;
		nimln(295, "rstast.nim");
		nimln(295, "rstast.nim");
		if (!!(((*node).Text == NIM_NIL))) goto LA4;
		nimln(296, "rstast.nim");
		nimln(296, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_291475((*node).Text);
		add_292844(result, ((NimStringDesc*) &TMP3812), LOC6);
	}
	LA4: ;
	nimln(297, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY291134* accm;
		NI i_296838;
		trstnode296009* son_296839;
		TY296084* HEX3Atmp_296841;
		NI i_296843;
		tjsonnode291114* LOC15;
		nimln(297, "rstast.nim");
		LOC9 = 0;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_296591((*node).Sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC9 = (0 < (*node).Sons->Sup.len);
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(298, "rstast.nim");
		nimln(298, "rstast.nim");
		accm = newseq_296745((*node).Sons->Sup.len);
		i_296838 = 0;
		son_296839 = 0;
		HEX3Atmp_296841 = 0;
		nimln(299, "rstast.nim");
		HEX3Atmp_296841 = (*node).Sons;
		nimln(1585, "system.nim");
		i_296843 = 0;
		nimln(1586, "system.nim");
		while (1) {
			nimln(1586, "system.nim");
			nimln(1586, "system.nim");
			if (!(i_296843 < HEX3Atmp_296841->Sup.len)) goto LA14;
			nimln(1585, "system.nim");
			i_296838 = i_296843;
			nimln(1587, "system.nim");
			if ((NU)(i_296843) >= (NU)(HEX3Atmp_296841->Sup.len)) raiseIndexError();
			son_296839 = HEX3Atmp_296841->data[i_296843];
			nimln(300, "rstast.nim");
			if ((NU)(i_296838) >= (NU)(accm->Sup.len)) raiseIndexError();
			asgnRefNoCycle((void**) &accm->data[i_296838], renderrsttojsonnode_296567(son_296839));
			nimln(1588, "system.nim");
			i_296843 = addInt(i_296843, 1);
		} LA14: ;
		nimln(301, "rstast.nim");
		nimln(301, "rstast.nim");
		LOC15 = 0;
		LOC15 = HEX25_291745(accm->data, accm->Sup.len);
		add_292844(result, ((NimStringDesc*) &TMP3813), LOC15);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_296847)(trstnode296009* node) {
	NimStringDesc* result;
	tjsonnode291114* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(304, "rstast.nim");
	nimln(312, "rstast.nim");
	nimln(312, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_296567(node);
	result = pretty_294151(LOC1, 2);
	popFrame();
	return result;
}
N_NOINLINE(void, docutilsrstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

N_NOINLINE(void, docutilsrstastDatInit)(void) {
static TNimNode* TMP3771[4];
static TNimNode* TMP3772[65];
NI TMP3774;
static char* NIM_CONST TMP3773[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP3612[71];
NTI296009.size = sizeof(trstnode296009);
NTI296009.kind = 18;
NTI296009.base = 0;
NTI296009.flags = 2;
TMP3771[0] = &TMP3612[1];
NTI296003.size = sizeof(NU8);
NTI296003.kind = 14;
NTI296003.base = 0;
NTI296003.flags = 3;
for (TMP3774 = 0; TMP3774 < 65; TMP3774++) {
TMP3612[TMP3774+2].kind = 1;
TMP3612[TMP3774+2].offset = TMP3774;
TMP3612[TMP3774+2].name = TMP3773[TMP3774];
TMP3772[TMP3774] = &TMP3612[TMP3774+2];
}
TMP3612[67].len = 65; TMP3612[67].kind = 2; TMP3612[67].sons = &TMP3772[0];
NTI296003.node = &TMP3612[67];
TMP3612[1].kind = 1;
TMP3612[1].offset = offsetof(trstnode296009, Kind);
TMP3612[1].typ = (&NTI296003);
TMP3612[1].name = "kind";
TMP3771[1] = &TMP3612[68];
TMP3612[68].kind = 1;
TMP3612[68].offset = offsetof(trstnode296009, Text);
TMP3612[68].typ = (&NTI143);
TMP3612[68].name = "text";
TMP3771[2] = &TMP3612[69];
TMP3612[69].kind = 1;
TMP3612[69].offset = offsetof(trstnode296009, Level);
TMP3612[69].typ = (&NTI106);
TMP3612[69].name = "level";
TMP3771[3] = &TMP3612[70];
TMP3612[70].kind = 1;
TMP3612[70].offset = offsetof(trstnode296009, Sons);
TMP3612[70].typ = (&NTI296084);
TMP3612[70].name = "sons";
TMP3612[0].len = 4; TMP3612[0].kind = 2; TMP3612[0].sons = &TMP3771[0];
NTI296009.node = &TMP3612[0];
NTI296005.size = sizeof(trstnode296009*);
NTI296005.kind = 22;
NTI296005.base = (&NTI296009);
NTI296005.flags = 2;
NTI296005.marker = TMP3776;
}

