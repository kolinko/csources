/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct trope142007 trope142007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode184813 tnode184813;
typedef struct tpasscontext243003 tpasscontext243003;
typedef struct tgen518012 tgen518012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym184843 tsym184843;
typedef struct ttype184847 ttype184847;
typedef struct tlineinfo160527 tlineinfo160527;
typedef struct tident164019 tident164019;
typedef struct tnodeseq184807 tnodeseq184807;
typedef struct tidobj164013 tidobj164013;
typedef struct ttypeseq184845 ttypeseq184845;
typedef struct tscope184837 tscope184837;
typedef struct TY184943 TY184943;
typedef struct tinstantiation184833 tinstantiation184833;
typedef struct tstrtable184817 tstrtable184817;
typedef struct tsymseq184815 tsymseq184815;
typedef struct tloc184827 tloc184827;
typedef struct tlib184831 tlib184831;
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
typedef struct tpass243015 tpass243015;
typedef struct trodreader233024 trodreader233024;
typedef struct TY184932 TY184932;
typedef struct tlistentry116017 tlistentry116017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct tindex233022 tindex233022;
typedef struct tiitable193207 tiitable193207;
typedef struct tiipairseq193205 tiipairseq193205;
typedef struct tiipair193203 tiipair193203;
typedef struct tidtable184859 tidtable184859;
typedef struct tidpairseq184857 tidpairseq184857;
typedef struct tidpair184855 tidpair184855;
typedef struct tmemfile231204 tmemfile231204;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope142007* TY194350[2];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext243003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen518012  {
  tpasscontext243003 Sup;
tsym184843* Module;
};
struct  tlineinfo160527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode184813  {
ttype184847* Typ;
tlineinfo160527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym184843* Sym;
} S4;
struct {tident164019* Ident;
} S5;
struct {tnodeseq184807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY185025[20];
struct  tidobj164013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable184817  {
NI Counter;
tsymseq184815* Data;
};
struct  tloc184827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype184847* T;
trope142007* R;
trope142007* Heaproot;
NI A;
};
struct  tsym184843  {
  tidobj164013 Sup;
NU8 Kind;
union {
struct {ttypeseq184845* Typeinstcache;
tscope184837* Typscope;
} S1;
struct {TY184943* Procinstcache;
tscope184837* Scope;
} S2;
struct {TY184943* Usedgenerics;
tstrtable184817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype184847* Typ;
tident164019* Name;
tlineinfo160527 Info;
tsym184843* Owner;
NU32 Flags;
tnode184813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc184827 Loc;
tlib184831* Annex;
tnode184813* Constraint;
};
struct  tident164019  {
  tidobj164013 Sup;
NimStringDesc* S;
tident164019* Next;
NI H;
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
typedef N_NIMCALL_PTR(tpasscontext243003*, tpassopen243007) (tsym184843* module);
typedef N_NIMCALL_PTR(tpasscontext243003*, tpassopencached243009) (tsym184843* module, trodreader233024* rd);
typedef N_NIMCALL_PTR(tnode184813*, tpassprocess243013) (tpasscontext243003* p, tnode184813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode184813*, tpassclose243011) (tpasscontext243003* p, tnode184813* n);
struct tpass243015 {
tpassopen243007 Field0;
tpassopencached243009 Field1;
tpassprocess243013 Field2;
tpassclose243011 Field3;
};
struct  trope142007  {
  TNimObject Sup;
trope142007* Left;
trope142007* Right;
NI Length;
NimStringDesc* Data;
};
struct  ttype184847  {
  tidobj164013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq184845* Sons;
tnode184813* N;
tsym184843* Destructor;
tsym184843* Owner;
tsym184843* Sym;
NI64 Size;
NI Align;
tloc184827 Loc;
};
struct  tscope184837  {
NI Depthlevel;
tstrtable184817 Symbols;
tnodeseq184807* Usingsyms;
tscope184837* Parent;
};
struct  tinstantiation184833  {
tsym184843* Sym;
ttypeseq184845* Concretetypes;
TY184932* Usedby;
};
struct  tlistentry116017  {
  TNimObject Sup;
tlistentry116017* Prev;
tlistentry116017* Next;
};
struct  tlib184831  {
  tlistentry116017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope142007* Name;
tnode184813* Path;
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
struct  tiipair193203  {
NI Key;
NI Val;
};
struct  tiitable193207  {
NI Counter;
tiipairseq193205* Data;
};
struct  tindex233022  {
NI Lastidxkey;
NI Lastidxval;
tiitable193207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair184855  {
tidobj164013* Key;
TNimObject* Val;
};
struct  tidtable184859  {
NI Counter;
tidpairseq184857* Data;
};
struct  tmemfile231204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader233024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY184932* Moddeps;
TY184932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex233022 Index;
tindex233022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable184859 Syms;
tmemfile231204 Memfile;
tsymseq184815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct tnodeseq184807 {
  TGenericSeq Sup;
  tnode184813* data[SEQ_DECL_SIZE];
};
struct ttypeseq184845 {
  TGenericSeq Sup;
  ttype184847* data[SEQ_DECL_SIZE];
};
struct TY184943 {
  TGenericSeq Sup;
  tinstantiation184833* data[SEQ_DECL_SIZE];
};
struct tsymseq184815 {
  TGenericSeq Sup;
  tsym184843* data[SEQ_DECL_SIZE];
};
struct TY184932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq193205 {
  TGenericSeq Sup;
  tiipair193203 data[SEQ_DECL_SIZE];
};
struct tidpairseq184857 {
  TGenericSeq Sup;
  tidpair184855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_518020)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_142085)(trope142007** c, NimStringDesc* frmt, trope142007** args, NI argsLen0);
N_NIMCALL(trope142007*, torope_142058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode184813*, adddotdependency_518031)(tpasscontext243003* c, tnode184813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_185191)(tnode184813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_252012)(tnode184813* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_518007)(NimStringDesc* project);
N_NIMCALL(void, writerope_143407)(trope142007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope142007*, ropef_142079)(NimStringDesc* frmt, trope142007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext243003*, myopen_518128)(tsym184843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7622)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
STRING_LITERAL(TMP7614, "$1 -> $2;$n", 11);
static NIM_CONST TY185025 TMP7615 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7616, "sons", 4);
STRING_LITERAL(TMP7619, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP7620, "", 0);
STRING_LITERAL(TMP7621, "dot", 3);
NIM_CONST tpass243015 gendependpass_518152 = {myopen_518128,
NIM_NIL,
adddotdependency_518031,
NIM_NIL}
;
trope142007* gdotgraph_518017;
extern TFrame* frameptr_13038;
extern TNimType NTI243003; /* TPassContext */
TNimType NTI518012; /* TGen */
extern TNimType NTI184811; /* PSym */
TNimType NTI518014; /* PGen */
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, adddependencyaux_518020)(NimStringDesc* importing, NimStringDesc* imported) {
	TY194350 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_142058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_142058(imported);
	appf_142085(&gdotgraph_518017, ((NimStringDesc*) &TMP7614), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, sonslen_185191)(tnode184813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP7615[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7616));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP7615[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7616));
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

N_NIMCALL(tnode184813*, adddotdependency_518031)(tpasscontext243003* c, tnode184813* n) {
	tnode184813* result;
	tgen518012* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI518012));
	g = ((tgen518012*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_518049;
		NI HEX3Atmp_518107;
		NI LOC2;
		NI TMP7617;
		NI res_518109;
		i_518049 = 0;
		HEX3Atmp_518107 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = 0;
		LOC2 = sonslen_185191(n);
		TMP7617 = subInt(LOC2, 1);
		HEX3Atmp_518107 = (NI64)(TMP7617);
		nimln(1450, "system.nim");
		res_518109 = 0;
		nimln(1451, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1451, "system.nim");
			if (!(res_518109 <= HEX3Atmp_518107)) goto LA3;
			nimln(1450, "system.nim");
			i_518049 = res_518109;
			nimln(34, "depends.nim");
			if (((TMP7615[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7616));
			if ((NU)(i_518049) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_252012((*n).kindU.S6.Sons->data[i_518049]);
			nimln(35, "depends.nim");
			adddependencyaux_518020((*(*(*g).Module).Name).S, imported);
			nimln(1453, "system.nim");
			res_518109 = addInt(res_518109, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP7615[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7616));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_252012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_518020((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		NI i_518092;
		NI HEX3Atmp_518111;
		NI LOC6;
		NI TMP7618;
		NI res_518113;
		i_518092 = 0;
		HEX3Atmp_518111 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = 0;
		LOC6 = sonslen_185191(n);
		TMP7618 = subInt(LOC6, 1);
		HEX3Atmp_518111 = (NI64)(TMP7618);
		nimln(1450, "system.nim");
		res_518113 = 0;
		nimln(1451, "system.nim");
		while (1) {
			tnode184813* LOC8;
			nimln(1451, "system.nim");
			if (!(res_518113 <= HEX3Atmp_518111)) goto LA7;
			nimln(1450, "system.nim");
			i_518092 = res_518113;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP7615[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7616));
			if ((NU)(i_518092) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_518031(c, (*n).kindU.S6.Sons->data[i_518092]);
			nimln(1453, "system.nim");
			res_518113 = addInt(res_518113, 1);
		} LA7: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, generatedot_518007)(NimStringDesc* project) {
	TY194350 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope142007* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP7620));
	LOC1[0] = torope_142058(LOC3);
	LOC1[1] = gdotgraph_518017;
	LOC4 = 0;
	LOC4 = ropef_142079(((NimStringDesc*) &TMP7619), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP7621));
	writerope_143407(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP7622)(void* p, NI op) {
	tgen518012* a;
	a = (tgen518012*)p;
	nimGCvisit((void*)(*a).Module, op);
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41290* c;
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
		tcell41290* c;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
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

N_NIMCALL(tpasscontext243003*, myopen_518128)(tsym184843* module) {
	tpasscontext243003* result;
	tgen518012* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen518012*) newObj((&NTI518014), sizeof(tgen518012));
	(*g).Sup.Sup.m_type = (&NTI518012);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NOINLINE(void, dependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

N_NOINLINE(void, dependsDatInit)(void) {
static TNimNode TMP7612[1];
NTI518012.size = sizeof(tgen518012);
NTI518012.kind = 17;
NTI518012.base = (&NTI243003);
TMP7612[0].kind = 1;
TMP7612[0].offset = offsetof(tgen518012, Module);
TMP7612[0].typ = (&NTI184811);
TMP7612[0].name = "module";
NTI518012.node = &TMP7612[0];
NTI518014.size = sizeof(tgen518012*);
NTI518014.kind = 22;
NTI518014.base = (&NTI518012);
NTI518014.marker = TMP7622;
}

