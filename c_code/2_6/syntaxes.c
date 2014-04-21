/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode186813 tnode186813;
typedef struct tparsers219029 tparsers219029;
typedef struct tparser204203 tparser204203;
typedef struct tlexer178176 tlexer178176;
typedef struct tbaselexer176018 tbaselexer176018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream174204 tllstream174204;
typedef struct ttoken178174 ttoken178174;
typedef struct tident166019 tident166019;
typedef struct tidobj166013 tidobj166013;
typedef struct ttype186847 ttype186847;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tsym186843 tsym186843;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tlib186831 tlib186831;
typedef struct TY186932 TY186932;
typedef struct tlistentry117017 tlistentry117017;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY219016[4];
typedef NimStringDesc* TY219022[4];
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
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NimStringDesc* TY126462[1];
struct  tllstream174204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tstrtable186817  {
NI Counter;
tsymseq186815* Data;
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
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
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
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode186813*, parsefile_219033)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_163788)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_10203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_164386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream174204*, llstreamopen_174222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode186813*, parseall_219049)(tparsers219029* p);
N_NIMCALL(tnode186813*, parseall_204212)(tparser204203* p);
N_NIMCALL(tnode186813*, parseall_209006)(tparser204203* p);
N_NIMCALL(void, internalerror_164606)(NimStringDesc* errmsg);
N_NIMCALL(tnode186813*, parsetoplevelstmt_219054)(tparsers219029* p);
N_NIMCALL(tnode186813*, parsetoplevelstmt_204222)(tparser204203* p);
N_NIMCALL(tnode186813*, parsetoplevelstmt_209013)(tparser204203* p);
N_NIMCALL(NI, utf8bom_219094)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_219100)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode186813*, parsepipe_219138)(NimStringDesc* filename, tllstream174204* inputstream);
N_NIMCALL(tllstream174204*, llstreamopen_174227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_174248)(tllstream174204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_204364)(tparser204203* p, NimStringDesc* filename, tllstream174204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream174204*, llstreamopen_174218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_204217)(tparser204203* p);
N_NIMCALL(void, llstreamclose_174238)(tllstream174204* s);
N_NIMCALL(NU8, getfilter_219219)(tident166019* ident);
N_NIMCALL(NIM_BOOL, identeq_166469)(tident166019* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_219276)(tident166019* ident);
N_NIMCALL(tident166019*, getcallee_219333)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_210051)(tnode186813* n, NU8 renderflags);
N_NIMCALL(tllstream174204*, applyfilter_219426)(tparsers219029* p, tnode186813* n, NimStringDesc* filename, tllstream174204* stdin_219432);
N_NIMCALL(tllstream174204*, filtertmpl_218007)(tllstream174204* stdin_218009, NimStringDesc* filename, tnode186813* call);
N_NIMCALL(tllstream174204*, filterstrip_217008)(tllstream174204* stdin_217010, NimStringDesc* filename, tnode186813* call);
N_NIMCALL(tllstream174204*, filterreplace_217002)(tllstream174204* stdin_217004, NimStringDesc* filename, tnode186813* call);
N_NIMCALL(void, rawmessage_164292)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_163937)(NimStringDesc* s);
N_NIMCALL(tllstream174204*, evalpipe_219461)(tparsers219029* p, tnode186813* n, NimStringDesc* filename, tllstream174204* start);
N_NIMCALL(void, openparsers_219037)(tparsers219029* p, NI32 fileidx, tllstream174204* inputstream);
N_NIMCALL(void, openparser_204353)(tparser204203* p, NI32 fileidx, tllstream174204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_219044)(tparsers219029* p);
STRING_LITERAL(TMP2689, "standard", 8);
STRING_LITERAL(TMP2690, "strongspaces", 12);
STRING_LITERAL(TMP2691, "braces", 6);
STRING_LITERAL(TMP2692, "endx", 4);
NIM_CONST TY219016 parsernames_219015 = {((NimStringDesc*) &TMP2689),
((NimStringDesc*) &TMP2690),
((NimStringDesc*) &TMP2691),
((NimStringDesc*) &TMP2692)}
;
STRING_LITERAL(TMP2693, "none", 4);
STRING_LITERAL(TMP2694, "stdtmpl", 7);
STRING_LITERAL(TMP2695, "replace", 7);
STRING_LITERAL(TMP2696, "strip", 5);
NIM_CONST TY219022 filternames_219021 = {((NimStringDesc*) &TMP2693),
((NimStringDesc*) &TMP2694),
((NimStringDesc*) &TMP2695),
((NimStringDesc*) &TMP2696)}
;
STRING_LITERAL(TMP2701, "parser to implement", 19);
static NIM_CONST TY187025 TMP2705 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2706, "sons", 4);
static NIM_CONST TY187025 TMP2707 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2708, "ident", 5);
STRING_LITERAL(TMP2709, "|", 1);
TNimType NTI219029; /* TParsers */
TNimType NTI219005; /* TParserKind */
extern TNimType NTI204203; /* TParser */
extern TFrame* frameptr_13038;
extern tnode186813* emptynode_187744;
extern NI gverbosity_136120;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tnode186813*, parsefile_219033)(NI32 fileidx) {
	tnode186813* result;
	tparsers219029 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream174204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI219029));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpath_163788(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(49, "syntaxes.nim");
		nimln(49, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_10203(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_164386(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_174222(&f);
	openparsers_219037(&p, fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_219049(&p);
	nimln(54, "syntaxes.nim");
	closeparsers_219044(&p);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode186813*, parseall_219049)(tparsers219029* p) {
	tnode186813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_204212(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_209006(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_164606(((NimStringDesc*) &TMP2701));
		nimln(64, "syntaxes.nim");
		result = emptynode_187744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(tnode186813*, parsetoplevelstmt_219054)(tparsers219029* p) {
	tnode186813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_204222(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_209013(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_164606(((NimStringDesc*) &TMP2701));
		nimln(74, "syntaxes.nim");
		result = emptynode_187744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_219094)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, containsshebang_219100)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2702;
		NI j;
		NI TMP2703;
		nimln(83, "syntaxes.nim");
		LOC3 = 0;
		nimln(83, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(83, "syntaxes.nim");
		nimln(83, "syntaxes.nim");
		TMP2702 = addInt(i, 1);
		if ((NU)((NI32)(TMP2702)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI32)(TMP2702)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2703 = addInt(i, 2);
		j = (NI32)(TMP2703);
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

N_NIMCALL(tnode186813*, parsepipe_219138)(NimStringDesc* filename, tllstream174204* inputstream) {
	tnode186813* result;
	tllstream174204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_187744;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_174227(filename, ((NU8) 0));
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
		LOC5 = llstreamreadline_174248(s, &line);
		nimln(94, "syntaxes.nim");
		i = utf8bom_219094(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(95, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_219100(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_174248(s, &line);
			nimln(97, "syntaxes.nim");
			i = 0;
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2704;
			tparser204203 q;
			NimStringDesc* LOC19;
			tllstream174204* LOC20;
			nimln(98, "syntaxes.nim");
			LOC14 = 0;
			nimln(98, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(98, "syntaxes.nim");
			nimln(98, "syntaxes.nim");
			TMP2704 = addInt(i, 1);
			if ((NU)((NI32)(TMP2704)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI32)(TMP2704)]) == (NU8)(33));
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
			objectInit(&q, (&NTI204203));
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_174218(LOC19);
			openparser_204364(&q, filename, LOC20, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_204212(&q);
			nimln(104, "syntaxes.nim");
			closeparser_204217(&q);
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_174238(s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getfilter_219219)(tident166019* ident) {
	NU8 result;
	NU8 i_219267;
	NU8 res_219271;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_219267 = 0;
	nimln(1450, "system.nim");
	res_219271 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_219271 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_219267 = res_219271;
		nimln(109, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(109, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_166469(ident, filternames_219021[(i_219267)- 0]);
			if (!LOC4) goto LA5;
			nimln(110, "syntaxes.nim");
			nimln(110, "syntaxes.nim");
			result = i_219267;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_219271 = addInt(res_219271, 1);
	} LA1: ;
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_219276)(tident166019* ident) {
	NU8 result;
	NU8 i_219324;
	NU8 res_219328;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_219324 = 0;
	nimln(1450, "system.nim");
	res_219328 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_219328 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_219324 = res_219328;
		nimln(115, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(115, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_166469(ident, parsernames_219015[(i_219324)- 0]);
			if (!LOC4) goto LA5;
			nimln(116, "syntaxes.nim");
			nimln(116, "syntaxes.nim");
			result = i_219324;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_219328 = addInt(res_219328, 1);
	} LA1: ;
	nimln(117, "syntaxes.nim");
	rawmessage_164386(((NU16) 30), (*ident).S);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident166019*, getcallee_219333)(tnode186813* n) {
	tident166019* result;
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
		if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2707[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2708));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2708));
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_210051(n, 0);
		rawmessage_164386(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, applyfilter_219426)(tparsers219029* p, tnode186813* n, NimStringDesc* filename, tllstream174204* stdin_219432) {
	tllstream174204* result;
	tident166019* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_219333(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_219219(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).Skin = getparser_219276(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_219432;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_218007(stdin_219432, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_217008(stdin_219432, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_217002(stdin_219432, filename, n);
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
			TY126462 LOC13;
			TY126462 LOC14;
			nimln(142, "syntaxes.nim");
			if (!(2 <= gverbosity_136120)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_164292(((NU16) 266), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_163937((*result).S);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_164292(((NU16) 267), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, evalpipe_219461)(tparsers219029* p, tnode186813* n, NimStringDesc* filename, tllstream174204* start) {
	tllstream174204* result;
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
		NI i_219550;
		NI res_219626;
		nimln(151, "syntaxes.nim");
		LOC7 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(151, "syntaxes.nim");
		if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2707[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2708));
		LOC7 = identeq_166469((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2709));
		LA10: ;
		if (!LOC7) goto LA11;
		i_219550 = 0;
		nimln(1450, "system.nim");
		res_219626 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_219626 <= 2)) goto LA13;
			nimln(1450, "system.nim");
			i_219550 = res_219626;
			nimln(154, "syntaxes.nim");
			{
				nimln(154, "syntaxes.nim");
				if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
				if ((NU)(i_219550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_219550]).Kind == ((NU8) 29))) goto LA16;
				nimln(155, "syntaxes.nim");
				if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
				if ((NU)(i_219550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_219461(p, (*n).kindU.S6.Sons->data[i_219550], filename, result);
			}
			goto LA14;
			LA16: ;
			{
				nimln(157, "syntaxes.nim");
				if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
				if ((NU)(i_219550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_219426(p, (*n).kindU.S6.Sons->data[i_219550], filename, result);
			}
			LA14: ;
			nimln(1453, "system.nim");
			res_219626 = addInt(res_219626, 1);
		} LA13: ;
	}
	goto LA5;
	LA11: ;
	{
		nimln(158, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(159, "syntaxes.nim");
		if (((TMP2705[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2706));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_219461(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA20: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_219426(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_219037)(tparsers219029* p, NI32 fileidx, tllstream174204* inputstream) {
	tllstream174204* s;
	NimStringDesc* filename;
	tnode186813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpath_163788(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_219138(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		nimln(168, "syntaxes.nim");
		nimln(168, "syntaxes.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(168, "syntaxes.nim");
		s = evalpipe_219461(p, pipe, filename, inputstream);
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
		openparser_204353(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_204353(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_219044)(tparsers219029* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_204217(&(*p).Parser);
	popFrame();
}
N_NOINLINE(void, syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, syntaxesDatInit)(void) {
static TNimNode* TMP2697[2];
static TNimNode* TMP2698[4];
NI TMP2700;
static char* NIM_CONST TMP2699[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2282[8];
NTI219029.size = sizeof(tparsers219029);
NTI219029.kind = 18;
NTI219029.base = 0;
TMP2697[0] = &TMP2282[1];
NTI219005.size = sizeof(NU8);
NTI219005.kind = 14;
NTI219005.base = 0;
NTI219005.flags = 3;
for (TMP2700 = 0; TMP2700 < 4; TMP2700++) {
TMP2282[TMP2700+2].kind = 1;
TMP2282[TMP2700+2].offset = TMP2700;
TMP2282[TMP2700+2].name = TMP2699[TMP2700];
TMP2698[TMP2700] = &TMP2282[TMP2700+2];
}
TMP2282[6].len = 4; TMP2282[6].kind = 2; TMP2282[6].sons = &TMP2698[0];
NTI219005.node = &TMP2282[6];
TMP2282[1].kind = 1;
TMP2282[1].offset = offsetof(tparsers219029, Skin);
TMP2282[1].typ = (&NTI219005);
TMP2282[1].name = "skin";
TMP2697[1] = &TMP2282[7];
TMP2282[7].kind = 1;
TMP2282[7].offset = offsetof(tparsers219029, Parser);
TMP2282[7].typ = (&NTI204203);
TMP2282[7].name = "parser";
TMP2282[0].len = 2; TMP2282[0].kind = 2; TMP2282[0].sons = &TMP2697[0];
NTI219029.node = &TMP2282[0];
}

