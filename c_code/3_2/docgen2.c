/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode186813 tnode186813;
typedef struct tpasscontext245003 tpasscontext245003;
typedef struct tgen521008 tgen521008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor340005 tdocumentor340005;
typedef struct tsym186843 tsym186843;
typedef struct tidobj166013 tidobj166013;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct ttype186847 ttype186847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tident166019 tident166019;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct tcell41490 tcell41490;
typedef struct tcellset41502 tcellset41502;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellseq41506 tcellseq41506;
typedef struct tpagedesc41498 tpagedesc41498;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
typedef struct tstringtable121810 tstringtable121810;
typedef struct trstgenerator308012 trstgenerator308012;
typedef struct TY308028 TY308028;
typedef struct ttocentry308008 ttocentry308008;
typedef struct trstnode296009 trstnode296009;
typedef struct tpass245015 tpass245015;
typedef struct trodreader235024 trodreader235024;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
typedef struct tkeyvaluepairseq121808 tkeyvaluepairseq121808;
typedef struct TY95106 TY95106;
typedef struct TY296084 TY296084;
typedef struct tindex235022 tindex235022;
typedef struct tiitable195207 tiitable195207;
typedef struct tiipairseq195205 tiipairseq195205;
typedef struct tiipair195203 tiipair195203;
typedef struct tidtable186859 tidtable186859;
typedef struct tidpairseq186857 tidpairseq186857;
typedef struct tidpair186855 tidpair186855;
typedef struct tmemfile233204 tmemfile233204;
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
struct  tpasscontext245003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen521008  {
  tpasscontext245003 Sup;
tdocumentor340005* Doc;
tsym186843* Module;
};
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable186817  {
NI Counter;
tsymseq186815* Data;
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
} TY11826;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11826 raiseAction;
};
struct  tcell41490  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41506  {
NI Len;
NI Cap;
tcell41490** D;
};
struct  tcellset41502  {
NI Counter;
NI Max;
tpagedesc41498* Head;
tpagedesc41498** Data;
};
typedef tsmallchunk23038* TY23822[512];
typedef ttrunk23011* ttrunkbuckets23013[256];
struct  tintset23015  {
ttrunkbuckets23013 Data;
};
struct  tmemregion23810  {
NI Minlargeobj;
NI Maxlargeobj;
TY23822 Freesmallchunks;
tllchunk23804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23040* Freechunkslist;
tintset23015 Chunkstarts;
tavlnode23808* Root;
tavlnode23808* Deleted;
tavlnode23808* Last;
tavlnode23808* Freeavlnodes;
};
struct  tgcstat43414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41506 Zct;
tcellseq41506 Decstack;
tcellset41502 Cycleroots;
tcellseq41506 Tempstack;
NI Recgclock;
tmemregion23810 Region;
tgcstat43414 Stat;
};
struct  ttocentry308008  {
trstnode296009* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler297018) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler297016) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY308036[5];
struct  trstgenerator308012  {
  TNimObject Sup;
NU8 Target;
tstringtable121810* Config;
NI Splitafter;
TY308028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler297018 Findfile;
tmsghandler297016 Msghandler;
NimStringDesc* Filename;
TY308036 Meta;
NimStringDesc* Currentsection;
};
typedef trope144007* tsections340003[25];
struct  tdocumentor340005  {
  trstgenerator308012 Sup;
trope144007* Moddesc;
NI Id;
tsections340003 Toc;
tsections340003 Section;
NimStringDesc* Indexvalfilename;
tstringtable121810* Seensymbols;
};
typedef N_NIMCALL_PTR(tpasscontext245003*, tpassopen245007) (tsym186843* module);
typedef N_NIMCALL_PTR(tpasscontext245003*, tpassopencached245009) (tsym186843* module, trodreader235024* rd);
typedef N_NIMCALL_PTR(tnode186813*, tpassprocess245013) (tpasscontext245003* p, tnode186813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode186813*, tpassclose245011) (tpasscontext245003* p, tnode186813* n);
struct tpass245015 {
tpassopen245007 Field0;
tpassopencached245009 Field1;
tpassprocess245013 Field2;
tpassclose245011 Field3;
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
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
};
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib186831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope144007* Name;
tnode186813* Path;
};
typedef NI TY23018[8];
struct  tpagedesc41498  {
tpagedesc41498* Next;
NI Key;
TY23018 Bits;
};
struct  tbasechunk23036  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23038  {
  tbasechunk23036 Sup;
tsmallchunk23038* Next;
tsmallchunk23038* Prev;
tfreecell23028* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23804  {
NI Size;
NI Acc;
tllchunk23804* Next;
};
struct  tbigchunk23040  {
  tbasechunk23036 Sup;
tbigchunk23040* Next;
tbigchunk23040* Prev;
NI Align;
NF Data;
};
struct  ttrunk23011  {
ttrunk23011* Next;
NI Key;
TY23018 Bits;
};
typedef tavlnode23808* TY23814[2];
struct  tavlnode23808  {
TY23814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TY95106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable121810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq121808* Data;
NU8 Mode;
};
struct  trstnode296009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY296084* Sons;
};
struct  tiipair195203  {
NI Key;
NI Val;
};
struct  tiitable195207  {
NI Counter;
tiipairseq195205* Data;
};
struct  tindex235022  {
NI Lastidxkey;
NI Lastidxval;
tiitable195207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair186855  {
tidobj166013* Key;
TNimObject* Val;
};
struct  tidtable186859  {
NI Counter;
tidpairseq186857* Data;
};
struct  tmemfile233204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader235024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY186932* Moddeps;
TY186932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex235022 Index;
tindex235022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable186859 Syms;
tmemfile233204 Memfile;
tsymseq186815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell23028  {
tfreecell23028* Next;
NI Zerofield;
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
struct TY308028 {
  TGenericSeq Sup;
  ttocentry308008 data[SEQ_DECL_SIZE];
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq121808 {
  TGenericSeq Sup;
  TY95106 data[SEQ_DECL_SIZE];
};
struct TY296084 {
  TGenericSeq Sup;
  trstnode296009* data[SEQ_DECL_SIZE];
};
struct tiipairseq195205 {
  TGenericSeq Sup;
  tiipair195203 data[SEQ_DECL_SIZE];
};
struct tidpairseq186857 {
  TGenericSeq Sup;
  tidpair186855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode186813*, close_521014)(tpasscontext245003* p, tnode186813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_343719)(tdocumentor340005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_163780)(NI32 fileidx);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_343700)(tdocumentor340005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47227)(tcell41490* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44862)(tcell41490* c);
static N_INLINE(void, rtladdcycleroot_45635)(tcell41490* c);
N_NOINLINE(void, incl_42255)(tcellset41502* s, tcell41490* cell);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, decref_46802)(tcell41490* c);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode186813*, processnode_521049)(tpasscontext245003* c, tnode186813* n);
N_NIMCALL(void, generatedoc_341458)(tdocumentor340005* d, tnode186813* n);
N_NIMCALL(tpasscontext245003*, myopen_521057)(tsym186843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7620)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tdocumentor340005*, newdocumentor_340048)(NimStringDesc* filename, tstringtable121810* config);
N_NIMCALL(void, finishdoc2pass_521085)(NimStringDesc* project);
STRING_LITERAL(TMP7618, "html", 4);
NIM_CONST tpass245015 docgen2pass_521082 = {myopen_521057,
NIM_NIL,
processnode_521049,
close_521014}
;
extern TNimType NTI245003; /* TPassContext */
TNimType NTI521008; /* TGen */
extern TNimType NTI340007; /* PDoc */
extern TNimType NTI186811; /* PSym */
extern NIM_BOOL gwholeproject_136122;
extern TSafePoint* exchandler_13239;
extern TFrame* frameptr_13238;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13241;
extern tgcheap43416 gch_43444;
TNimType NTI521010; /* PGen */
extern tstringtable121810* gconfigvars_136203;

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
	(*s).prev = exchandler_13239;
	exchandler_13239 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13239 = (*exchandler_13239).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13238 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2442, "system.nim");
	result = currexception_13241;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44862)(tcell41490* c) {
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

static N_INLINE(void, rtladdcycleroot_45635)(tcell41490* c) {
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
		incl_42255(&gch_43444.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47227)(tcell41490* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44862(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45635(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41490*, usrtocell_44843)(void* usr) {
	tcell41490* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41490*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41490))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41490* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46802)(tcell41490* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46402(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44862(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45635(c);
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
		tcell41490* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44843(src);
		incref_47227(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41490* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44843((*dest));
		decref_46802(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13241, (*currexception_13241).parent);
}

N_NIMCALL(tnode186813*, close_521014)(tpasscontext245003* p, tnode186813* n) {
	tnode186813* result;
	tgen521008* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI521008));
	g = ((tgen521008*) (p));
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7619;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_136122;
		if (LOC3) goto LA4;
		nimln(25, "docgen2.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_163780(((NI32)chckRange((*(*g).Module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
		writeoutput_343719((*g).Doc, LOC7, ((NimStringDesc*) &TMP7618), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7619);
		TMP7619.status = setjmp(TMP7619.context);
		if (TMP7619.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_343700((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
				TMP7619.status = 0;
				popCurrentException();
			}
		}
		if (TMP7619.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode186813*, processnode_521049)(tpasscontext245003* c, tnode186813* n) {
	tnode186813* result;
	tgen521008* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI521008));
	g = ((tgen521008*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_341458((*g).Doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP7620)(void* p, NI op) {
	tgen521008* a;
	a = (tgen521008*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41490* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44843(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41490* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44843((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46402(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(tpasscontext245003*, myopen_521057)(tsym186843* module) {
	tpasscontext245003* result;
	tgen521008* g;
	tdocumentor340005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen521008*) newObj((&NTI521010), sizeof(tgen521008));
	(*g).Sup.Sup.m_type = (&NTI521008);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_163780(((NI32)chckRange((*module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
	d = newdocumentor_340048(LOC1, gconfigvars_136203);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_521085)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
N_NOINLINE(void, docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, docgen2DatInit)(void) {
static TNimNode* TMP7617[2];
static TNimNode TMP7615[3];
NTI521008.size = sizeof(tgen521008);
NTI521008.kind = 17;
NTI521008.base = (&NTI245003);
TMP7617[0] = &TMP7615[1];
TMP7615[1].kind = 1;
TMP7615[1].offset = offsetof(tgen521008, Doc);
TMP7615[1].typ = (&NTI340007);
TMP7615[1].name = "doc";
TMP7617[1] = &TMP7615[2];
TMP7615[2].kind = 1;
TMP7615[2].offset = offsetof(tgen521008, Module);
TMP7615[2].typ = (&NTI186811);
TMP7615[2].name = "module";
TMP7615[0].len = 2; TMP7615[0].kind = 2; TMP7615[0].sons = &TMP7617[0];
NTI521008.node = &TMP7615[0];
NTI521010.size = sizeof(tgen521008*);
NTI521010.kind = 22;
NTI521010.base = (&NTI521008);
NTI521010.marker = TMP7620;
}

