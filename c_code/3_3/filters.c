/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode186813 tnode186813;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype186847 ttype186847;
typedef struct tsym186843 tsym186843;
typedef struct tident166019 tident166019;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tllstream174204 tllstream174204;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tlistentry118017 tlistentry118017;
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
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
};
struct  tllstream174204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(void, invalidpragma_217036)(tnode186813* n);
N_NIMCALL(void, localerror_164571)(tlineinfo162527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_210051)(tnode186813* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode186813*, getarg_217042)(tnode186813* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_187191)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_166469)(tident166019* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_217014)(tnode186813* n, NimStringDesc* name, NI pos, NIM_CHAR default_217019);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_217021)(tnode186813* n, NimStringDesc* name, NI pos, NimStringDesc* default_217026);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_217028)(tnode186813* n, NimStringDesc* name, NI pos, NIM_BOOL default_217033);
N_NIMCALL(tllstream174204*, filterstrip_217008)(tllstream174204* stdin_217010, NimStringDesc* filename, tnode186813* call);
N_NIMCALL(tllstream174204*, llstreamopen_174218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_174248)(tllstream174204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_174274)(tllstream174204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_174238)(tllstream174204* s);
N_NIMCALL(tllstream174204*, filterreplace_217002)(tllstream174204* stdin_217004, NimStringDesc* filename, tnode186813* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY187025 TMP2639 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2640, "sons", 4);
static NIM_CONST TY187025 TMP2642 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2643, "ident", 5);
static NIM_CONST TY187025 TMP2644 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2645, "intVal", 6);
static NIM_CONST TY187025 TMP2646 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2647, "strVal", 6);
STRING_LITERAL(TMP2648, "true", 4);
STRING_LITERAL(TMP2649, "false", 5);
STRING_LITERAL(TMP2650, "startswith", 10);
STRING_LITERAL(TMP2651, "", 0);
STRING_LITERAL(TMP2652, "leading", 7);
STRING_LITERAL(TMP2653, "trailing", 8);
STRING_LITERAL(TMP2655, "sub", 3);
STRING_LITERAL(TMP2656, "by", 2);
extern TFrame* frameptr_13238;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, invalidpragma_217036)(tnode186813* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_210051(n, 4);
	localerror_164571((*n).Info, ((NU16) 163), LOC1);
	popFrame();
}

static N_INLINE(NI, sonslen_187191)(tnode186813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
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

N_NIMCALL(tnode186813*, getarg_217042)(tnode186813* n, NimStringDesc* name, NI pos) {
	tnode186813* result;
	NI i_217074;
	NI HEX3Atmp_217219;
	NI LOC5;
	NI TMP2641;
	NI res_217221;
	nimfr("getArg", "filters.nim")
	result = 0;
	nimln(28, "filters.nim");
	result = NIM_NIL;
	nimln(29, "filters.nim");
	{
		nimln(29, "filters.nim");
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		nimln(29, "filters.nim");
		goto BeforeRet;
	}
	LA3: ;
	i_217074 = 0;
	HEX3Atmp_217219 = 0;
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	LOC5 = 0;
	LOC5 = sonslen_187191(n);
	TMP2641 = subInt(LOC5, 1);
	HEX3Atmp_217219 = (NI64)(TMP2641);
	nimln(1450, "system.nim");
	res_217221 = 1;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_217221 <= HEX3Atmp_217219)) goto LA6;
		nimln(1450, "system.nim");
		i_217074 = res_217221;
		nimln(31, "filters.nim");
		{
			nimln(31, "filters.nim");
			if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
			if ((NU)(i_217074) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[i_217074]).Kind == ((NU8) 33))) goto LA9;
			nimln(32, "filters.nim");
			{
				nimln(32, "filters.nim");
				nimln(32, "filters.nim");
				if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(i_217074) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2639[(*(*n).kindU.S6.Sons->data[i_217074]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_217074]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!!(((*(*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA13;
				nimln(32, "filters.nim");
				invalidpragma_217036(n);
			}
			LA13: ;
			nimln(33, "filters.nim");
			{
				NIM_BOOL LOC17;
				nimln(33, "filters.nim");
				if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(i_217074) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2639[(*(*n).kindU.S6.Sons->data[i_217074]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_217074]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!(((TMP2642[(*(*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2643));
				LOC17 = 0;
				LOC17 = identeq_166469((*(*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
				if (!LOC17) goto LA18;
				nimln(34, "filters.nim");
				nimln(34, "filters.nim");
				if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(i_217074) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2639[(*(*n).kindU.S6.Sons->data[i_217074]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_217074]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
				if ((NU)(1) >= (NU)((*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = (*(*n).kindU.S6.Sons->data[i_217074]).kindU.S6.Sons->data[1];
				goto BeforeRet;
			}
			LA18: ;
		}
		goto LA7;
		LA9: ;
		{
			nimln(35, "filters.nim");
			if (!(i_217074 == pos)) goto LA21;
			nimln(36, "filters.nim");
			nimln(36, "filters.nim");
			if (((TMP2639[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2640));
			if ((NU)(i_217074) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*n).kindU.S6.Sons->data[i_217074];
			goto BeforeRet;
		}
		goto LA7;
		LA21: ;
		LA7: ;
		nimln(1453, "system.nim");
		res_217221 = addInt(res_217221, 1);
	} LA6: ;
	BeforeRet: ;
	popFrame();
	return result;
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

N_NIMCALL(NIM_CHAR, chararg_217014)(tnode186813* n, NimStringDesc* name, NI pos, NIM_CHAR default_217019) {
	NIM_CHAR result;
	tnode186813* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_217042(n, name, pos);
	nimln(40, "filters.nim");
	{
		nimln(40, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(40, "filters.nim");
		result = default_217019;
	}
	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		nimln(41, "filters.nim");
		nimln(41, "filters.nim");
		if (!(((TMP2644[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2645));
		result = ((NIM_CHAR) (((NI)chckRange(((NI) ((*x).kindU.S1.Intval)), 0, 255))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_217036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_217021)(tnode186813* n, NimStringDesc* name, NI pos, NimStringDesc* default_217026) {
	NimStringDesc* result;
	tnode186813* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_217042(n, name, pos);
	nimln(46, "filters.nim");
	{
		nimln(46, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(46, "filters.nim");
		result = copyString(default_217026);
	}
	goto LA1;
	LA3: ;
	{
		nimln(47, "filters.nim");
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		nimln(47, "filters.nim");
		if (!(((TMP2646[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2647));
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_217036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_217028)(tnode186813* n, NimStringDesc* name, NI pos, NIM_BOOL default_217033) {
	NIM_BOOL result;
	tnode186813* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_217042(n, name, pos);
	nimln(52, "filters.nim");
	{
		nimln(52, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(52, "filters.nim");
		result = default_217033;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		nimln(53, "filters.nim");
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		nimln(53, "filters.nim");
		if (!(((TMP2642[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2643));
		LOC6 = identeq_166469((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2648));
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(53, "filters.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		nimln(54, "filters.nim");
		LOC11 = 0;
		nimln(54, "filters.nim");
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		nimln(54, "filters.nim");
		if (!(((TMP2642[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2643));
		LOC11 = identeq_166469((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2649));
		LA12: ;
		if (!LOC11) goto LA13;
		nimln(54, "filters.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_217036(n);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, filterstrip_217008)(tllstream174204* stdin_217010, NimStringDesc* filename, tnode186813* call) {
	tllstream174204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_217021(call, ((NimStringDesc*) &TMP2650), 1, ((NimStringDesc*) &TMP2651));
	nimln(59, "filters.nim");
	leading = boolarg_217028(call, ((NimStringDesc*) &TMP2652), 2, NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_217028(call, ((NimStringDesc*) &TMP2653), 3, NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_174218(((NimStringDesc*) &TMP2651));
	nimln(62, "filters.nim");
	nimln(62, "filters.nim");
	line = rawNewString(80);
	nimln(63, "filters.nim");
	while (1) {
		NIM_BOOL LOC2;
		NimStringDesc* stripped;
		nimln(63, "filters.nim");
		LOC2 = 0;
		LOC2 = llstreamreadline_174248(stdin_217010, &line);
		if (!LOC2) goto LA1;
		nimln(64, "filters.nim");
		stripped = nsuStrip(line, leading, trailing);
		nimln(65, "filters.nim");
		{
			NIM_BOOL LOC5;
			nimln(65, "filters.nim");
			LOC5 = 0;
			nimln(65, "filters.nim");
			nimln(65, "filters.nim");
			LOC5 = (pattern->Sup.len == 0);
			if (LOC5) goto LA6;
			nimln(65, "filters.nim");
			LOC5 = nsuStartsWith(stripped, pattern);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(66, "filters.nim");
			llstreamwriteln_174274(result, stripped);
		}
		goto LA3;
		LA7: ;
		{
			nimln(68, "filters.nim");
			llstreamwriteln_174274(result, line);
		}
		LA3: ;
	} LA1: ;
	nimln(69, "filters.nim");
	llstreamclose_174238(stdin_217010);
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, filterreplace_217002)(tllstream174204* stdin_217004, NimStringDesc* filename, tnode186813* call) {
	tllstream174204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_217021(call, ((NimStringDesc*) &TMP2655), 1, ((NimStringDesc*) &TMP2651));
	nimln(73, "filters.nim");
	{
		nimln(73, "filters.nim");
		nimln(73, "filters.nim");
		if (!(sub->Sup.len == 0)) goto LA3;
		nimln(73, "filters.nim");
		invalidpragma_217036(call);
	}
	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_217021(call, ((NimStringDesc*) &TMP2656), 2, ((NimStringDesc*) &TMP2651));
	nimln(75, "filters.nim");
	result = llstreamopen_174218(((NimStringDesc*) &TMP2651));
	nimln(76, "filters.nim");
	nimln(76, "filters.nim");
	line = rawNewString(80);
	nimln(77, "filters.nim");
	while (1) {
		NIM_BOOL LOC6;
		NimStringDesc* LOC7;
		nimln(77, "filters.nim");
		LOC6 = 0;
		LOC6 = llstreamreadline_174248(stdin_217004, &line);
		if (!LOC6) goto LA5;
		nimln(78, "filters.nim");
		nimln(78, "filters.nim");
		LOC7 = 0;
		LOC7 = nsuReplaceStr(line, sub, by);
		llstreamwriteln_174274(result, LOC7);
	} LA5: ;
	nimln(79, "filters.nim");
	llstreamclose_174238(stdin_217004);
	popFrame();
	return result;
}
N_NOINLINE(void, filtersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

N_NOINLINE(void, filtersDatInit)(void) {
}

