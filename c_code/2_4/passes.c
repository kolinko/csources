/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass245015 tpass245015;
typedef struct tpasscontext245003 tpasscontext245003;
typedef struct tsym186843 tsym186843;
typedef struct trodreader235024 trodreader235024;
typedef struct tnode186813 tnode186813;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tpassdata245017 tpassdata245017;
typedef struct TY10665 TY10665;
typedef struct tllstream174204 tllstream174204;
typedef struct tparsers219029 tparsers219029;
typedef struct tparser204203 tparser204203;
typedef struct tlexer178176 tlexer178176;
typedef struct tbaselexer176018 tbaselexer176018;
typedef struct ttoken178174 ttoken178174;
typedef struct TY186932 TY186932;
typedef struct tindex235022 tindex235022;
typedef struct tiitable195207 tiitable195207;
typedef struct tiipairseq195205 tiipairseq195205;
typedef struct tiipair195203 tiipair195203;
typedef struct tidtable186859 tidtable186859;
typedef struct tidpairseq186857 tidpairseq186857;
typedef struct tidpair186855 tidpair186855;
typedef struct tmemfile233204 tmemfile233204;
typedef struct tlistentry117017 tlistentry117017;
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
typedef N_NIMCALL_PTR(tsym186843*, TY245056) (tsym186843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode186813*, TY245061) (tsym186843* m, NI32 fileidx);
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
typedef NU8 TY187025[20];
typedef tpass245015 TY245176[10];
struct tpassdata245017 {
tnode186813* Field0;
tnode186813* Field1;
};
struct  tpasscontext245003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer176018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream174204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer178176  {
  tbaselexer176018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken178174  {
NU8 Toktype;
NI Indent;
tident166019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser204203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer178176 Lex;
ttoken178174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers219029  {
NU8 Skin;
tparser204203 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext245003* tpasscontextarray245173[10];
struct  tllstream174204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tlib186831  {
  tlistentry117017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope144007* Name;
tnode186813* Path;
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
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(tpass245015, makepass_245040)(tpassopen245007 open, tpassopencached245009 opencached, tpassprocess245013 process, tpassclose245011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_245074)(tnode186813* n);
N_NIMCALL(NIM_BOOL, astneeded_245081)(tsym186843* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, clearpasses_245183)(void);
N_NIMCALL(void, registerpass_245187)(tpass245015 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_245208)(tpass245015 p, tsym186843* module, tpassdata245017 m, tpassdata245017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_245226)(tnode186813* nodes, tsym186843* module, tpass245015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_245277)(tpasscontext245003** a, tsym186843* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_245309)(tpasscontext245003** a, tsym186843* module, trodreader235024* rd);
N_NIMCALL(void, closepasses_245359)(tpasscontext245003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_245392)(tnode186813* n, tpasscontext245003** a);
N_NIMCALL(void, processtoplevelstmtcached_245437)(tnode186813* n, tpasscontext245003** a);
N_NIMCALL(void, closepassescached_245470)(tpasscontext245003** a);
N_NIMCALL(void, processimplicits_245510)(TY10665* implicits, NU8 nodekind, tpasscontext245003** a);
N_NIMCALL(tnode186813*, newnodei_187109)(NU8 kind, tlineinfo162527 info);
N_NIMCALL(tnode186813*, newstrnode_187095)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_187217)(tnode186813* father, tnode186813* son);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(void, processmodule_245049)(tsym186843* module, tllstream174204* stream, trodreader235024* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_163788)(NI32 fileidx);
N_NIMCALL(tllstream174204*, llstreamopen_174227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_164386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_219037)(tparsers219029* p, NI32 fileidx, tllstream174204* inputstream);
N_NIMCALL(tnode186813*, parsetoplevelstmt_219054)(tparsers219029* p);
N_NIMCALL(void, closeparsers_219044)(tparsers219029* p);
N_NIMCALL(void, idsynchronizationpoint_185452)(NI idrange);
N_NIMCALL(tnode186813*, loadinitsection_235066)(trodreader235024* r);
static N_INLINE(NI, sonslen_187191)(tnode186813* n);
static NIM_CONST TY187025 TMP3175 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3176, "sons", 4);
STRING_LITERAL(TMP3183, "(len|len|len|len|len)(a) (==|==|==|==|==|==|==|==|==|==|==|==|="
"=|==|==|==|==|==|==|==)\015\012    L seq modified while iterating over"
" it", 130);
extern TFrame* frameptr_13038;
TY245056 gimportmodule_245060;
TY245061 gincludefile_245065;
extern NI gerrorcounter_163182;
TY245176 gpasses_245178;
NI gpasseslen_245179;
extern tlineinfo162527 gcmdlineinfo_163104;
extern TNimType NTI219029; /* TParsers */
extern TY10665* implicitimports_136257;
extern TY10665* implicitincludes_136279;
extern TNimType NTI2409; /* TObject */
TNimType NTI245003; /* TPassContext */
extern TNimType NTI134; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tpass245015, makepass_245040)(tpassopen245007 open, tpassopencached245009 opencached, tpassprocess245013 process, tpassclose245011 close) {
	tpass245015 result;
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

static N_INLINE(NIM_BOOL, skipcodegen_245074)(tnode186813* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(66, "passes.nim");
	result = (0 < gerrorcounter_163182);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_245081)(tsym186843* s) {
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

N_NIMCALL(void, clearpasses_245183)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(93, "passes.nim");
	gpasseslen_245179 = 0;
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

N_NIMCALL(void, registerpass_245187)(tpass245015 p) {
	nimfr("registerPass", "passes.nim")
	nimln(96, "passes.nim");
	if ((NU)(gpasseslen_245179) > (NU)(9)) raiseIndexError();
	gpasses_245178[(gpasseslen_245179)- 0] = p;
	nimln(97, "passes.nim");
	gpasseslen_245179 = addInt(gpasseslen_245179, 1);
	popFrame();
}

N_NIMCALL(void, carrypass_245208)(tpass245015 p, tsym186843* module, tpassdata245017 m, tpassdata245017* Result) {
	tpasscontext245003* c;
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

N_NIMCALL(void, carrypasses_245226)(tnode186813* nodes, tsym186843* module, tpass245015* passes, NI passesLen0) {
	tpassdata245017 passdata;
	tpass245015 pass_245270;
	NI i_245273;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(107, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_245270, 0, sizeof(pass_245270));
	nimln(1530, "system.nim");
	i_245273 = 0;
	nimln(1531, "system.nim");
	while (1) {
		tpassdata245017 LOC2;
		nimln(1531, "system.nim");
		nimln(1531, "system.nim");
		if (!(i_245273 < passesLen0)) goto LA1;
		nimln(1532, "system.nim");
		if ((NU)(i_245273) >= (NU)(passesLen0)) raiseIndexError();
		pass_245270 = passes[i_245273];
		nimln(109, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_245208(pass_245270, module, passdata, &LOC2);
		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1533, "system.nim");
		i_245273 = addInt(i_245273, 1);
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

N_NIMCALL(void, openpasses_245277)(tpasscontext245003** a, tsym186843* module) {
	NI i_245294;
	NI HEX3Atmp_245302;
	NI TMP3177;
	NI res_245304;
	nimfr("openPasses", "passes.nim")
	i_245294 = 0;
	HEX3Atmp_245302 = 0;
	nimln(112, "passes.nim");
	nimln(112, "passes.nim");
	TMP3177 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245302 = (NI32)(TMP3177);
	nimln(1450, "system.nim");
	res_245304 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245304 <= HEX3Atmp_245302)) goto LA1;
		nimln(1450, "system.nim");
		i_245294 = res_245304;
		nimln(113, "passes.nim");
		{
			nimln(113, "passes.nim");
			nimln(113, "passes.nim");
			if ((NU)(i_245294) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_245178[(i_245294)- 0].Field0 == 0)) goto LA4;
			nimln(114, "passes.nim");
			if ((NU)(i_245294) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_245294)- 0], gpasses_245178[(i_245294)- 0].Field0(module));
		}
		goto LA2;
		LA4: ;
		{
			nimln(115, "passes.nim");
			if ((NU)(i_245294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_245294)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_245304 = addInt(res_245304, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, openpassescached_245309)(tpasscontext245003** a, tsym186843* module, trodreader235024* rd) {
	NI i_245327;
	NI HEX3Atmp_245352;
	NI TMP3178;
	NI res_245354;
	nimfr("openPassesCached", "passes.nim")
	i_245327 = 0;
	HEX3Atmp_245352 = 0;
	nimln(118, "passes.nim");
	nimln(118, "passes.nim");
	TMP3178 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245352 = (NI32)(TMP3178);
	nimln(1450, "system.nim");
	res_245354 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245354 <= HEX3Atmp_245352)) goto LA1;
		nimln(1450, "system.nim");
		i_245327 = res_245354;
		nimln(119, "passes.nim");
		{
			nimln(119, "passes.nim");
			nimln(119, "passes.nim");
			if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_245178[(i_245327)- 0].Field1 == 0)) goto LA4;
			nimln(120, "passes.nim");
			if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_245327)- 0], gpasses_245178[(i_245327)- 0].Field1(module, rd));
			nimln(121, "passes.nim");
			{
				nimln(121, "passes.nim");
				nimln(121, "passes.nim");
				if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_245327)- 0] == NIM_NIL))) goto LA8;
				nimln(122, "passes.nim");
				if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
				(*a[(i_245327)- 0]).Fromcache = NIM_TRUE;
			}
			LA8: ;
		}
		goto LA2;
		LA4: ;
		{
			nimln(124, "passes.nim");
			if ((NU)(i_245327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_245327)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_245354 = addInt(res_245354, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepasses_245359)(tpasscontext245003** a) {
	tnode186813* m;
	NI i_245376;
	NI HEX3Atmp_245385;
	NI TMP3179;
	NI res_245387;
	nimfr("closePasses", "passes.nim")
	nimln(127, "passes.nim");
	m = NIM_NIL;
	i_245376 = 0;
	HEX3Atmp_245385 = 0;
	nimln(128, "passes.nim");
	nimln(128, "passes.nim");
	TMP3179 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245385 = (NI32)(TMP3179);
	nimln(1450, "system.nim");
	res_245387 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245387 <= HEX3Atmp_245385)) goto LA1;
		nimln(1450, "system.nim");
		i_245376 = res_245387;
		nimln(129, "passes.nim");
		{
			nimln(129, "passes.nim");
			nimln(129, "passes.nim");
			if ((NU)(i_245376) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_245178[(i_245376)- 0].Field3 == 0)) goto LA4;
			nimln(129, "passes.nim");
			if ((NU)(i_245376) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245376) > (NU)(9)) raiseIndexError();
			m = gpasses_245178[(i_245376)- 0].Field3(a[(i_245376)- 0], m);
		}
		LA4: ;
		nimln(130, "passes.nim");
		if ((NU)(i_245376) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_245376)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_245387 = addInt(res_245387, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_245392)(tnode186813* n, tpasscontext245003** a) {
	NIM_BOOL result;
	tnode186813* m;
	NI i_245411;
	NI HEX3Atmp_245430;
	NI TMP3180;
	NI res_245432;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(134, "passes.nim");
	m = n;
	i_245411 = 0;
	HEX3Atmp_245430 = 0;
	nimln(135, "passes.nim");
	nimln(135, "passes.nim");
	TMP3180 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245430 = (NI32)(TMP3180);
	nimln(1450, "system.nim");
	res_245432 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245432 <= HEX3Atmp_245430)) goto LA1;
		nimln(1450, "system.nim");
		i_245411 = res_245432;
		nimln(136, "passes.nim");
		{
			nimln(136, "passes.nim");
			nimln(136, "passes.nim");
			if ((NU)(i_245411) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_245178[(i_245411)- 0].Field2 == 0)) goto LA4;
			nimln(137, "passes.nim");
			if ((NU)(i_245411) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245411) > (NU)(9)) raiseIndexError();
			m = gpasses_245178[(i_245411)- 0].Field2(a[(i_245411)- 0], m);
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
		res_245432 = addInt(res_245432, 1);
	} LA1: ;
	nimln(139, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_245437)(tnode186813* n, tpasscontext245003** a) {
	tnode186813* m;
	NI i_245455;
	NI HEX3Atmp_245463;
	NI TMP3181;
	NI res_245465;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(143, "passes.nim");
	m = n;
	i_245455 = 0;
	HEX3Atmp_245463 = 0;
	nimln(144, "passes.nim");
	nimln(144, "passes.nim");
	TMP3181 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245463 = (NI32)(TMP3181);
	nimln(1450, "system.nim");
	res_245465 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245465 <= HEX3Atmp_245463)) goto LA1;
		nimln(1450, "system.nim");
		i_245455 = res_245465;
		nimln(145, "passes.nim");
		{
			nimln(145, "passes.nim");
			nimln(145, "passes.nim");
			if ((NU)(i_245455) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_245178[(i_245455)- 0].Field1 == 0)) goto LA4;
			nimln(145, "passes.nim");
			if ((NU)(i_245455) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245455) > (NU)(9)) raiseIndexError();
			m = gpasses_245178[(i_245455)- 0].Field2(a[(i_245455)- 0], m);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_245465 = addInt(res_245465, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepassescached_245470)(tpasscontext245003** a) {
	tnode186813* m;
	NI i_245487;
	NI HEX3Atmp_245503;
	NI TMP3182;
	NI res_245505;
	nimfr("closePassesCached", "passes.nim")
	nimln(148, "passes.nim");
	m = NIM_NIL;
	i_245487 = 0;
	HEX3Atmp_245503 = 0;
	nimln(149, "passes.nim");
	nimln(149, "passes.nim");
	TMP3182 = subInt(gpasseslen_245179, 1);
	HEX3Atmp_245503 = (NI32)(TMP3182);
	nimln(1450, "system.nim");
	res_245505 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_245505 <= HEX3Atmp_245503)) goto LA1;
		nimln(1450, "system.nim");
		i_245487 = res_245505;
		nimln(150, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(150, "passes.nim");
			LOC4 = 0;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_245487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_245178[(i_245487)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_245487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_245178[(i_245487)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(151, "passes.nim");
			if ((NU)(i_245487) > (NU)(9)) raiseIndexError();
			if ((NU)(i_245487) > (NU)(9)) raiseIndexError();
			m = gpasses_245178[(i_245487)- 0].Field3(a[(i_245487)- 0], m);
		}
		LA6: ;
		nimln(152, "passes.nim");
		if ((NU)(i_245487) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_245487)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_245505 = addInt(res_245505, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, processimplicits_245510)(TY10665* implicits, NU8 nodekind, tpasscontext245003** a) {
	NimStringDesc* module_245529;
	NI i_245533;
	NI l_245535;
	nimfr("processImplicits", "passes.nim")
	module_245529 = 0;
	nimln(2795, "system.nim");
	i_245533 = 0;
	nimln(2796, "system.nim");
	nimln(2796, "system.nim");
	l_245535 = implicits->Sup.len;
	nimln(2797, "system.nim");
	while (1) {
		tnode186813* importstmt;
		tnode186813* str;
		nimln(2797, "system.nim");
		if (!(i_245533 < l_245535)) goto LA1;
		nimln(2798, "system.nim");
		if ((NU)(i_245533) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_245529 = implicits->data[i_245533];
		nimln(157, "passes.nim");
		importstmt = newnodei_187109(nodekind, gcmdlineinfo_163104);
		nimln(158, "passes.nim");
		str = newstrnode_187095(((NU8) 20), module_245529);
		nimln(159, "passes.nim");
		(*str).Info = gcmdlineinfo_163104;
		nimln(160, "passes.nim");
		addson_187217(importstmt, str);
		nimln(161, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(161, "passes.nim");
			nimln(161, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_245392(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(161, "passes.nim");
			goto LA1;
		}
		LA5: ;
		nimln(2799, "system.nim");
		i_245533 = addInt(i_245533, 1);
		nimln(2800, "system.nim");
		{
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			if (!!((implicits->Sup.len == l_245535))) goto LA9;
			nimln(2800, "system.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP3183));
		}
		LA9: ;
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_187191)(tnode186813* n) {
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

N_NIMCALL(void, processmodule_245049)(tsym186843* module, tllstream174204* stream, trodreader235024* rd) {
	tparsers219029 p;
	tpasscontextarray245173 a;
	tllstream174204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI219029));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(168, "passes.nim");
	fileidx = ((NI32) ((*module).Position));
	nimln(169, "passes.nim");
	{
		nimln(169, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(170, "passes.nim");
		openpasses_245277(a, module);
		nimln(171, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(171, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(172, "passes.nim");
			filename = tofullpath_163788(fileidx);
			nimln(173, "passes.nim");
			s = llstreamopen_174227(filename, ((NU8) 0));
			nimln(174, "passes.nim");
			{
				nimln(174, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(175, "passes.nim");
				rawmessage_164386(((NU16) 3), filename);
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
			openparsers_219037(&p, fileidx, s);
			nimln(182, "passes.nim");
			{
				nimln(182, "passes.nim");
				nimln(182, "passes.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(187, "passes.nim");
				processimplicits_245510(implicitimports_136257, ((NU8) 115), a);
				nimln(188, "passes.nim");
				processimplicits_245510(implicitincludes_136279, ((NU8) 120), a);
			}
			LA17: ;
			nimln(190, "passes.nim");
			while (1) {
				tnode186813* n;
				nimln(191, "passes.nim");
				n = parsetoplevelstmt_219054(&p);
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
					LOC26 = processtoplevelstmt_245392(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(193, "passes.nim");
					goto LA19;
				}
				LA27: ;
			} LA19: ;
			nimln(195, "passes.nim");
			closeparsers_219044(&p);
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
		closepasses_245359(a);
		nimln(199, "passes.nim");
		idsynchronizationpoint_185452(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode186813* n;
		NI i_245655;
		NI HEX3Atmp_245676;
		NI LOC34;
		NI TMP3184;
		NI res_245678;
		nimln(201, "passes.nim");
		openpassescached_245309(a, module, rd);
		nimln(202, "passes.nim");
		n = loadinitsection_235066(rd);
		i_245655 = 0;
		HEX3Atmp_245676 = 0;
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_187191(n);
		TMP3184 = subInt(LOC34, 1);
		HEX3Atmp_245676 = (NI32)(TMP3184);
		nimln(1450, "system.nim");
		res_245678 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_245678 <= HEX3Atmp_245676)) goto LA35;
			nimln(1450, "system.nim");
			i_245655 = res_245678;
			nimln(203, "passes.nim");
			if (((TMP3175[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3176));
			if ((NU)(i_245655) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_245437((*n).kindU.S6.Sons->data[i_245655], a);
			nimln(1453, "system.nim");
			res_245678 = addInt(res_245678, 1);
		} LA35: ;
		nimln(204, "passes.nim");
		closepassescached_245470(a);
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
NTI245003.size = sizeof(tpasscontext245003);
NTI245003.kind = 17;
NTI245003.base = (&NTI2409);
NTI245003.flags = 1;
TMP3110[0].kind = 1;
TMP3110[0].offset = offsetof(tpasscontext245003, Fromcache);
TMP3110[0].typ = (&NTI134);
TMP3110[0].name = "fromCache";
NTI245003.node = &TMP3110[0];
}

