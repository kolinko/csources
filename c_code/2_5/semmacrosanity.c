/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym187843 tsym187843;
typedef struct tnode187813 tnode187813;
typedef struct ttype187847 ttype187847;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident167019 tident167019;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tidobj167013 tidobj167013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
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
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tlib187831 tlib187831;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY187932 TY187932;
typedef struct tlistentry118017 tlistentry118017;
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode187813  {
ttype187847* Typ;
tlineinfo163527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym187843* Sym;
} S4;
struct {tident167019* Ident;
} S5;
struct {tnodeseq187807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY188025[20];
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
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  tloc187827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype187847* T;
trope145007* R;
trope145007* Heaproot;
NI A;
};
struct  ttype187847  {
  tidobj167013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq187845* Sons;
tnode187813* N;
tsym187843* Destructor;
tsym187843* Owner;
tsym187843* Sym;
NI64 Size;
NI Align;
tloc187827 Loc;
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
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
};
struct  tsym187843  {
  tidobj167013 Sup;
NU8 Kind;
union {
struct {ttypeseq187845* Typeinstcache;
tscope187837* Typscope;
} S1;
struct {TY187943* Procinstcache;
tscope187837* Scope;
} S2;
struct {TY187943* Usedgenerics;
tstrtable187817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype187847* Typ;
tident167019* Name;
tlineinfo163527 Info;
tsym187843* Owner;
NU32 Flags;
tnode187813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc187827 Loc;
tlib187831* Annex;
tnode187813* Constraint;
};
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
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
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
};
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
struct  tscope187837  {
NI Depthlevel;
tstrtable187817 Symbols;
tnodeseq187807* Usingsyms;
tscope187837* Parent;
};
struct  tinstantiation187833  {
tsym187843* Sym;
ttypeseq187845* Concretetypes;
TY187932* Usedby;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib187831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope145007* Name;
tnode187813* Path;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct ttypeseq187845 {
  TGenericSeq Sup;
  ttype187847* data[SEQ_DECL_SIZE];
};
struct TY187943 {
  TGenericSeq Sup;
  tinstantiation187833* data[SEQ_DECL_SIZE];
};
struct tsymseq187815 {
  TGenericSeq Sup;
  tsym187843* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym187843*, ithfield_416007)(tnode187813* n, NI field);
static N_INLINE(NI, sonslen_188191)(tnode187813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, internalerror_165591)(tlineinfo163527 info, NimStringDesc* errmsg);
static N_INLINE(tnode187813*, lastson_188199)(tnode187813* n);
N_NIMCALL(void, annotatetype_416194)(tnode187813* n, ttype187847* t);
N_NIMCALL(ttype187847*, skiptypes_191793)(ttype187847* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
static N_INLINE(NI, len_188274)(tnode187813* n);
N_NIMCALL(void, globalerror_165565)(tlineinfo163527 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NI, len_191569)(ttype187847* n);
N_NIMCALL(ttype187847*, elemtype_223559)(ttype187847* t);
static NIM_CONST TY188025 TMP5674 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5675, "sons", 4);
STRING_LITERAL(TMP5678, "ithField", 8);
STRING_LITERAL(TMP5683, "ithField(record case branch)", 28);
static NIM_CONST TY188025 TMP5684 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5685, "sym", 3);
STRING_LITERAL(TMP5686, "invalid field at index ", 23);
STRING_LITERAL(TMP5687, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP5688, "[] must have some form of array type", 36);
STRING_LITERAL(TMP5689, "{} must have the set type", 25);
STRING_LITERAL(TMP5690, "float literal must have some float type", 39);
STRING_LITERAL(TMP5691, "integer literal must have some int type", 39);
STRING_LITERAL(TMP5692, "string literal must be of some string type", 42);
STRING_LITERAL(TMP5693, "nil literal must be of some pointer type", 40);
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, sonslen_188191)(tnode187813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
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

static N_INLINE(tnode187813*, lastson_188199)(tnode187813* n) {
	tnode187813* result;
	NI LOC1;
	NI TMP5681;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1421, "ast.nim");
	if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
	nimln(1421, "ast.nim");
	nimln(1421, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_188191(n);
	TMP5681 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP5681)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI32)(TMP5681)];
	popFrame();
	return result;
}

N_NIMCALL(tsym187843*, ithfield_416007)(tnode187813* n, NI field) {
	tsym187843* result;
	nimfr("ithField", "semmacrosanity.nim")
	result = 0;
	nimln(16, "semmacrosanity.nim");
	result = NIM_NIL;
	nimln(17, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		NI i_416024;
		NI HEX3Atmp_416182;
		NI LOC2;
		NI TMP5676;
		NI res_416184;
		i_416024 = 0;
		HEX3Atmp_416182 = 0;
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		LOC2 = 0;
		LOC2 = sonslen_188191(n);
		TMP5676 = subInt(LOC2, 1);
		HEX3Atmp_416182 = (NI32)(TMP5676);
		nimln(1450, "system.nim");
		res_416184 = 0;
		nimln(1451, "system.nim");
		while (1) {
			NI TMP5677;
			nimln(1451, "system.nim");
			if (!(res_416184 <= HEX3Atmp_416182)) goto LA3;
			nimln(1450, "system.nim");
			i_416024 = res_416184;
			nimln(20, "semmacrosanity.nim");
			if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
			if ((NU)(i_416024) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			nimln(20, "semmacrosanity.nim");
			TMP5677 = subInt(field, i_416024);
			result = ithfield_416007((*n).kindU.S6.Sons->data[i_416024], (NI32)(TMP5677));
			nimln(21, "semmacrosanity.nim");
			{
				nimln(21, "semmacrosanity.nim");
				nimln(21, "semmacrosanity.nim");
				if (!!((result == NIM_NIL))) goto LA6;
				nimln(21, "semmacrosanity.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1453, "system.nim");
			res_416184 = addInt(res_416184, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 137):
	{
		NI TMP5679;
		NI i_416122;
		NI HEX3Atmp_416186;
		NI LOC17;
		NI TMP5680;
		NI res_416188;
		nimln(23, "semmacrosanity.nim");
		{
			nimln(23, "semmacrosanity.nim");
			nimln(23, "semmacrosanity.nim");
			if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(23, "semmacrosanity.nim");
			internalerror_165591((*n).Info, ((NimStringDesc*) &TMP5678));
		}
		LA11: ;
		nimln(24, "semmacrosanity.nim");
		if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		nimln(24, "semmacrosanity.nim");
		TMP5679 = subInt(field, 1);
		result = ithfield_416007((*n).kindU.S6.Sons->data[0], (NI32)(TMP5679));
		nimln(25, "semmacrosanity.nim");
		{
			nimln(25, "semmacrosanity.nim");
			nimln(25, "semmacrosanity.nim");
			if (!!((result == NIM_NIL))) goto LA15;
			nimln(25, "semmacrosanity.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_416122 = 0;
		HEX3Atmp_416186 = 0;
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		LOC17 = 0;
		LOC17 = sonslen_188191(n);
		TMP5680 = subInt(LOC17, 1);
		HEX3Atmp_416186 = (NI32)(TMP5680);
		nimln(1450, "system.nim");
		res_416188 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_416188 <= HEX3Atmp_416186)) goto LA18;
			nimln(1450, "system.nim");
			i_416122 = res_416188;
			nimln(27, "semmacrosanity.nim");
			if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
			if ((NU)(i_416122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_416122]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode187813* LOC20;
				NI TMP5682;
				nimln(29, "semmacrosanity.nim");
				nimln(29, "semmacrosanity.nim");
				if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
				if ((NU)(i_416122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_188199((*n).kindU.S6.Sons->data[i_416122]);
				nimln(29, "semmacrosanity.nim");
				TMP5682 = subInt(field, 1);
				result = ithfield_416007(LOC20, (NI32)(TMP5682));
				nimln(30, "semmacrosanity.nim");
				{
					nimln(30, "semmacrosanity.nim");
					nimln(30, "semmacrosanity.nim");
					if (!!((result == NIM_NIL))) goto LA23;
					nimln(30, "semmacrosanity.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(31, "semmacrosanity.nim");
				internalerror_165591((*n).Info, ((NimStringDesc*) &TMP5683));
			}
			break;
			}
			nimln(1453, "system.nim");
			res_416188 = addInt(res_416188, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(33, "semmacrosanity.nim");
		{
			nimln(33, "semmacrosanity.nim");
			if (!(field == 0)) goto LA29;
			nimln(33, "semmacrosanity.nim");
			if (!(((TMP5684[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5685));
			result = (*n).kindU.S4.Sym;
		}
		LA29: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
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

static N_INLINE(NI, len_188274)(tnode187813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_416194)(tnode187813* n, ttype187847* t) {
	ttype187847* x;
	nimfr("annotateType", "semmacrosanity.nim")
	nimln(37, "semmacrosanity.nim");
	x = skiptypes_191793(t, IL64(211106232576256));
	nimln(40, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		nimln(42, "semmacrosanity.nim");
		{
			NI i_416229;
			NI HEX3Atmp_416404;
			NI LOC6;
			NI res_416406;
			nimln(42, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			nimln(43, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_416229 = 0;
			HEX3Atmp_416404 = 0;
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			LOC6 = 0;
			LOC6 = len_188274(n);
			HEX3Atmp_416404 = subInt(LOC6, 1);
			nimln(1457, "system.nim");
			res_416406 = 0;
			nimln(1458, "system.nim");
			while (1) {
				tsym187843* field;
				nimln(1458, "system.nim");
				if (!(res_416406 <= HEX3Atmp_416404)) goto LA7;
				nimln(1457, "system.nim");
				i_416229 = res_416406;
				nimln(45, "semmacrosanity.nim");
				field = ithfield_416007((*x).N, i_416229);
				nimln(46, "semmacrosanity.nim");
				{
					NimStringDesc* LOC12;
					NimStringDesc* LOC13;
					nimln(46, "semmacrosanity.nim");
					if (!field == 0) goto LA10;
					nimln(46, "semmacrosanity.nim");
					nimln(46, "semmacrosanity.nim");
					LOC12 = 0;
					nimln(46, "semmacrosanity.nim");
					LOC13 = 0;
					LOC13 = nimIntToStr(i_416229);
					LOC12 = rawNewString(LOC13->Sup.len + 23);
appendString(LOC12, ((NimStringDesc*) &TMP5686));
appendString(LOC12, LOC13);
					globalerror_165565((*n).Info, LOC12);
				}
				goto LA8;
				LA10: ;
				{
					nimln(47, "semmacrosanity.nim");
					if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
					if ((NU)(i_416229) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					annotatetype_416194((*n).kindU.S6.Sons->data[i_416229], (*field).Typ);
				}
				LA8: ;
				nimln(1460, "system.nim");
				res_416406 = addInt(res_416406, 1);
			} LA7: ;
		}
		goto LA2;
		LA4: ;
		{
			NI i_416286;
			NI HEX3Atmp_416408;
			NI LOC18;
			NI res_416410;
			nimln(48, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 18))) goto LA16;
			nimln(49, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_416286 = 0;
			HEX3Atmp_416408 = 0;
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			LOC18 = 0;
			LOC18 = len_188274(n);
			HEX3Atmp_416408 = subInt(LOC18, 1);
			nimln(1457, "system.nim");
			res_416410 = 0;
			nimln(1458, "system.nim");
			while (1) {
				nimln(1458, "system.nim");
				if (!(res_416410 <= HEX3Atmp_416408)) goto LA19;
				nimln(1457, "system.nim");
				i_416286 = res_416410;
				nimln(51, "semmacrosanity.nim");
				{
					NI LOC22;
					NimStringDesc* LOC25;
					NimStringDesc* LOC26;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC22 = 0;
					LOC22 = len_191569(x);
					if (!(LOC22 <= i_416286)) goto LA23;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC25 = 0;
					nimln(51, "semmacrosanity.nim");
					LOC26 = 0;
					LOC26 = nimIntToStr(i_416286);
					LOC25 = rawNewString(LOC26->Sup.len + 23);
appendString(LOC25, ((NimStringDesc*) &TMP5686));
appendString(LOC25, LOC26);
					globalerror_165565((*n).Info, LOC25);
				}
				goto LA20;
				LA23: ;
				{
					nimln(52, "semmacrosanity.nim");
					if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
					if ((NU)(i_416286) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if ((NU)(i_416286) >= (NU)((*x).Sons->Sup.len)) raiseIndexError();
					annotatetype_416194((*n).kindU.S6.Sons->data[i_416286], (*x).Sons->data[i_416286]);
				}
				LA20: ;
				nimln(1460, "system.nim");
				res_416410 = addInt(res_416410, 1);
			} LA19: ;
		}
		goto LA2;
		LA16: ;
		{
			NIM_BOOL LOC29;
			nimln(53, "semmacrosanity.nim");
			LOC29 = 0;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Kind == ((NU8) 25));
			if (!(LOC29)) goto LA30;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Callconv == ((NU8) 8));
			LA30: ;
			if (!LOC29) goto LA31;
			nimln(54, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA2;
		LA31: ;
		{
			nimln(56, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5687));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		nimln(58, "semmacrosanity.nim");
		{
			tnode187813* m_416333;
			NI i_416413;
			NI HEX3Atmp_416415;
			NI LOC39;
			NI res_416417;
			nimln(58, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 4) || (*x).Kind == ((NU8) 16) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 27))) goto LA37;
			nimln(59, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_416333 = 0;
			i_416413 = 0;
			HEX3Atmp_416415 = 0;
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			LOC39 = 0;
			LOC39 = len_188274(n);
			HEX3Atmp_416415 = subInt(LOC39, 1);
			nimln(1457, "system.nim");
			res_416417 = 0;
			nimln(1458, "system.nim");
			while (1) {
				ttype187847* LOC41;
				nimln(1458, "system.nim");
				if (!(res_416417 <= HEX3Atmp_416415)) goto LA40;
				nimln(1457, "system.nim");
				i_416413 = res_416417;
				nimln(1522, "ast.nim");
				if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
				if ((NU)(i_416413) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_416333 = (*n).kindU.S6.Sons->data[i_416413];
				nimln(60, "semmacrosanity.nim");
				nimln(60, "semmacrosanity.nim");
				LOC41 = 0;
				LOC41 = elemtype_223559(x);
				annotatetype_416194(m_416333, LOC41);
				nimln(1460, "system.nim");
				res_416417 = addInt(res_416417, 1);
			} LA40: ;
		}
		goto LA35;
		LA37: ;
		{
			nimln(62, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5688));
		}
		LA35: ;
	}
	break;
	case ((NU8) 39):
	{
		nimln(64, "semmacrosanity.nim");
		{
			tnode187813* m_416348;
			NI i_416419;
			NI HEX3Atmp_416421;
			NI LOC48;
			NI res_416423;
			nimln(64, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 19))) goto LA46;
			nimln(65, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_416348 = 0;
			i_416419 = 0;
			HEX3Atmp_416421 = 0;
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			LOC48 = 0;
			LOC48 = len_188274(n);
			HEX3Atmp_416421 = subInt(LOC48, 1);
			nimln(1457, "system.nim");
			res_416423 = 0;
			nimln(1458, "system.nim");
			while (1) {
				ttype187847* LOC50;
				nimln(1458, "system.nim");
				if (!(res_416423 <= HEX3Atmp_416421)) goto LA49;
				nimln(1457, "system.nim");
				i_416419 = res_416423;
				nimln(1522, "ast.nim");
				if (((TMP5674[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5675));
				if ((NU)(i_416419) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_416348 = (*n).kindU.S6.Sons->data[i_416419];
				nimln(66, "semmacrosanity.nim");
				nimln(66, "semmacrosanity.nim");
				LOC50 = 0;
				LOC50 = elemtype_223559(x);
				annotatetype_416194(m_416348, LOC50);
				nimln(1460, "system.nim");
				res_416423 = addInt(res_416423, 1);
			} LA49: ;
		}
		goto LA44;
		LA46: ;
		{
			nimln(68, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5689));
		}
		LA44: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		nimln(70, "semmacrosanity.nim");
		{
			nimln(70, "semmacrosanity.nim");
			if (!((*x).Kind >= ((NU8) 36) && (*x).Kind <= ((NU8) 39))) goto LA55;
			nimln(71, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA53;
		LA55: ;
		{
			nimln(73, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5690));
		}
		LA53: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(75, "semmacrosanity.nim");
		{
			nimln(75, "semmacrosanity.nim");
			if (!((*x).Kind >= ((NU8) 31) && (*x).Kind <= ((NU8) 44) || (*x).Kind == ((NU8) 1) || (*x).Kind == ((NU8) 2) || (*x).Kind == ((NU8) 14))) goto LA61;
			nimln(76, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA59;
		LA61: ;
		{
			nimln(78, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5691));
		}
		LA59: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		nimln(80, "semmacrosanity.nim");
		{
			nimln(80, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 29))) goto LA67;
			nimln(81, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA65;
		LA67: ;
		{
			nimln(83, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5692));
		}
		LA65: ;
	}
	break;
	case ((NU8) 23):
	{
		nimln(85, "semmacrosanity.nim");
		{
			nimln(85, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 26) || (*x).Kind == ((NU8) 29) || (*x).Kind == ((NU8) 22) || (*x).Kind == ((NU8) 21) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 25) || (*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 50))) goto LA73;
			nimln(86, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA71;
		LA73: ;
		{
			nimln(88, "semmacrosanity.nim");
			globalerror_165565((*n).Info, ((NimStringDesc*) &TMP5693));
		}
		LA71: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
}
N_NOINLINE(void, semmacrosanityInit)(void) {
	nimfr("semmacrosanity", "semmacrosanity.nim")
	popFrame();
}

N_NOINLINE(void, semmacrosanityDatInit)(void) {
}

