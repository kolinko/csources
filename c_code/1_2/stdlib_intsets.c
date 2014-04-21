/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk184043 ttrunk184043;
typedef struct tintset184047 tintset184047;
typedef struct ttrunkseq184045 ttrunkseq184045;
typedef struct tcell41088 tcell41088;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcellset41100 tcellset41100;
typedef struct tgcheap43016 tgcheap43016;
typedef struct tcellseq41104 tcellseq41104;
typedef struct tpagedesc41096 tpagedesc41096;
typedef struct tmemregion23410 tmemregion23410;
typedef struct tsmallchunk22638 tsmallchunk22638;
typedef struct tllchunk23404 tllchunk23404;
typedef struct tbigchunk22640 tbigchunk22640;
typedef struct tintset22615 tintset22615;
typedef struct ttrunk22611 ttrunk22611;
typedef struct tavlnode23408 tavlnode23408;
typedef struct tgcstat43014 tgcstat43014;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tintset184047  {
NI Counter;
NI Max;
ttrunk184043* Head;
ttrunkseq184045* Data;
};
typedef NI TY22618[8];
struct  ttrunk184043  {
ttrunk184043* Next;
NI Key;
TY22618 Bits;
};
struct  tcell41088  {
NI Refcount;
TNimType* Typ;
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
struct  tcellseq41104  {
NI Len;
NI Cap;
tcell41088** D;
};
struct  tcellset41100  {
NI Counter;
NI Max;
tpagedesc41096* Head;
tpagedesc41096** Data;
};
typedef tsmallchunk22638* TY23422[512];
typedef ttrunk22611* ttrunkbuckets22613[256];
struct  tintset22615  {
ttrunkbuckets22613 Data;
};
struct  tmemregion23410  {
NI Minlargeobj;
NI Maxlargeobj;
TY23422 Freesmallchunks;
tllchunk23404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22640* Freechunkslist;
tintset22615 Chunkstarts;
tavlnode23408* Root;
tavlnode23408* Deleted;
tavlnode23408* Last;
tavlnode23408* Freeavlnodes;
};
struct  tgcstat43014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41104 Zct;
tcellseq41104 Decstack;
tcellset41100 Cycleroots;
tcellseq41104 Tempstack;
NI Recgclock;
tmemregion23410 Region;
tgcstat43014 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tpagedesc41096  {
tpagedesc41096* Next;
NI Key;
TY22618 Bits;
};
struct  tbasechunk22636  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22638  {
  tbasechunk22636 Sup;
tsmallchunk22638* Next;
tsmallchunk22638* Prev;
tfreecell22628* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23404  {
NI Size;
NI Acc;
tllchunk23404* Next;
};
struct  tbigchunk22640  {
  tbasechunk22636 Sup;
tbigchunk22640* Next;
tbigchunk22640* Prev;
NI Align;
NF Data;
};
struct  ttrunk22611  {
ttrunk22611* Next;
NI Key;
TY22618 Bits;
};
typedef tavlnode23408* TY23414[2];
struct  tavlnode23408  {
TY23414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22628  {
tfreecell22628* Next;
NI Zerofield;
};
struct ttrunkseq184045 {
  TGenericSeq Sup;
  ttrunk184043* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_184058)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_184206)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk184043*, intsetget_184213)(tintset184047* t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_184239)(tintset184047* t, ttrunkseq184045** data, ttrunk184043* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_46827)(tcell41088* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44462)(tcell41088* c);
static N_INLINE(void, rtladdcycleroot_45235)(tcell41088* c);
N_NOINLINE(void, incl_41855)(tcellset41100* s, tcell41088* cell);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, decref_46402)(tcell41088* c);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
N_NIMCALL(void, intsetenlarge_184621)(tintset184047* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1946)(void* p, NI op);
N_NIMCALL(void, TMP1947)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk184043*, intsetput_184696)(tintset184047* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_184838)(tintset184047* s, NI key);
N_NIMCALL(void, incl_184866)(tintset184047* s, NI key);
N_NIMCALL(void, excl_184877)(tintset184047* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_184905)(tintset184047* s, NI key);
N_NIMCALL(void, initintset_184935)(tintset184047* Result);
N_NIMCALL(void, assign_184956)(tintset184047* dest, tintset184047* src);
N_NIMCALL(NimStringDesc*, HEX24_185322)(tintset184047* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_185342)(tintset184047* s);
STRING_LITERAL(TMP1933, "length > counter ", 17);
STRING_LITERAL(TMP1939, "data[h] != desc ", 16);
STRING_LITERAL(TMP1940, "data[h] == nil ", 15);
STRING_LITERAL(TMP1949, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1950, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1951, "{", 1);
STRING_LITERAL(TMP1952, ", ", 2);
STRING_LITERAL(TMP1953, "}", 1);
extern TFrame* frameptr_13038;
extern tgcheap43016 gch_43044;
TNimType NTI184043; /* TTrunk */
extern TNimType NTI106; /* int */
extern TNimType NTI22618; /* array[0..7, int] */
TNimType NTI184041; /* PTrunk */
TNimType NTI184045; /* TTrunkSeq */
TNimType NTI184047; /* TIntSet */

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

static N_INLINE(NIM_BOOL, mustrehash_184058)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1934;
	NI TMP1935;
	NI TMP1936;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1933));
	}
	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	LOC5 = 0;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1934 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1935 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP1934) < (NI64)(TMP1935));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1936 = subInt(length, counter);
	LOC5 = ((NI64)(TMP1936) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_184206)(NI h, NI maxhash) {
	NI result;
	NI TMP1937;
	NI TMP1938;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1937 = mulInt(5, h);
	TMP1938 = addInt((NI64)(TMP1937), 1);
	result = (NI)((NI64)(TMP1938) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(ttrunk184043*, intsetget_184213)(tintset184047* t, NI key) {
	ttrunk184043* result;
	NI h;
	nimfr("intSetGet", "intsets.nim")
	result = 0;
	nimln(54, "intsets.nim");
	nimln(54, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(55, "intsets.nim");
	while (1) {
		nimln(55, "intsets.nim");
		nimln(55, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(56, "intsets.nim");
		{
			nimln(56, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(57, "intsets.nim");
			nimln(57, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(58, "intsets.nim");
		h = nexttry_184206(h, (*t).Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44462)(tcell41088* c) {
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

static N_INLINE(void, rtladdcycleroot_45235)(tcell41088* c) {
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
		incl_41855(&gch_43044.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_46827)(tcell41088* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44462(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45235(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41088*, usrtocell_44443)(void* usr) {
	tcell41088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41088*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46002)(tcell41088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44418(&gch_43044.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46402)(tcell41088* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46002(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44462(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45235(c);
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
		tcell41088* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44443(src);
		incref_46827(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41088* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44443((*dest));
		decref_46402(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, intsetrawinsert_184239)(tintset184047* t, ttrunkseq184045** data, ttrunk184043* desc) {
	NI h;
	nimfr("intSetRawInsert", "intsets.nim")
	nimln(62, "intsets.nim");
	nimln(62, "intsets.nim");
	h = (NI)((*desc).Key & (*t).Max);
	nimln(63, "intsets.nim");
	while (1) {
		nimln(63, "intsets.nim");
		nimln(63, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA1;
		nimln(64, "intsets.nim");
		{
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(!(((*data)->data[h] == desc)))) goto LA4;
			nimln(64, "intsets.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP1939));
		}
		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_184206(h, (*t).Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1940));
	}
	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}
N_NIMCALL(void, TMP1946)(void* p, NI op) {
	ttrunk184043* a;
	NI LOC1;
	a = (ttrunk184043*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1947)(void* p, NI op) {
	ttrunkseq184045* a;
	NI LOC1;
	a = (ttrunkseq184045*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_184621)(tintset184047* t) {
	ttrunkseq184045* n;
	NI oldmax;
	NI TMP1941;
	NI TMP1942;
	NI TMP1943;
	NI TMP1944;
	NI i_184655;
	NI res_184691;
	ttrunkseq184045* LOC6;
	nimfr("intSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1941 = addInt((*t).Max, 1);
	TMP1942 = mulInt((NI64)(TMP1941), 2);
	TMP1943 = subInt((NI64)(TMP1942), 1);
	(*t).Max = (NI64)(TMP1943);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1944 = addInt((*t).Max, 1);
	n = (ttrunkseq184045*) newSeq((&NTI184045), (NI64)(TMP1944));
	i_184655 = 0;
	nimln(1450, "system.nim");
	res_184691 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_184691 <= oldmax)) goto LA1;
		nimln(1450, "system.nim");
		i_184655 = res_184691;
		nimln(75, "intsets.nim");
		{
			nimln(75, "intsets.nim");
			nimln(75, "intsets.nim");
			if ((NU)(i_184655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_184655] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_184655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_184239(&(*t), &n, (*t).Data->data[i_184655]);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_184691 = addInt(res_184691, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(ttrunk184043*, intsetput_184696)(tintset184047* t, NI key) {
	ttrunk184043* result;
	NI h;
	nimfr("intSetPut", "intsets.nim")
	result = 0;
	nimln(79, "intsets.nim");
	nimln(79, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(80, "intsets.nim");
	while (1) {
		nimln(80, "intsets.nim");
		nimln(80, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(81, "intsets.nim");
		{
			nimln(81, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(82, "intsets.nim");
			nimln(82, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(83, "intsets.nim");
		h = nexttry_184206(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1948;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1948 = addInt((*t).Max, 1);
		LOC8 = 0;
		LOC8 = mustrehash_184058((NI64)(TMP1948), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_184621(t);
	}
	LA9: ;
	nimln(85, "intsets.nim");
	(*t).Counter = addInt((*t).Counter, 1);
	nimln(86, "intsets.nim");
	nimln(86, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(87, "intsets.nim");
	while (1) {
		nimln(87, "intsets.nim");
		nimln(87, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA11;
		nimln(87, "intsets.nim");
		h = nexttry_184206(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1949));
	}
	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk184043*) newObj((&NTI184041), sizeof(ttrunk184043));
	nimln(90, "intsets.nim");
	asgnRef((void**) &(*result).Next, (*t).Head);
	nimln(91, "intsets.nim");
	(*result).Key = key;
	nimln(92, "intsets.nim");
	unsureAsgnRef((void**) &(*t).Head, result);
	nimln(93, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_184838)(tintset184047* s, NI key) {
	NIM_BOOL result;
	ttrunk184043* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_184213(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(98, "intsets.nim");
	{
		NI u;
		nimln(98, "intsets.nim");
		nimln(98, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(99, "intsets.nim");
		nimln(99, "intsets.nim");
		u = (NI)(key & 511);
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, incl_184866)(tintset184047* s, NI key) {
	ttrunk184043* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_184696(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(107, "intsets.nim");
	nimln(107, "intsets.nim");
	u = (NI)(key & 511);
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(109, "intsets.nim");
	nimln(109, "intsets.nim");
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
	popFrame();
}

N_NIMCALL(void, excl_184877)(tintset184047* s, NI key) {
	ttrunk184043* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_184213(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(114, "intsets.nim");
	{
		NI u;
		nimln(114, "intsets.nim");
		nimln(114, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(115, "intsets.nim");
		nimln(115, "intsets.nim");
		u = (NI)(key & 511);
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64) ~((NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_184905)(tintset184047* s, NI key) {
	NIM_BOOL result;
	ttrunk184043* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_184213(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(123, "intsets.nim");
	{
		NI u;
		nimln(123, "intsets.nim");
		nimln(123, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(124, "intsets.nim");
		nimln(124, "intsets.nim");
		u = (NI)(key & 511);
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
		nimln(126, "intsets.nim");
		{
			nimln(126, "intsets.nim");
			if (!!(result)) goto LA7;
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(128, "intsets.nim");
			nimln(128, "intsets.nim");
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(130, "intsets.nim");
		incl_184866(s, key);
		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_184935)(tintset184047* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq184045*) newSeq((&NTI184045), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_184956)(tintset184047* dest, tintset184047* src) {
	ttrunk184043* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = (*src).Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = (*src).Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq184045*) newSeq((&NTI184045), (*src).Data->Sup.len));
	nimln(147, "intsets.nim");
	it = (*src).Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk184043* n;
		nimln(148, "intsets.nim");
		nimln(148, "intsets.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(150, "intsets.nim");
		nimln(150, "intsets.nim");
		h = (NI)((*it).Key & (*dest).Max);
		nimln(151, "intsets.nim");
		while (1) {
			nimln(151, "intsets.nim");
			nimln(151, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = nexttry_184206(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP1950));
		}
		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk184043*) newObj((&NTI184041), sizeof(ttrunk184043));
		nimln(156, "intsets.nim");
		asgnRef((void**) &(*n).Next, (*dest).Head);
		nimln(157, "intsets.nim");
		(*n).Key = (*it).Key;
		nimln(158, "intsets.nim");
		memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
		nimln(159, "intsets.nim");
		unsureAsgnRef((void**) &(*dest).Head, n);
		nimln(160, "intsets.nim");
		if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
		asgnRef((void**) &(*dest).Data->data[h], n);
		nimln(162, "intsets.nim");
		it = (*it).Next;
	} LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_185322)(tintset184047* s) {
	NimStringDesc* result;
	NI key_185327;
	ttrunk184043* r_185330;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1951));
	key_185327 = 0;
	nimln(166, "intsets.nim");
	r_185330 = (*s).Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_185332;
		nimln(167, "intsets.nim");
		nimln(167, "intsets.nim");
		if (!!((r_185330 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_185332 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_185334;
			NI j_185336;
			nimln(169, "intsets.nim");
			if (!(i_185332 <= 7)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_185332) > (NU)(7)) raiseIndexError();
			w_185334 = (*r_185330).Bits[(i_185332)- 0];
			nimln(173, "intsets.nim");
			j_185336 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(174, "intsets.nim");
				nimln(174, "intsets.nim");
				if (!!((w_185334 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_185334 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_185327 = (NI)((NI)((NU64)((*r_185330).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_185332) << (NU64)(6))) + (NU64)(j_185336)));
					nimln(185, "intsets.nim");
					{
						nimln(185, "intsets.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1952));
					}
					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_185327);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}
				LA6: ;
				nimln(177, "intsets.nim");
				j_185336 = addInt(j_185336, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_185334 = (NI)((NU64)(w_185334) >> (NU64)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_185332 = addInt(i_185332, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_185330 = (*r_185330).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1953));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_185342)(tintset184047* s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(196, "intsets.nim");
	nimln(196, "intsets.nim");
	result = ((*s).Counter == 0);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibintsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

N_NOINLINE(void, stdlibintsetsDatInit)(void) {
static TNimNode* TMP1945[3];
static TNimNode* TMP3238[4];
static TNimNode TMP1931[9];
NTI184043.size = sizeof(ttrunk184043);
NTI184043.kind = 18;
NTI184043.base = 0;
TMP1945[0] = &TMP1931[1];
TMP1931[1].kind = 1;
TMP1931[1].offset = offsetof(ttrunk184043, Next);
TMP1931[1].typ = (&NTI184041);
TMP1931[1].name = "next";
TMP1945[1] = &TMP1931[2];
TMP1931[2].kind = 1;
TMP1931[2].offset = offsetof(ttrunk184043, Key);
TMP1931[2].typ = (&NTI106);
TMP1931[2].name = "key";
TMP1945[2] = &TMP1931[3];
TMP1931[3].kind = 1;
TMP1931[3].offset = offsetof(ttrunk184043, Bits);
TMP1931[3].typ = (&NTI22618);
TMP1931[3].name = "bits";
TMP1931[0].len = 3; TMP1931[0].kind = 2; TMP1931[0].sons = &TMP1945[0];
NTI184043.node = &TMP1931[0];
NTI184041.size = sizeof(ttrunk184043*);
NTI184041.kind = 22;
NTI184041.base = (&NTI184043);
NTI184041.marker = TMP1946;
NTI184045.size = sizeof(ttrunkseq184045*);
NTI184045.kind = 24;
NTI184045.base = (&NTI184041);
NTI184045.flags = 2;
NTI184045.marker = TMP1947;
NTI184047.size = sizeof(tintset184047);
NTI184047.kind = 18;
NTI184047.base = 0;
NTI184047.flags = 2;
TMP3238[0] = &TMP1931[5];
TMP1931[5].kind = 1;
TMP1931[5].offset = offsetof(tintset184047, Counter);
TMP1931[5].typ = (&NTI106);
TMP1931[5].name = "counter";
TMP3238[1] = &TMP1931[6];
TMP1931[6].kind = 1;
TMP1931[6].offset = offsetof(tintset184047, Max);
TMP1931[6].typ = (&NTI106);
TMP1931[6].name = "max";
TMP3238[2] = &TMP1931[7];
TMP1931[7].kind = 1;
TMP1931[7].offset = offsetof(tintset184047, Head);
TMP1931[7].typ = (&NTI184041);
TMP1931[7].name = "head";
TMP3238[3] = &TMP1931[8];
TMP1931[8].kind = 1;
TMP1931[8].offset = offsetof(tintset184047, Data);
TMP1931[8].typ = (&NTI184045);
TMP1931[8].name = "data";
TMP1931[4].len = 4; TMP1931[4].kind = 2; TMP1931[4].sons = &TMP3238[0];
NTI184047.node = &TMP1931[4];
}

