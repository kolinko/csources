/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tprocess127203 tprocess127203;
typedef struct tstream124629 tstream124629;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tsym187843 tsym187843;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tnode187813 tnode187813;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct ttype187847 ttype187847;
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
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tident167019 tident167019;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY187932 TY187932;
typedef struct tlistentry118017 tlistentry118017;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  TNimObject  {
TNimType* m_type;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tnode187813* TY188883[1];
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
struct  tprocess127203  {
  TNimObject Sup;
int Inhandle;
int Outhandle;
int Errhandle;
tstream124629* Instream;
tstream124629* Outstream;
tstream124629* Errstream;
pid_t Id;
int Exitcode;
};
typedef N_NIMCALL_PTR(void, TY124630) (tstream124629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY124634) (tstream124629* s);
typedef N_NIMCALL_PTR(void, TY124638) (tstream124629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY124643) (tstream124629* s);
typedef N_NIMCALL_PTR(NI, TY124647) (tstream124629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY124653) (tstream124629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY124659) (tstream124629* s);
struct  tstream124629  {
  TNimObject Sup;
TY124630 Closeimpl;
TY124634 Atendimpl;
TY124638 Setpositionimpl;
TY124643 Getpositionimpl;
TY124647 Readdataimpl;
TY124653 Writedataimpl;
TY124659 Flushimpl;
};
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
N_NIMCALL(NimStringDesc*, readoutput_390006)(tprocess127203* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tstream124629*, nospoutputStream)(tprocess127203* p);
N_NIMCALL(NI, nospwaitForExit)(tprocess127203* p, NI timeout);
N_NIMCALL(NIM_BOOL, atend_124694)(tstream124629* s);
N_NIMCALL(NimStringDesc*, readline_125017)(tstream124629* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, opgorge_390014)(NimStringDesc* cmd, NimStringDesc* input);
N_NIMCALL(tprocess127203*, startcmd_127434)(NimStringDesc* command, NU8 options);
N_NIMCALL(void, write_124774)(tstream124629* s, NimStringDesc* x);
N_NIMCALL(tstream124629*, nospinputStream)(tprocess127203* p);
N_NIMCALL(void, close_124676)(tstream124629* s);
N_NIMCALL(NimStringDesc*, opslurp_390022)(NimStringDesc* file, tlineinfo163527 info, tsym187843* module);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_138306)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_10440)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_188832)(tsym187843* m, tnode187813* n);
N_NIMCALL(tnode187813*, newnode_190003)(NU8 kind, tlineinfo163527 info, tnodeseq187807* sons, ttype187847* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tnode187813*, newstrnode_188095)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(void, localerror_165571)(tlineinfo163527 info, NU16 msg, NimStringDesc* arg);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41288* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41288* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41288* c);
N_NOINLINE(void, incl_42055)(tcellset41300* s, tcell41288* cell);
static N_INLINE(void, decref_46602)(tcell41288* c);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5459, "", 0);
extern TFrame* frameptr_13038;
extern TSafePoint* exchandler_13039;
extern TNimType NTI187807; /* TNodeSeq */
extern tgcheap43216 gch_43244;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13041;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NimStringDesc*, readoutput_390006)(tprocess127203* p) {
	NimStringDesc* result;
	tstream124629* output;
	NI LOC1;
	nimfr("readOutput", "vmdeps.nim")
	result = 0;
	nimln(13, "vmdeps.nim");
	result = copyString(((NimStringDesc*) &TMP5459));
	nimln(14, "vmdeps.nim");
	output = nospoutputStream(p);
	nimln(15, "vmdeps.nim");
	nimln(15, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = nospwaitForExit(p, -1);
	nimln(16, "vmdeps.nim");
	while (1) {
		NIM_BOOL LOC3;
		NimStringDesc* LOC4;
		nimln(16, "vmdeps.nim");
		nimln(16, "vmdeps.nim");
		LOC3 = 0;
		LOC3 = atend_124694(output);
		if (!!(LOC3)) goto LA2;
		nimln(17, "vmdeps.nim");
		nimln(17, "vmdeps.nim");
		LOC4 = 0;
		LOC4 = readline_125017(output);
		result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
	} LA2: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_390014)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* result;
	tprocess127203* p;
	nimfr("opGorge", "vmdeps.nim")
	result = 0;
	nimln(20, "vmdeps.nim");
	p = startcmd_127434(cmd, 10);
	nimln(21, "vmdeps.nim");
	{
		tstream124629* LOC5;
		tstream124629* LOC6;
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		if (!!((input->Sup.len == 0))) goto LA3;
		nimln(22, "vmdeps.nim");
		nimln(22, "vmdeps.nim");
		LOC5 = 0;
		LOC5 = nospinputStream(p);
		write_124774(LOC5, input);
		nimln(23, "vmdeps.nim");
		nimln(23, "vmdeps.nim");
		LOC6 = 0;
		LOC6 = nospinputStream(p);
		close_124676(LOC6);
	}
	LA3: ;
	nimln(24, "vmdeps.nim");
	result = readoutput_390006(p);
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
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

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13039 = (*exchandler_13039).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13038 = s;
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

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41288* c) {
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

static N_INLINE(void, rtladdcycleroot_45435)(tcell41288* c) {
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

static N_INLINE(void, incref_47027)(tcell41288* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
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

static N_INLINE(void, decref_46602)(tcell41288* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
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
		tcell41288* LOC5;
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
		tcell41288* LOC10;
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

N_NIMCALL(NimStringDesc*, opslurp_390022)(NimStringDesc* file, tlineinfo163527 info, tsym187843* module) {
	NimStringDesc* result;
	TSafePoint TMP5460;
	nimfr("opSlurp", "vmdeps.nim")
	result = 0;
	nimln(27, "vmdeps.nim");
	pushSafePoint(&TMP5460);
	TMP5460.status = setjmp(TMP5460.context);
	if (TMP5460.status == 0) {
		NimStringDesc* volatile filename;
		tnodeseq187807* LOC2;
		TY188883 LOC3;
		tnode187813* LOC4;
		nimln(28, "vmdeps.nim");
		filename = findfile_138306(file);
		nimln(29, "vmdeps.nim");
		result = readfile_10440(filename);
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		LOC2 = 0;
		LOC2 = (tnodeseq187807*) newSeq((&NTI187807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		nimln(33, "vmdeps.nim");
		LOC3[0] = newstrnode_188095(((NU8) 20), filename);
		asgnRefNoCycle((void**) &LOC2->data[0], LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_190003(((NU8) 120), info, LOC2, NIM_NIL);
		appendtomodule_188832(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&F);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
			TMP5460.status = 0;
			nimln(35, "vmdeps.nim");
			localerror_165571(info, ((NU16) 3), file);
			nimln(36, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP5459));
			popCurrentException();
		}
	}
	if (TMP5460.status != 0) reraiseException();
	popFrame();
	return result;
}
N_NOINLINE(void, vmdepsInit)(void) {
	nimfr("vmdeps", "vmdeps.nim")
	popFrame();
}

N_NOINLINE(void, vmdepsDatInit)(void) {
}

