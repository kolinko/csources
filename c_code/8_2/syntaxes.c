/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode184813 tnode184813;
typedef struct tparsers217029 tparsers217029;
typedef struct tparser202203 tparser202203;
typedef struct tlexer176176 tlexer176176;
typedef struct tbaselexer174018 tbaselexer174018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream172204 tllstream172204;
typedef struct ttoken176174 ttoken176174;
typedef struct tident164019 tident164019;
typedef struct tidobj164013 tidobj164013;
typedef struct ttype184847 ttype184847;
typedef struct tlineinfo160527 tlineinfo160527;
typedef struct tsym184843 tsym184843;
typedef struct tnodeseq184807 tnodeseq184807;
typedef struct ttypeseq184845 ttypeseq184845;
typedef struct tloc184827 tloc184827;
typedef struct trope142007 trope142007;
typedef struct tscope184837 tscope184837;
typedef struct TY184943 TY184943;
typedef struct tinstantiation184833 tinstantiation184833;
typedef struct tstrtable184817 tstrtable184817;
typedef struct tsymseq184815 tsymseq184815;
typedef struct tlib184831 tlib184831;
typedef struct TY184932 TY184932;
typedef struct tlistentry116017 tlistentry116017;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY217016[4];
typedef NimStringDesc* TY217022[4];
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
struct  tidobj164013  {
  TNimObject Sup;
NI Id;
};
struct  tident164019  {
  tidobj164013 Sup;
NimStringDesc* S;
tident164019* Next;
NI H;
};
struct  tlineinfo160527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NimStringDesc* TY124662[1];
struct  tllstream172204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tstrtable184817  {
NI Counter;
tsymseq184815* Data;
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
struct  trope142007  {
  TNimObject Sup;
trope142007* Left;
trope142007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq184807 {
  TGenericSeq Sup;
  tnode184813* data[SEQ_DECL_SIZE];
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
struct TY184932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode184813*, parsefile_217033)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_161788)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_10203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_162386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream172204*, llstreamopen_172222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode184813*, parseall_217049)(tparsers217029* p);
N_NIMCALL(tnode184813*, parseall_202212)(tparser202203* p);
N_NIMCALL(tnode184813*, parseall_207006)(tparser202203* p);
N_NIMCALL(void, internalerror_162606)(NimStringDesc* errmsg);
N_NIMCALL(tnode184813*, parsetoplevelstmt_217054)(tparsers217029* p);
N_NIMCALL(tnode184813*, parsetoplevelstmt_202222)(tparser202203* p);
N_NIMCALL(tnode184813*, parsetoplevelstmt_207013)(tparser202203* p);
N_NIMCALL(NI, utf8bom_217094)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_217100)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode184813*, parsepipe_217138)(NimStringDesc* filename, tllstream172204* inputstream);
N_NIMCALL(tllstream172204*, llstreamopen_172227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_172248)(tllstream172204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_202364)(tparser202203* p, NimStringDesc* filename, tllstream172204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream172204*, llstreamopen_172218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_202217)(tparser202203* p);
N_NIMCALL(void, llstreamclose_172238)(tllstream172204* s);
N_NIMCALL(NU8, getfilter_217219)(tident164019* ident);
N_NIMCALL(NIM_BOOL, identeq_164469)(tident164019* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_217276)(tident164019* ident);
N_NIMCALL(tident164019*, getcallee_217333)(tnode184813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_208051)(tnode184813* n, NU8 renderflags);
N_NIMCALL(tllstream172204*, applyfilter_217426)(tparsers217029* p, tnode184813* n, NimStringDesc* filename, tllstream172204* stdin_217432);
N_NIMCALL(tllstream172204*, filtertmpl_216007)(tllstream172204* stdin_216009, NimStringDesc* filename, tnode184813* call);
N_NIMCALL(tllstream172204*, filterstrip_215008)(tllstream172204* stdin_215010, NimStringDesc* filename, tnode184813* call);
N_NIMCALL(tllstream172204*, filterreplace_215002)(tllstream172204* stdin_215004, NimStringDesc* filename, tnode184813* call);
N_NIMCALL(void, rawmessage_162292)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_161937)(NimStringDesc* s);
N_NIMCALL(tllstream172204*, evalpipe_217461)(tparsers217029* p, tnode184813* n, NimStringDesc* filename, tllstream172204* start);
N_NIMCALL(void, openparsers_217037)(tparsers217029* p, NI32 fileidx, tllstream172204* inputstream);
N_NIMCALL(void, openparser_202353)(tparser202203* p, NI32 fileidx, tllstream172204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_217044)(tparsers217029* p);
STRING_LITERAL(TMP2691, "standard", 8);
STRING_LITERAL(TMP2692, "strongspaces", 12);
STRING_LITERAL(TMP2693, "braces", 6);
STRING_LITERAL(TMP2694, "endx", 4);
NIM_CONST TY217016 parsernames_217015 = {((NimStringDesc*) &TMP2691),
((NimStringDesc*) &TMP2692),
((NimStringDesc*) &TMP2693),
((NimStringDesc*) &TMP2694)}
;
STRING_LITERAL(TMP2695, "none", 4);
STRING_LITERAL(TMP2696, "stdtmpl", 7);
STRING_LITERAL(TMP2697, "replace", 7);
STRING_LITERAL(TMP2698, "strip", 5);
NIM_CONST TY217022 filternames_217021 = {((NimStringDesc*) &TMP2695),
((NimStringDesc*) &TMP2696),
((NimStringDesc*) &TMP2697),
((NimStringDesc*) &TMP2698)}
;
STRING_LITERAL(TMP2703, "parser to implement", 19);
static NIM_CONST TY185025 TMP2707 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2708, "sons", 4);
static NIM_CONST TY185025 TMP2709 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2710, "ident", 5);
STRING_LITERAL(TMP2711, "|", 1);
TNimType NTI217029; /* TParsers */
TNimType NTI217005; /* TParserKind */
extern TNimType NTI202203; /* TParser */
extern TFrame* frameptr_13038;
extern tnode184813* emptynode_185744;
extern NI gverbosity_134120;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tnode184813*, parsefile_217033)(NI32 fileidx) {
	tnode184813* result;
	tparsers217029 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream172204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI217029));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpath_161788(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(49, "syntaxes.nim");
		nimln(49, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_10203(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_162386(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_172222(&f);
	openparsers_217037(&p, fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_217049(&p);
	nimln(54, "syntaxes.nim");
	closeparsers_217044(&p);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode184813*, parseall_217049)(tparsers217029* p) {
	tnode184813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_202212(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_207006(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_162606(((NimStringDesc*) &TMP2703));
		nimln(64, "syntaxes.nim");
		result = emptynode_185744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(tnode184813*, parsetoplevelstmt_217054)(tparsers217029* p) {
	tnode184813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_202222(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_207013(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_162606(((NimStringDesc*) &TMP2703));
		nimln(74, "syntaxes.nim");
		result = emptynode_185744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_217094)(NimStringDesc* s) {
	NI result;
	nimfr("utf8Bom", "syntaxes.nim")
	result = 0;
	nimln(77, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(77, "syntaxes.nim");
		LOC3 = 0;
		nimln(77, "syntaxes.nim");
		LOC4 = 0;
		nimln(77, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(77, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(77, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(78, "syntaxes.nim");
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		nimln(80, "syntaxes.nim");
		result = 0;
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(NIM_BOOL, containsshebang_217100)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2704;
		NI j;
		NI TMP2705;
		nimln(83, "syntaxes.nim");
		LOC3 = 0;
		nimln(83, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(83, "syntaxes.nim");
		nimln(83, "syntaxes.nim");
		TMP2704 = addInt(i, 1);
		if ((NU)((NI64)(TMP2704)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI64)(TMP2704)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2705 = addInt(i, 2);
		j = (NI64)(TMP2705);
		nimln(85, "syntaxes.nim");
		while (1) {
			nimln(85, "syntaxes.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(85, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(86, "syntaxes.nim");
		nimln(86, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode184813*, parsepipe_217138)(NimStringDesc* filename, tllstream172204* inputstream) {
	tnode184813* result;
	tllstream172204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_185744;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_172227(filename, ((NU8) 0));
	nimln(91, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(91, "syntaxes.nim");
		nimln(91, "syntaxes.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(92, "syntaxes.nim");
		nimln(92, "syntaxes.nim");
		line = rawNewString(80);
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_172248(s, &line);
		nimln(94, "syntaxes.nim");
		i = utf8bom_217094(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(95, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_217100(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_172248(s, &line);
			nimln(97, "syntaxes.nim");
			i = 0;
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2706;
			tparser202203 q;
			NimStringDesc* LOC19;
			tllstream172204* LOC20;
			nimln(98, "syntaxes.nim");
			LOC14 = 0;
			nimln(98, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(98, "syntaxes.nim");
			nimln(98, "syntaxes.nim");
			TMP2706 = addInt(i, 1);
			if ((NU)((NI64)(TMP2706)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI64)(TMP2706)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(100, "syntaxes.nim");
			while (1) {
				nimln(100, "syntaxes.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(100, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI202203));
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_172218(LOC19);
			openparser_202364(&q, filename, LOC20, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_202212(&q);
			nimln(104, "syntaxes.nim");
			closeparser_202217(&q);
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_172238(s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getfilter_217219)(tident164019* ident) {
	NU8 result;
	NU8 i_217267;
	NU8 res_217271;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_217267 = 0;
	nimln(1450, "system.nim");
	res_217271 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_217271 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_217267 = res_217271;
		nimln(109, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(109, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_164469(ident, filternames_217021[(i_217267)- 0]);
			if (!LOC4) goto LA5;
			nimln(110, "syntaxes.nim");
			nimln(110, "syntaxes.nim");
			result = i_217267;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_217271 = addInt(res_217271, 1);
	} LA1: ;
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_217276)(tident164019* ident) {
	NU8 result;
	NU8 i_217324;
	NU8 res_217328;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_217324 = 0;
	nimln(1450, "system.nim");
	res_217328 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_217328 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_217324 = res_217328;
		nimln(115, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(115, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_164469(ident, parsernames_217015[(i_217324)- 0]);
			if (!LOC4) goto LA5;
			nimln(116, "syntaxes.nim");
			nimln(116, "syntaxes.nim");
			result = i_217324;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_217328 = addInt(res_217328, 1);
	} LA1: ;
	nimln(117, "syntaxes.nim");
	rawmessage_162386(((NU16) 30), (*ident).S);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident164019*, getcallee_217333)(tnode184813* n) {
	tident164019* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(120, "syntaxes.nim");
		LOC3 = 0;
		nimln(120, "syntaxes.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(120, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2709[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP2709[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_208051(n, 0);
		rawmessage_162386(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream172204*, applyfilter_217426)(tparsers217029* p, tnode184813* n, NimStringDesc* filename, tllstream172204* stdin_217432) {
	tllstream172204* result;
	tident164019* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_217333(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_217219(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).Skin = getparser_217276(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_217432;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_216007(stdin_217432, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_215008(stdin_217432, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_215002(stdin_217432, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		nimln(141, "syntaxes.nim");
		nimln(141, "syntaxes.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY124662 LOC13;
			TY124662 LOC14;
			nimln(142, "syntaxes.nim");
			if (!(2 <= gverbosity_134120)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_162292(((NU16) 266), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_161937((*result).S);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_162292(((NU16) 267), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream172204*, evalpipe_217461)(tparsers217029* p, tnode184813* n, NimStringDesc* filename, tllstream172204* start) {
	tllstream172204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(149, "syntaxes.nim");
	result = start;
	nimln(150, "syntaxes.nim");
	{
		nimln(150, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(150, "syntaxes.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(151, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_217550;
		NI res_217626;
		nimln(151, "syntaxes.nim");
		LOC7 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(151, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2709[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		LOC7 = identeq_164469((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2711));
		LA10: ;
		if (!LOC7) goto LA11;
		i_217550 = 0;
		nimln(1450, "system.nim");
		res_217626 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_217626 <= 2)) goto LA13;
			nimln(1450, "system.nim");
			i_217550 = res_217626;
			nimln(154, "syntaxes.nim");
			{
				nimln(154, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_217550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_217550]).Kind == ((NU8) 29))) goto LA16;
				nimln(155, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_217550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_217461(p, (*n).kindU.S6.Sons->data[i_217550], filename, result);
			}
			goto LA14;
			LA16: ;
			{
				nimln(157, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_217550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_217426(p, (*n).kindU.S6.Sons->data[i_217550], filename, result);
			}
			LA14: ;
			nimln(1453, "system.nim");
			res_217626 = addInt(res_217626, 1);
		} LA13: ;
	}
	goto LA5;
	LA11: ;
	{
		nimln(158, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(159, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_217461(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA20: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_217426(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_217037)(tparsers217029* p, NI32 fileidx, tllstream172204* inputstream) {
	tllstream172204* s;
	NimStringDesc* filename;
	tnode184813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpath_161788(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_217138(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		nimln(168, "syntaxes.nim");
		nimln(168, "syntaxes.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(168, "syntaxes.nim");
		s = evalpipe_217461(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		nimln(169, "syntaxes.nim");
		s = inputstream;
	}
	LA1: ;
	nimln(170, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		nimln(172, "syntaxes.nim");
		openparser_202353(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_202353(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_217044)(tparsers217029* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_202217(&(*p).Parser);
	popFrame();
}
N_NOINLINE(void, syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, syntaxesDatInit)(void) {
static TNimNode* TMP2699[2];
static TNimNode* TMP2700[4];
NI TMP2702;
static char* NIM_CONST TMP2701[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2284[8];
NTI217029.size = sizeof(tparsers217029);
NTI217029.kind = 18;
NTI217029.base = 0;
TMP2699[0] = &TMP2284[1];
NTI217005.size = sizeof(NU8);
NTI217005.kind = 14;
NTI217005.base = 0;
NTI217005.flags = 3;
for (TMP2702 = 0; TMP2702 < 4; TMP2702++) {
TMP2284[TMP2702+2].kind = 1;
TMP2284[TMP2702+2].offset = TMP2702;
TMP2284[TMP2702+2].name = TMP2701[TMP2702];
TMP2700[TMP2702] = &TMP2284[TMP2702+2];
}
TMP2284[6].len = 4; TMP2284[6].kind = 2; TMP2284[6].sons = &TMP2700[0];
NTI217005.node = &TMP2284[6];
TMP2284[1].kind = 1;
TMP2284[1].offset = offsetof(tparsers217029, Skin);
TMP2284[1].typ = (&NTI217005);
TMP2284[1].name = "skin";
TMP2699[1] = &TMP2284[7];
TMP2284[7].kind = 1;
TMP2284[7].offset = offsetof(tparsers217029, Parser);
TMP2284[7].typ = (&NTI202203);
TMP2284[7].name = "parser";
TMP2284[0].len = 2; TMP2284[0].kind = 2; TMP2284[0].sons = &TMP2699[0];
NTI217029.node = &TMP2284[0];
}

