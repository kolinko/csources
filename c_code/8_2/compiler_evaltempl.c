/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode170659 tnode170659;
typedef struct templctx250007 templctx250007;
typedef struct ttype170693 ttype170693;
typedef struct tlineinfo135509 tlineinfo135509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym170689 tsym170689;
typedef struct tident139017 tident139017;
typedef struct tnodeseq170653 tnodeseq170653;
typedef struct tidobj139011 tidobj139011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq170691 ttypeseq170691;
typedef struct tscope170683 tscope170683;
typedef struct TY170786 TY170786;
typedef struct tinstantiation170679 tinstantiation170679;
typedef struct tstrtable170663 tstrtable170663;
typedef struct tsymseq170661 tsymseq170661;
typedef struct tloc170673 tloc170673;
typedef struct trope120007 trope120007;
typedef struct tlib170677 tlib170677;
typedef struct tidtable170705 tidtable170705;
typedef struct tidpairseq170703 tidpairseq170703;
typedef struct tidpair170701 tidpair170701;
typedef struct TY75888 TY75888;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct TY170775 TY170775;
typedef struct tlistentry108014 tlistentry108014;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct tlineinfo135509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode170659 {
ttype170693* Typ;
tlineinfo135509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym170689* Sym;
} S4;
struct {tident139017* Ident;
} S5;
struct {tnodeseq170653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY170865[20];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj139011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable170663 {
NI Counter;
tsymseq170661* Data;
};
struct tloc170673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype170693* T;
trope120007* R;
trope120007* Heaproot;
NI A;
};
struct tsym170689 {
  tidobj139011 Sup;
NU8 Kind;
union {
struct {ttypeseq170691* Typeinstcache;
tscope170683* Typscope;
} S1;
struct {TY170786* Procinstcache;
tscope170683* Scope;
} S2;
struct {TY170786* Usedgenerics;
tstrtable170663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype170693* Typ;
tident139017* Name;
tlineinfo135509 Info;
tsym170689* Owner;
NU32 Flags;
tnode170659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc170673 Loc;
tlib170677* Annex;
tnode170659* Constraint;
};
struct tidpair170701 {
tidobj139011* Key;
TNimObject* Val;
};
struct tidtable170705 {
NI Counter;
tidpairseq170703* Data;
};
struct templctx250007 {
tsym170689* Owner;
tsym170689* Gensymowner;
tidtable170705 Mapping;
};
struct TY75888 {
NimStringDesc* Field0;
NI Field1;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
struct ttype170693 {
  tidobj139011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq170691* Sons;
tnode170659* N;
tsym170689* Destructor;
tsym170689* Owner;
tsym170689* Sym;
NI64 Size;
NI Align;
tloc170673 Loc;
};
struct tident139017 {
  tidobj139011 Sup;
NimStringDesc* S;
tident139017* Next;
NI H;
};
struct tscope170683 {
NI Depthlevel;
tstrtable170663 Symbols;
tnodeseq170653* Usingsyms;
tscope170683* Parent;
};
struct tinstantiation170679 {
tsym170689* Sym;
ttypeseq170691* Concretetypes;
TY170775* Usedby;
};
struct trope120007 {
  TNimObject Sup;
trope120007* Left;
trope120007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry108014 {
  TNimObject Sup;
tlistentry108014* Prev;
tlistentry108014* Next;
};
struct tlib170677 {
  tlistentry108014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope120007* Name;
tnode170659* Path;
};
typedef NI TY21418[8];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct tnodeseq170653 {
  TGenericSeq Sup;
  tnode170659* data[SEQ_DECL_SIZE];
};
struct ttypeseq170691 {
  TGenericSeq Sup;
  ttype170693* data[SEQ_DECL_SIZE];
};
struct TY170786 {
  TGenericSeq Sup;
  tinstantiation170679* data[SEQ_DECL_SIZE];
};
struct tsymseq170661 {
  TGenericSeq Sup;
  tsym170689* data[SEQ_DECL_SIZE];
};
struct tidpairseq170703 {
  TGenericSeq Sup;
  tidpair170701 data[SEQ_DECL_SIZE];
};
struct TY170775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, evaltemplateaux_250012)(tnode170659* templ, tnode170659* actual, templctx250007* c, tnode170659* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_171102)(tnode170659* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_171201)(tnode170659* father, tnode170659* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode170659*, copytree_171078)(tnode170659* src);
N_NIMCALL(void, internalerror_137383)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_137459)(TY75888 x);
N_NIMCALL(TNimObject*, idtableget_177137)(tidtable170705 t, tidobj139011* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym170689*, copysym_170988)(tsym170689* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, idtableput_177147)(tidtable170705* t, tidobj139011* key, TNimObject* val);
N_NIMCALL(tnode170659*, newsymnode_172300)(tsym170689* sym, tlineinfo135509 info);
N_NIMCALL(tnode170659*, copynode_171074)(tnode170659* src);
static N_INLINE(NI, sonslen_171022)(tnode170659* n);
N_NIMCALL(tnode170659*, evaltemplateargs_250201)(tnode170659* n, tsym170689* s);
static N_INLINE(NI, sonslen_171026)(ttype170693* n);
N_NIMCALL(void, globalerror_137336)(tlineinfo135509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode170659*, newnodei_170940)(NU8 kind, tlineinfo135509 info);
N_NIMCALL(void, localerror_137349)(tlineinfo135509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_171048)(tnode170659* father, tnode170659* son);
N_NIMCALL(tnode170659*, evaltemplate_250285)(tnode170659* n, tsym170689* tmpl, tsym170689* gensymowner);
N_NIMCALL(void, initidtable_170961)(tidtable170705* x);
N_NIMCALL(tnode170659*, getbody_212397)(tsym170689* s);
static N_INLINE(NIM_BOOL, isatom_175942)(tnode170659* n);
N_NIMCALL(NimStringDesc*, rendertree_188048)(tnode170659* n, NU8 renderflags);
static N_INLINE(NI, safelen_171146)(tnode170659* n);
static NIM_CONST TY170865 TMP3449 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3450, "sym", 3);
static NIM_CONST TY170865 TMP3451 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3452, "sons", 4);
STRING_LITERAL(TMP3454, "compiler/evaltempl.nim", 22);
NIM_CONST TY75888 TMP3453 = {((NimStringDesc*) &TMP3454),
34}
;
STRING_LITERAL(TMP3456, "", 0);
extern TFrame* frameptr_12037;
extern TNimType NTI170689; /* TSym */
extern tgcheap40816 gch_40844;
NI evaltemplatecounter_250283;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, len_171102)(tnode170659* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(873, "ast.nim");
	{
		nimln(873, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(873, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(874, "ast.nim");
		nimln(874, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(NI, sonslen_171022)(tnode170659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, evaltemplateaux_250012)(tnode170659* templ, tnode170659* actual, templctx250007* c, tnode170659* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(23, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym170689* s;
		nimln(25, "evaltempl.nim");
		if (!(((TMP3449[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3450));
		s = (*templ).kindU.S4.Sym;
		nimln(26, "evaltempl.nim");
		{
			nimln(26, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(27, "evaltempl.nim");
			{
				tnode170659* x;
				nimln(27, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(28, "evaltempl.nim");
				if (((TMP3451[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(29, "evaltempl.nim");
				{
					tnode170659* y_250059;
					NI i_250113;
					NI HEX3Atmp_250115;
					NI LOC14;
					NI res_250117;
					nimln(29, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 147))) goto LA12;
					y_250059 = 0;
					i_250113 = 0;
					HEX3Atmp_250115 = 0;
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					LOC14 = 0;
					LOC14 = len_171102(x);
					HEX3Atmp_250115 = subInt(LOC14, 1);
					nimln(1308, "system.nim");
					res_250117 = 0;
					nimln(1309, "system.nim");
					while (1) {
						nimln(1309, "system.nim");
						if (!(res_250117 <= HEX3Atmp_250115)) goto LA15;
						nimln(1308, "system.nim");
						i_250113 = res_250117;
						nimln(1419, "ast.nim");
						if (((TMP3451[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
						if ((NU)(i_250113) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_250059 = (*x).kindU.S6.Sons->data[i_250113];
						nimln(30, "evaltempl.nim");
						add_171201(result, y_250059);						nimln(1311, "system.nim");
						res_250117 = addInt(res_250117, 1);
					} LA15: ;
				}				goto LA10;
				LA12: ;
				{
					tnode170659* LOC17;
					nimln(32, "evaltempl.nim");
					nimln(32, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_171078(x);
					add_171201(result, LOC17);				}				LA10: ;
			}			goto LA6;
			LA8: ;
			{
				tsym170689* x;
				TNimObject* LOC24;
				tnode170659* LOC29;
				nimln(826, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(826, "msgs.nim");
					nimln(730, "system.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(826, "msgs.nim");
					nimln(826, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_137459(TMP3453);
					internalerror_137383(LOC23);				}				LA21: ;
				nimln(35, "evaltempl.nim");
				nimln(35, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_177137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI170689));
				x = ((tsym170689*) (LOC24));
				nimln(36, "evaltempl.nim");
				{
					nimln(36, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(37, "evaltempl.nim");
					x = copysym_170988(s, NIM_FALSE);
					nimln(38, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(39, "evaltempl.nim");
					idtableput_177147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);				}				LA27: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = newsymnode_172300(x, (*templ).Info);
				add_171201(result, LOC29);			}			LA6: ;
		}		goto LA2;
		LA4: ;
		{
			tnode170659* LOC31;
			nimln(42, "evaltempl.nim");
			nimln(42, "evaltempl.nim");
			LOC31 = 0;
			LOC31 = copynode_171074(templ);
			add_171201(result, LOC31);		}		LA2: ;
	}	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode170659* LOC33;
		nimln(44, "evaltempl.nim");
		nimln(44, "evaltempl.nim");
		LOC33 = 0;
		LOC33 = copynode_171074(templ);
		add_171201(result, LOC33);	}	break;
	default:
	{
		tnode170659* res;
		NI i_250100;
		NI HEX3Atmp_250118;
		NI LOC35;
		NI TMP3455;
		NI res_250120;
		nimln(46, "evaltempl.nim");
		res = copynode_171074(templ);
		i_250100 = 0;
		HEX3Atmp_250118 = 0;
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		LOC35 = 0;
		LOC35 = sonslen_171022(templ);
		TMP3455 = subInt(LOC35, 1);
		HEX3Atmp_250118 = (NI64)(TMP3455);
		nimln(1301, "system.nim");
		res_250120 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_250120 <= HEX3Atmp_250118)) goto LA36;
			nimln(1301, "system.nim");
			i_250100 = res_250120;
			nimln(48, "evaltempl.nim");
			if (((TMP3451[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
			if ((NU)(i_250100) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_250012((*templ).kindU.S6.Sons->data[i_250100], actual, c, res);			nimln(1304, "system.nim");
			res_250120 = addInt(res_250120, 1);
		} LA36: ;
		nimln(49, "evaltempl.nim");
		add_171201(result, res);	}	break;
	}
	popFrame();
}
static N_INLINE(NI, sonslen_171026)(ttype170693* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1195, "ast.nim");
	{
		nimln(1195, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1195, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1196, "ast.nim");
		nimln(1196, "ast.nim");
		result = (*n).Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode170659*, evaltemplateargs_250201)(tnode170659* n, tsym170689* s) {
	tnode170659* result;
	NI a;
	NI f;
	NI i_250218;
	NI HEX3Atmp_250276;
	NI TMP3457;
	NI res_250278;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(81, "evaltempl.nim");
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(83, "evaltempl.nim");
		a = sonslen_171022(n);
	}	break;
	default:
	{
		nimln(84, "evaltempl.nim");
		a = 0;
	}	break;
	}
	nimln(85, "evaltempl.nim");
	f = sonslen_171026((*s).Typ);
	nimln(86, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(f < a)) goto LA5;
		nimln(86, "evaltempl.nim");
		globalerror_137336((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3456));	}	LA5: ;
	nimln(88, "evaltempl.nim");
	result = newnodei_170940(((NU8) 147), (*n).Info);
	i_250218 = 0;
	HEX3Atmp_250276 = 0;
	nimln(89, "evaltempl.nim");
	nimln(89, "evaltempl.nim");
	TMP3457 = subInt(f, 1);
	HEX3Atmp_250276 = (NI64)(TMP3457);
	nimln(1301, "system.nim");
	res_250278 = 1;
	nimln(1302, "system.nim");
	while (1) {
		tnode170659* arg;
		nimln(1302, "system.nim");
		if (!(res_250278 <= HEX3Atmp_250276)) goto LA7;
		nimln(1301, "system.nim");
		i_250218 = res_250278;
		nimln(90, "evaltempl.nim");
		nimln(90, "evaltempl.nim");
		{
			nimln(90, "evaltempl.nim");
			if (!(i_250218 < a)) goto LA10;
			if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
			if ((NU)(i_250218) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_250218];
		}		goto LA8;
		LA10: ;
		{
			nimln(90, "evaltempl.nim");
			if (((TMP3451[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
			if ((NU)(i_250218) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP3449[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_250218]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_250218]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3450));
			arg = copytree_171078((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_250218]).kindU.S4.Sym).Ast);
		}		LA8: ;
		nimln(91, "evaltempl.nim");
		{
			NIM_BOOL LOC15;
			nimln(91, "evaltempl.nim");
			LOC15 = 0;
			nimln(91, "evaltempl.nim");
			LOC15 = (arg == NIM_NIL);
			if (LOC15) goto LA16;
			nimln(91, "evaltempl.nim");
			LOC15 = ((*arg).Kind == ((NU8) 1));
			LA16: ;
			if (!LOC15) goto LA17;
			nimln(92, "evaltempl.nim");
			localerror_137349((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3456));		}		LA17: ;
		nimln(93, "evaltempl.nim");
		addson_171048(result, arg);		nimln(1304, "system.nim");
		res_250278 = addInt(res_250278, 1);
	} LA7: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, isatom_175942)(tnode170659* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1422, "ast.nim");
	nimln(1422, "ast.nim");
	LOC1 = 0;
	nimln(702, "system.nim");
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	nimln(1422, "ast.nim");
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}
static N_INLINE(NI, safelen_171146)(tnode170659* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(878, "ast.nim");
	{
		NIM_BOOL LOC3;
		nimln(878, "ast.nim");
		LOC3 = 0;
		nimln(730, "system.nim");
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		nimln(878, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(878, "ast.nim");
		result = 0;
	}	goto LA1;
	LA5: ;
	{
		nimln(879, "ast.nim");
		nimln(879, "ast.nim");
		if (((TMP3451[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode170659*, evaltemplate_250285)(tnode170659* n, tsym170689* tmpl, tsym170689* gensymowner) {
	tnode170659* result;
	tnode170659* args;
	templctx250007 ctx;
	tnode170659* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(99, "evaltempl.nim");
	evaltemplatecounter_250283 = addInt(evaltemplatecounter_250283, 1);
	nimln(100, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(100 < evaltemplatecounter_250283)) goto LA3;
		nimln(101, "evaltempl.nim");
		globalerror_137336((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP3456));		nimln(102, "evaltempl.nim");
		result = n;
	}	LA3: ;
	nimln(105, "evaltempl.nim");
	args = evaltemplateargs_250201(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(107, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(108, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(109, "evaltempl.nim");
	initidtable_170961(&ctx.Mapping);	nimln(111, "evaltempl.nim");
	body = getbody_212397(tmpl);
	nimln(112, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(112, "evaltempl.nim");
		LOC7 = 0;
		LOC7 = isatom_175942(body);
		if (!LOC7) goto LA8;
		nimln(113, "evaltempl.nim");
		result = newnodei_170940(((NU8) 37), (*body).Info);
		nimln(114, "evaltempl.nim");
		evaltemplateaux_250012(body, args, &ctx, result);		nimln(115, "evaltempl.nim");
		{
			NI LOC12;
			nimln(115, "evaltempl.nim");
			nimln(115, "evaltempl.nim");
			LOC12 = 0;
			LOC12 = len_171102(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(115, "evaltempl.nim");
			if (((TMP3451[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(117, "evaltempl.nim");
			nimln(118, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_188048(result, 4);
			globalerror_137336((*result).Info, ((NU16) 1), LOC16);		}		LA10: ;
	}	goto LA5;
	LA8: ;
	{
		NI i_250329;
		NI HEX3Atmp_250353;
		NI LOC18;
		NI TMP3458;
		NI res_250355;
		nimln(120, "evaltempl.nim");
		result = copynode_171074(body);
		i_250329 = 0;
		HEX3Atmp_250353 = 0;
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		LOC18 = 0;
		LOC18 = safelen_171146(body);
		TMP3458 = subInt(LOC18, 1);
		HEX3Atmp_250353 = (NI64)(TMP3458);
		nimln(1301, "system.nim");
		res_250355 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_250355 <= HEX3Atmp_250353)) goto LA19;
			nimln(1301, "system.nim");
			i_250329 = res_250355;
			nimln(123, "evaltempl.nim");
			if (((TMP3451[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3452));
			if ((NU)(i_250329) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_250012((*body).kindU.S6.Sons->data[i_250329], args, &ctx, result);			nimln(1304, "system.nim");
			res_250355 = addInt(res_250355, 1);
		} LA19: ;
	}	LA5: ;
	nimln(125, "evaltempl.nim");
	evaltemplatecounter_250283 = subInt(evaltemplatecounter_250283, 1);
	popFrame();
	return result;
}N_NOINLINE(void, compilerevaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(95, "evaltempl.nim");
	evaltemplatecounter_250283 = 0;
	popFrame();
}

N_NOINLINE(void, compilerevaltemplDatInit)(void) {
}
