/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tctx249037 tctx249037;
typedef struct tsym187843 tsym187843;
typedef struct tpasscontext246003 tpasscontext246003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY249229 TY249229;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY164208 TY164208;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tnode187813 tnode187813;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct ttype187847 ttype187847;
typedef struct pprocHEX3Aobjecttype249216 pprocHEX3Aobjecttype249216;
typedef struct TY249217 TY249217;
typedef struct tblock249023 tblock249023;
typedef struct TY249198 TY249198;
typedef struct TY249223 TY249223;
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
typedef struct tidobj167013 tidobj167013;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tident167019 tident167019;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY187932 TY187932;
typedef struct tlistentry118017 tlistentry118017;
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
struct  tpasscontext246003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tctx249037  {
  tpasscontext246003 Sup;
TY249229* Code;
TY164208* Debug;
tnode187813* Globals;
tnode187813* Constants;
ttypeseq187845* Types;
tnode187813* Currentexceptiona;
tnode187813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype249216* Prc;
tsym187843* Module;
tnode187813* Callsite;
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
struct  tblock249023  {
tsym187843* Label;
TY249198* Fixups;
};
struct TY249223 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY249223 TY249220[256];
struct  pprocHEX3Aobjecttype249216  {
TY249217* Blocks;
tsym187843* Sym;
TY249220 Slots;
NI Maxslots;
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
typedef NU8 TY249366[20];
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
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
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
NI H;
};
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
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
struct TY249229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY164208 {
  TGenericSeq Sup;
  tlineinfo163527 data[SEQ_DECL_SIZE];
};
struct ttypeseq187845 {
  TGenericSeq Sup;
  ttype187847* data[SEQ_DECL_SIZE];
};
struct TY249198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY249217 {
  TGenericSeq Sup;
  tblock249023 data[SEQ_DECL_SIZE];
};
struct TY187943 {
  TGenericSeq Sup;
  tinstantiation187833* data[SEQ_DECL_SIZE];
};
struct tsymseq187815 {
  TGenericSeq Sup;
  tsym187843* data[SEQ_DECL_SIZE];
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tctx249037*, newctx_249249)(tsym187843* module);
N_NIMCALL(void, TMP3216)(void* p, NI op);
N_NIMCALL(void, TMP3219)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3220)(void* p, NI op);
N_NIMCALL(void, TMP3225)(void* p, NI op);
N_NIMCALL(void, TMP3232)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode187813*, newnode_188075)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, refresh_249337)(tctx249037* c, tsym187843* module);
NIM_CONST TY249366 largeinstrs_249365 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x00, 0x00}
;
NIM_CONST TY249366 relativejumps_249368 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x70, 0x00, 0x00, 0x00}
;
extern TNimType NTI246003; /* TPassContext */
TNimType NTI249037; /* TCtx */
extern TNimType NTI122; /* uint32 */
TNimType NTI249229; /* seq[TInstr] */
extern TNimType NTI164208; /* seq[TLineInfo] */
extern TNimType NTI187805; /* PNode */
extern TNimType NTI187845; /* TTypeSeq */
extern TNimType NTI106; /* int */
TNimType NTI249216; /* PProc:ObjectType */
TNimType NTI249023; /* TBlock */
extern TNimType NTI187811; /* PSym */
TNimType NTI249198; /* seq[TPosition] */
TNimType NTI249217; /* seq[TBlock] */
TNimType NTI249223; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI134; /* bool */
TNimType NTI249031; /* TSlotKind */
TNimType NTI249220; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI249033; /* PProc */
TNimType NTI249025; /* TEvalMode */
TNimType NTI249027; /* TSandboxFlag */
TNimType NTI249029; /* TSandboxFlags */
TNimType NTI249035; /* PCtx */
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
TNimType NTI249021; /* TOpcode */
N_NIMCALL(void, TMP3216)(void* p, NI op) {
	TY249229* a;
	NI LOC1;
	a = (TY249229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3219)(void* p, NI op) {
	TY249198* a;
	NI LOC1;
	a = (TY249198*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3220)(void* p, NI op) {
	TY249217* a;
	NI LOC1;
	a = (TY249217*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP3225)(void* p, NI op) {
	pprocHEX3Aobjecttype249216* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype249216*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP3232)(void* p, NI op) {
	tctx249037* a;
	a = (tctx249037*)p;
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

N_NIMCALL(tctx249037*, newctx_249249)(tsym187843* module) {
	tctx249037* result;
	tctx249037* LOC1;
	pprocHEX3Aobjecttype249216* LOC2;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(197, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (tctx249037*) newObj((&NTI249035), sizeof(tctx249037));
	(*LOC1).Sup.Sup.m_type = (&NTI249037);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY249229*) newSeqRC1((&NTI249229), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY164208*) newSeqRC1((&NTI164208), 0);
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_188075(((NU8) 125)));
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_188075(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq187845*) newSeqRC1((&NTI187845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype249216*) newObj((&NTI249033), sizeof(pprocHEX3Aobjecttype249216));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY249217*) newSeqRC1((&NTI249217), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_249337)(tctx249037* c, tsym187843* module) {
	pprocHEX3Aobjecttype249216* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(202, "vmdef.nim");
	asgnRefNoCycle((void**) &(*c).Module, module);
	nimln(203, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype249216*) newObj((&NTI249033), sizeof(pprocHEX3Aobjecttype249216));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY249217*) newSeqRC1((&NTI249217), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
	popFrame();
}
N_NOINLINE(void, vmdefInit)(void) {
	nimfr("vmdef", "vmdef.nim")
	popFrame();
}

N_NOINLINE(void, vmdefDatInit)(void) {
static TNimNode* TMP3215[15];
static TNimNode* TMP3217[4];
static TNimNode* TMP3218[2];
static TNimNode* TMP3221[2];
static TNimNode* TMP3222[8];
NI TMP3224;
static char* NIM_CONST TMP3223[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP3226[5];
NI TMP3228;
static char* NIM_CONST TMP3227[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP3229[3];
NI TMP3231;
static char* NIM_CONST TMP3230[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP5319[153];
NI TMP5321;
static char* NIM_CONST TMP5320[153] = {
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
static TNimNode TMP3213[201];
NTI249037.size = sizeof(tctx249037);
NTI249037.kind = 17;
NTI249037.base = (&NTI246003);
TMP3215[0] = &TMP3213[1];
NTI249229.size = sizeof(TY249229*);
NTI249229.kind = 24;
NTI249229.base = (&NTI122);
NTI249229.flags = 2;
NTI249229.marker = TMP3216;
TMP3213[1].kind = 1;
TMP3213[1].offset = offsetof(tctx249037, Code);
TMP3213[1].typ = (&NTI249229);
TMP3213[1].name = "code";
TMP3215[1] = &TMP3213[2];
TMP3213[2].kind = 1;
TMP3213[2].offset = offsetof(tctx249037, Debug);
TMP3213[2].typ = (&NTI164208);
TMP3213[2].name = "debug";
TMP3215[2] = &TMP3213[3];
TMP3213[3].kind = 1;
TMP3213[3].offset = offsetof(tctx249037, Globals);
TMP3213[3].typ = (&NTI187805);
TMP3213[3].name = "globals";
TMP3215[3] = &TMP3213[4];
TMP3213[4].kind = 1;
TMP3213[4].offset = offsetof(tctx249037, Constants);
TMP3213[4].typ = (&NTI187805);
TMP3213[4].name = "constants";
TMP3215[4] = &TMP3213[5];
TMP3213[5].kind = 1;
TMP3213[5].offset = offsetof(tctx249037, Types);
TMP3213[5].typ = (&NTI187845);
TMP3213[5].name = "types";
TMP3215[5] = &TMP3213[6];
TMP3213[6].kind = 1;
TMP3213[6].offset = offsetof(tctx249037, Currentexceptiona);
TMP3213[6].typ = (&NTI187805);
TMP3213[6].name = "currentExceptionA";
TMP3215[6] = &TMP3213[7];
TMP3213[7].kind = 1;
TMP3213[7].offset = offsetof(tctx249037, Currentexceptionb);
TMP3213[7].typ = (&NTI187805);
TMP3213[7].name = "currentExceptionB";
TMP3215[7] = &TMP3213[8];
TMP3213[8].kind = 1;
TMP3213[8].offset = offsetof(tctx249037, Exceptioninstr);
TMP3213[8].typ = (&NTI106);
TMP3213[8].name = "exceptionInstr";
TMP3215[8] = &TMP3213[9];
NTI249216.size = sizeof(pprocHEX3Aobjecttype249216);
NTI249216.kind = 18;
NTI249216.base = 0;
NTI249216.flags = 2;
TMP3217[0] = &TMP3213[11];
NTI249023.size = sizeof(tblock249023);
NTI249023.kind = 18;
NTI249023.base = 0;
NTI249023.flags = 2;
TMP3218[0] = &TMP3213[13];
TMP3213[13].kind = 1;
TMP3213[13].offset = offsetof(tblock249023, Label);
TMP3213[13].typ = (&NTI187811);
TMP3213[13].name = "label";
TMP3218[1] = &TMP3213[14];
NTI249198.size = sizeof(TY249198*);
NTI249198.kind = 24;
NTI249198.base = (&NTI106);
NTI249198.flags = 2;
NTI249198.marker = TMP3219;
TMP3213[14].kind = 1;
TMP3213[14].offset = offsetof(tblock249023, Fixups);
TMP3213[14].typ = (&NTI249198);
TMP3213[14].name = "fixups";
TMP3213[12].len = 2; TMP3213[12].kind = 2; TMP3213[12].sons = &TMP3218[0];
NTI249023.node = &TMP3213[12];
NTI249217.size = sizeof(TY249217*);
NTI249217.kind = 24;
NTI249217.base = (&NTI249023);
NTI249217.flags = 2;
NTI249217.marker = TMP3220;
TMP3213[11].kind = 1;
TMP3213[11].offset = offsetof(pprocHEX3Aobjecttype249216, Blocks);
TMP3213[11].typ = (&NTI249217);
TMP3213[11].name = "blocks";
TMP3217[1] = &TMP3213[15];
TMP3213[15].kind = 1;
TMP3213[15].offset = offsetof(pprocHEX3Aobjecttype249216, Sym);
TMP3213[15].typ = (&NTI187811);
TMP3213[15].name = "sym";
TMP3217[2] = &TMP3213[16];
NTI249223.size = sizeof(TY249223);
NTI249223.kind = 18;
NTI249223.base = 0;
NTI249223.flags = 3;
TMP3221[0] = &TMP3213[18];
TMP3213[18].kind = 1;
TMP3213[18].offset = offsetof(TY249223, Field0);
TMP3213[18].typ = (&NTI134);
TMP3213[18].name = "Field0";
TMP3221[1] = &TMP3213[19];
NTI249031.size = sizeof(NU8);
NTI249031.kind = 14;
NTI249031.base = 0;
NTI249031.flags = 3;
for (TMP3224 = 0; TMP3224 < 8; TMP3224++) {
TMP3213[TMP3224+20].kind = 1;
TMP3213[TMP3224+20].offset = TMP3224;
TMP3213[TMP3224+20].name = TMP3223[TMP3224];
TMP3222[TMP3224] = &TMP3213[TMP3224+20];
}
TMP3213[28].len = 8; TMP3213[28].kind = 2; TMP3213[28].sons = &TMP3222[0];
NTI249031.node = &TMP3213[28];
TMP3213[19].kind = 1;
TMP3213[19].offset = offsetof(TY249223, Field1);
TMP3213[19].typ = (&NTI249031);
TMP3213[19].name = "Field1";
TMP3213[17].len = 2; TMP3213[17].kind = 2; TMP3213[17].sons = &TMP3221[0];
NTI249223.node = &TMP3213[17];
NTI249220.size = sizeof(TY249220);
NTI249220.kind = 16;
NTI249220.base = (&NTI249223);
NTI249220.flags = 3;
TMP3213[16].kind = 1;
TMP3213[16].offset = offsetof(pprocHEX3Aobjecttype249216, Slots);
TMP3213[16].typ = (&NTI249220);
TMP3213[16].name = "slots";
TMP3217[3] = &TMP3213[29];
TMP3213[29].kind = 1;
TMP3213[29].offset = offsetof(pprocHEX3Aobjecttype249216, Maxslots);
TMP3213[29].typ = (&NTI106);
TMP3213[29].name = "maxSlots";
TMP3213[10].len = 4; TMP3213[10].kind = 2; TMP3213[10].sons = &TMP3217[0];
NTI249216.node = &TMP3213[10];
NTI249033.size = sizeof(pprocHEX3Aobjecttype249216*);
NTI249033.kind = 22;
NTI249033.base = (&NTI249216);
NTI249033.flags = 2;
NTI249033.marker = TMP3225;
TMP3213[9].kind = 1;
TMP3213[9].offset = offsetof(tctx249037, Prc);
TMP3213[9].typ = (&NTI249033);
TMP3213[9].name = "prc";
TMP3215[9] = &TMP3213[30];
TMP3213[30].kind = 1;
TMP3213[30].offset = offsetof(tctx249037, Module);
TMP3213[30].typ = (&NTI187811);
TMP3213[30].name = "module";
TMP3215[10] = &TMP3213[31];
TMP3213[31].kind = 1;
TMP3213[31].offset = offsetof(tctx249037, Callsite);
TMP3213[31].typ = (&NTI187805);
TMP3213[31].name = "callsite";
TMP3215[11] = &TMP3213[32];
NTI249025.size = sizeof(NU8);
NTI249025.kind = 14;
NTI249025.base = 0;
NTI249025.flags = 3;
for (TMP3228 = 0; TMP3228 < 5; TMP3228++) {
TMP3213[TMP3228+33].kind = 1;
TMP3213[TMP3228+33].offset = TMP3228;
TMP3213[TMP3228+33].name = TMP3227[TMP3228];
TMP3226[TMP3228] = &TMP3213[TMP3228+33];
}
TMP3213[38].len = 5; TMP3213[38].kind = 2; TMP3213[38].sons = &TMP3226[0];
NTI249025.node = &TMP3213[38];
TMP3213[32].kind = 1;
TMP3213[32].offset = offsetof(tctx249037, Mode);
TMP3213[32].typ = (&NTI249025);
TMP3213[32].name = "mode";
TMP3215[12] = &TMP3213[39];
NTI249027.size = sizeof(NU8);
NTI249027.kind = 14;
NTI249027.base = 0;
NTI249027.flags = 3;
for (TMP3231 = 0; TMP3231 < 3; TMP3231++) {
TMP3213[TMP3231+40].kind = 1;
TMP3213[TMP3231+40].offset = TMP3231;
TMP3213[TMP3231+40].name = TMP3230[TMP3231];
TMP3229[TMP3231] = &TMP3213[TMP3231+40];
}
TMP3213[43].len = 3; TMP3213[43].kind = 2; TMP3213[43].sons = &TMP3229[0];
NTI249027.node = &TMP3213[43];
NTI249029.size = sizeof(NU8);
NTI249029.kind = 19;
NTI249029.base = (&NTI249027);
NTI249029.flags = 3;
TMP3213[44].len = 0; TMP3213[44].kind = 0;
NTI249029.node = &TMP3213[44];
TMP3213[39].kind = 1;
TMP3213[39].offset = offsetof(tctx249037, Features);
TMP3213[39].typ = (&NTI249029);
TMP3213[39].name = "features";
TMP3215[13] = &TMP3213[45];
TMP3213[45].kind = 1;
TMP3213[45].offset = offsetof(tctx249037, Traceactive);
TMP3213[45].typ = (&NTI134);
TMP3213[45].name = "traceActive";
TMP3215[14] = &TMP3213[46];
TMP3213[46].kind = 1;
TMP3213[46].offset = offsetof(tctx249037, Loopiterations);
TMP3213[46].typ = (&NTI106);
TMP3213[46].name = "loopIterations";
TMP3213[0].len = 15; TMP3213[0].kind = 2; TMP3213[0].sons = &TMP3215[0];
NTI249037.node = &TMP3213[0];
NTI249035.size = sizeof(tctx249037*);
NTI249035.kind = 22;
NTI249035.base = (&NTI249037);
NTI249035.marker = TMP3232;
NTI249021.size = sizeof(NU8);
NTI249021.kind = 14;
NTI249021.base = 0;
NTI249021.flags = 3;
for (TMP5321 = 0; TMP5321 < 153; TMP5321++) {
TMP3213[TMP5321+47].kind = 1;
TMP3213[TMP5321+47].offset = TMP5321;
TMP3213[TMP5321+47].name = TMP5320[TMP5321];
TMP5319[TMP5321] = &TMP3213[TMP5321+47];
}
TMP3213[200].len = 153; TMP3213[200].kind = 2; TMP3213[200].sons = &TMP5319[0];
NTI249021.node = &TMP3213[200];
}

