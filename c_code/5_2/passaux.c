/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tpasscontext244003 tpasscontext244003;
typedef struct tsym185843 tsym185843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct ttype185847 ttype185847;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tident165019 tident165019;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tnode185813 tnode185813;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tpass244015 tpass244015;
typedef struct trodreader234024 trodreader234024;
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
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
typedef struct tindex234022 tindex234022;
typedef struct tiitable194207 tiitable194207;
typedef struct tiipairseq194205 tiipairseq194205;
typedef struct tiipair194203 tiipair194203;
typedef struct tidtable185859 tidtable185859;
typedef struct tidpairseq185857 tidpairseq185857;
typedef struct tidpair185855 tidpair185855;
typedef struct tmemfile232204 tmemfile232204;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
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
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
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
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
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
typedef NU8 TY186025[20];
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
struct  tpasscontext244003  {
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
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq194205 {
  TGenericSeq Sup;
  tiipair194203 data[SEQ_DECL_SIZE];
};
struct tidpairseq185857 {
  TGenericSeq Sup;
  tidpair185855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpasscontext244003*, verboseopen_518007)(tsym185843* s);
N_NIMCALL(void, rawmessage_163386)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode185813*, verboseprocess_518014)(tpasscontext244003* context, tnode185813* n);
N_NIMCALL(void, internalerror_163606)(NimStringDesc* errmsg);
N_NIMCALL(void, message_163584)(tlineinfo161527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode185813*, cleanup_518056)(tpasscontext244003* c, tnode185813* n);
static N_INLINE(NI, sonslen_186191)(tnode185813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym185843*, getmodule_194183)(tsym185843* s);
N_NIMCALL(NIM_BOOL, astneeded_244081)(tsym185843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
STRING_LITERAL(TMP7603, "logpass: context is not nil", 27);
NIM_CONST tpass244015 verbosepass_518054 = {verboseopen_518007,
NIM_NIL,
verboseprocess_518014,
NIM_NIL}
;
static NIM_CONST TY186025 TMP7604 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7605, "sons", 4);
static NIM_CONST TY186025 TMP7607 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7608, "sym", 3);
NIM_CONST tpass244015 cleanuppass_518204 = {NIM_NIL,
NIM_NIL,
cleanup_518056,
cleanup_518056}
;
extern NI gverbosity_135120;
extern TFrame* frameptr_13038;
extern NU64 gnotes_162178;
extern NI gbackendid_184008;
extern NU32 gglobaloptions_135111;
extern tnode185813* emptynode_186744;
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tpasscontext244003*, verboseopen_518007)(tsym185843* s) {
	tpasscontext244003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(18, "passaux.nim");
		if (!(0 < gverbosity_135120)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_163386(((NU16) 265), (*(*s).Name).S);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode185813*, verboseprocess_518014)(tpasscontext244003* context, tnode185813* n) {
	tnode185813* result;
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
		internalerror_163606(((NimStringDesc*) &TMP7603));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_135120 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_162178 |=((NI64)(1)<<(((((NU16) 265)- 230))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_184008);
		message_163584((*n).Info, ((NU16) 265), LOC9);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_186191)(tnode185813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
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

N_NIMCALL(tnode185813*, cleanup_518056)(tpasscontext244003* c, tnode185813* n) {
	tnode185813* result;
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
		LOC3 = ((gglobaloptions_135111 &(1<<((((NU8) 2))&31)))!=0);
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
		NI i_518103;
		NI HEX3Atmp_518197;
		NI LOC8;
		NI TMP7606;
		NI res_518199;
		i_518103 = 0;
		HEX3Atmp_518197 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = 0;
		LOC8 = sonslen_186191(n);
		TMP7606 = subInt(LOC8, 1);
		HEX3Atmp_518197 = (NI64)(TMP7606);
		nimln(1450, "system.nim");
		res_518199 = 0;
		nimln(1451, "system.nim");
		while (1) {
			tnode185813* LOC10;
			nimln(1451, "system.nim");
			if (!(res_518199 <= HEX3Atmp_518197)) goto LA9;
			nimln(1450, "system.nim");
			i_518103 = res_518199;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(i_518103) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_518056(c, (*n).kindU.S6.Sons->data[i_518103]);
			nimln(1453, "system.nim");
			res_518199 = addInt(res_518199, 1);
		} LA9: ;
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym185843* s;
			nimln(39, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP7607[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7608));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym185843* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				LOC18 = 0;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_194183(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = 0;
				LOC21 = astneeded_244081(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP7604[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_186744);
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

