/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass246015 tpass246015;
typedef struct tpasscontext246003 tpasscontext246003;
typedef struct tsym187843 tsym187843;
typedef struct trodreader236024 trodreader236024;
typedef struct tnode187813 tnode187813;
typedef struct tidobj167013 tidobj167013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct ttype187847 ttype187847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tident167019 tident167019;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tpassdata246017 tpassdata246017;
typedef struct TY10665 TY10665;
typedef struct tllstream175204 tllstream175204;
typedef struct tparsers220029 tparsers220029;
typedef struct tparser205203 tparser205203;
typedef struct tlexer179176 tlexer179176;
typedef struct tbaselexer177018 tbaselexer177018;
typedef struct ttoken179174 ttoken179174;
typedef struct TY187932 TY187932;
typedef struct tindex236022 tindex236022;
typedef struct tiitable196207 tiitable196207;
typedef struct tiipairseq196205 tiipairseq196205;
typedef struct tiipair196203 tiipair196203;
typedef struct tidtable187859 tidtable187859;
typedef struct tidpairseq187857 tidpairseq187857;
typedef struct tidpair187855 tidpair187855;
typedef struct tmemfile234204 tmemfile234204;
typedef struct tlistentry118017 tlistentry118017;
typedef N_NIMCALL_PTR(tpasscontext246003*, tpassopen246007) (tsym187843* module);
typedef N_NIMCALL_PTR(tpasscontext246003*, tpassopencached246009) (tsym187843* module, trodreader236024* rd);
typedef N_NIMCALL_PTR(tnode187813*, tpassprocess246013) (tpasscontext246003* p, tnode187813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode187813*, tpassclose246011) (tpasscontext246003* p, tnode187813* n);
struct tpass246015 {
tpassopen246007 Field0;
tpassopencached246009 Field1;
tpassprocess246013 Field2;
tpassclose246011 Field3;
};
typedef N_NIMCALL_PTR(tsym187843*, TY246056) (tsym187843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode187813*, TY246061) (tsym187843* m, NI32 fileidx);
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
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NU8 TY188025[20];
typedef tpass246015 TY246176[10];
struct tpassdata246017 {
tnode187813* Field0;
tnode187813* Field1;
};
struct  tpasscontext246003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer177018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream175204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer179176  {
  tbaselexer177018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken179174  {
NU8 Toktype;
NI Indent;
tident167019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser205203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer179176 Lex;
ttoken179174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers220029  {
NU8 Skin;
tparser205203 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext246003* tpasscontextarray246173[10];
struct  tllstream175204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tiipair196203  {
NI Key;
NI Val;
};
struct  tiitable196207  {
NI Counter;
tiipairseq196205* Data;
};
struct  tindex236022  {
NI Lastidxkey;
NI Lastidxval;
tiitable196207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair187855  {
tidobj167013* Key;
TNimObject* Val;
};
struct  tidtable187859  {
NI Counter;
tidpairseq187857* Data;
};
struct  tmemfile234204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader236024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY187932* Moddeps;
TY187932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex236022 Index;
tindex236022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable187859 Syms;
tmemfile234204 Memfile;
tsymseq187815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
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
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq196205 {
  TGenericSeq Sup;
  tiipair196203 data[SEQ_DECL_SIZE];
};
struct tidpairseq187857 {
  TGenericSeq Sup;
  tidpair187855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpass246015, makepass_246040)(tpassopen246007 open, tpassopencached246009 opencached, tpassprocess246013 process, tpassclose246011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_246074)(tnode187813* n);
N_NIMCALL(NIM_BOOL, astneeded_246081)(tsym187843* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, clearpasses_246183)(void);
N_NIMCALL(void, registerpass_246187)(tpass246015 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_246208)(tpass246015 p, tsym187843* module, tpassdata246017 m, tpassdata246017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_246226)(tnode187813* nodes, tsym187843* module, tpass246015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_246277)(tpasscontext246003** a, tsym187843* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_246309)(tpasscontext246003** a, tsym187843* module, trodreader236024* rd);
N_NIMCALL(void, closepasses_246359)(tpasscontext246003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_246392)(tnode187813* n, tpasscontext246003** a);
N_NIMCALL(void, processtoplevelstmtcached_246437)(tnode187813* n, tpasscontext246003** a);
N_NIMCALL(void, closepassescached_246470)(tpasscontext246003** a);
N_NIMCALL(void, processimplicits_246510)(TY10665* implicits, NU8 nodekind, tpasscontext246003** a);
N_NIMCALL(tnode187813*, newnodei_188109)(NU8 kind, tlineinfo163527 info);
N_NIMCALL(tnode187813*, newstrnode_188095)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_188217)(tnode187813* father, tnode187813* son);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
N_NIMCALL(void, processmodule_246049)(tsym187843* module, tllstream175204* stream, trodreader236024* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_164788)(NI32 fileidx);
N_NIMCALL(tllstream175204*, llstreamopen_175227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_165386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_220037)(tparsers220029* p, NI32 fileidx, tllstream175204* inputstream);
N_NIMCALL(tnode187813*, parsetoplevelstmt_220054)(tparsers220029* p);
N_NIMCALL(void, closeparsers_220044)(tparsers220029* p);
N_NIMCALL(void, idsynchronizationpoint_186452)(NI idrange);
N_NIMCALL(tnode187813*, loadinitsection_236066)(trodreader236024* r);
static N_INLINE(NI, sonslen_188191)(tnode187813* n);
static NIM_CONST TY188025 TMP3175 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3176, "sons", 4);
STRING_LITERAL(TMP3183, "(len|len|len|len|len)(a) (==|==|==|==|==|==|==|==|==|==|==|==|="
"=|==|==|==|==|==|==|==)\015\012    L seq modified while iterating over"
" it", 130);
extern TFrame* frameptr_13038;
TY246056 gimportmodule_246060;
TY246061 gincludefile_246065;
extern NI gerrorcounter_164182;
TY246176 gpasses_246178;
NI gpasseslen_246179;
extern tlineinfo163527 gcmdlineinfo_164104;
extern TNimType NTI220029; /* TParsers */
extern TY10665* implicitimports_137257;
extern TY10665* implicitincludes_137279;
extern TNimType NTI2409; /* TObject */
TNimType NTI246003; /* TPassContext */
extern TNimType NTI134; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tpass246015, makepass_246040)(tpassopen246007 open, tpassopencached246009 opencached, tpassprocess246013 process, tpassclose246011 close) {
	tpass246015 result;
	nimfr("makePass", "passes.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, skipcodegen_246074)(tnode187813* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(66, "passes.nim");
	result = (0 < gerrorcounter_164182);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_246081)(tsym187843* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		LOC3 = 0;
		nimln(74, "passes.nim");
		LOC4 = 0;
		nimln(73, "passes.nim");
		LOC5 = 0;
		nimln(73, "passes.nim");
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(75, "passes.nim");
		nimln(75, "passes.nim");
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP3175[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3176));
		if ((NU)(2) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		nimln(80, "passes.nim");
		result = NIM_TRUE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, clearpasses_246183)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(93, "passes.nim");
	gpasseslen_246179 = 0;
	popFrame();
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

N_NIMCALL(void, registerpass_246187)(tpass246015 p) {
	nimfr("registerPass", "passes.nim")
	nimln(96, "passes.nim");
	if ((NU)(gpasseslen_246179) > (NU)(9)) raiseIndexError();
	gpasses_246178[(gpasseslen_246179)- 0] = p;
	nimln(97, "passes.nim");
	gpasseslen_246179 = addInt(gpasseslen_246179, 1);
	popFrame();
}

N_NIMCALL(void, carrypass_246208)(tpass246015 p, tsym187843* module, tpassdata246017 m, tpassdata246017* Result) {
	tpasscontext246003* c;
	nimfr("carryPass", "passes.nim")
	nimln(100, "passes.nim");
	c = p.Field0(module);
	nimln(101, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, p.Field2(c, m.Field0));
	nimln(102, "passes.nim");
	nimln(102, "passes.nim");
	{
		nimln(102, "passes.nim");
		nimln(102, "passes.nim");
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		nimln(102, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, carrypasses_246226)(tnode187813* nodes, tsym187843* module, tpass246015* passes, NI passesLen0) {
	tpassdata246017 passdata;
	tpass246015 pass_246270;
	NI i_246273;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(107, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_246270, 0, sizeof(pass_246270));
	nimln(1530, "system.nim");
	i_246273 = 0;
	nimln(1531, "system.nim");
	while (1) {
		tpassdata246017 LOC2;
		nimln(1531, "system.nim");
		nimln(1531, "system.nim");
		if (!(i_246273 < passesLen0)) goto LA1;
		nimln(1532, "system.nim");
		if ((NU)(i_246273) >= (NU)(passesLen0)) raiseIndexError();
		pass_246270 = passes[i_246273];
		nimln(109, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_246208(pass_246270, module, passdata, &LOC2);
		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1533, "system.nim");
		i_246273 = addInt(i_246273, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, openpasses_246277)(tpasscontext246003** a, tsym187843* module) {
	NI i_246294;
	NI HEX3Atmp_246302;
	NI TMP3177;
	NI res_246304;
	nimfr("openPasses", "passes.nim")
	i_246294 = 0;
	HEX3Atmp_246302 = 0;
	nimln(112, "passes.nim");
	nimln(112, "passes.nim");
	TMP3177 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246302 = (NI32)(TMP3177);
	nimln(1450, "system.nim");
	res_246304 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246304 <= HEX3Atmp_246302)) goto LA1;
		nimln(1450, "system.nim");
		i_246294 = res_246304;
		nimln(113, "passes.nim");
		{
			nimln(113, "passes.nim");
			nimln(113, "passes.nim");
			if ((NU)(i_246294) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_246178[(i_246294)- 0].Field0 == 0)) goto LA4;
			nimln(114, "passes.nim");
			if ((NU)(i_246294) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_246294)- 0], gpasses_246178[(i_246294)- 0].Field0(module));
		}
		goto LA2;
		LA4: ;
		{
			nimln(115, "passes.nim");
			if ((NU)(i_246294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_246294)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_246304 = addInt(res_246304, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, openpassescached_246309)(tpasscontext246003** a, tsym187843* module, trodreader236024* rd) {
	NI i_246327;
	NI HEX3Atmp_246352;
	NI TMP3178;
	NI res_246354;
	nimfr("openPassesCached", "passes.nim")
	i_246327 = 0;
	HEX3Atmp_246352 = 0;
	nimln(118, "passes.nim");
	nimln(118, "passes.nim");
	TMP3178 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246352 = (NI32)(TMP3178);
	nimln(1450, "system.nim");
	res_246354 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246354 <= HEX3Atmp_246352)) goto LA1;
		nimln(1450, "system.nim");
		i_246327 = res_246354;
		nimln(119, "passes.nim");
		{
			nimln(119, "passes.nim");
			nimln(119, "passes.nim");
			if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_246178[(i_246327)- 0].Field1 == 0)) goto LA4;
			nimln(120, "passes.nim");
			if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_246327)- 0], gpasses_246178[(i_246327)- 0].Field1(module, rd));
			nimln(121, "passes.nim");
			{
				nimln(121, "passes.nim");
				nimln(121, "passes.nim");
				if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_246327)- 0] == NIM_NIL))) goto LA8;
				nimln(122, "passes.nim");
				if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
				(*a[(i_246327)- 0]).Fromcache = NIM_TRUE;
			}
			LA8: ;
		}
		goto LA2;
		LA4: ;
		{
			nimln(124, "passes.nim");
			if ((NU)(i_246327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_246327)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_246354 = addInt(res_246354, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepasses_246359)(tpasscontext246003** a) {
	tnode187813* m;
	NI i_246376;
	NI HEX3Atmp_246385;
	NI TMP3179;
	NI res_246387;
	nimfr("closePasses", "passes.nim")
	nimln(127, "passes.nim");
	m = NIM_NIL;
	i_246376 = 0;
	HEX3Atmp_246385 = 0;
	nimln(128, "passes.nim");
	nimln(128, "passes.nim");
	TMP3179 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246385 = (NI32)(TMP3179);
	nimln(1450, "system.nim");
	res_246387 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246387 <= HEX3Atmp_246385)) goto LA1;
		nimln(1450, "system.nim");
		i_246376 = res_246387;
		nimln(129, "passes.nim");
		{
			nimln(129, "passes.nim");
			nimln(129, "passes.nim");
			if ((NU)(i_246376) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_246178[(i_246376)- 0].Field3 == 0)) goto LA4;
			nimln(129, "passes.nim");
			if ((NU)(i_246376) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246376) > (NU)(9)) raiseIndexError();
			m = gpasses_246178[(i_246376)- 0].Field3(a[(i_246376)- 0], m);
		}
		LA4: ;
		nimln(130, "passes.nim");
		if ((NU)(i_246376) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_246376)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_246387 = addInt(res_246387, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_246392)(tnode187813* n, tpasscontext246003** a) {
	NIM_BOOL result;
	tnode187813* m;
	NI i_246411;
	NI HEX3Atmp_246430;
	NI TMP3180;
	NI res_246432;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(134, "passes.nim");
	m = n;
	i_246411 = 0;
	HEX3Atmp_246430 = 0;
	nimln(135, "passes.nim");
	nimln(135, "passes.nim");
	TMP3180 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246430 = (NI32)(TMP3180);
	nimln(1450, "system.nim");
	res_246432 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246432 <= HEX3Atmp_246430)) goto LA1;
		nimln(1450, "system.nim");
		i_246411 = res_246432;
		nimln(136, "passes.nim");
		{
			nimln(136, "passes.nim");
			nimln(136, "passes.nim");
			if ((NU)(i_246411) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_246178[(i_246411)- 0].Field2 == 0)) goto LA4;
			nimln(137, "passes.nim");
			if ((NU)(i_246411) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246411) > (NU)(9)) raiseIndexError();
			m = gpasses_246178[(i_246411)- 0].Field2(a[(i_246411)- 0], m);
			nimln(138, "passes.nim");
			{
				nimln(138, "passes.nim");
				if (!m == 0) goto LA8;
				nimln(138, "passes.nim");
				nimln(138, "passes.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}
			LA8: ;
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_246432 = addInt(res_246432, 1);
	} LA1: ;
	nimln(139, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_246437)(tnode187813* n, tpasscontext246003** a) {
	tnode187813* m;
	NI i_246455;
	NI HEX3Atmp_246463;
	NI TMP3181;
	NI res_246465;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(143, "passes.nim");
	m = n;
	i_246455 = 0;
	HEX3Atmp_246463 = 0;
	nimln(144, "passes.nim");
	nimln(144, "passes.nim");
	TMP3181 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246463 = (NI32)(TMP3181);
	nimln(1450, "system.nim");
	res_246465 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246465 <= HEX3Atmp_246463)) goto LA1;
		nimln(1450, "system.nim");
		i_246455 = res_246465;
		nimln(145, "passes.nim");
		{
			nimln(145, "passes.nim");
			nimln(145, "passes.nim");
			if ((NU)(i_246455) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_246178[(i_246455)- 0].Field1 == 0)) goto LA4;
			nimln(145, "passes.nim");
			if ((NU)(i_246455) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246455) > (NU)(9)) raiseIndexError();
			m = gpasses_246178[(i_246455)- 0].Field2(a[(i_246455)- 0], m);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_246465 = addInt(res_246465, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepassescached_246470)(tpasscontext246003** a) {
	tnode187813* m;
	NI i_246487;
	NI HEX3Atmp_246503;
	NI TMP3182;
	NI res_246505;
	nimfr("closePassesCached", "passes.nim")
	nimln(148, "passes.nim");
	m = NIM_NIL;
	i_246487 = 0;
	HEX3Atmp_246503 = 0;
	nimln(149, "passes.nim");
	nimln(149, "passes.nim");
	TMP3182 = subInt(gpasseslen_246179, 1);
	HEX3Atmp_246503 = (NI32)(TMP3182);
	nimln(1450, "system.nim");
	res_246505 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_246505 <= HEX3Atmp_246503)) goto LA1;
		nimln(1450, "system.nim");
		i_246487 = res_246505;
		nimln(150, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(150, "passes.nim");
			LOC4 = 0;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_246487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_246178[(i_246487)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_246487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_246178[(i_246487)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(151, "passes.nim");
			if ((NU)(i_246487) > (NU)(9)) raiseIndexError();
			if ((NU)(i_246487) > (NU)(9)) raiseIndexError();
			m = gpasses_246178[(i_246487)- 0].Field3(a[(i_246487)- 0], m);
		}
		LA6: ;
		nimln(152, "passes.nim");
		if ((NU)(i_246487) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_246487)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_246505 = addInt(res_246505, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, processimplicits_246510)(TY10665* implicits, NU8 nodekind, tpasscontext246003** a) {
	NimStringDesc* module_246529;
	NI i_246533;
	NI l_246535;
	nimfr("processImplicits", "passes.nim")
	module_246529 = 0;
	nimln(2795, "system.nim");
	i_246533 = 0;
	nimln(2796, "system.nim");
	nimln(2796, "system.nim");
	l_246535 = implicits->Sup.len;
	nimln(2797, "system.nim");
	while (1) {
		tnode187813* importstmt;
		tnode187813* str;
		nimln(2797, "system.nim");
		if (!(i_246533 < l_246535)) goto LA1;
		nimln(2798, "system.nim");
		if ((NU)(i_246533) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_246529 = implicits->data[i_246533];
		nimln(157, "passes.nim");
		importstmt = newnodei_188109(nodekind, gcmdlineinfo_164104);
		nimln(158, "passes.nim");
		str = newstrnode_188095(((NU8) 20), module_246529);
		nimln(159, "passes.nim");
		(*str).Info = gcmdlineinfo_164104;
		nimln(160, "passes.nim");
		addson_188217(importstmt, str);
		nimln(161, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(161, "passes.nim");
			nimln(161, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_246392(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(161, "passes.nim");
			goto LA1;
		}
		LA5: ;
		nimln(2799, "system.nim");
		i_246533 = addInt(i_246533, 1);
		nimln(2800, "system.nim");
		{
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			if (!!((implicits->Sup.len == l_246535))) goto LA9;
			nimln(2800, "system.nim");
			failedassertimpl_80021(((NimStringDesc*) &TMP3183));
		}
		LA9: ;
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_188191)(tnode187813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP3175[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3176));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP3175[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3176));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processmodule_246049)(tsym187843* module, tllstream175204* stream, trodreader236024* rd) {
	tparsers220029 p;
	tpasscontextarray246173 a;
	tllstream175204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI220029));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(168, "passes.nim");
	fileidx = ((NI32) ((*module).Position));
	nimln(169, "passes.nim");
	{
		nimln(169, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(170, "passes.nim");
		openpasses_246277(a, module);
		nimln(171, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(171, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(172, "passes.nim");
			filename = tofullpath_164788(fileidx);
			nimln(173, "passes.nim");
			s = llstreamopen_175227(filename, ((NU8) 0));
			nimln(174, "passes.nim");
			{
				nimln(174, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(175, "passes.nim");
				rawmessage_165386(((NU16) 3), filename);
				nimln(176, "passes.nim");
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			nimln(178, "passes.nim");
			s = stream;
		}
		LA5: ;
		nimln(179, "passes.nim");
		while (1) {
			nimln(180, "passes.nim");
			openparsers_220037(&p, fileidx, s);
			nimln(182, "passes.nim");
			{
				nimln(182, "passes.nim");
				nimln(182, "passes.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(187, "passes.nim");
				processimplicits_246510(implicitimports_137257, ((NU8) 115), a);
				nimln(188, "passes.nim");
				processimplicits_246510(implicitincludes_137279, ((NU8) 120), a);
			}
			LA17: ;
			nimln(190, "passes.nim");
			while (1) {
				tnode187813* n;
				nimln(191, "passes.nim");
				n = parsetoplevelstmt_220054(&p);
				nimln(192, "passes.nim");
				{
					nimln(192, "passes.nim");
					if (!((*n).Kind == ((NU8) 1))) goto LA22;
					nimln(192, "passes.nim");
					goto LA19;
				}
				LA22: ;
				nimln(193, "passes.nim");
				{
					NIM_BOOL LOC26;
					nimln(193, "passes.nim");
					nimln(193, "passes.nim");
					LOC26 = 0;
					LOC26 = processtoplevelstmt_246392(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(193, "passes.nim");
					goto LA19;
				}
				LA27: ;
			} LA19: ;
			nimln(195, "passes.nim");
			closeparsers_220044(&p);
			nimln(196, "passes.nim");
			{
				nimln(196, "passes.nim");
				nimln(196, "passes.nim");
				if (!!(((*s).Kind == ((NU8) 3)))) goto LA31;
				nimln(196, "passes.nim");
				goto LA14;
			}
			LA31: ;
		} LA14: ;
		nimln(197, "passes.nim");
		closepasses_246359(a);
		nimln(199, "passes.nim");
		idsynchronizationpoint_186452(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode187813* n;
		NI i_246655;
		NI HEX3Atmp_246676;
		NI LOC34;
		NI TMP3184;
		NI res_246678;
		nimln(201, "passes.nim");
		openpassescached_246309(a, module, rd);
		nimln(202, "passes.nim");
		n = loadinitsection_236066(rd);
		i_246655 = 0;
		HEX3Atmp_246676 = 0;
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_188191(n);
		TMP3184 = subInt(LOC34, 1);
		HEX3Atmp_246676 = (NI32)(TMP3184);
		nimln(1450, "system.nim");
		res_246678 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_246678 <= HEX3Atmp_246676)) goto LA35;
			nimln(1450, "system.nim");
			i_246655 = res_246678;
			nimln(203, "passes.nim");
			if (((TMP3175[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3176));
			if ((NU)(i_246655) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_246437((*n).kindU.S6.Sons->data[i_246655], a);
			nimln(1453, "system.nim");
			res_246678 = addInt(res_246678, 1);
		} LA35: ;
		nimln(204, "passes.nim");
		closepassescached_246470(a);
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
}
N_NOINLINE(void, passesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

N_NOINLINE(void, passesDatInit)(void) {
static TNimNode TMP3110[1];
NTI246003.size = sizeof(tpasscontext246003);
NTI246003.kind = 17;
NTI246003.base = (&NTI2409);
NTI246003.flags = 1;
TMP3110[0].kind = 1;
TMP3110[0].offset = offsetof(tpasscontext246003, Fromcache);
TMP3110[0].typ = (&NTI134);
TMP3110[0].name = "fromCache";
NTI246003.node = &TMP3110[0];
}

