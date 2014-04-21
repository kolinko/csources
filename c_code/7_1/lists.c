/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tlinkedlist117023 tlinkedlist117023;
typedef struct tlistentry117017 tlistentry117017;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41290 tcell41290;
typedef struct tcellset41302 tcellset41302;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tstrentry117019 tstrentry117019;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  tlinkedlist117023  {
tlistentry117017* Head;
tlistentry117017* Tail;
NI Counter;
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
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrentry117019  {
  tlistentry117017 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tcompareproc117025) (tlistentry117017* entry, void* closure);
typedef NI TY22818[16];
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
N_NIMCALL(void, initlinkedlist_117036)(tlinkedlist117023* list);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, append_117042)(tlinkedlist117023* list, tlistentry117017* entry);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41290* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c);
N_NOINLINE(void, incl_42055)(tcellset41302* s, tcell41290* cell);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, decref_46602)(tcell41290* c);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NIM_BOOL, contains_117237)(tlinkedlist117023 list, NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP262)(void* p, NI op);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(tstrentry117019*, newstrentry_117263)(NimStringDesc* data);
N_NIMCALL(void, TMP263)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, appendstr_117285)(tlinkedlist117023* list, NimStringDesc* data);
N_NIMCALL(NIM_BOOL, includestr_117292)(tlinkedlist117023* list, NimStringDesc* data);
N_NIMCALL(void, prepend_117300)(tlinkedlist117023* list, tlistentry117017* entry);
N_NIMCALL(void, prependstr_117437)(tlinkedlist117023* list, NimStringDesc* data);
N_NIMCALL(void, insertbefore_117444)(tlinkedlist117023* list, tlistentry117017* pos, tlistentry117017* entry);
N_NIMCALL(void, remove_117669)(tlinkedlist117023* list, tlistentry117017* entry);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, bringtofront_117758)(tlinkedlist117023* list, tlistentry117017* entry);
N_NIMCALL(void, excludestr_117803)(tlinkedlist117023* list, NimStringDesc* data);
N_NIMCALL(tlistentry117017*, find_117830)(tlinkedlist117023 list, tcompareproc117025 fn, void* closure);
STRING_LITERAL(TMP260, "list.tail.next == nil ", 22);
STRING_LITERAL(TMP264, "list.head.prev == nil ", 22);
STRING_LITERAL(TMP265, "pos != nil ", 11);
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
extern TNimType NTI2409; /* TObject */
TNimType NTI117017; /* TListEntry */
TNimType NTI117015; /* PListEntry */
TNimType NTI117019; /* TStrEntry */
extern TNimType NTI143; /* string */
TNimType NTI117021; /* PStrEntry */
TNimType NTI117023; /* TLinkedList */
extern TNimType NTI106; /* int */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, initlinkedlist_117036)(tlinkedlist117023* list) {
	nimfr("initLinkedList", "lists.nim")
	nimln(28, "lists.nim");
	(*list).Counter = 0;
	nimln(29, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, NIM_NIL);
	nimln(30, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, NIM_NIL);
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

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c) {
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

static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c) {
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
		incl_42055(&gch_43244.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47027)(tcell41290* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44662(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46602)(tcell41290* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44662(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45435(c);
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
		tcell41290* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44643(src);
		incref_47027(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41290* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44643((*dest));
		decref_46602(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, append_117042)(tlinkedlist117023* list, tlistentry117017* entry) {
	nimfr("append", "lists.nim")
	nimln(33, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(34, "lists.nim");
	asgnRef((void**) &(*entry).Next, NIM_NIL);
	nimln(35, "lists.nim");
	asgnRef((void**) &(*entry).Prev, (*list).Tail);
	nimln(36, "lists.nim");
	{
		nimln(36, "lists.nim");
		nimln(36, "lists.nim");
		if (!!(((*list).Tail == NIM_NIL))) goto LA3;
		nimln(37, "lists.nim");
		{
			nimln(37, "lists.nim");
			nimln(37, "lists.nim");
			if (!!(((*(*list).Tail).Next == NIM_NIL))) goto LA7;
			nimln(37, "lists.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP260));
		}
		LA7: ;
		nimln(38, "lists.nim");
		asgnRef((void**) &(*(*list).Tail).Next, entry);
	}
	LA3: ;
	nimln(39, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, entry);
	nimln(40, "lists.nim");
	{
		nimln(40, "lists.nim");
		if (!((*list).Head == NIM_NIL)) goto LA11;
		nimln(40, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, entry);
	}
	LA11: ;
	popFrame();
}
N_NIMCALL(void, TMP262)(void* p, NI op) {
	tlistentry117017* a;
	a = (tlistentry117017*)p;
	nimGCvisit((void*)(*a).Prev, op);
	nimGCvisit((void*)(*a).Next, op);
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_117237)(tlinkedlist117023 list, NimStringDesc* data) {
	NIM_BOOL result;
	tlistentry117017* it;
	nimfr("contains", "lists.nim")
	result = 0;
	nimln(43, "lists.nim");
	it = list.Head;
	nimln(44, "lists.nim");
	while (1) {
		nimln(44, "lists.nim");
		nimln(44, "lists.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(45, "lists.nim");
		{
			nimln(45, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI117019));
			if (!eqStrings((*((tstrentry117019*) (it))).Data, data)) goto LA4;
			nimln(46, "lists.nim");
			nimln(46, "lists.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(47, "lists.nim");
		it = (*it).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP263)(void* p, NI op) {
	tstrentry117019* a;
	a = (tstrentry117019*)p;
	nimGCvisit((void*)(*a).Sup.Prev, op);
	nimGCvisit((void*)(*a).Sup.Next, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(tstrentry117019*, newstrentry_117263)(NimStringDesc* data) {
	tstrentry117019* result;
	NimStringDesc* LOC1;
	nimfr("newStrEntry", "lists.nim")
	result = 0;
	nimln(50, "lists.nim");
	result = (tstrentry117019*) newObj((&NTI117021), sizeof(tstrentry117019));
	(*result).Sup.Sup.m_type = (&NTI117019);
	nimln(51, "lists.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, appendstr_117285)(tlinkedlist117023* list, NimStringDesc* data) {
	tstrentry117019* LOC1;
	nimfr("appendStr", "lists.nim")
	nimln(54, "lists.nim");
	nimln(54, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_117263(data);
	append_117042(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(NIM_BOOL, includestr_117292)(tlinkedlist117023* list, NimStringDesc* data) {
	NIM_BOOL result;
	nimfr("includeStr", "lists.nim")
	result = 0;
	nimln(57, "lists.nim");
	{
		NIM_BOOL LOC3;
		nimln(57, "lists.nim");
		LOC3 = 0;
		LOC3 = contains_117237((*list), data);
		if (!LOC3) goto LA4;
		nimln(57, "lists.nim");
		nimln(57, "lists.nim");
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(58, "lists.nim");
	appendstr_117285(list, data);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, prepend_117300)(tlinkedlist117023* list, tlistentry117017* entry) {
	nimfr("prepend", "lists.nim")
	nimln(61, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(62, "lists.nim");
	asgnRef((void**) &(*entry).Prev, NIM_NIL);
	nimln(63, "lists.nim");
	asgnRef((void**) &(*entry).Next, (*list).Head);
	nimln(64, "lists.nim");
	{
		nimln(64, "lists.nim");
		nimln(64, "lists.nim");
		if (!!(((*list).Head == NIM_NIL))) goto LA3;
		nimln(65, "lists.nim");
		{
			nimln(65, "lists.nim");
			nimln(65, "lists.nim");
			if (!!(((*(*list).Head).Prev == NIM_NIL))) goto LA7;
			nimln(65, "lists.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP264));
		}
		LA7: ;
		nimln(66, "lists.nim");
		asgnRef((void**) &(*(*list).Head).Prev, entry);
	}
	LA3: ;
	nimln(67, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, entry);
	nimln(68, "lists.nim");
	{
		nimln(68, "lists.nim");
		if (!((*list).Tail == NIM_NIL)) goto LA11;
		nimln(68, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, entry);
	}
	LA11: ;
	popFrame();
}

N_NIMCALL(void, prependstr_117437)(tlinkedlist117023* list, NimStringDesc* data) {
	tstrentry117019* LOC1;
	nimfr("prependStr", "lists.nim")
	nimln(71, "lists.nim");
	nimln(71, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_117263(data);
	prepend_117300(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(void, insertbefore_117444)(tlinkedlist117023* list, tlistentry117017* pos, tlistentry117017* entry) {
	nimfr("insertBefore", "lists.nim")
	nimln(74, "lists.nim");
	{
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		if (!!(!((pos == NIM_NIL)))) goto LA3;
		nimln(74, "lists.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP265));
	}
	LA3: ;
	nimln(75, "lists.nim");
	{
		nimln(75, "lists.nim");
		if (!(pos == (*list).Head)) goto LA7;
		nimln(76, "lists.nim");
		prepend_117300(list, entry);
	}
	goto LA5;
	LA7: ;
	{
		nimln(78, "lists.nim");
		(*list).Counter = addInt((*list).Counter, 1);
		nimln(79, "lists.nim");
		asgnRef((void**) &(*entry).Next, pos);
		nimln(80, "lists.nim");
		asgnRef((void**) &(*entry).Prev, (*pos).Prev);
		nimln(81, "lists.nim");
		{
			nimln(81, "lists.nim");
			nimln(81, "lists.nim");
			if (!!(((*pos).Prev == NIM_NIL))) goto LA12;
			nimln(81, "lists.nim");
			asgnRef((void**) &(*(*pos).Prev).Next, entry);
		}
		LA12: ;
		nimln(82, "lists.nim");
		asgnRef((void**) &(*pos).Prev, entry);
	}
	LA5: ;
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

N_NIMCALL(void, remove_117669)(tlinkedlist117023* list, tlistentry117017* entry) {
	nimfr("remove", "lists.nim")
	nimln(85, "lists.nim");
	(*list).Counter = subInt((*list).Counter, 1);
	nimln(86, "lists.nim");
	{
		nimln(86, "lists.nim");
		if (!(entry == (*list).Tail)) goto LA3;
		nimln(87, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, (*entry).Prev);
	}
	LA3: ;
	nimln(88, "lists.nim");
	{
		nimln(88, "lists.nim");
		if (!(entry == (*list).Head)) goto LA7;
		nimln(89, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, (*entry).Next);
	}
	LA7: ;
	nimln(90, "lists.nim");
	{
		nimln(90, "lists.nim");
		nimln(90, "lists.nim");
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		nimln(90, "lists.nim");
		asgnRef((void**) &(*(*entry).Next).Prev, (*entry).Prev);
	}
	LA11: ;
	nimln(91, "lists.nim");
	{
		nimln(91, "lists.nim");
		nimln(91, "lists.nim");
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		nimln(91, "lists.nim");
		asgnRef((void**) &(*(*entry).Prev).Next, (*entry).Next);
	}
	LA15: ;
	popFrame();
}

N_NIMCALL(void, bringtofront_117758)(tlinkedlist117023* list, tlistentry117017* entry) {
	nimfr("bringToFront", "lists.nim")
	nimln(95, "lists.nim");
	remove_117669(list, entry);
	nimln(96, "lists.nim");
	prepend_117300(list, entry);
	popFrame();
}

N_NIMCALL(void, excludestr_117803)(tlinkedlist117023* list, NimStringDesc* data) {
	tlistentry117017* it;
	nimfr("excludeStr", "lists.nim")
	nimln(107, "lists.nim");
	it = (*list).Head;
	nimln(108, "lists.nim");
	while (1) {
		tlistentry117017* nxt;
		nimln(108, "lists.nim");
		nimln(108, "lists.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(109, "lists.nim");
		nxt = (*it).Next;
		nimln(110, "lists.nim");
		{
			nimln(110, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI117019));
			if (!eqStrings((*((tstrentry117019*) (it))).Data, data)) goto LA4;
			nimln(110, "lists.nim");
			remove_117669(list, it);
		}
		LA4: ;
		nimln(111, "lists.nim");
		it = nxt;
	} LA1: ;
	popFrame();
}

N_NIMCALL(tlistentry117017*, find_117830)(tlinkedlist117023 list, tcompareproc117025 fn, void* closure) {
	tlistentry117017* result;
	nimfr("find", "lists.nim")
	result = 0;
	nimln(114, "lists.nim");
	result = list.Head;
	nimln(115, "lists.nim");
	while (1) {
		nimln(115, "lists.nim");
		nimln(115, "lists.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(116, "lists.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "lists.nim");
			LOC4 = 0;
			LOC4 = fn(result, closure);
			if (!LOC4) goto LA5;
			nimln(116, "lists.nim");
			goto BeforeRet;
		}
		LA5: ;
		nimln(117, "lists.nim");
		result = (*result).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, listsInit)(void) {
	nimfr("lists", "lists.nim")
	popFrame();
}

N_NOINLINE(void, listsDatInit)(void) {
static TNimNode* TMP261[2];
static TNimNode* TMP3247[3];
static TNimNode TMP258[8];
NTI117017.size = sizeof(tlistentry117017);
NTI117017.kind = 17;
NTI117017.base = (&NTI2409);
TMP261[0] = &TMP258[1];
NTI117015.size = sizeof(tlistentry117017*);
NTI117015.kind = 22;
NTI117015.base = (&NTI117017);
NTI117015.marker = TMP262;
TMP258[1].kind = 1;
TMP258[1].offset = offsetof(tlistentry117017, Prev);
TMP258[1].typ = (&NTI117015);
TMP258[1].name = "prev";
TMP261[1] = &TMP258[2];
TMP258[2].kind = 1;
TMP258[2].offset = offsetof(tlistentry117017, Next);
TMP258[2].typ = (&NTI117015);
TMP258[2].name = "next";
TMP258[0].len = 2; TMP258[0].kind = 2; TMP258[0].sons = &TMP261[0];
NTI117017.node = &TMP258[0];
NTI117019.size = sizeof(tstrentry117019);
NTI117019.kind = 17;
NTI117019.base = (&NTI117017);
TMP258[3].kind = 1;
TMP258[3].offset = offsetof(tstrentry117019, Data);
TMP258[3].typ = (&NTI143);
TMP258[3].name = "data";
NTI117019.node = &TMP258[3];
NTI117021.size = sizeof(tstrentry117019*);
NTI117021.kind = 22;
NTI117021.base = (&NTI117019);
NTI117021.marker = TMP263;
NTI117023.size = sizeof(tlinkedlist117023);
NTI117023.kind = 18;
NTI117023.base = 0;
TMP3247[0] = &TMP258[5];
TMP258[5].kind = 1;
TMP258[5].offset = offsetof(tlinkedlist117023, Head);
TMP258[5].typ = (&NTI117015);
TMP258[5].name = "head";
TMP3247[1] = &TMP258[6];
TMP258[6].kind = 1;
TMP258[6].offset = offsetof(tlinkedlist117023, Tail);
TMP258[6].typ = (&NTI117015);
TMP258[6].name = "tail";
TMP3247[2] = &TMP258[7];
TMP258[7].kind = 1;
TMP258[7].offset = offsetof(tlinkedlist117023, Counter);
TMP258[7].typ = (&NTI106);
TMP258[7].name = "counter";
TMP258[4].len = 3; TMP258[4].kind = 2; TMP258[4].sons = &TMP3247[0];
NTI117023.node = &TMP258[4];
}

