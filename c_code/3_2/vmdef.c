/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tctx248037 tctx248037;
typedef struct tsym186843 tsym186843;
typedef struct tpasscontext245003 tpasscontext245003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY248229 TY248229;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY163208 TY163208;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tnode186813 tnode186813;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct ttype186847 ttype186847;
typedef struct pprocHEX3Aobjecttype248216 pprocHEX3Aobjecttype248216;
typedef struct TY248217 TY248217;
typedef struct tblock248023 tblock248023;
typedef struct TY248198 TY248198;
typedef struct TY248223 TY248223;
typedef struct tcell41490 tcell41490;
typedef struct tcellseq41506 tcellseq41506;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellset41502 tcellset41502;
typedef struct tpagedesc41498 tpagedesc41498;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
typedef struct tidobj166013 tidobj166013;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tident166019 tident166019;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
typedef struct TY186932 TY186932;
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
struct  tpasscontext245003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tctx248037  {
  tpasscontext245003 Sup;
TY248229* Code;
TY163208* Debug;
tnode186813* Globals;
tnode186813* Constants;
ttypeseq186845* Types;
tnode186813* Currentexceptiona;
tnode186813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype248216* Prc;
tsym186843* Module;
tnode186813* Callsite;
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
struct  tblock248023  {
tsym186843* Label;
TY248198* Fixups;
};
struct TY248223 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY248223 TY248220[256];
struct  pprocHEX3Aobjecttype248216  {
TY248217* Blocks;
tsym186843* Sym;
TY248220 Slots;
NI Maxslots;
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
typedef NU8 TY248366[20];
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tfreecell23028  {
tfreecell23028* Next;
NI Zerofield;
};
struct TY248229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163208 {
  TGenericSeq Sup;
  tlineinfo162527 data[SEQ_DECL_SIZE];
};
struct ttypeseq186845 {
  TGenericSeq Sup;
  ttype186847* data[SEQ_DECL_SIZE];
};
struct TY248198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY248217 {
  TGenericSeq Sup;
  tblock248023 data[SEQ_DECL_SIZE];
};
struct TY186943 {
  TGenericSeq Sup;
  tinstantiation186833* data[SEQ_DECL_SIZE];
};
struct tsymseq186815 {
  TGenericSeq Sup;
  tsym186843* data[SEQ_DECL_SIZE];
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tctx248037*, newctx_248249)(tsym186843* module);
N_NIMCALL(void, TMP3210)(void* p, NI op);
N_NIMCALL(void, TMP3213)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3214)(void* p, NI op);
N_NIMCALL(void, TMP3219)(void* p, NI op);
N_NIMCALL(void, TMP3226)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode186813*, newnode_187075)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, refresh_248337)(tctx248037* c, tsym186843* module);
NIM_CONST TY248366 largeinstrs_248365 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x00, 0x00}
;
NIM_CONST TY248366 relativejumps_248368 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x70, 0x00, 0x00, 0x00}
;
extern TNimType NTI245003; /* TPassContext */
TNimType NTI248037; /* TCtx */
extern TNimType NTI122; /* uint32 */
TNimType NTI248229; /* seq[TInstr] */
extern TNimType NTI163208; /* seq[TLineInfo] */
extern TNimType NTI186805; /* PNode */
extern TNimType NTI186845; /* TTypeSeq */
extern TNimType NTI106; /* int */
TNimType NTI248216; /* PProc:ObjectType */
TNimType NTI248023; /* TBlock */
extern TNimType NTI186811; /* PSym */
TNimType NTI248198; /* seq[TPosition] */
TNimType NTI248217; /* seq[TBlock] */
TNimType NTI248223; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI134; /* bool */
TNimType NTI248031; /* TSlotKind */
TNimType NTI248220; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI248033; /* PProc */
TNimType NTI248025; /* TEvalMode */
TNimType NTI248027; /* TSandboxFlag */
TNimType NTI248029; /* TSandboxFlags */
TNimType NTI248035; /* PCtx */
extern TFrame* frameptr_13238;
extern tgcheap43416 gch_43444;
TNimType NTI248021; /* TOpcode */
N_NIMCALL(void, TMP3210)(void* p, NI op) {
	TY248229* a;
	NI LOC1;
	a = (TY248229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3213)(void* p, NI op) {
	TY248198* a;
	NI LOC1;
	a = (TY248198*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3214)(void* p, NI op) {
	TY248217* a;
	NI LOC1;
	a = (TY248217*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP3219)(void* p, NI op) {
	pprocHEX3Aobjecttype248216* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype248216*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP3226)(void* p, NI op) {
	tctx248037* a;
	a = (tctx248037*)p;
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
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41490* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44843(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46402(c);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(tctx248037*, newctx_248249)(tsym186843* module) {
	tctx248037* result;
	tctx248037* LOC1;
	pprocHEX3Aobjecttype248216* LOC2;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(197, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (tctx248037*) newObj((&NTI248035), sizeof(tctx248037));
	(*LOC1).Sup.Sup.m_type = (&NTI248037);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY248229*) newSeqRC1((&NTI248229), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY163208*) newSeqRC1((&NTI163208), 0);
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_187075(((NU8) 125)));
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_187075(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq186845*) newSeqRC1((&NTI186845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype248216*) newObj((&NTI248033), sizeof(pprocHEX3Aobjecttype248216));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY248217*) newSeqRC1((&NTI248217), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_248337)(tctx248037* c, tsym186843* module) {
	pprocHEX3Aobjecttype248216* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(202, "vmdef.nim");
	asgnRefNoCycle((void**) &(*c).Module, module);
	nimln(203, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype248216*) newObj((&NTI248033), sizeof(pprocHEX3Aobjecttype248216));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY248217*) newSeqRC1((&NTI248217), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
	popFrame();
}
N_NOINLINE(void, vmdefInit)(void) {
	nimfr("vmdef", "vmdef.nim")
	popFrame();
}

N_NOINLINE(void, vmdefDatInit)(void) {
static TNimNode* TMP3209[15];
static TNimNode* TMP3211[4];
static TNimNode* TMP3212[2];
static TNimNode* TMP3215[2];
static TNimNode* TMP3216[8];
NI TMP3218;
static char* NIM_CONST TMP3217[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP3220[5];
NI TMP3222;
static char* NIM_CONST TMP3221[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP3223[3];
NI TMP3225;
static char* NIM_CONST TMP3224[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP5313[153];
NI TMP5315;
static char* NIM_CONST TMP5314[153] = {
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
static TNimNode TMP3207[201];
NTI248037.size = sizeof(tctx248037);
NTI248037.kind = 17;
NTI248037.base = (&NTI245003);
TMP3209[0] = &TMP3207[1];
NTI248229.size = sizeof(TY248229*);
NTI248229.kind = 24;
NTI248229.base = (&NTI122);
NTI248229.flags = 2;
NTI248229.marker = TMP3210;
TMP3207[1].kind = 1;
TMP3207[1].offset = offsetof(tctx248037, Code);
TMP3207[1].typ = (&NTI248229);
TMP3207[1].name = "code";
TMP3209[1] = &TMP3207[2];
TMP3207[2].kind = 1;
TMP3207[2].offset = offsetof(tctx248037, Debug);
TMP3207[2].typ = (&NTI163208);
TMP3207[2].name = "debug";
TMP3209[2] = &TMP3207[3];
TMP3207[3].kind = 1;
TMP3207[3].offset = offsetof(tctx248037, Globals);
TMP3207[3].typ = (&NTI186805);
TMP3207[3].name = "globals";
TMP3209[3] = &TMP3207[4];
TMP3207[4].kind = 1;
TMP3207[4].offset = offsetof(tctx248037, Constants);
TMP3207[4].typ = (&NTI186805);
TMP3207[4].name = "constants";
TMP3209[4] = &TMP3207[5];
TMP3207[5].kind = 1;
TMP3207[5].offset = offsetof(tctx248037, Types);
TMP3207[5].typ = (&NTI186845);
TMP3207[5].name = "types";
TMP3209[5] = &TMP3207[6];
TMP3207[6].kind = 1;
TMP3207[6].offset = offsetof(tctx248037, Currentexceptiona);
TMP3207[6].typ = (&NTI186805);
TMP3207[6].name = "currentExceptionA";
TMP3209[6] = &TMP3207[7];
TMP3207[7].kind = 1;
TMP3207[7].offset = offsetof(tctx248037, Currentexceptionb);
TMP3207[7].typ = (&NTI186805);
TMP3207[7].name = "currentExceptionB";
TMP3209[7] = &TMP3207[8];
TMP3207[8].kind = 1;
TMP3207[8].offset = offsetof(tctx248037, Exceptioninstr);
TMP3207[8].typ = (&NTI106);
TMP3207[8].name = "exceptionInstr";
TMP3209[8] = &TMP3207[9];
NTI248216.size = sizeof(pprocHEX3Aobjecttype248216);
NTI248216.kind = 18;
NTI248216.base = 0;
NTI248216.flags = 2;
TMP3211[0] = &TMP3207[11];
NTI248023.size = sizeof(tblock248023);
NTI248023.kind = 18;
NTI248023.base = 0;
NTI248023.flags = 2;
TMP3212[0] = &TMP3207[13];
TMP3207[13].kind = 1;
TMP3207[13].offset = offsetof(tblock248023, Label);
TMP3207[13].typ = (&NTI186811);
TMP3207[13].name = "label";
TMP3212[1] = &TMP3207[14];
NTI248198.size = sizeof(TY248198*);
NTI248198.kind = 24;
NTI248198.base = (&NTI106);
NTI248198.flags = 2;
NTI248198.marker = TMP3213;
TMP3207[14].kind = 1;
TMP3207[14].offset = offsetof(tblock248023, Fixups);
TMP3207[14].typ = (&NTI248198);
TMP3207[14].name = "fixups";
TMP3207[12].len = 2; TMP3207[12].kind = 2; TMP3207[12].sons = &TMP3212[0];
NTI248023.node = &TMP3207[12];
NTI248217.size = sizeof(TY248217*);
NTI248217.kind = 24;
NTI248217.base = (&NTI248023);
NTI248217.flags = 2;
NTI248217.marker = TMP3214;
TMP3207[11].kind = 1;
TMP3207[11].offset = offsetof(pprocHEX3Aobjecttype248216, Blocks);
TMP3207[11].typ = (&NTI248217);
TMP3207[11].name = "blocks";
TMP3211[1] = &TMP3207[15];
TMP3207[15].kind = 1;
TMP3207[15].offset = offsetof(pprocHEX3Aobjecttype248216, Sym);
TMP3207[15].typ = (&NTI186811);
TMP3207[15].name = "sym";
TMP3211[2] = &TMP3207[16];
NTI248223.size = sizeof(TY248223);
NTI248223.kind = 18;
NTI248223.base = 0;
NTI248223.flags = 3;
TMP3215[0] = &TMP3207[18];
TMP3207[18].kind = 1;
TMP3207[18].offset = offsetof(TY248223, Field0);
TMP3207[18].typ = (&NTI134);
TMP3207[18].name = "Field0";
TMP3215[1] = &TMP3207[19];
NTI248031.size = sizeof(NU8);
NTI248031.kind = 14;
NTI248031.base = 0;
NTI248031.flags = 3;
for (TMP3218 = 0; TMP3218 < 8; TMP3218++) {
TMP3207[TMP3218+20].kind = 1;
TMP3207[TMP3218+20].offset = TMP3218;
TMP3207[TMP3218+20].name = TMP3217[TMP3218];
TMP3216[TMP3218] = &TMP3207[TMP3218+20];
}
TMP3207[28].len = 8; TMP3207[28].kind = 2; TMP3207[28].sons = &TMP3216[0];
NTI248031.node = &TMP3207[28];
TMP3207[19].kind = 1;
TMP3207[19].offset = offsetof(TY248223, Field1);
TMP3207[19].typ = (&NTI248031);
TMP3207[19].name = "Field1";
TMP3207[17].len = 2; TMP3207[17].kind = 2; TMP3207[17].sons = &TMP3215[0];
NTI248223.node = &TMP3207[17];
NTI248220.size = sizeof(TY248220);
NTI248220.kind = 16;
NTI248220.base = (&NTI248223);
NTI248220.flags = 3;
TMP3207[16].kind = 1;
TMP3207[16].offset = offsetof(pprocHEX3Aobjecttype248216, Slots);
TMP3207[16].typ = (&NTI248220);
TMP3207[16].name = "slots";
TMP3211[3] = &TMP3207[29];
TMP3207[29].kind = 1;
TMP3207[29].offset = offsetof(pprocHEX3Aobjecttype248216, Maxslots);
TMP3207[29].typ = (&NTI106);
TMP3207[29].name = "maxSlots";
TMP3207[10].len = 4; TMP3207[10].kind = 2; TMP3207[10].sons = &TMP3211[0];
NTI248216.node = &TMP3207[10];
NTI248033.size = sizeof(pprocHEX3Aobjecttype248216*);
NTI248033.kind = 22;
NTI248033.base = (&NTI248216);
NTI248033.flags = 2;
NTI248033.marker = TMP3219;
TMP3207[9].kind = 1;
TMP3207[9].offset = offsetof(tctx248037, Prc);
TMP3207[9].typ = (&NTI248033);
TMP3207[9].name = "prc";
TMP3209[9] = &TMP3207[30];
TMP3207[30].kind = 1;
TMP3207[30].offset = offsetof(tctx248037, Module);
TMP3207[30].typ = (&NTI186811);
TMP3207[30].name = "module";
TMP3209[10] = &TMP3207[31];
TMP3207[31].kind = 1;
TMP3207[31].offset = offsetof(tctx248037, Callsite);
TMP3207[31].typ = (&NTI186805);
TMP3207[31].name = "callsite";
TMP3209[11] = &TMP3207[32];
NTI248025.size = sizeof(NU8);
NTI248025.kind = 14;
NTI248025.base = 0;
NTI248025.flags = 3;
for (TMP3222 = 0; TMP3222 < 5; TMP3222++) {
TMP3207[TMP3222+33].kind = 1;
TMP3207[TMP3222+33].offset = TMP3222;
TMP3207[TMP3222+33].name = TMP3221[TMP3222];
TMP3220[TMP3222] = &TMP3207[TMP3222+33];
}
TMP3207[38].len = 5; TMP3207[38].kind = 2; TMP3207[38].sons = &TMP3220[0];
NTI248025.node = &TMP3207[38];
TMP3207[32].kind = 1;
TMP3207[32].offset = offsetof(tctx248037, Mode);
TMP3207[32].typ = (&NTI248025);
TMP3207[32].name = "mode";
TMP3209[12] = &TMP3207[39];
NTI248027.size = sizeof(NU8);
NTI248027.kind = 14;
NTI248027.base = 0;
NTI248027.flags = 3;
for (TMP3225 = 0; TMP3225 < 3; TMP3225++) {
TMP3207[TMP3225+40].kind = 1;
TMP3207[TMP3225+40].offset = TMP3225;
TMP3207[TMP3225+40].name = TMP3224[TMP3225];
TMP3223[TMP3225] = &TMP3207[TMP3225+40];
}
TMP3207[43].len = 3; TMP3207[43].kind = 2; TMP3207[43].sons = &TMP3223[0];
NTI248027.node = &TMP3207[43];
NTI248029.size = sizeof(NU8);
NTI248029.kind = 19;
NTI248029.base = (&NTI248027);
NTI248029.flags = 3;
TMP3207[44].len = 0; TMP3207[44].kind = 0;
NTI248029.node = &TMP3207[44];
TMP3207[39].kind = 1;
TMP3207[39].offset = offsetof(tctx248037, Features);
TMP3207[39].typ = (&NTI248029);
TMP3207[39].name = "features";
TMP3209[13] = &TMP3207[45];
TMP3207[45].kind = 1;
TMP3207[45].offset = offsetof(tctx248037, Traceactive);
TMP3207[45].typ = (&NTI134);
TMP3207[45].name = "traceActive";
TMP3209[14] = &TMP3207[46];
TMP3207[46].kind = 1;
TMP3207[46].offset = offsetof(tctx248037, Loopiterations);
TMP3207[46].typ = (&NTI106);
TMP3207[46].name = "loopIterations";
TMP3207[0].len = 15; TMP3207[0].kind = 2; TMP3207[0].sons = &TMP3209[0];
NTI248037.node = &TMP3207[0];
NTI248035.size = sizeof(tctx248037*);
NTI248035.kind = 22;
NTI248035.base = (&NTI248037);
NTI248035.marker = TMP3226;
NTI248021.size = sizeof(NU8);
NTI248021.kind = 14;
NTI248021.base = 0;
NTI248021.flags = 3;
for (TMP5315 = 0; TMP5315 < 153; TMP5315++) {
TMP3207[TMP5315+47].kind = 1;
TMP3207[TMP5315+47].offset = TMP5315;
TMP3207[TMP5315+47].name = TMP5314[TMP5315];
TMP5313[TMP5315] = &TMP3207[TMP5315+47];
}
TMP3207[200].len = 153; TMP3207[200].kind = 2; TMP3207[200].sons = &TMP5313[0];
NTI248021.node = &TMP3207[200];
}

