/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable121810 tstringtable121810;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident166019 tident166019;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq121808 tkeyvaluepairseq121808;
typedef struct TY95106 TY95106;
typedef struct tcell41490 tcell41490;
typedef struct tcellset41502 tcellset41502;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellseq41506 tcellseq41506;
typedef struct tpagedesc41498 tpagedesc41498;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
typedef struct tinfocpu141453 tinfocpu141453;
typedef struct tinfoos141044 tinfoos141044;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
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
struct TY95106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable121810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq121808* Data;
NU8 Mode;
};
struct  tcell41490  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41506  {
NI Len;
NI Cap;
tcell41490** D;
};
struct  tcellset41502  {
NI Counter;
NI Max;
tpagedesc41498* Head;
tpagedesc41498** Data;
};
typedef tsmallchunk23038* TY23822[512];
typedef ttrunk23011* ttrunkbuckets23013[256];
struct  tintset23015  {
ttrunkbuckets23013 Data;
};
struct  tmemregion23810  {
NI Minlargeobj;
NI Maxlargeobj;
TY23822 Freesmallchunks;
tllchunk23804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23040* Freechunkslist;
tintset23015 Chunkstarts;
tavlnode23808* Root;
tavlnode23808* Deleted;
tavlnode23808* Last;
tavlnode23808* Freeavlnodes;
};
struct  tgcstat43414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41506 Zct;
tcellseq41506 Decstack;
tcellset41502 Cycleroots;
tcellseq41506 Tempstack;
NI Recgclock;
tmemregion23810 Region;
tgcstat43414 Stat;
};
struct tinfocpu141453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu141453 TY141469[14];
typedef NimStringDesc* TY141463[2];
struct tinfoos141044 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos141044 TY141064[23];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY23018[8];
struct  tpagedesc41498  {
tpagedesc41498* Next;
NI Key;
TY23018 Bits;
};
struct  tbasechunk23036  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23038  {
  tbasechunk23036 Sup;
tsmallchunk23038* Next;
tsmallchunk23038* Prev;
tfreecell23028* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23804  {
NI Size;
NI Acc;
tllchunk23804* Next;
};
struct  tbigchunk23040  {
  tbasechunk23036 Sup;
tbigchunk23040* Next;
tbigchunk23040* Prev;
NI Align;
NF Data;
};
struct  ttrunk23011  {
ttrunk23011* Next;
NI Key;
TY23018 Bits;
};
typedef tavlnode23808* TY23814[2];
struct  tavlnode23808  {
TY23814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell23028  {
tfreecell23028* Next;
NI Zerofield;
};
struct tkeyvaluepairseq121808 {
  TGenericSeq Sup;
  TY95106 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_167006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable121810* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_167011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_167016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable121810* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable121810* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_167022)(tident166019* symbol);
N_NIMCALL(NI, countdefinedsymbols_167042)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_167072)(void);
N_NIMCALL(tstringtable121810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47227)(tcell41490* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44862)(tcell41490* c);
static N_INLINE(void, rtladdcycleroot_45635)(tcell41490* c);
N_NOINLINE(void, incl_42255)(tcellset41502* s, tcell41490* cell);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, decref_46802)(tcell41490* c);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP974, "true", 4);
STRING_LITERAL(TMP975, "false", 5);
STRING_LITERAL(TMP976, "nimrod", 6);
STRING_LITERAL(TMP977, "nimhygiene", 10);
STRING_LITERAL(TMP978, "niminheritable", 14);
STRING_LITERAL(TMP979, "nimmixin", 8);
STRING_LITERAL(TMP980, "nimeffects", 10);
STRING_LITERAL(TMP981, "nimbabel", 8);
STRING_LITERAL(TMP982, "nimcomputedgoto", 15);
STRING_LITERAL(TMP983, "nimunion", 8);
STRING_LITERAL(TMP984, "nimnewshared", 12);
STRING_LITERAL(TMP985, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP986, "x86", 3);
STRING_LITERAL(TMP987, "itanium", 7);
STRING_LITERAL(TMP988, "x8664", 5);
STRING_LITERAL(TMP989, "msdos", 5);
STRING_LITERAL(TMP990, "mswindows", 9);
STRING_LITERAL(TMP991, "win32", 5);
STRING_LITERAL(TMP992, "unix", 4);
STRING_LITERAL(TMP993, "posix", 5);
STRING_LITERAL(TMP994, "sunos", 5);
STRING_LITERAL(TMP995, "bsd", 3);
STRING_LITERAL(TMP996, "macintosh", 9);
STRING_LITERAL(TMP997, "cpu", 3);
extern NIM_CONST TY141469 cpu_141468;
extern NIM_CONST TY141463 endiantostr_141462;
extern NIM_CONST TY141064 os_141063;
STRING_LITERAL(TMP1000, "emulatedthreadvars", 18);
tstringtable121810* gsymbols_167003;
extern TFrame* frameptr_13238;
extern tgcheap43416 gch_43444;
extern NU8 targetcpu_141573;
extern NU8 targetos_141575;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, definesymbol_167006)(NimStringDesc* symbol) {
	nimfr("defineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_167003, symbol, ((NimStringDesc*) &TMP974));
	popFrame();
}

N_NIMCALL(void, undefsymbol_167011)(NimStringDesc* symbol) {
	nimfr("undefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_167003, symbol, ((NimStringDesc*) &TMP975));
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_167016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_167003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_167003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP974));
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_167022)(tident166019* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_167016((*symbol).S);
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

N_NIMCALL(NI, countdefinedsymbols_167042)(void) {
	NI result;
	NimStringDesc* key_167045;
	NimStringDesc* val_167046;
	NI h_167064;
	NI HEX3Atmp_167066;
	NI res_167068;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_167045 = 0;
	val_167046 = 0;
	h_167064 = 0;
	HEX3Atmp_167066 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_167066 = ((*gsymbols_167003).Data->Sup.len-1);
	nimln(1457, "system.nim");
	res_167068 = 0;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_167068 <= HEX3Atmp_167066)) goto LA1;
		nimln(1457, "system.nim");
		h_167064 = res_167068;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_167064) >= (NU)((*gsymbols_167003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_167003).Data->data[h_167064].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_167064) >= (NU)((*gsymbols_167003).Data->Sup.len)) raiseIndexError();
			key_167045 = (*gsymbols_167003).Data->data[h_167064].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_167064) >= (NU)((*gsymbols_167003).Data->Sup.len)) raiseIndexError();
			val_167046 = (*gsymbols_167003).Data->data[h_167064].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_167046, ((NimStringDesc*) &TMP974))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}
			LA8: ;
		}
		LA4: ;
		nimln(1460, "system.nim");
		res_167068 = addInt(res_167068, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44862)(tcell41490* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_45635)(tcell41490* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42255(&gch_43444.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47227)(tcell41490* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44862(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45635(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41490*, usrtocell_44843)(void* usr) {
	tcell41490* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41490*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41490))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41490* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46802)(tcell41490* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46402(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44862(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45635(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41490* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44843(src);
		incref_47227(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41490* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44843((*dest));
		decref_46802(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, initdefines_167072)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("initDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRef((void**) &gsymbols_167003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP976));
	nimln(44, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP977));
	nimln(45, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP978));
	nimln(46, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP979));
	nimln(47, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP980));
	nimln(48, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP981));
	nimln(49, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP982));
	nimln(50, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP983));
	nimln(51, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP984));
	nimln(52, "condsyms.nim");
	definesymbol_167006(((NimStringDesc*) &TMP985));
	nimln(55, "condsyms.nim");
	switch (targetcpu_141573) {
	case ((NU8) 1):
	{
		nimln(56, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP986));
	}
	break;
	case ((NU8) 8):
	{
		nimln(57, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP987));
	}
	break;
	case ((NU8) 9):
	{
		nimln(58, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP988));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(60, "condsyms.nim");
	switch (targetos_141575) {
	case ((NU8) 1):
	{
		nimln(62, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP989));
	}
	break;
	case ((NU8) 2):
	{
		nimln(64, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP990));
		nimln(65, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP991));
	}
	break;
	case ((NU8) 4):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 8):
	case ((NU8) 13):
	case ((NU8) 14):
	case ((NU8) 16):
	case ((NU8) 12):
	case ((NU8) 20):
	{
		nimln(69, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP992));
		nimln(70, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP993));
	}
	break;
	case ((NU8) 7):
	{
		nimln(72, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP994));
		nimln(73, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP992));
		nimln(74, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP993));
	}
	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(76, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP992));
		nimln(77, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP995));
		nimln(78, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP993));
	}
	break;
	case ((NU8) 18):
	{
		nimln(80, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP996));
	}
	break;
	case ((NU8) 19):
	{
		nimln(82, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP996));
		nimln(83, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP992));
		nimln(84, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP993));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(86, "condsyms.nim");
	nimln(86, "condsyms.nim");
	LOC13 = 0;
	nimln(86, "condsyms.nim");
	if (targetcpu_141573 < 1 || targetcpu_141573 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_141468[(targetcpu_141573)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP997));
appendString(LOC13, LOC14);
	definesymbol_167006(LOC13);
	nimln(87, "condsyms.nim");
	nimln(87, "condsyms.nim");
	if (targetcpu_141573 < 1 || targetcpu_141573 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_141462[(cpu_141468[(targetcpu_141573)- 1].Field2)- 0]);
	definesymbol_167006(LOC15);
	nimln(88, "condsyms.nim");
	if (targetcpu_141573 < 1 || targetcpu_141573 > 14) raiseIndexError();
	definesymbol_167006(cpu_141468[(targetcpu_141573)- 1].Field0);
	nimln(89, "condsyms.nim");
	if (targetos_141575 < 1 || targetos_141575 > 23) raiseIndexError();
	definesymbol_167006(os_141063[(targetos_141575)- 1].Field0);
	nimln(90, "condsyms.nim");
	{
		nimln(90, "condsyms.nim");
		if (targetos_141575 < 1 || targetos_141575 > 23) raiseIndexError();
		if (!((os_141063[(targetos_141575)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(91, "condsyms.nim");
		definesymbol_167006(((NimStringDesc*) &TMP1000));
	}
	LA18: ;
	popFrame();
}
N_NOINLINE(void, condsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

N_NOINLINE(void, condsymsDatInit)(void) {
}

