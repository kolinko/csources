/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tsym185843 tsym185843;
typedef struct tsymseq185815 tsymseq185815;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tentry359566 tentry359566;
typedef struct TY359573 TY359573;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct ttype185847 ttype185847;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tident165019 tident165019;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tnode185813 tnode185813;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym185843* x_356795, tsym185843* y_356797, void* ClEnv);
void* ClEnv;
} TY356801;
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
typedef N_CLOSURE_PTR(NI, TMP5099) (tsym185843* x_356870, tsym185843* y_356872);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CLOSURE_PTR(NI, TMP5101) (tsym185843* x_356870, tsym185843* y_356872);
struct  tentry359566  {
NI Pos;
tsym185843* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry359566 x_360179, tentry359566 y_360181, void* ClEnv);
void* ClEnv;
} TY360185;
typedef N_CLOSURE_PTR(NI, TMP5118) (tentry359566 x_360254, tentry359566 y_360256);
typedef N_CLOSURE_PTR(NI, TMP5119) (tentry359566 x_360254, tentry359566 y_360256);
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
struct tsymseq185815 {
  TGenericSeq Sup;
  tsym185843* data[SEQ_DECL_SIZE];
};
struct TY359573 {
  TGenericSeq Sup;
  tentry359566 data[SEQ_DECL_SIZE];
};
struct ttypeseq185845 {
  TGenericSeq Sup;
  ttype185847* data[SEQ_DECL_SIZE];
};
struct TY185943 {
  TGenericSeq Sup;
  tinstantiation185833* data[SEQ_DECL_SIZE];
};
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_351919)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_356843)(tsym185843** a_356851, NI a_356851Len0, tsym185843** b_356859, NI b_356859Len0, NI lo_356863, NI m_356865, NI hi_356867, TY356801 cmp_356875, NU8 order_356878);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_360227)(tentry359566* a_360235, NI a_360235Len0, tentry359566* b_360243, NI b_360243Len0, NI lo_360247, NI m_360249, NI hi_360251, TY360185 cmp_360259, NU8 order_360262);
STRING_LITERAL(TMP5100, "j (<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=)\015\012    m ", 56);
extern TFrame* frameptr_13038;
extern TNimType NTI185815; /* TSymSeq */
extern TNimType NTI359573; /* seq[TEntry] */
extern TNimType NTI106; /* int */
TNimType NTI351932; /* range -1..0(int) */

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, HEX2A_351919)(NI x, NU8 order) {
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
	y = (NI64)(TMP5017);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP5018 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI64)(TMP5018);
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
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
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

N_NIMCALL(void, merge_356843)(tsym185843** a_356851, NI a_356851Len0, tsym185843** b_356859, NI b_356859Len0, NI lo_356863, NI m_356865, NI hi_356867, TY356801 cmp_356875, NU8 order_356878) {
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
		if ((NU)(m_356865) >= (NU)(a_356851Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5098 = addInt(m_356865, 1);
		if ((NU)((NI64)(TMP5098)) >= (NU)(a_356851Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_356875.ClEnv? cmp_356875.ClPrc(a_356851[m_356865], a_356851[(NI64)(TMP5098)], cmp_356875.ClEnv):((TMP5099)(cmp_356875.ClPrc))(a_356851[m_356865], a_356851[(NI64)(TMP5098)]);
		LOC4 = 0;
		LOC4 = HEX2A_351919(LOC3, order_356878);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_356863;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_356865))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP5100));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_356865)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_356859Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_356851Len0)) raiseIndexError();
		unsureAsgnRef((void**) &b_356859[bb], a_356851[j]);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_356863;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_356867);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_356859Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_356851Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_356875.ClEnv? cmp_356875.ClPrc(b_356859[i], a_356851[j], cmp_356875.ClEnv):((TMP5101)(cmp_356875.ClPrc))(b_356859[i], a_356851[j]);
			LOC18 = 0;
			LOC18 = HEX2A_351919(LOC17, order_356878);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_356851Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_356859Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_356851[k], b_356859[i]);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_356851Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_356851Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_356851[k], a_356851[j]);
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
		if ((NU)(k) >= (NU)(a_356851Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_356859Len0)) raiseIndexError();
		unsureAsgnRef((void**) &a_356851[k], b_356859[i]);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_356782)(tsym185843** a_356790, NI a_356790Len0, TY356801 cmp_356800, NU8 order_356803) {
	NI n;
	tsymseq185815* b;
	NI TMP5095;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_356790Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5095 = divInt(n, 2);
	b = (tsymseq185815*) newSeq((&NTI185815), (NI64)(TMP5095));
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
		TMP5097 = subInt((NI64)(TMP5096), s);
		m = (NI64)(TMP5097);
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
			TMP5103 = addInt((NI64)(TMP5102), 1);
			nimln(160, "algorithm.nim");
			TMP5104 = addInt(m, s);
			merge_356843(a_356790, a_356790Len0, b->data, b->Sup.len, (((NI64)(TMP5103) >= 0) ? (NI64)(TMP5103) : 0), m, (NI64)(TMP5104), cmp_356800, order_356803);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5105 = mulInt(s, 2);
			m = subInt(m, (NI64)(TMP5105));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5106 = mulInt(s, 2);
		s = (NI64)(TMP5106);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, merge_360227)(tentry359566* a_360235, NI a_360235Len0, tentry359566* b_360243, NI b_360243Len0, NI lo_360247, NI m_360249, NI hi_360251, TY360185 cmp_360259, NU8 order_360262) {
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
		if ((NU)(m_360249) >= (NU)(a_360235Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5117 = addInt(m_360249, 1);
		if ((NU)((NI64)(TMP5117)) >= (NU)(a_360235Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_360259.ClEnv? cmp_360259.ClPrc(a_360235[m_360249], a_360235[(NI64)(TMP5117)], cmp_360259.ClEnv):((TMP5118)(cmp_360259.ClPrc))(a_360235[m_360249], a_360235[(NI64)(TMP5117)]);
		LOC4 = 0;
		LOC4 = HEX2A_351919(LOC3, order_360262);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_360247;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_360249))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP5100));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_360249)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_360243Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_360235Len0)) raiseIndexError();
		b_360243[bb].Pos = a_360235[j].Pos;
		unsureAsgnRef((void**) &b_360243[bb].Sym, a_360235[j].Sym);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_360247;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_360251);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_360243Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_360235Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_360259.ClEnv? cmp_360259.ClPrc(b_360243[i], a_360235[j], cmp_360259.ClEnv):((TMP5119)(cmp_360259.ClPrc))(b_360243[i], a_360235[j]);
			LOC18 = 0;
			LOC18 = HEX2A_351919(LOC17, order_360262);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_360235Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_360243Len0)) raiseIndexError();
			a_360235[k].Pos = b_360243[i].Pos;
			unsureAsgnRef((void**) &a_360235[k].Sym, b_360243[i].Sym);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_360235Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_360235Len0)) raiseIndexError();
			a_360235[k].Pos = a_360235[j].Pos;
			unsureAsgnRef((void**) &a_360235[k].Sym, a_360235[j].Sym);
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
		if ((NU)(k) >= (NU)(a_360235Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_360243Len0)) raiseIndexError();
		a_360235[k].Pos = b_360243[i].Pos;
		unsureAsgnRef((void**) &a_360235[k].Sym, b_360243[i].Sym);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_360166)(tentry359566* a_360174, NI a_360174Len0, TY360185 cmp_360184, NU8 order_360187) {
	NI n;
	TY359573* b;
	NI TMP5114;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_360174Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5114 = divInt(n, 2);
	b = (TY359573*) newSeq((&NTI359573), (NI64)(TMP5114));
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
		TMP5116 = subInt((NI64)(TMP5115), s);
		m = (NI64)(TMP5116);
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
			TMP5121 = addInt((NI64)(TMP5120), 1);
			nimln(160, "algorithm.nim");
			TMP5122 = addInt(m, s);
			merge_360227(a_360174, a_360174Len0, b->data, b->Sup.len, (((NI64)(TMP5121) >= 0) ? (NI64)(TMP5121) : 0), m, (NI64)(TMP5122), cmp_360184, order_360187);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5123 = mulInt(s, 2);
			m = subInt(m, (NI64)(TMP5123));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5124 = mulInt(s, 2);
		s = (NI64)(TMP5124);
	} LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibalgorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, stdlibalgorithmDatInit)(void) {
NTI351932.size = sizeof(NI);
NTI351932.kind = 20;
NTI351932.base = (&NTI106);
NTI351932.flags = 3;
}

