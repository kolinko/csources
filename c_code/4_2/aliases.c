/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode185813 tnode185813;
typedef struct ttype185847 ttype185847;
typedef struct tintset182047 tintset182047;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym185843 tsym185843;
typedef struct tident165019 tident165019;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct ttrunk182043 ttrunk182043;
typedef struct ttrunkseq182045 ttrunkseq182045;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
struct  tlineinfo161527  {
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
typedef NU8 TY186025[20];
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
struct  tintset182047  {
NI Counter;
NI Max;
ttrunk182043* Head;
ttrunkseq182045* Data;
};
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY22818[8];
struct  ttrunk182043  {
ttrunk182043* Next;
NI Key;
TY22818 Bits;
};
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
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
struct ttrunkseq182045 {
  TGenericSeq Sup;
  ttrunk182043* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartofaux_410020)(tnode185813* n, ttype185847* b, tintset182047* marker);
static N_INLINE(NI, sonslen_186191)(tnode185813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
static N_INLINE(tnode185813*, lastson_186199)(tnode185813* n);
N_NIMCALL(void, internalerror_163606)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_163591)(tlineinfo161527 info, NimStringDesc* errmsg);
N_NIMCALL(NU8, ispartofaux_410013)(ttype185847* a, ttype185847* b, tintset182047* marker);
N_NIMCALL(NIM_BOOL, containsorincl_182905)(tintset182047* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_228564)(ttype185847* x, ttype185847* y, NU8 cmp, NU8 flags);
static N_INLINE(ttype185847*, lastson_186203)(ttype185847* n);
static N_INLINE(NI, sonslen_186195)(ttype185847* n);
N_NIMCALL(NU8, ispartof_410402)(ttype185847* a, ttype185847* b);
N_NIMCALL(void, initintset_182935)(tintset182047* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartof_410411)(tnode185813* a, tnode185813* b);
static N_INLINE(tnode185813*, HEX5BHEX5D_186711)(tnode185813* n, NI i);
static N_INLINE(NI, len_186274)(tnode185813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_219876)(tnode185813* n);
N_NIMCALL(NIM_BOOL, samevalue_194271)(tnode185813* a, tnode185813* b);
static NIM_CONST TY186025 TMP5613 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5614, "sons", 4);
STRING_LITERAL(TMP5616, "n.sons[0].kind == nkSym ", 24);
STRING_LITERAL(TMP5619, "isPartOfAux(record case branch)", 31);
static NIM_CONST TY186025 TMP5620 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5621, "sym", 3);
STRING_LITERAL(TMP5622, "isPartOfAux()", 13);
NIM_CONST NU32 varkinds_410425 = 4384;
NIM_CONST TY186025 ix0kinds_410648 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY186025 ix1kinds_410650 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY186025 derefkinds_410652 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, sonslen_186191)(tnode185813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
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

static N_INLINE(tnode185813*, lastson_186199)(tnode185813* n) {
	tnode185813* result;
	NI LOC1;
	NI TMP5618;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1421, "ast.nim");
	if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
	nimln(1421, "ast.nim");
	nimln(1421, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_186191(n);
	TMP5618 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP5618)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI64)(TMP5618)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_410020)(tnode185813* n, ttype185847* b, tintset182047* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(22, "aliases.nim");
	result = ((NU8) 0);
	nimln(23, "aliases.nim");
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		NI i_410039;
		NI HEX3Atmp_410311;
		NI LOC2;
		NI TMP5615;
		NI res_410313;
		i_410039 = 0;
		HEX3Atmp_410311 = 0;
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		LOC2 = 0;
		LOC2 = sonslen_186191(n);
		TMP5615 = subInt(LOC2, 1);
		HEX3Atmp_410311 = (NI64)(TMP5615);
		nimln(1450, "system.nim");
		res_410313 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_410313 <= HEX3Atmp_410311)) goto LA3;
			nimln(1450, "system.nim");
			i_410039 = res_410313;
			nimln(26, "aliases.nim");
			if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
			if ((NU)(i_410039) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_410020((*n).kindU.S6.Sons->data[i_410039], b, marker);
			nimln(27, "aliases.nim");
			{
				nimln(27, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA6;
				nimln(27, "aliases.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1453, "system.nim");
			res_410313 = addInt(res_410313, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 137):
	{
		NI i_410259;
		NI HEX3Atmp_410315;
		NI LOC17;
		NI TMP5617;
		NI res_410317;
		nimln(29, "aliases.nim");
		{
			nimln(29, "aliases.nim");
			nimln(29, "aliases.nim");
			if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(29, "aliases.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP5616));
		}
		LA11: ;
		nimln(30, "aliases.nim");
		if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_410020((*n).kindU.S6.Sons->data[0], b, marker);
		nimln(31, "aliases.nim");
		{
			nimln(31, "aliases.nim");
			if (!(result == ((NU8) 2))) goto LA15;
			nimln(31, "aliases.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_410259 = 0;
		HEX3Atmp_410315 = 0;
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		LOC17 = 0;
		LOC17 = sonslen_186191(n);
		TMP5617 = subInt(LOC17, 1);
		HEX3Atmp_410315 = (NI64)(TMP5617);
		nimln(1450, "system.nim");
		res_410317 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_410317 <= HEX3Atmp_410315)) goto LA18;
			nimln(1450, "system.nim");
			i_410259 = res_410317;
			nimln(33, "aliases.nim");
			if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
			if ((NU)(i_410259) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_410259]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode185813* LOC20;
				nimln(35, "aliases.nim");
				nimln(35, "aliases.nim");
				if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
				if ((NU)(i_410259) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_186199((*n).kindU.S6.Sons->data[i_410259]);
				result = ispartofaux_410020(LOC20, b, marker);
				nimln(36, "aliases.nim");
				{
					nimln(36, "aliases.nim");
					if (!(result == ((NU8) 2))) goto LA23;
					nimln(36, "aliases.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(37, "aliases.nim");
				internalerror_163606(((NimStringDesc*) &TMP5619));
			}
			break;
			}
			nimln(1453, "system.nim");
			res_410317 = addInt(res_410317, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(39, "aliases.nim");
		if (!(((TMP5620[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
		result = ispartofaux_410013((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		nimln(40, "aliases.nim");
		internalerror_163591((*n).Info, ((NimStringDesc*) &TMP5622));
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_186195)(ttype185847* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1287, "ast.nim");
	{
		nimln(1287, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1287, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1288, "ast.nim");
		nimln(1288, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(ttype185847*, lastson_186203)(ttype185847* n) {
	ttype185847* result;
	NI LOC1;
	NI TMP5623;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_186195(n);
	TMP5623 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP5623)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI64)(TMP5623)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_410013)(ttype185847* a, ttype185847* b, tintset182047* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(43, "aliases.nim");
	result = ((NU8) 0);
	nimln(44, "aliases.nim");
	{
		NIM_BOOL LOC3;
		nimln(44, "aliases.nim");
		LOC3 = 0;
		nimln(44, "aliases.nim");
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		nimln(44, "aliases.nim");
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(44, "aliases.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(45, "aliases.nim");
	{
		NIM_BOOL LOC9;
		nimln(45, "aliases.nim");
		LOC9 = 0;
		LOC9 = containsorincl_182905(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		nimln(45, "aliases.nim");
		goto BeforeRet;
	}
	LA10: ;
	nimln(46, "aliases.nim");
	{
		NIM_BOOL LOC14;
		nimln(46, "aliases.nim");
		LOC14 = 0;
		LOC14 = comparetypes_228564(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		nimln(46, "aliases.nim");
		nimln(46, "aliases.nim");
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	nimln(47, "aliases.nim");
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		nimln(49, "aliases.nim");
		if ((NU)(0) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_410013((*a).Sons->data[0], b, marker);
		nimln(50, "aliases.nim");
		{
			nimln(50, "aliases.nim");
			if (!(result == ((NU8) 0))) goto LA20;
			nimln(50, "aliases.nim");
			result = ispartofaux_410020((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype185847* LOC23;
		nimln(52, "aliases.nim");
		nimln(52, "aliases.nim");
		LOC23 = 0;
		LOC23 = lastson_186203(a);
		result = ispartofaux_410013(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		NI i_410385;
		NI HEX3Atmp_410395;
		NI LOC25;
		NI TMP5624;
		NI res_410397;
		i_410385 = 0;
		HEX3Atmp_410395 = 0;
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		LOC25 = 0;
		LOC25 = sonslen_186195(a);
		TMP5624 = subInt(LOC25, 1);
		HEX3Atmp_410395 = (NI64)(TMP5624);
		nimln(1450, "system.nim");
		res_410397 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_410397 <= HEX3Atmp_410395)) goto LA26;
			nimln(1450, "system.nim");
			i_410385 = res_410397;
			nimln(55, "aliases.nim");
			if ((NU)(i_410385) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_410013((*a).Sons->data[i_410385], b, marker);
			nimln(56, "aliases.nim");
			{
				nimln(56, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA29;
				nimln(56, "aliases.nim");
				goto BeforeRet;
			}
			LA29: ;
			nimln(1453, "system.nim");
			res_410397 = addInt(res_410397, 1);
		} LA26: ;
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

N_NIMCALL(NU8, ispartof_410402)(ttype185847* a, ttype185847* b) {
	NU8 result;
	tintset182047 marker;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(61, "aliases.nim");
	chckNil((void*)&marker);
	memset((void*)&marker, 0, sizeof(marker));
	initintset_182935(&marker);
	nimln(63, "aliases.nim");
	result = ispartofaux_410013(b, a, &marker);
	popFrame();
	return result;
}

static N_INLINE(tnode185813*, HEX5BHEX5D_186711)(tnode185813* n, NI i) {
	tnode185813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
	return result;
}

static N_INLINE(NI, len_186274)(tnode185813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP5613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5614));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartof_410411)(tnode185813* a, tnode185813* b) {
	NU8 result;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(94, "aliases.nim");
	{
		nimln(94, "aliases.nim");
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		nimln(95, "aliases.nim");
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			nimln(99, "aliases.nim");
			{
				nimln(99, "aliases.nim");
				if (!(((TMP5620[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
				if (!(((TMP5620[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				nimln(99, "aliases.nim");
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				nimln(100, "aliases.nim");
				LOC11 = 0;
				nimln(100, "aliases.nim");
				if (!(((TMP5620[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				nimln(100, "aliases.nim");
				if (!(((TMP5620[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				nimln(103, "aliases.nim");
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				nimln(106, "aliases.nim");
				{
					NU8 LOC18;
					nimln(106, "aliases.nim");
					nimln(106, "aliases.nim");
					nimln(106, "aliases.nim");
					if (!(((TMP5620[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
					if (!(((TMP5620[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
					LOC18 = 0;
					LOC18 = ispartof_410402((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					nimln(107, "aliases.nim");
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode185813* LOC22;
			tnode185813* LOC23;
			nimln(109, "aliases.nim");
			nimln(109, "aliases.nim");
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_186711(a, 0);
			nimln(109, "aliases.nim");
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_186711(b, 0);
			result = ispartof_410411(LOC22, LOC23);
			nimln(110, "aliases.nim");
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				nimln(110, "aliases.nim");
				LOC26 = 0;
				nimln(110, "aliases.nim");
				nimln(110, "aliases.nim");
				LOC27 = 0;
				LOC27 = len_186274(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				nimln(110, "aliases.nim");
				nimln(110, "aliases.nim");
				LOC29 = 0;
				LOC29 = len_186274(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				nimln(112, "aliases.nim");
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode185813* LOC37;
					tnode185813* LOC39;
					tnode185813* x;
					tnode185813* y;
					nimln(112, "aliases.nim");
					LOC34 = 0;
					nimln(112, "aliases.nim");
					LOC35 = 0;
					nimln(112, "aliases.nim");
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_186711(a, 1);
					LOC35 = isdeepconstexpr_219876(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_186711(b, 1);
					LOC34 = isdeepconstexpr_219876(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					nimln(115, "aliases.nim");
					nimln(115, "aliases.nim");
					{
						tnode185813* LOC44;
						tnode185813* LOC47;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_186711(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_186711(a, 1);
						x = HEX5BHEX5D_186711(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						nimln(115, "aliases.nim");
						x = HEX5BHEX5D_186711(a, 1);
					}
					LA42: ;
					nimln(116, "aliases.nim");
					nimln(116, "aliases.nim");
					{
						tnode185813* LOC51;
						tnode185813* LOC54;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_186711(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_186711(b, 1);
						y = HEX5BHEX5D_186711(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						nimln(116, "aliases.nim");
						y = HEX5BHEX5D_186711(b, 1);
					}
					LA49: ;
					nimln(118, "aliases.nim");
					{
						NIM_BOOL LOC58;
						nimln(118, "aliases.nim");
						LOC58 = 0;
						LOC58 = samevalue_194271(x, y);
						if (!LOC58) goto LA59;
						nimln(118, "aliases.nim");
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						nimln(119, "aliases.nim");
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				nimln(123, "aliases.nim");
				{
					nimln(123, "aliases.nim");
					nimln(123, "aliases.nim");
					if (!!((result == ((NU8) 2)))) goto LA65;
					nimln(124, "aliases.nim");
					{
						NU8 LOC69;
						nimln(124, "aliases.nim");
						nimln(124, "aliases.nim");
						nimln(124, "aliases.nim");
						LOC69 = 0;
						LOC69 = ispartof_410402((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						nimln(124, "aliases.nim");
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode185813* LOC73;
			tnode185813* LOC74;
			nimln(127, "aliases.nim");
			nimln(127, "aliases.nim");
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_186711(a, 0);
			nimln(127, "aliases.nim");
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_186711(b, 0);
			result = ispartof_410411(LOC73, LOC74);
			nimln(128, "aliases.nim");
			{
				nimln(128, "aliases.nim");
				nimln(128, "aliases.nim");
				if (!!((result == ((NU8) 0)))) goto LA77;
				nimln(130, "aliases.nim");
				{
					tnode185813* LOC81;
					tnode185813* LOC82;
					nimln(130, "aliases.nim");
					nimln(130, "aliases.nim");
					nimln(130, "aliases.nim");
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_186711(a, 1);
					if (!(((TMP5620[(*LOC81).Kind/8] &(1<<((*LOC81).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
					nimln(130, "aliases.nim");
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_186711(b, 1);
					if (!(((TMP5620[(*LOC82).Kind/8] &(1<<((*LOC82).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5621));
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					nimln(131, "aliases.nim");
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode185813* LOC86;
			tnode185813* LOC87;
			nimln(134, "aliases.nim");
			nimln(134, "aliases.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_186711(a, 0);
			nimln(134, "aliases.nim");
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_186711(b, 0);
			result = ispartof_410411(LOC86, LOC87);
			nimln(136, "aliases.nim");
			{
				nimln(136, "aliases.nim");
				nimln(136, "aliases.nim");
				if (!!((result == ((NU8) 2)))) goto LA90;
				nimln(137, "aliases.nim");
				{
					NU8 LOC94;
					nimln(137, "aliases.nim");
					nimln(137, "aliases.nim");
					nimln(137, "aliases.nim");
					LOC94 = 0;
					LOC94 = ispartof_410402((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					nimln(137, "aliases.nim");
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode185813* LOC98;
			tnode185813* LOC99;
			nimln(140, "aliases.nim");
			nimln(140, "aliases.nim");
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_186711(a, 1);
			nimln(140, "aliases.nim");
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_186711(b, 1);
			result = ispartof_410411(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode185813* LOC101;
			tnode185813* LOC102;
			nimln(142, "aliases.nim");
			nimln(142, "aliases.nim");
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_186711(a, 0);
			nimln(142, "aliases.nim");
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_186711(b, 0);
			result = ispartof_410411(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		nimln(152, "aliases.nim");
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode185813* LOC106;
			nimln(155, "aliases.nim");
			nimln(155, "aliases.nim");
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_186711(b, 0);
			result = ispartof_410411(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			nimln(159, "aliases.nim");
			{
				NU8 LOC110;
				tnode185813* LOC113;
				nimln(159, "aliases.nim");
				nimln(159, "aliases.nim");
				nimln(159, "aliases.nim");
				LOC110 = 0;
				LOC110 = ispartof_410402((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				nimln(160, "aliases.nim");
				nimln(160, "aliases.nim");
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_186711(b, 0);
				result = ispartof_410411(a, LOC113);
				nimln(161, "aliases.nim");
				{
					nimln(161, "aliases.nim");
					if (!(result == ((NU8) 0))) goto LA116;
					nimln(161, "aliases.nim");
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode185813* LOC119;
			nimln(165, "aliases.nim");
			nimln(165, "aliases.nim");
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_186711(b, 1);
			result = ispartof_410411(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			nimln(169, "aliases.nim");
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode185813* LOC122;
				nimln(172, "aliases.nim");
				nimln(172, "aliases.nim");
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_186711(a, 0);
				result = ispartof_410411(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode185813* LOC124;
				nimln(174, "aliases.nim");
				nimln(174, "aliases.nim");
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_186711(a, 1);
				result = ispartof_410411(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				nimln(177, "aliases.nim");
				{
					NU8 LOC128;
					tnode185813* LOC131;
					nimln(177, "aliases.nim");
					nimln(177, "aliases.nim");
					nimln(177, "aliases.nim");
					LOC128 = 0;
					LOC128 = ispartof_410402((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					nimln(178, "aliases.nim");
					nimln(178, "aliases.nim");
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_186711(a, 0);
					result = ispartof_410411(LOC131, b);
					nimln(179, "aliases.nim");
					{
						nimln(179, "aliases.nim");
						if (!(result == ((NU8) 0))) goto LA134;
						nimln(179, "aliases.nim");
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, aliasesInit)(void) {
	nimfr("aliases", "aliases.nim")
	popFrame();
}

N_NOINLINE(void, aliasesDatInit)(void) {
}

