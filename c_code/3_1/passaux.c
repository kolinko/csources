/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tpasscontext245003 tpasscontext245003;
typedef struct tsym186843 tsym186843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct ttype186847 ttype186847;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tident166019 tident166019;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tnode186813 tnode186813;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tpass245015 tpass245015;
typedef struct trodreader235024 trodreader235024;
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
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tindex235022 tindex235022;
typedef struct tiitable195207 tiitable195207;
typedef struct tiipairseq195205 tiipairseq195205;
typedef struct tiipair195203 tiipair195203;
typedef struct tidtable186859 tidtable186859;
typedef struct tidpairseq186857 tidpairseq186857;
typedef struct tidpair186855 tidpair186855;
typedef struct tmemfile233204 tmemfile233204;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
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
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
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
typedef NU8 TY187025[20];
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
struct  tpasscontext245003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY23018[16];
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
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq195205 {
  TGenericSeq Sup;
  tiipair195203 data[SEQ_DECL_SIZE];
};
struct tidpairseq186857 {
  TGenericSeq Sup;
  tidpair186855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpasscontext245003*, verboseopen_519007)(tsym186843* s);
N_NIMCALL(void, rawmessage_164386)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode186813*, verboseprocess_519014)(tpasscontext245003* context, tnode186813* n);
N_NIMCALL(void, internalerror_164606)(NimStringDesc* errmsg);
N_NIMCALL(void, message_164584)(tlineinfo162527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode186813*, cleanup_519056)(tpasscontext245003* c, tnode186813* n);
static N_INLINE(NI, sonslen_187191)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym186843*, getmodule_195183)(tsym186843* s);
N_NIMCALL(NIM_BOOL, astneeded_245081)(tsym186843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
STRING_LITERAL(TMP7598, "logpass: context is not nil", 27);
NIM_CONST tpass245015 verbosepass_519054 = {verboseopen_519007,
NIM_NIL,
verboseprocess_519014,
NIM_NIL}
;
static NIM_CONST TY187025 TMP7599 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7600, "sons", 4);
static NIM_CONST TY187025 TMP7602 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7603, "sym", 3);
NIM_CONST tpass245015 cleanuppass_519204 = {NIM_NIL,
NIM_NIL,
cleanup_519056,
cleanup_519056}
;
extern NI gverbosity_136120;
extern TFrame* frameptr_13238;
extern NU64 gnotes_163181;
extern NI gbackendid_185008;
extern NU32 gglobaloptions_136111;
extern tnode186813* emptynode_187744;
extern tgcheap43416 gch_43444;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(tpasscontext245003*, verboseopen_519007)(tsym186843* s) {
	tpasscontext245003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(18, "passaux.nim");
		if (!(0 < gverbosity_136120)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_164386(((NU16) 265), (*(*s).Name).S);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode186813*, verboseprocess_519014)(tpasscontext245003* context, tnode186813* n) {
	tnode186813* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		nimln(22, "passaux.nim");
		nimln(22, "passaux.nim");
		if (!!((context == NIM_NIL))) goto LA3;
		nimln(22, "passaux.nim");
		internalerror_164606(((NimStringDesc*) &TMP7598));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_136120 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_163181 |=((NI64)(1)<<(((((NU16) 265)- 230))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_185008);
		message_164584((*n).Info, ((NU16) 265), LOC9);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_187191)(tnode186813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP7599[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP7599[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
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

static N_INLINE(tcell41490*, usrtocell_44843)(void* usr) {
	tcell41490* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41490*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41490))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41490* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
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

N_NIMCALL(tnode186813*, cleanup_519056)(tpasscontext245003* c, tnode186813* n) {
	tnode186813* result;
	nimfr("cleanUp", "passaux.nim")
	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		nimln(34, "passaux.nim");
		LOC3 = 0;
		nimln(34, "passaux.nim");
		LOC3 = ((gglobaloptions_136111 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		nimln(34, "passaux.nim");
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(34, "passaux.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(35, "passaux.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_519103;
		NI HEX3Atmp_519197;
		NI LOC8;
		NI TMP7601;
		NI res_519199;
		i_519103 = 0;
		HEX3Atmp_519197 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = 0;
		LOC8 = sonslen_187191(n);
		TMP7601 = subInt(LOC8, 1);
		HEX3Atmp_519197 = (NI32)(TMP7601);
		nimln(1450, "system.nim");
		res_519199 = 0;
		nimln(1451, "system.nim");
		while (1) {
			tnode186813* LOC10;
			nimln(1451, "system.nim");
			if (!(res_519199 <= HEX3Atmp_519197)) goto LA9;
			nimln(1450, "system.nim");
			i_519103 = res_519199;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP7599[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
			if ((NU)(i_519103) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_519056(c, (*n).kindU.S6.Sons->data[i_519103]);
			nimln(1453, "system.nim");
			res_519199 = addInt(res_519199, 1);
		} LA9: ;
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym186843* s;
			nimln(39, "passaux.nim");
			if (((TMP7599[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP7599[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP7602[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7603));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym186843* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				LOC18 = 0;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_195183(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = 0;
				LOC21 = astneeded_245081(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP7599[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7600));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_187744);
			}
			LA22: ;
		}
		LA14: ;
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
N_NOINLINE(void, passauxInit)(void) {
	nimfr("passaux", "passaux.nim")
	popFrame();
}

N_NOINLINE(void, passauxDatInit)(void) {
}

