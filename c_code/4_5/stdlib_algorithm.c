/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym186843 tsym186843;
typedef struct tsymseq186815 tsymseq186815;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tentry360566 tentry360566;
typedef struct TY360573 TY360573;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct ttype186847 ttype186847;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tident166019 tident166019;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tnode186813 tnode186813;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tlib186831 tlib186831;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym186843* x_357795, tsym186843* y_357797, void* ClEnv);
void* ClEnv;
} TY357801;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP5099) (tsym186843* x_357870, tsym186843* y_357872);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CLOSURE_PTR(NI, TMP5101) (tsym186843* x_357870, tsym186843* y_357872);
struct  tentry360566  {
NI Pos;
tsym186843* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry360566 x_361179, tentry360566 y_361181, void* ClEnv);
void* ClEnv;
} TY361185;
typedef N_CLOSURE_PTR(NI, TMP5118) (tentry360566 x_361254, tentry360566 y_361256);
typedef N_CLOSURE_PTR(NI, TMP5119) (tentry360566 x_361254, tentry360566 y_361256);
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
struct tsymseq186815 {
  TGenericSeq Sup;
  tsym186843* data[SEQ_DECL_SIZE];
};
struct TY360573 {
  TGenericSeq Sup;
  tentry360566 data[SEQ_DECL_SIZE];
};
struct ttypeseq186845 {
  TGenericSeq Sup;
  ttype186847* data[SEQ_DECL_SIZE];
};
struct TY186943 {
  TGenericSeq Sup;
  tinstantiation186833* data[SEQ_DECL_SIZE];
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_352919)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_357843)(tsym186843** a_357851, NI a_357851Len0, tsym186843** b_357859, NI b_357859Len0, NI lo_357863, NI m_357865, NI hi_357867, TY357801 cmp_357875, NU8 order_357878);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_361227)(tentry360566* a_361235, NI a_361235Len0, tentry360566* b_361243, NI b_361243Len0, NI lo_361247, NI m_361249, NI hi_361251, TY361185 cmp_361259, NU8 order_361262);
STRING_LITERAL(TMP5100, "j (<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=)\015\012    m ", 56);
extern TFrame* frameptr_13038;
extern TNimType NTI186815; /* TSymSeq */
extern TNimType NTI360573; /* seq[TEntry] */
extern TNimType NTI106; /* int */
TNimType NTI352932; /* range -1..0(int) */

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, HEX2A_352919)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP5017;
	NI TMP5018;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	TMP5017 = subInt(((NI) (order)), 1);
	y = (NI32)(TMP5017);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP5018 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI32)(TMP5018);
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
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

N_NIMCALL(void, merge_357843)(tsym186843** a_357851, NI a_357851Len0, tsym186843** b_357859, NI b_357859Len0, NI lo_357863, NI m_357865, NI hi_357867, TY357801 cmp_357875, NU8 order_357878) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(101, "algorithm.nim");
	{
		NI TMP5098;
		NI LOC3;
		NI LOC4;
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		if ((NU)(m_357865) >= (NU)(a_357851Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5098 = addInt(m_357865, 1);
		if ((NU)((NI32)(TMP5098)) >= (NU)(a_357851Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_357875.ClEnv? cmp_357875.ClPrc(a_357851[m_357865], a_357851[(NI32)(TMP5098)], cmp_357875.ClEnv):((TMP5099)(cmp_357875.ClPrc))(a_357851[m_357865], a_357851[(NI32)(TMP5098)]);
		LOC4 = 0;
		LOC4 = HEX2A_352919(LOC3, order_357878);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_357863;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_357865))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP5100));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_357865)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_357859Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_357851Len0)) raiseIndexError();
		unsureAsgnRef((void**) &b_357859[bb], a_357851[j]);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_357863;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_357867);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_357859Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_357851Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_357875.ClEnv? cmp_357875.ClPrc(b_357859[i], a_357851[j], cmp_357875.ClEnv):((TMP5101)(cmp_357875.ClPrc))(b_357859[i], a_357851[j]);
			LOC18 = 0;
			LOC18 = HEX2A_352919(LOC17, order_357878);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_357851Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_357859Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_357851[k], b_357859[i]);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_357851Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_357851Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_357851[k], a_357851[j]);
			nimln(123, "algorithm.nim");
			j = addInt(j, 1);
		}
		LA15: ;
		nimln(124, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(127, "algorithm.nim");
	while (1) {
		nimln(127, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(94, "algorithm.nim");
		if ((NU)(k) >= (NU)(a_357851Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_357859Len0)) raiseIndexError();
		unsureAsgnRef((void**) &a_357851[k], b_357859[i]);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_357782)(tsym186843** a_357790, NI a_357790Len0, TY357801 cmp_357800, NU8 order_357803) {
	NI n;
	tsymseq186815* b;
	NI TMP5095;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_357790Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5095 = divInt(n, 2);
	b = (tsymseq186815*) newSeq((&NTI186815), (NI32)(TMP5095));
	nimln(156, "algorithm.nim");
	s = 1;
	nimln(157, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP5096;
		NI TMP5097;
		NI TMP5106;
		nimln(157, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		TMP5096 = subInt(n, 1);
		TMP5097 = subInt((NI32)(TMP5096), s);
		m = (NI32)(TMP5097);
		nimln(159, "algorithm.nim");
		while (1) {
			NI TMP5102;
			NI TMP5103;
			NI TMP5104;
			NI TMP5105;
			nimln(159, "algorithm.nim");
			if (!(0 <= m)) goto LA2;
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			TMP5102 = subInt(m, s);
			TMP5103 = addInt((NI32)(TMP5102), 1);
			nimln(160, "algorithm.nim");
			TMP5104 = addInt(m, s);
			merge_357843(a_357790, a_357790Len0, b->data, b->Sup.len, (((NI32)(TMP5103) >= 0) ? (NI32)(TMP5103) : 0), m, (NI32)(TMP5104), cmp_357800, order_357803);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5105 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP5105));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5106 = mulInt(s, 2);
		s = (NI32)(TMP5106);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, merge_361227)(tentry360566* a_361235, NI a_361235Len0, tentry360566* b_361243, NI b_361243Len0, NI lo_361247, NI m_361249, NI hi_361251, TY361185 cmp_361259, NU8 order_361262) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(101, "algorithm.nim");
	{
		NI TMP5117;
		NI LOC3;
		NI LOC4;
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		if ((NU)(m_361249) >= (NU)(a_361235Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5117 = addInt(m_361249, 1);
		if ((NU)((NI32)(TMP5117)) >= (NU)(a_361235Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_361259.ClEnv? cmp_361259.ClPrc(a_361235[m_361249], a_361235[(NI32)(TMP5117)], cmp_361259.ClEnv):((TMP5118)(cmp_361259.ClPrc))(a_361235[m_361249], a_361235[(NI32)(TMP5117)]);
		LOC4 = 0;
		LOC4 = HEX2A_352919(LOC3, order_361262);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_361247;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_361249))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP5100));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_361249)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_361243Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_361235Len0)) raiseIndexError();
		b_361243[bb].Pos = a_361235[j].Pos;
		unsureAsgnRef((void**) &b_361243[bb].Sym, a_361235[j].Sym);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_361247;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_361251);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_361243Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_361235Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_361259.ClEnv? cmp_361259.ClPrc(b_361243[i], a_361235[j], cmp_361259.ClEnv):((TMP5119)(cmp_361259.ClPrc))(b_361243[i], a_361235[j]);
			LOC18 = 0;
			LOC18 = HEX2A_352919(LOC17, order_361262);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_361235Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_361243Len0)) raiseIndexError();
			a_361235[k].Pos = b_361243[i].Pos;
			unsureAsgnRef((void**) &a_361235[k].Sym, b_361243[i].Sym);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_361235Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_361235Len0)) raiseIndexError();
			a_361235[k].Pos = a_361235[j].Pos;
			unsureAsgnRef((void**) &a_361235[k].Sym, a_361235[j].Sym);
			nimln(123, "algorithm.nim");
			j = addInt(j, 1);
		}
		LA15: ;
		nimln(124, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(127, "algorithm.nim");
	while (1) {
		nimln(127, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(94, "algorithm.nim");
		if ((NU)(k) >= (NU)(a_361235Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_361243Len0)) raiseIndexError();
		a_361235[k].Pos = b_361243[i].Pos;
		unsureAsgnRef((void**) &a_361235[k].Sym, b_361243[i].Sym);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_361166)(tentry360566* a_361174, NI a_361174Len0, TY361185 cmp_361184, NU8 order_361187) {
	NI n;
	TY360573* b;
	NI TMP5114;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_361174Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5114 = divInt(n, 2);
	b = (TY360573*) newSeq((&NTI360573), (NI32)(TMP5114));
	nimln(156, "algorithm.nim");
	s = 1;
	nimln(157, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP5115;
		NI TMP5116;
		NI TMP5124;
		nimln(157, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		TMP5115 = subInt(n, 1);
		TMP5116 = subInt((NI32)(TMP5115), s);
		m = (NI32)(TMP5116);
		nimln(159, "algorithm.nim");
		while (1) {
			NI TMP5120;
			NI TMP5121;
			NI TMP5122;
			NI TMP5123;
			nimln(159, "algorithm.nim");
			if (!(0 <= m)) goto LA2;
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			TMP5120 = subInt(m, s);
			TMP5121 = addInt((NI32)(TMP5120), 1);
			nimln(160, "algorithm.nim");
			TMP5122 = addInt(m, s);
			merge_361227(a_361174, a_361174Len0, b->data, b->Sup.len, (((NI32)(TMP5121) >= 0) ? (NI32)(TMP5121) : 0), m, (NI32)(TMP5122), cmp_361184, order_361187);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5123 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP5123));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5124 = mulInt(s, 2);
		s = (NI32)(TMP5124);
	} LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibalgorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, stdlibalgorithmDatInit)(void) {
NTI352932.size = sizeof(NI);
NTI352932.kind = 20;
NTI352932.base = (&NTI106);
NTI352932.flags = 3;
}

