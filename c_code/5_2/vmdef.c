/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tctx247037 tctx247037;
typedef struct tsym185843 tsym185843;
typedef struct tpasscontext244003 tpasscontext244003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY247229 TY247229;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY162208 TY162208;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tnode185813 tnode185813;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct ttype185847 ttype185847;
typedef struct pprocHEX3Aobjecttype247216 pprocHEX3Aobjecttype247216;
typedef struct TY247217 TY247217;
typedef struct tblock247023 tblock247023;
typedef struct TY247198 TY247198;
typedef struct TY247223 TY247223;
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
typedef struct tidobj165013 tidobj165013;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tident165019 tident165019;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
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
struct  tpasscontext244003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tctx247037  {
  tpasscontext244003 Sup;
TY247229* Code;
TY162208* Debug;
tnode185813* Globals;
tnode185813* Constants;
ttypeseq185845* Types;
tnode185813* Currentexceptiona;
tnode185813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype247216* Prc;
tsym185843* Module;
tnode185813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tblock247023  {
tsym185843* Label;
TY247198* Fixups;
};
struct TY247223 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY247223 TY247220[256];
struct  pprocHEX3Aobjecttype247216  {
TY247217* Blocks;
tsym185843* Sym;
TY247220 Slots;
NI Maxslots;
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
typedef NU8 TY247366[20];
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
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
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct TY247229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY162208 {
  TGenericSeq Sup;
  tlineinfo161527 data[SEQ_DECL_SIZE];
};
struct ttypeseq185845 {
  TGenericSeq Sup;
  ttype185847* data[SEQ_DECL_SIZE];
};
struct TY247198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY247217 {
  TGenericSeq Sup;
  tblock247023 data[SEQ_DECL_SIZE];
};
struct TY185943 {
  TGenericSeq Sup;
  tinstantiation185833* data[SEQ_DECL_SIZE];
};
struct tsymseq185815 {
  TGenericSeq Sup;
  tsym185843* data[SEQ_DECL_SIZE];
};
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tctx247037*, newctx_247249)(tsym185843* module);
N_NIMCALL(void, TMP3215)(void* p, NI op);
N_NIMCALL(void, TMP3218)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3219)(void* p, NI op);
N_NIMCALL(void, TMP3224)(void* p, NI op);
N_NIMCALL(void, TMP3231)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode185813*, newnode_186075)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, refresh_247337)(tctx247037* c, tsym185843* module);
NIM_CONST TY247366 largeinstrs_247365 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x00, 0x00}
;
NIM_CONST TY247366 relativejumps_247368 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x70, 0x00, 0x00, 0x00}
;
extern TNimType NTI244003; /* TPassContext */
TNimType NTI247037; /* TCtx */
extern TNimType NTI122; /* uint32 */
TNimType NTI247229; /* seq[TInstr] */
extern TNimType NTI162208; /* seq[TLineInfo] */
extern TNimType NTI185805; /* PNode */
extern TNimType NTI185845; /* TTypeSeq */
extern TNimType NTI106; /* int */
TNimType NTI247216; /* PProc:ObjectType */
TNimType NTI247023; /* TBlock */
extern TNimType NTI185811; /* PSym */
TNimType NTI247198; /* seq[TPosition] */
TNimType NTI247217; /* seq[TBlock] */
TNimType NTI247223; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI134; /* bool */
TNimType NTI247031; /* TSlotKind */
TNimType NTI247220; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI247033; /* PProc */
TNimType NTI247025; /* TEvalMode */
TNimType NTI247027; /* TSandboxFlag */
TNimType NTI247029; /* TSandboxFlags */
TNimType NTI247035; /* PCtx */
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
TNimType NTI247021; /* TOpcode */
N_NIMCALL(void, TMP3215)(void* p, NI op) {
	TY247229* a;
	NI LOC1;
	a = (TY247229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3218)(void* p, NI op) {
	TY247198* a;
	NI LOC1;
	a = (TY247198*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3219)(void* p, NI op) {
	TY247217* a;
	NI LOC1;
	a = (TY247217*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP3224)(void* p, NI op) {
	pprocHEX3Aobjecttype247216* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype247216*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP3231)(void* p, NI op) {
	tctx247037* a;
	a = (tctx247037*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
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

N_NIMCALL(tctx247037*, newctx_247249)(tsym185843* module) {
	tctx247037* result;
	tctx247037* LOC1;
	pprocHEX3Aobjecttype247216* LOC2;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(197, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (tctx247037*) newObj((&NTI247035), sizeof(tctx247037));
	(*LOC1).Sup.Sup.m_type = (&NTI247037);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY247229*) newSeqRC1((&NTI247229), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY162208*) newSeqRC1((&NTI162208), 0);
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_186075(((NU8) 125)));
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_186075(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq185845*) newSeqRC1((&NTI185845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype247216*) newObj((&NTI247033), sizeof(pprocHEX3Aobjecttype247216));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY247217*) newSeqRC1((&NTI247217), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_247337)(tctx247037* c, tsym185843* module) {
	pprocHEX3Aobjecttype247216* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(202, "vmdef.nim");
	asgnRefNoCycle((void**) &(*c).Module, module);
	nimln(203, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype247216*) newObj((&NTI247033), sizeof(pprocHEX3Aobjecttype247216));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY247217*) newSeqRC1((&NTI247217), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
	popFrame();
}
N_NOINLINE(void, vmdefInit)(void) {
	nimfr("vmdef", "vmdef.nim")
	popFrame();
}

N_NOINLINE(void, vmdefDatInit)(void) {
static TNimNode* TMP3214[15];
static TNimNode* TMP3216[4];
static TNimNode* TMP3217[2];
static TNimNode* TMP3220[2];
static TNimNode* TMP3221[8];
NI TMP3223;
static char* NIM_CONST TMP3222[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP3225[5];
NI TMP3227;
static char* NIM_CONST TMP3226[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP3228[3];
NI TMP3230;
static char* NIM_CONST TMP3229[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP5318[153];
NI TMP5320;
static char* NIM_CONST TMP5319[153] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait"};
static TNimNode TMP3212[201];
NTI247037.size = sizeof(tctx247037);
NTI247037.kind = 17;
NTI247037.base = (&NTI244003);
TMP3214[0] = &TMP3212[1];
NTI247229.size = sizeof(TY247229*);
NTI247229.kind = 24;
NTI247229.base = (&NTI122);
NTI247229.flags = 2;
NTI247229.marker = TMP3215;
TMP3212[1].kind = 1;
TMP3212[1].offset = offsetof(tctx247037, Code);
TMP3212[1].typ = (&NTI247229);
TMP3212[1].name = "code";
TMP3214[1] = &TMP3212[2];
TMP3212[2].kind = 1;
TMP3212[2].offset = offsetof(tctx247037, Debug);
TMP3212[2].typ = (&NTI162208);
TMP3212[2].name = "debug";
TMP3214[2] = &TMP3212[3];
TMP3212[3].kind = 1;
TMP3212[3].offset = offsetof(tctx247037, Globals);
TMP3212[3].typ = (&NTI185805);
TMP3212[3].name = "globals";
TMP3214[3] = &TMP3212[4];
TMP3212[4].kind = 1;
TMP3212[4].offset = offsetof(tctx247037, Constants);
TMP3212[4].typ = (&NTI185805);
TMP3212[4].name = "constants";
TMP3214[4] = &TMP3212[5];
TMP3212[5].kind = 1;
TMP3212[5].offset = offsetof(tctx247037, Types);
TMP3212[5].typ = (&NTI185845);
TMP3212[5].name = "types";
TMP3214[5] = &TMP3212[6];
TMP3212[6].kind = 1;
TMP3212[6].offset = offsetof(tctx247037, Currentexceptiona);
TMP3212[6].typ = (&NTI185805);
TMP3212[6].name = "currentExceptionA";
TMP3214[6] = &TMP3212[7];
TMP3212[7].kind = 1;
TMP3212[7].offset = offsetof(tctx247037, Currentexceptionb);
TMP3212[7].typ = (&NTI185805);
TMP3212[7].name = "currentExceptionB";
TMP3214[7] = &TMP3212[8];
TMP3212[8].kind = 1;
TMP3212[8].offset = offsetof(tctx247037, Exceptioninstr);
TMP3212[8].typ = (&NTI106);
TMP3212[8].name = "exceptionInstr";
TMP3214[8] = &TMP3212[9];
NTI247216.size = sizeof(pprocHEX3Aobjecttype247216);
NTI247216.kind = 18;
NTI247216.base = 0;
NTI247216.flags = 2;
TMP3216[0] = &TMP3212[11];
NTI247023.size = sizeof(tblock247023);
NTI247023.kind = 18;
NTI247023.base = 0;
NTI247023.flags = 2;
TMP3217[0] = &TMP3212[13];
TMP3212[13].kind = 1;
TMP3212[13].offset = offsetof(tblock247023, Label);
TMP3212[13].typ = (&NTI185811);
TMP3212[13].name = "label";
TMP3217[1] = &TMP3212[14];
NTI247198.size = sizeof(TY247198*);
NTI247198.kind = 24;
NTI247198.base = (&NTI106);
NTI247198.flags = 2;
NTI247198.marker = TMP3218;
TMP3212[14].kind = 1;
TMP3212[14].offset = offsetof(tblock247023, Fixups);
TMP3212[14].typ = (&NTI247198);
TMP3212[14].name = "fixups";
TMP3212[12].len = 2; TMP3212[12].kind = 2; TMP3212[12].sons = &TMP3217[0];
NTI247023.node = &TMP3212[12];
NTI247217.size = sizeof(TY247217*);
NTI247217.kind = 24;
NTI247217.base = (&NTI247023);
NTI247217.flags = 2;
NTI247217.marker = TMP3219;
TMP3212[11].kind = 1;
TMP3212[11].offset = offsetof(pprocHEX3Aobjecttype247216, Blocks);
TMP3212[11].typ = (&NTI247217);
TMP3212[11].name = "blocks";
TMP3216[1] = &TMP3212[15];
TMP3212[15].kind = 1;
TMP3212[15].offset = offsetof(pprocHEX3Aobjecttype247216, Sym);
TMP3212[15].typ = (&NTI185811);
TMP3212[15].name = "sym";
TMP3216[2] = &TMP3212[16];
NTI247223.size = sizeof(TY247223);
NTI247223.kind = 18;
NTI247223.base = 0;
NTI247223.flags = 3;
TMP3220[0] = &TMP3212[18];
TMP3212[18].kind = 1;
TMP3212[18].offset = offsetof(TY247223, Field0);
TMP3212[18].typ = (&NTI134);
TMP3212[18].name = "Field0";
TMP3220[1] = &TMP3212[19];
NTI247031.size = sizeof(NU8);
NTI247031.kind = 14;
NTI247031.base = 0;
NTI247031.flags = 3;
for (TMP3223 = 0; TMP3223 < 8; TMP3223++) {
TMP3212[TMP3223+20].kind = 1;
TMP3212[TMP3223+20].offset = TMP3223;
TMP3212[TMP3223+20].name = TMP3222[TMP3223];
TMP3221[TMP3223] = &TMP3212[TMP3223+20];
}
TMP3212[28].len = 8; TMP3212[28].kind = 2; TMP3212[28].sons = &TMP3221[0];
NTI247031.node = &TMP3212[28];
TMP3212[19].kind = 1;
TMP3212[19].offset = offsetof(TY247223, Field1);
TMP3212[19].typ = (&NTI247031);
TMP3212[19].name = "Field1";
TMP3212[17].len = 2; TMP3212[17].kind = 2; TMP3212[17].sons = &TMP3220[0];
NTI247223.node = &TMP3212[17];
NTI247220.size = sizeof(TY247220);
NTI247220.kind = 16;
NTI247220.base = (&NTI247223);
NTI247220.flags = 3;
TMP3212[16].kind = 1;
TMP3212[16].offset = offsetof(pprocHEX3Aobjecttype247216, Slots);
TMP3212[16].typ = (&NTI247220);
TMP3212[16].name = "slots";
TMP3216[3] = &TMP3212[29];
TMP3212[29].kind = 1;
TMP3212[29].offset = offsetof(pprocHEX3Aobjecttype247216, Maxslots);
TMP3212[29].typ = (&NTI106);
TMP3212[29].name = "maxSlots";
TMP3212[10].len = 4; TMP3212[10].kind = 2; TMP3212[10].sons = &TMP3216[0];
NTI247216.node = &TMP3212[10];
NTI247033.size = sizeof(pprocHEX3Aobjecttype247216*);
NTI247033.kind = 22;
NTI247033.base = (&NTI247216);
NTI247033.flags = 2;
NTI247033.marker = TMP3224;
TMP3212[9].kind = 1;
TMP3212[9].offset = offsetof(tctx247037, Prc);
TMP3212[9].typ = (&NTI247033);
TMP3212[9].name = "prc";
TMP3214[9] = &TMP3212[30];
TMP3212[30].kind = 1;
TMP3212[30].offset = offsetof(tctx247037, Module);
TMP3212[30].typ = (&NTI185811);
TMP3212[30].name = "module";
TMP3214[10] = &TMP3212[31];
TMP3212[31].kind = 1;
TMP3212[31].offset = offsetof(tctx247037, Callsite);
TMP3212[31].typ = (&NTI185805);
TMP3212[31].name = "callsite";
TMP3214[11] = &TMP3212[32];
NTI247025.size = sizeof(NU8);
NTI247025.kind = 14;
NTI247025.base = 0;
NTI247025.flags = 3;
for (TMP3227 = 0; TMP3227 < 5; TMP3227++) {
TMP3212[TMP3227+33].kind = 1;
TMP3212[TMP3227+33].offset = TMP3227;
TMP3212[TMP3227+33].name = TMP3226[TMP3227];
TMP3225[TMP3227] = &TMP3212[TMP3227+33];
}
TMP3212[38].len = 5; TMP3212[38].kind = 2; TMP3212[38].sons = &TMP3225[0];
NTI247025.node = &TMP3212[38];
TMP3212[32].kind = 1;
TMP3212[32].offset = offsetof(tctx247037, Mode);
TMP3212[32].typ = (&NTI247025);
TMP3212[32].name = "mode";
TMP3214[12] = &TMP3212[39];
NTI247027.size = sizeof(NU8);
NTI247027.kind = 14;
NTI247027.base = 0;
NTI247027.flags = 3;
for (TMP3230 = 0; TMP3230 < 3; TMP3230++) {
TMP3212[TMP3230+40].kind = 1;
TMP3212[TMP3230+40].offset = TMP3230;
TMP3212[TMP3230+40].name = TMP3229[TMP3230];
TMP3228[TMP3230] = &TMP3212[TMP3230+40];
}
TMP3212[43].len = 3; TMP3212[43].kind = 2; TMP3212[43].sons = &TMP3228[0];
NTI247027.node = &TMP3212[43];
NTI247029.size = sizeof(NU8);
NTI247029.kind = 19;
NTI247029.base = (&NTI247027);
NTI247029.flags = 3;
TMP3212[44].len = 0; TMP3212[44].kind = 0;
NTI247029.node = &TMP3212[44];
TMP3212[39].kind = 1;
TMP3212[39].offset = offsetof(tctx247037, Features);
TMP3212[39].typ = (&NTI247029);
TMP3212[39].name = "features";
TMP3214[13] = &TMP3212[45];
TMP3212[45].kind = 1;
TMP3212[45].offset = offsetof(tctx247037, Traceactive);
TMP3212[45].typ = (&NTI134);
TMP3212[45].name = "traceActive";
TMP3214[14] = &TMP3212[46];
TMP3212[46].kind = 1;
TMP3212[46].offset = offsetof(tctx247037, Loopiterations);
TMP3212[46].typ = (&NTI106);
TMP3212[46].name = "loopIterations";
TMP3212[0].len = 15; TMP3212[0].kind = 2; TMP3212[0].sons = &TMP3214[0];
NTI247037.node = &TMP3212[0];
NTI247035.size = sizeof(tctx247037*);
NTI247035.kind = 22;
NTI247035.base = (&NTI247037);
NTI247035.marker = TMP3231;
NTI247021.size = sizeof(NU8);
NTI247021.kind = 14;
NTI247021.base = 0;
NTI247021.flags = 3;
for (TMP5320 = 0; TMP5320 < 153; TMP5320++) {
TMP3212[TMP5320+47].kind = 1;
TMP3212[TMP5320+47].offset = TMP5320;
TMP3212[TMP5320+47].name = TMP5319[TMP5320];
TMP5318[TMP5320] = &TMP3212[TMP5320+47];
}
TMP3212[200].len = 153; TMP3212[200].kind = 2; TMP3212[200].sons = &TMP5318[0];
NTI247021.node = &TMP3212[200];
}

