/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode185813 tnode185813;
typedef struct tpasscontext244003 tpasscontext244003;
typedef struct tgen520008 tgen520008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor339005 tdocumentor339005;
typedef struct tsym185843 tsym185843;
typedef struct tidobj165013 tidobj165013;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct ttype185847 ttype185847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tident165019 tident165019;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct tcell41290 tcell41290;
typedef struct tcellset41302 tcellset41302;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct tstringtable120810 tstringtable120810;
typedef struct trstgenerator307012 trstgenerator307012;
typedef struct TY307028 TY307028;
typedef struct ttocentry307008 ttocentry307008;
typedef struct trstnode295009 trstnode295009;
typedef struct tpass244015 tpass244015;
typedef struct trodreader234024 trodreader234024;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct tkeyvaluepairseq120808 tkeyvaluepairseq120808;
typedef struct TY94106 TY94106;
typedef struct TY295084 TY295084;
typedef struct tindex234022 tindex234022;
typedef struct tiitable194207 tiitable194207;
typedef struct tiipairseq194205 tiipairseq194205;
typedef struct tiipair194203 tiipair194203;
typedef struct tidtable185859 tidtable185859;
typedef struct tidpairseq185857 tidpairseq185857;
typedef struct tidpair185855 tidpair185855;
typedef struct tmemfile232204 tmemfile232204;
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
struct  tpasscontext244003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen520008  {
  tpasscontext244003 Sup;
tdocumentor339005* Doc;
tsym185843* Module;
};
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
};
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc185827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype185847* T;
trope143007* R;
trope143007* Heaproot;
NI A;
};
struct  tsym185843  {
  tidobj165013 Sup;
NU8 Kind;
union {
struct {ttypeseq185845* Typeinstcache;
tscope185837* Typscope;
} S1;
struct {TY185943* Procinstcache;
tscope185837* Scope;
} S2;
struct {TY185943* Usedgenerics;
tstrtable185817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype185847* Typ;
tident165019* Name;
tlineinfo161527 Info;
tsym185843* Owner;
NU32 Flags;
tnode185813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc185827 Loc;
tlib185831* Annex;
tnode185813* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY11626;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11626 raiseAction;
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
struct  ttocentry307008  {
trstnode295009* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler296018) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler296016) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY307036[5];
struct  trstgenerator307012  {
  TNimObject Sup;
NU8 Target;
tstringtable120810* Config;
NI Splitafter;
TY307028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler296018 Findfile;
tmsghandler296016 Msghandler;
NimStringDesc* Filename;
TY307036 Meta;
NimStringDesc* Currentsection;
};
typedef trope143007* tsections339003[25];
struct  tdocumentor339005  {
  trstgenerator307012 Sup;
trope143007* Moddesc;
NI Id;
tsections339003 Toc;
tsections339003 Section;
NimStringDesc* Indexvalfilename;
tstringtable120810* Seensymbols;
};
typedef N_NIMCALL_PTR(tpasscontext244003*, tpassopen244007) (tsym185843* module);
typedef N_NIMCALL_PTR(tpasscontext244003*, tpassopencached244009) (tsym185843* module, trodreader234024* rd);
typedef N_NIMCALL_PTR(tnode185813*, tpassprocess244013) (tpasscontext244003* p, tnode185813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode185813*, tpassclose244011) (tpasscontext244003* p, tnode185813* n);
struct tpass244015 {
tpassopen244007 Field0;
tpassopencached244009 Field1;
tpassprocess244013 Field2;
tpassclose244011 Field3;
};
struct  tnode185813  {
ttype185847* Typ;
tlineinfo161527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym185843* Sym;
} S4;
struct {tident165019* Ident;
} S5;
struct {tnodeseq185807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  ttype185847  {
  tidobj165013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq185845* Sons;
tnode185813* N;
tsym185843* Destructor;
tsym185843* Owner;
tsym185843* Sym;
NI64 Size;
NI Align;
tloc185827 Loc;
};
struct  tscope185837  {
NI Depthlevel;
tstrtable185817 Symbols;
tnodeseq185807* Usingsyms;
tscope185837* Parent;
};
struct  tinstantiation185833  {
tsym185843* Sym;
ttypeseq185845* Concretetypes;
TY185932* Usedby;
};
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
};
struct  trope143007  {
  TNimObject Sup;
trope143007* Left;
trope143007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tlib185831  {
  tlistentry117017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope143007* Name;
tnode185813* Path;
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
struct TY94106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable120810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq120808* Data;
NU8 Mode;
};
struct  trstnode295009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY295084* Sons;
};
struct  tiipair194203  {
NI Key;
NI Val;
};
struct  tiitable194207  {
NI Counter;
tiipairseq194205* Data;
};
struct  tindex234022  {
NI Lastidxkey;
NI Lastidxval;
tiitable194207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair185855  {
tidobj165013* Key;
TNimObject* Val;
};
struct  tidtable185859  {
NI Counter;
tidpairseq185857* Data;
};
struct  tmemfile232204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader234024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY185932* Moddeps;
TY185932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex234022 Index;
tindex234022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable185859 Syms;
tmemfile232204 Memfile;
tsymseq185815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct ttypeseq185845 {
  TGenericSeq Sup;
  ttype185847* data[SEQ_DECL_SIZE];
};
struct TY185943 {
  TGenericSeq Sup;
  tinstantiation185833* data[SEQ_DECL_SIZE];
};
struct tsymseq185815 {
  TGenericSeq Sup;
  tsym185843* data[SEQ_DECL_SIZE];
};
struct TY307028 {
  TGenericSeq Sup;
  ttocentry307008 data[SEQ_DECL_SIZE];
};
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq120808 {
  TGenericSeq Sup;
  TY94106 data[SEQ_DECL_SIZE];
};
struct TY295084 {
  TGenericSeq Sup;
  trstnode295009* data[SEQ_DECL_SIZE];
};
struct tiipairseq194205 {
  TGenericSeq Sup;
  tiipair194203 data[SEQ_DECL_SIZE];
};
struct tidpairseq185857 {
  TGenericSeq Sup;
  tidpair185855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode185813*, close_520014)(tpasscontext244003* p, tnode185813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_342719)(tdocumentor339005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_162780)(NI32 fileidx);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_342700)(tdocumentor339005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41290* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c);
N_NOINLINE(void, incl_42055)(tcellset41302* s, tcell41290* cell);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, decref_46602)(tcell41290* c);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode185813*, processnode_520049)(tpasscontext244003* c, tnode185813* n);
N_NIMCALL(void, generatedoc_340458)(tdocumentor339005* d, tnode185813* n);
N_NIMCALL(tpasscontext244003*, myopen_520057)(tsym185843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7625)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tdocumentor339005*, newdocumentor_339048)(NimStringDesc* filename, tstringtable120810* config);
N_NIMCALL(void, finishdoc2pass_520085)(NimStringDesc* project);
STRING_LITERAL(TMP7623, "html", 4);
NIM_CONST tpass244015 docgen2pass_520082 = {myopen_520057,
NIM_NIL,
processnode_520049,
close_520014}
;
extern TNimType NTI244003; /* TPassContext */
TNimType NTI520008; /* TGen */
extern TNimType NTI339007; /* PDoc */
extern TNimType NTI185811; /* PSym */
extern NIM_BOOL gwholeproject_135122;
extern TSafePoint* exchandler_13039;
extern TFrame* frameptr_13038;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13041;
extern tgcheap43216 gch_43244;
TNimType NTI520010; /* PGen */
extern tstringtable120810* gconfigvars_135203;

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13039 = (*exchandler_13039).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13038 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2442, "system.nim");
	result = currexception_13041;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42055(&gch_43244.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47027)(tcell41290* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44662(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	LA4: ;
	popFrame();
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

static N_INLINE(void, decref_46602)(tcell41290* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44662(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41290* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44643(src);
		incref_47027(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41290* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44643((*dest));
		decref_46602(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13041, (*currexception_13041).parent);
}

N_NIMCALL(tnode185813*, close_520014)(tpasscontext244003* p, tnode185813* n) {
	tnode185813* result;
	tgen520008* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI520008));
	g = ((tgen520008*) (p));
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7624;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_135122;
		if (LOC3) goto LA4;
		nimln(25, "docgen2.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_162780(((NI32)chckRange((*(*g).Module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
		writeoutput_342719((*g).Doc, LOC7, ((NimStringDesc*) &TMP7623), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7624);
		TMP7624.status = setjmp(TMP7624.context);
		if (TMP7624.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_342700((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
				TMP7624.status = 0;
				popCurrentException();
			}
		}
		if (TMP7624.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode185813*, processnode_520049)(tpasscontext244003* c, tnode185813* n) {
	tnode185813* result;
	tgen520008* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI520008));
	g = ((tgen520008*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_340458((*g).Doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP7625)(void* p, NI op) {
	tgen520008* a;
	a = (tgen520008*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext244003*, myopen_520057)(tsym185843* module) {
	tpasscontext244003* result;
	tgen520008* g;
	tdocumentor339005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen520008*) newObj((&NTI520010), sizeof(tgen520008));
	(*g).Sup.Sup.m_type = (&NTI520008);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_162780(((NI32)chckRange((*module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
	d = newdocumentor_339048(LOC1, gconfigvars_135203);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_520085)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
N_NOINLINE(void, docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, docgen2DatInit)(void) {
static TNimNode* TMP7622[2];
static TNimNode TMP7620[3];
NTI520008.size = sizeof(tgen520008);
NTI520008.kind = 17;
NTI520008.base = (&NTI244003);
TMP7622[0] = &TMP7620[1];
TMP7620[1].kind = 1;
TMP7620[1].offset = offsetof(tgen520008, Doc);
TMP7620[1].typ = (&NTI339007);
TMP7620[1].name = "doc";
TMP7622[1] = &TMP7620[2];
TMP7620[2].kind = 1;
TMP7620[2].offset = offsetof(tgen520008, Module);
TMP7620[2].typ = (&NTI185811);
TMP7620[2].name = "module";
TMP7620[0].len = 2; TMP7620[0].kind = 2; TMP7620[0].sons = &TMP7622[0];
NTI520008.node = &TMP7620[0];
NTI520010.size = sizeof(tgen520008*);
NTI520010.kind = 22;
NTI520010.base = (&NTI520008);
NTI520010.marker = TMP7625;
}

