/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode186813 tnode186813;
typedef struct ttype186847 ttype186847;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym186843 tsym186843;
typedef struct tident166019 tident166019;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct tcontext249019 tcontext249019;
typedef struct tidentiter195106 tidentiter195106;
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tpasscontext245003 tpasscontext245003;
typedef struct tproccon249009 tproccon249009;
typedef struct tintset183047 tintset183047;
typedef struct ttrunk183043 ttrunk183043;
typedef struct ttrunkseq183045 ttrunkseq183045;
typedef struct tlinkedlist118023 tlinkedlist118023;
typedef struct tidtable186859 tidtable186859;
typedef struct tidpairseq186857 tidpairseq186857;
typedef struct tidpair186855 tidpair186855;
typedef struct tctx248037 tctx248037;
typedef struct TY249131 TY249131;
typedef struct tinstantiationpair249011 tinstantiationpair249011;
typedef struct TY248229 TY248229;
typedef struct TY163208 TY163208;
typedef struct pprocHEX3Aobjecttype248216 pprocHEX3Aobjecttype248216;
typedef struct TY248217 TY248217;
typedef struct tblock248023 tblock248023;
typedef struct TY248198 TY248198;
typedef struct TY248223 TY248223;
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  tidentiter195106  {
NI H;
tident166019* Name;
};
struct  tscope186837  {
NI Depthlevel;
tstrtable186817 Symbols;
tnodeseq186807* Usingsyms;
tscope186837* Parent;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tpasscontext245003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tintset183047  {
NI Counter;
NI Max;
ttrunk183043* Head;
ttrunkseq183045* Data;
};
struct  tlinkedlist118023  {
tlistentry118017* Head;
tlistentry118017* Tail;
NI Counter;
};
struct  tidpair186855  {
tidobj166013* Key;
TNimObject* Val;
};
struct  tidtable186859  {
NI Counter;
tidpairseq186857* Data;
};
typedef N_NIMCALL_PTR(tnode186813*, TY249061) (tcontext249019* c, tnode186813* n);
typedef N_NIMCALL_PTR(tnode186813*, TY249066) (tcontext249019* c, tnode186813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode186813*, TY249074) (tcontext249019* c, tnode186813* n, NU16 flags, NIM_BOOL buffererrors);
typedef N_NIMCALL_PTR(tnode186813*, TY249083) (tcontext249019* c, tnode186813* n);
typedef N_NIMCALL_PTR(tnode186813*, TY249088) (tcontext249019* c, tnode186813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode186813*, TY249096) (tcontext249019* c, tnode186813* n);
typedef N_NIMCALL_PTR(tnode186813*, TY249101) (tcontext249019* c, tnode186813* n, tnode186813* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype186847*, TY249108) (tcontext249019* c, tnode186813* n, ttype186847* prev);
typedef struct {
N_NIMCALL_PTR(tnode186813*, ClPrc) (tcontext249019* c, tidtable186859 pt, tnode186813* n, void* ClEnv);
void* ClEnv;
} TY249114;
typedef struct {
N_NIMCALL_PTR(tsym186843*, ClPrc) (tcontext249019* c, tsym186843* fn, tidtable186859 pt, tlineinfo162527 info, void* ClEnv);
void* ClEnv;
} TY249120;
struct  tinstantiationpair249011  {
tsym186843* Genericsym;
tinstantiation186833* Inst;
};
struct  tcontext249019  {
  tpasscontext245003 Sup;
tsym186843* Module;
tscope186837* Currentscope;
tscope186837* Importtable;
tscope186837* Toplevelscope;
tproccon249009* P;
tsym186843* Friendmodule;
NI Instcounter;
tintset183047 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq186815* Converters;
tsymseq186815* Patterns;
tlinkedlist118023 Optionstack;
tidtable186859 Symmapping;
tlinkedlist118023 Libs;
TY249061 Semconstexpr;
TY249066 Semexpr;
TY249074 Semtryexpr;
TY249083 Semtryconstexpr;
TY249088 Semoperand;
TY249096 Semconstboolexpr;
TY249101 Semoverloadedcall;
TY249108 Semtypenode;
TY249114 Seminferredlambda;
TY249120 Semgenerateinstance;
tintset183047 Includedfiles;
tstrtable186817 Userpragmas;
tctx248037* Evalcontext;
tintset183047 Unknownidents;
TY249131* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
};
struct  tproccon249009  {
tsym186843* Owner;
tsym186843* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon249009* Next;
};
typedef NI TY22818[16];
struct  ttrunk183043  {
ttrunk183043* Next;
NI Key;
TY22818 Bits;
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
struct ttrunkseq183045 {
  TGenericSeq Sup;
  ttrunk183043* data[SEQ_DECL_SIZE];
};
struct tidpairseq186857 {
  TGenericSeq Sup;
  tidpair186855 data[SEQ_DECL_SIZE];
};
struct TY249131 {
  TGenericSeq Sup;
  tinstantiationpair249011 data[SEQ_DECL_SIZE];
};
struct TY248229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163208 {
  TGenericSeq Sup;
  tlineinfo162527 data[SEQ_DECL_SIZE];
};
struct TY248198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY248217 {
  TGenericSeq Sup;
  tblock248023 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_265007)(tnode186813* proca, tnode186813* procb);
static N_INLINE(NI, sonslen_187191)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_164591)(tlineinfo162527 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_227151)(ttype186847* a, ttype186847* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_220150)(tnode186813* a, tnode186813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym186843*, searchforprocold_265171)(tcontext249019* c, tscope186837* scope, tsym186843* fn);
N_NIMCALL(tsym186843*, initidentiter_195110)(tidentiter195106* ti, tstrtable186817 tab, tident166019* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_192927)(tsym186843* s);
N_NIMCALL(tsym186843*, nextidentiter_195117)(tidentiter195106* ti, tstrtable186817 tab);
N_NIMCALL(NU8, equalparams_222066)(tnode186813* a, tnode186813* b);
N_NIMCALL(void, localerror_164571)(tlineinfo162527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym186843*, searchforprocnew_265296)(tcontext249019* c, tscope186837* scope, tsym186843* fn);
N_NIMCALL(NIM_BOOL, sametype_227139)(ttype186847* a, ttype186847* b, NU8 flags);
N_NIMCALL(tsym186843*, searchforproc_265341)(tcontext249019* c, tscope186837* scope, tsym186843* fn);
static NIM_CONST TY187025 TMP3437 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3438, "sons", 4);
STRING_LITERAL(TMP3440, "equalGenericParams", 18);
static NIM_CONST TY187025 TMP3441 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3442, "sym", 3);
NIM_CONST NU8 flags_265302 = 30;
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, sonslen_187191)(tnode186813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP3437[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP3437[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
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

N_NIMCALL(NIM_BOOL, equalgenericparams_265007)(tnode186813* proca, tnode186813* procb) {
	NIM_BOOL result;
	NI i_265024;
	NI HEX3Atmp_265164;
	NI LOC7;
	NI TMP3439;
	NI res_265166;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(17, "procfind.nim");
		nimln(17, "procfind.nim");
		nimln(17, "procfind.nim");
		LOC3 = 0;
		LOC3 = sonslen_187191(proca);
		nimln(17, "procfind.nim");
		LOC4 = 0;
		LOC4 = sonslen_187191(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}
	LA5: ;
	i_265024 = 0;
	HEX3Atmp_265164 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = 0;
	LOC7 = sonslen_187191(proca);
	TMP3439 = subInt(LOC7, 1);
	HEX3Atmp_265164 = (NI32)(TMP3439);
	nimln(1450, "system.nim");
	res_265166 = 0;
	nimln(1451, "system.nim");
	while (1) {
		tsym186843* a;
		tsym186843* b;
		nimln(1451, "system.nim");
		if (!(res_265166 <= HEX3Atmp_265164)) goto LA8;
		nimln(1450, "system.nim");
		i_265024 = res_265166;
		nimln(19, "procfind.nim");
		{
			nimln(19, "procfind.nim");
			nimln(19, "procfind.nim");
			if (((TMP3437[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
			if ((NU)(i_265024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_265024]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_164591((*proca).Info, ((NimStringDesc*) &TMP3440));
			nimln(21, "procfind.nim");
			goto BeforeRet;
		}
		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(22, "procfind.nim");
			nimln(22, "procfind.nim");
			if (((TMP3437[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
			if ((NU)(i_265024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_265024]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_164591((*procb).Info, ((NimStringDesc*) &TMP3440));
			nimln(24, "procfind.nim");
			goto BeforeRet;
		}
		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3437[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
		if ((NU)(i_265024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3441[(*(*proca).kindU.S6.Sons->data[i_265024]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_265024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3442));
		a = (*(*proca).kindU.S6.Sons->data[i_265024]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3437[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
		if ((NU)(i_265024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3441[(*(*procb).kindU.S6.Sons->data[i_265024]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_265024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3442));
		b = (*(*procb).kindU.S6.Sons->data[i_265024]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			LOC19 = 0;
			nimln(27, "procfind.nim");
			nimln(27, "procfind.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = 0;
			LOC21 = sametypeornil_227151((*a).Typ, (*b).Typ, 4);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}
		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			LOC26 = 0;
			nimln(29, "procfind.nim");
			nimln(29, "procfind.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(29, "procfind.nim");
			nimln(29, "procfind.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = 0;
				LOC32 = exprstructuralequivalent_220150((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}
			LA33: ;
		}
		LA28: ;
		nimln(1453, "system.nim");
		res_265166 = addInt(res_265166, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, searchforprocold_265171)(tcontext249019* c, tscope186837* scope, tsym186843* fn) {
	tsym186843* result;
	tidentiter195106 it;
	nimfr("searchForProcOld", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_195110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = 0;
		LOC3 = isgenericroutine_192927(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(43, "procfind.nim");
			nimln(43, "procfind.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode186813* genr;
				tnode186813* genf;
				nimln(44, "procfind.nim");
				LOC9 = 0;
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_192927(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3437[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3437[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					LOC15 = 0;
					nimln(47, "procfind.nim");
					LOC16 = 0;
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_220150(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3437[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3437[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3438));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_220150((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_265007(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}
				LA19: ;
			}
			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_195117(&it, (*scope).Symbols);
		} LA6: ;
	}
	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(54, "procfind.nim");
			nimln(54, "procfind.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				LOC25 = 0;
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = 0;
				LOC27 = isgenericroutine_192927(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = 0;
				LOC30 = equalparams_222066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_164571((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
					nimln(61, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_195117(&it, (*scope).Symbols);
		} LA22: ;
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, searchforprocnew_265296)(tcontext249019* c, tscope186837* scope, tsym186843* fn) {
	tsym186843* result;
	tidentiter195106 it;
	nimfr("searchForProcNew", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(71, "procfind.nim");
	result = initidentiter_195110(&it, (*scope).Symbols, (*fn).Name);
	nimln(72, "procfind.nim");
	while (1) {
		nimln(72, "procfind.nim");
		nimln(72, "procfind.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(73, "procfind.nim");
		{
			NIM_BOOL LOC4;
			nimln(73, "procfind.nim");
			LOC4 = 0;
			nimln(73, "procfind.nim");
			LOC4 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
			if (!(LOC4)) goto LA5;
			nimln(74, "procfind.nim");
			LOC4 = sametype_227139((*result).Typ, (*fn).Typ, 30);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(74, "procfind.nim");
			goto BeforeRet;
		}
		LA6: ;
		nimln(76, "procfind.nim");
		result = nextidentiter_195117(&it, (*scope).Symbols);
	} LA1: ;
	nimln(78, "procfind.nim");
	nimln(78, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, searchforproc_265341)(tcontext249019* c, tscope186837* scope, tsym186843* fn) {
	tsym186843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(81, "procfind.nim");
	result = searchforprocnew_265296(c, scope, fn);
	popFrame();
	return result;
}
N_NOINLINE(void, procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, procfindDatInit)(void) {
}

