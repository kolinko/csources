/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass243015 tpass243015;
typedef struct tpasscontext243003 tpasscontext243003;
typedef struct tsym184843 tsym184843;
typedef struct trodreader233024 trodreader233024;
typedef struct tnode184813 tnode184813;
typedef struct tidobj164013 tidobj164013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq184845 ttypeseq184845;
typedef struct ttype184847 ttype184847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope184837 tscope184837;
typedef struct TY184943 TY184943;
typedef struct tinstantiation184833 tinstantiation184833;
typedef struct tstrtable184817 tstrtable184817;
typedef struct tsymseq184815 tsymseq184815;
typedef struct tident164019 tident164019;
typedef struct tlineinfo160527 tlineinfo160527;
typedef struct tloc184827 tloc184827;
typedef struct trope142007 trope142007;
typedef struct tlib184831 tlib184831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq184807 tnodeseq184807;
typedef struct tpassdata243017 tpassdata243017;
typedef struct TY10665 TY10665;
typedef struct tllstream172204 tllstream172204;
typedef struct tparsers217029 tparsers217029;
typedef struct tparser202203 tparser202203;
typedef struct tlexer176176 tlexer176176;
typedef struct tbaselexer174018 tbaselexer174018;
typedef struct ttoken176174 ttoken176174;
typedef struct TY184932 TY184932;
typedef struct tindex233022 tindex233022;
typedef struct tiitable193207 tiitable193207;
typedef struct tiipairseq193205 tiipairseq193205;
typedef struct tiipair193203 tiipair193203;
typedef struct tidtable184859 tidtable184859;
typedef struct tidpairseq184857 tidpairseq184857;
typedef struct tidpair184855 tidpair184855;
typedef struct tmemfile231204 tmemfile231204;
typedef struct tlistentry116017 tlistentry116017;
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
typedef N_NIMCALL_PTR(tsym184843*, TY243056) (tsym184843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode184813*, TY243061) (tsym184843* m, NI32 fileidx);
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
struct  tidobj164013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable184817  {
NI Counter;
tsymseq184815* Data;
};
struct  tlineinfo160527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef tpass243015 TY243176[10];
struct tpassdata243017 {
tnode184813* Field0;
tnode184813* Field1;
};
struct  tpasscontext243003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer174018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream172204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer176176  {
  tbaselexer174018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken176174  {
NU8 Toktype;
NI Indent;
tident164019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser202203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer176176 Lex;
ttoken176174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers217029  {
NU8 Skin;
tparser202203 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext243003* tpasscontextarray243173[10];
struct  tllstream172204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tident164019  {
  tidobj164013 Sup;
NimStringDesc* S;
tident164019* Next;
NI H;
};
struct  trope142007  {
  TNimObject Sup;
trope142007* Left;
trope142007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq184807 {
  TGenericSeq Sup;
  tnode184813* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(tpass243015, makepass_243040)(tpassopen243007 open, tpassopencached243009 opencached, tpassprocess243013 process, tpassclose243011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_243074)(tnode184813* n);
N_NIMCALL(NIM_BOOL, astneeded_243081)(tsym184843* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, clearpasses_243183)(void);
N_NIMCALL(void, registerpass_243187)(tpass243015* p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_243208)(tpass243015* p, tsym184843* module, tpassdata243017 m, tpassdata243017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_243226)(tnode184813* nodes, tsym184843* module, tpass243015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_243277)(tpasscontext243003** a, tsym184843* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_243309)(tpasscontext243003** a, tsym184843* module, trodreader233024* rd);
N_NIMCALL(void, closepasses_243359)(tpasscontext243003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_243392)(tnode184813* n, tpasscontext243003** a);
N_NIMCALL(void, processtoplevelstmtcached_243437)(tnode184813* n, tpasscontext243003** a);
N_NIMCALL(void, closepassescached_243470)(tpasscontext243003** a);
N_NIMCALL(void, processimplicits_243510)(TY10665* implicits, NU8 nodekind, tpasscontext243003** a);
N_NIMCALL(tnode184813*, newnodei_185109)(NU8 kind, tlineinfo160527 info);
N_NIMCALL(tnode184813*, newstrnode_185095)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_185217)(tnode184813* father, tnode184813* son);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(void, processmodule_243049)(tsym184843* module, tllstream172204* stream, trodreader233024* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, tofullpath_161788)(NI32 fileidx);
N_NIMCALL(tllstream172204*, llstreamopen_172227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_162386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_217037)(tparsers217029* p, NI32 fileidx, tllstream172204* inputstream);
N_NIMCALL(tnode184813*, parsetoplevelstmt_217054)(tparsers217029* p);
N_NIMCALL(void, closeparsers_217044)(tparsers217029* p);
N_NIMCALL(void, idsynchronizationpoint_183452)(NI idrange);
N_NIMCALL(tnode184813*, loadinitsection_233066)(trodreader233024* r);
static N_INLINE(NI, sonslen_185191)(tnode184813* n);
static NIM_CONST TY185025 TMP3177 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3178, "sons", 4);
STRING_LITERAL(TMP3185, "(len|len|len|len|len)(a) (==|==|==|==|==|==|==|==|==|==|==|==|="
"=|==|==|==|==|==|==|==)\015\012    L seq modified while iterating over"
" it", 130);
extern TFrame* frameptr_13038;
TY243056 gimportmodule_243060;
TY243061 gincludefile_243065;
extern NI gerrorcounter_161179;
TY243176 gpasses_243178;
NI gpasseslen_243179;
extern tlineinfo160527 gcmdlineinfo_161103;
extern TNimType NTI217029; /* TParsers */
extern TY10665* implicitimports_134257;
extern TY10665* implicitincludes_134279;
extern TNimType NTI2409; /* TObject */
TNimType NTI243003; /* TPassContext */
extern TNimType NTI134; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tpass243015, makepass_243040)(tpassopen243007 open, tpassopencached243009 opencached, tpassprocess243013 process, tpassclose243011 close) {
	tpass243015 result;
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

static N_INLINE(NIM_BOOL, skipcodegen_243074)(tnode184813* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(66, "passes.nim");
	result = (0 < gerrorcounter_161179);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_243081)(tsym184843* s) {
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
		if (((TMP3177[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
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

N_NIMCALL(void, clearpasses_243183)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(93, "passes.nim");
	gpasseslen_243179 = 0;
	popFrame();
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

N_NIMCALL(void, registerpass_243187)(tpass243015* p) {
	nimfr("registerPass", "passes.nim")
	nimln(96, "passes.nim");
	if ((NU)(gpasseslen_243179) > (NU)(9)) raiseIndexError();
	gpasses_243178[(gpasseslen_243179)- 0] = (*p);
	nimln(97, "passes.nim");
	gpasseslen_243179 = addInt(gpasseslen_243179, 1);
	popFrame();
}

N_NIMCALL(void, carrypass_243208)(tpass243015* p, tsym184843* module, tpassdata243017 m, tpassdata243017* Result) {
	tpasscontext243003* c;
	nimfr("carryPass", "passes.nim")
	nimln(100, "passes.nim");
	c = (*p).Field0(module);
	nimln(101, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, (*p).Field2(c, m.Field0));
	nimln(102, "passes.nim");
	nimln(102, "passes.nim");
	{
		nimln(102, "passes.nim");
		nimln(102, "passes.nim");
		if (!!(((*p).Field3 == NIM_NIL))) goto LA3;
		nimln(102, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, (*p).Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, carrypasses_243226)(tnode184813* nodes, tsym184843* module, tpass243015* passes, NI passesLen0) {
	tpassdata243017 passdata;
	tpass243015 pass_243270;
	NI i_243273;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(107, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_243270, 0, sizeof(pass_243270));
	nimln(1530, "system.nim");
	i_243273 = 0;
	nimln(1531, "system.nim");
	while (1) {
		tpassdata243017 LOC2;
		nimln(1531, "system.nim");
		nimln(1531, "system.nim");
		if (!(i_243273 < passesLen0)) goto LA1;
		nimln(1532, "system.nim");
		if ((NU)(i_243273) >= (NU)(passesLen0)) raiseIndexError();
		pass_243270 = passes[i_243273];
		nimln(109, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_243208(&pass_243270, module, passdata, &LOC2);
		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1533, "system.nim");
		i_243273 = addInt(i_243273, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, openpasses_243277)(tpasscontext243003** a, tsym184843* module) {
	NI i_243294;
	NI HEX3Atmp_243302;
	NI TMP3179;
	NI res_243304;
	nimfr("openPasses", "passes.nim")
	i_243294 = 0;
	HEX3Atmp_243302 = 0;
	nimln(112, "passes.nim");
	nimln(112, "passes.nim");
	TMP3179 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243302 = (NI64)(TMP3179);
	nimln(1450, "system.nim");
	res_243304 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243304 <= HEX3Atmp_243302)) goto LA1;
		nimln(1450, "system.nim");
		i_243294 = res_243304;
		nimln(113, "passes.nim");
		{
			nimln(113, "passes.nim");
			nimln(113, "passes.nim");
			if ((NU)(i_243294) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_243178[(i_243294)- 0].Field0 == 0)) goto LA4;
			nimln(114, "passes.nim");
			if ((NU)(i_243294) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_243294)- 0], gpasses_243178[(i_243294)- 0].Field0(module));
		}
		goto LA2;
		LA4: ;
		{
			nimln(115, "passes.nim");
			if ((NU)(i_243294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_243294)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_243304 = addInt(res_243304, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, openpassescached_243309)(tpasscontext243003** a, tsym184843* module, trodreader233024* rd) {
	NI i_243327;
	NI HEX3Atmp_243352;
	NI TMP3180;
	NI res_243354;
	nimfr("openPassesCached", "passes.nim")
	i_243327 = 0;
	HEX3Atmp_243352 = 0;
	nimln(118, "passes.nim");
	nimln(118, "passes.nim");
	TMP3180 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243352 = (NI64)(TMP3180);
	nimln(1450, "system.nim");
	res_243354 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243354 <= HEX3Atmp_243352)) goto LA1;
		nimln(1450, "system.nim");
		i_243327 = res_243354;
		nimln(119, "passes.nim");
		{
			nimln(119, "passes.nim");
			nimln(119, "passes.nim");
			if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_243178[(i_243327)- 0].Field1 == 0)) goto LA4;
			nimln(120, "passes.nim");
			if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_243327)- 0], gpasses_243178[(i_243327)- 0].Field1(module, rd));
			nimln(121, "passes.nim");
			{
				nimln(121, "passes.nim");
				nimln(121, "passes.nim");
				if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_243327)- 0] == NIM_NIL))) goto LA8;
				nimln(122, "passes.nim");
				if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
				(*a[(i_243327)- 0]).Fromcache = NIM_TRUE;
			}
			LA8: ;
		}
		goto LA2;
		LA4: ;
		{
			nimln(124, "passes.nim");
			if ((NU)(i_243327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_243327)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_243354 = addInt(res_243354, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepasses_243359)(tpasscontext243003** a) {
	tnode184813* m;
	NI i_243376;
	NI HEX3Atmp_243385;
	NI TMP3181;
	NI res_243387;
	nimfr("closePasses", "passes.nim")
	nimln(127, "passes.nim");
	m = NIM_NIL;
	i_243376 = 0;
	HEX3Atmp_243385 = 0;
	nimln(128, "passes.nim");
	nimln(128, "passes.nim");
	TMP3181 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243385 = (NI64)(TMP3181);
	nimln(1450, "system.nim");
	res_243387 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243387 <= HEX3Atmp_243385)) goto LA1;
		nimln(1450, "system.nim");
		i_243376 = res_243387;
		nimln(129, "passes.nim");
		{
			nimln(129, "passes.nim");
			nimln(129, "passes.nim");
			if ((NU)(i_243376) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_243178[(i_243376)- 0].Field3 == 0)) goto LA4;
			nimln(129, "passes.nim");
			if ((NU)(i_243376) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243376) > (NU)(9)) raiseIndexError();
			m = gpasses_243178[(i_243376)- 0].Field3(a[(i_243376)- 0], m);
		}
		LA4: ;
		nimln(130, "passes.nim");
		if ((NU)(i_243376) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_243376)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_243387 = addInt(res_243387, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_243392)(tnode184813* n, tpasscontext243003** a) {
	NIM_BOOL result;
	tnode184813* m;
	NI i_243411;
	NI HEX3Atmp_243430;
	NI TMP3182;
	NI res_243432;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(134, "passes.nim");
	m = n;
	i_243411 = 0;
	HEX3Atmp_243430 = 0;
	nimln(135, "passes.nim");
	nimln(135, "passes.nim");
	TMP3182 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243430 = (NI64)(TMP3182);
	nimln(1450, "system.nim");
	res_243432 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243432 <= HEX3Atmp_243430)) goto LA1;
		nimln(1450, "system.nim");
		i_243411 = res_243432;
		nimln(136, "passes.nim");
		{
			nimln(136, "passes.nim");
			nimln(136, "passes.nim");
			if ((NU)(i_243411) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_243178[(i_243411)- 0].Field2 == 0)) goto LA4;
			nimln(137, "passes.nim");
			if ((NU)(i_243411) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243411) > (NU)(9)) raiseIndexError();
			m = gpasses_243178[(i_243411)- 0].Field2(a[(i_243411)- 0], m);
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
		res_243432 = addInt(res_243432, 1);
	} LA1: ;
	nimln(139, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_243437)(tnode184813* n, tpasscontext243003** a) {
	tnode184813* m;
	NI i_243455;
	NI HEX3Atmp_243463;
	NI TMP3183;
	NI res_243465;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(143, "passes.nim");
	m = n;
	i_243455 = 0;
	HEX3Atmp_243463 = 0;
	nimln(144, "passes.nim");
	nimln(144, "passes.nim");
	TMP3183 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243463 = (NI64)(TMP3183);
	nimln(1450, "system.nim");
	res_243465 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243465 <= HEX3Atmp_243463)) goto LA1;
		nimln(1450, "system.nim");
		i_243455 = res_243465;
		nimln(145, "passes.nim");
		{
			nimln(145, "passes.nim");
			nimln(145, "passes.nim");
			if ((NU)(i_243455) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_243178[(i_243455)- 0].Field1 == 0)) goto LA4;
			nimln(145, "passes.nim");
			if ((NU)(i_243455) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243455) > (NU)(9)) raiseIndexError();
			m = gpasses_243178[(i_243455)- 0].Field2(a[(i_243455)- 0], m);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_243465 = addInt(res_243465, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepassescached_243470)(tpasscontext243003** a) {
	tnode184813* m;
	NI i_243487;
	NI HEX3Atmp_243503;
	NI TMP3184;
	NI res_243505;
	nimfr("closePassesCached", "passes.nim")
	nimln(148, "passes.nim");
	m = NIM_NIL;
	i_243487 = 0;
	HEX3Atmp_243503 = 0;
	nimln(149, "passes.nim");
	nimln(149, "passes.nim");
	TMP3184 = subInt(gpasseslen_243179, 1);
	HEX3Atmp_243503 = (NI64)(TMP3184);
	nimln(1450, "system.nim");
	res_243505 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_243505 <= HEX3Atmp_243503)) goto LA1;
		nimln(1450, "system.nim");
		i_243487 = res_243505;
		nimln(150, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(150, "passes.nim");
			LOC4 = 0;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_243487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_243178[(i_243487)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_243487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_243178[(i_243487)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(151, "passes.nim");
			if ((NU)(i_243487) > (NU)(9)) raiseIndexError();
			if ((NU)(i_243487) > (NU)(9)) raiseIndexError();
			m = gpasses_243178[(i_243487)- 0].Field3(a[(i_243487)- 0], m);
		}
		LA6: ;
		nimln(152, "passes.nim");
		if ((NU)(i_243487) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_243487)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_243505 = addInt(res_243505, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, processimplicits_243510)(TY10665* implicits, NU8 nodekind, tpasscontext243003** a) {
	NimStringDesc* module_243529;
	NI i_243533;
	NI l_243535;
	nimfr("processImplicits", "passes.nim")
	module_243529 = 0;
	nimln(2795, "system.nim");
	i_243533 = 0;
	nimln(2796, "system.nim");
	nimln(2796, "system.nim");
	l_243535 = implicits->Sup.len;
	nimln(2797, "system.nim");
	while (1) {
		tnode184813* importstmt;
		tnode184813* str;
		nimln(2797, "system.nim");
		if (!(i_243533 < l_243535)) goto LA1;
		nimln(2798, "system.nim");
		if ((NU)(i_243533) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_243529 = implicits->data[i_243533];
		nimln(157, "passes.nim");
		importstmt = newnodei_185109(nodekind, gcmdlineinfo_161103);
		nimln(158, "passes.nim");
		str = newstrnode_185095(((NU8) 20), module_243529);
		nimln(159, "passes.nim");
		(*str).Info = gcmdlineinfo_161103;
		nimln(160, "passes.nim");
		addson_185217(importstmt, str);
		nimln(161, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(161, "passes.nim");
			nimln(161, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_243392(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(161, "passes.nim");
			goto LA1;
		}
		LA5: ;
		nimln(2799, "system.nim");
		i_243533 = addInt(i_243533, 1);
		nimln(2800, "system.nim");
		{
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			if (!!((implicits->Sup.len == l_243535))) goto LA9;
			nimln(2800, "system.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP3185));
		}
		LA9: ;
	} LA1: ;
	popFrame();
}

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

static N_INLINE(NI, sonslen_185191)(tnode184813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processmodule_243049)(tsym184843* module, tllstream172204* stream, trodreader233024* rd) {
	tparsers217029 p;
	tpasscontextarray243173 a;
	tllstream172204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI217029));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(168, "passes.nim");
	fileidx = ((NI32)chckRange((*module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
	nimln(169, "passes.nim");
	{
		nimln(169, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(170, "passes.nim");
		openpasses_243277(a, module);
		nimln(171, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(171, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(172, "passes.nim");
			filename = tofullpath_161788(fileidx);
			nimln(173, "passes.nim");
			s = llstreamopen_172227(filename, ((NU8) 0));
			nimln(174, "passes.nim");
			{
				nimln(174, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(175, "passes.nim");
				rawmessage_162386(((NU16) 3), filename);
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
			openparsers_217037(&p, fileidx, s);
			nimln(182, "passes.nim");
			{
				nimln(182, "passes.nim");
				nimln(182, "passes.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(187, "passes.nim");
				processimplicits_243510(implicitimports_134257, ((NU8) 115), a);
				nimln(188, "passes.nim");
				processimplicits_243510(implicitincludes_134279, ((NU8) 120), a);
			}
			LA17: ;
			nimln(190, "passes.nim");
			while (1) {
				tnode184813* n;
				nimln(191, "passes.nim");
				n = parsetoplevelstmt_217054(&p);
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
					LOC26 = processtoplevelstmt_243392(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(193, "passes.nim");
					goto LA19;
				}
				LA27: ;
			} LA19: ;
			nimln(195, "passes.nim");
			closeparsers_217044(&p);
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
		closepasses_243359(a);
		nimln(199, "passes.nim");
		idsynchronizationpoint_183452(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode184813* n;
		NI i_243655;
		NI HEX3Atmp_243675;
		NI LOC34;
		NI TMP3186;
		NI res_243677;
		nimln(201, "passes.nim");
		openpassescached_243309(a, module, rd);
		nimln(202, "passes.nim");
		n = loadinitsection_233066(rd);
		i_243655 = 0;
		HEX3Atmp_243675 = 0;
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_185191(n);
		TMP3186 = subInt(LOC34, 1);
		HEX3Atmp_243675 = (NI64)(TMP3186);
		nimln(1450, "system.nim");
		res_243677 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_243677 <= HEX3Atmp_243675)) goto LA35;
			nimln(1450, "system.nim");
			i_243655 = res_243677;
			nimln(203, "passes.nim");
			if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
			if ((NU)(i_243655) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_243437((*n).kindU.S6.Sons->data[i_243655], a);
			nimln(1453, "system.nim");
			res_243677 = addInt(res_243677, 1);
		} LA35: ;
		nimln(204, "passes.nim");
		closepassescached_243470(a);
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
static TNimNode TMP3112[1];
NTI243003.size = sizeof(tpasscontext243003);
NTI243003.kind = 17;
NTI243003.base = (&NTI2409);
NTI243003.flags = 1;
TMP3112[0].kind = 1;
TMP3112[0].offset = offsetof(tpasscontext243003, Fromcache);
TMP3112[0].typ = (&NTI134);
TMP3112[0].name = "fromCache";
NTI243003.node = &TMP3112[0];
}

