/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable163560 ttable163560;
typedef struct tkeyvaluepairseq163563 tkeyvaluepairseq163563;
typedef struct tkeyvaluepair163566 tkeyvaluepair163566;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41088 tcell41088;
typedef struct tcellseq41104 tcellseq41104;
typedef struct tgcheap43016 tgcheap43016;
typedef struct tcellset41100 tcellset41100;
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
struct tkeyvaluepair163566 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  ttable163560  {
tkeyvaluepairseq163563* Data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell41088  {
NI Refcount;
TNimType* Typ;
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
typedef NI TY22618[8];
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
struct tkeyvaluepairseq163563 {
  TGenericSeq Sup;
  tkeyvaluepair163566 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_139414)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_139606)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, ispoweroftwo_133278)(NI x);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP892)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_163744)(ttable163560 t_163751, NimStringDesc* key_163754);
N_NIMCALL(NI, hash_121827)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_163886)(ttable163560* t_163895);
N_NIMCALL(void, rawinsert_163956)(ttable163560* t_163965, tkeyvaluepairseq163563** data_163973, NimStringDesc* key_163977, NI32 val_163979);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
STRING_LITERAL(TMP455, "length > counter ", 17);
STRING_LITERAL(TMP887, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_13038;
TNimType NTI163566; /* TKeyValuePair */
TNimType NTI139010; /* TSlotEnum */
extern TNimType NTI143; /* string */
extern TNimType NTI112; /* int32 */
TNimType NTI163563; /* TKeyValuePairSeq */
TNimType NTI163560; /* TTable */
extern TNimType NTI106; /* int */
extern tgcheap43016 gch_43044;

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

static N_INLINE(NIM_BOOL, mustrehash_139414)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP456;
	NI TMP457;
	NI TMP458;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP455));
	}
	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	LOC5 = 0;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP456 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP457 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP456) < (NI64)(TMP457));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP458 = subInt(length, counter);
	LOC5 = ((NI64)(TMP458) < 4);
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

static N_INLINE(NI, nexttry_139606)(NI h, NI maxhash) {
	NI result;
	NI TMP459;
	NI TMP460;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP459 = mulInt(5, h);
	TMP460 = addInt((NI64)(TMP459), 1);
	result = (NI)((NI64)(TMP460) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP892)(void* p, NI op) {
	tkeyvaluepairseq163563* a;
	NI LOC1;
	a = (tkeyvaluepairseq163563*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_163552)(NI initialsize_163557, ttable163560* Result) {
	nimfr("initTable", "tables.nim")
	nimln(167, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(167, "tables.nim");
		nimln(167, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_133278(initialsize_163557);
		if (!!(LOC3)) goto LA4;
		nimln(167, "tables.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP887));
	}
	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq163563*) newSeq((&NTI163563), initialsize_163557));
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

N_NIMCALL(NI, rawget_163744)(ttable163560 t_163751, NimStringDesc* key_163754) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_121827(key_163754);
	nimln(73, "tables.nim");
	h = (NI)(LOC1 & (t_163751.Data->Sup.len-1));
	nimln(74, "tables.nim");
	while (1) {
		nimln(74, "tables.nim");
		nimln(74, "tables.nim");
		if ((NU)(h) >= (NU)(t_163751.Data->Sup.len)) raiseIndexError();
		if (!!((t_163751.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(75, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(75, "tables.nim");
			LOC5 = 0;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t_163751.Data->Sup.len)) raiseIndexError();
			LOC5 = eqStrings(t_163751.Data->data[h].Field1, key_163754);
			if (!(LOC5)) goto LA6;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t_163751.Data->Sup.len)) raiseIndexError();
			LOC5 = (t_163751.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(76, "tables.nim");
			nimln(76, "tables.nim");
			result = h;
			goto BeforeRet;
		}
		LA7: ;
		nimln(77, "tables.nim");
		nimln(77, "tables.nim");
		h = nexttry_139606(h, (t_163751.Data->Sup.len-1));
	} LA2: ;
	nimln(78, "tables.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_163730)(ttable163560 t_163737, NimStringDesc* key_163740) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(108, "tables.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_163744(t_163737, key_163740);
	result = (0 <= LOC1);
	popFrame();
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_163781)(ttable163560 t_163788, NimStringDesc* key_163791) {
	NI32 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_163744(t_163788, key_163791);
	nimln(97, "tables.nim");
	{
		nimln(97, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(97, "tables.nim");
		if ((NU)(index) >= (NU)(t_163788.Data->Sup.len)) raiseIndexError();
		result = t_163788.Data->data[index].Field2;
	}
	LA3: ;
	popFrame();
	return result;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41088* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44443(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46002(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, rawinsert_163956)(ttable163560* t_163965, tkeyvaluepairseq163563** data_163973, NimStringDesc* key_163977, NI32 val_163979) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC3;
	nimfr("rawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_121827(key_163977);
	nimln(81, "tables.nim");
	h = (NI)(LOC1 & ((*data_163973)->Sup.len-1));
	nimln(82, "tables.nim");
	while (1) {
		nimln(82, "tables.nim");
		if ((NU)(h) >= (NU)((*data_163973)->Sup.len)) raiseIndexError();
		if (!((*data_163973)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(83, "tables.nim");
		nimln(83, "tables.nim");
		h = nexttry_139606(h, ((*data_163973)->Sup.len-1));
	} LA2: ;
	nimln(84, "tables.nim");
	if ((NU)(h) >= (NU)((*data_163973)->Sup.len)) raiseIndexError();
	LOC3 = 0;
	LOC3 = (*data_163973)->data[h].Field1; (*data_163973)->data[h].Field1 = copyStringRC1(key_163977);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data_163973)->Sup.len)) raiseIndexError();
	(*data_163973)->data[h].Field2 = val_163979;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data_163973)->Sup.len)) raiseIndexError();
	(*data_163973)->data[h].Field0 = ((NU8) 1);
	popFrame();
}

N_NIMCALL(void, enlarge_163886)(ttable163560* t_163895) {
	tkeyvaluepairseq163563* n;
	NI TMP904;
	NI i_163941;
	NI HEX3Atmp_164011;
	NI res_164013;
	tkeyvaluepairseq163563* LOC6;
	nimfr("enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP904 = mulInt((*t_163895).Data->Sup.len, 2);
	n = (tkeyvaluepairseq163563*) newSeq((&NTI163563), (NI64)(TMP904));
	i_163941 = 0;
	HEX3Atmp_164011 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_164011 = ((*t_163895).Data->Sup.len-1);
	nimln(1450, "system.nim");
	res_164013 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_164013 <= HEX3Atmp_164011)) goto LA1;
		nimln(1450, "system.nim");
		i_163941 = res_164013;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_163941) >= (NU)((*t_163895).Data->Sup.len)) raiseIndexError();
			if (!((*t_163895).Data->data[i_163941].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_163941) >= (NU)((*t_163895).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_163941) >= (NU)((*t_163895).Data->Sup.len)) raiseIndexError();
			rawinsert_163956(t_163895, &n, (*t_163895).Data->data[i_163941].Field1, (*t_163895).Data->data[i_163941].Field2);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_164013 = addInt(res_164013, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t_163895).Data;
	unsureAsgnRef((void**) &(*t_163895).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_163841)(ttable163560* t_163850, NimStringDesc* key_163854, NI32 val_163856) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_163744((*t_163850), key_163854);
	nimln(128, "tables.nim");
	{
		nimln(128, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(129, "tables.nim");
		if ((NU)(index) >= (NU)((*t_163850).Data->Sup.len)) raiseIndexError();
		(*t_163850).Data->data[index].Field2 = val_163856;
	}
	goto LA1;
	LA3: ;
	{
		nimln(122, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(122, "tables.nim");
			nimln(122, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_139414((*t_163850).Data->Sup.len, (*t_163850).Counter);
			if (!LOC8) goto LA9;
			nimln(122, "tables.nim");
			enlarge_163886(t_163850);
		}
		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_163956(t_163850, &(*t_163850).Data, key_163854, val_163856);
		nimln(124, "tables.nim");
		(*t_163850).Counter = addInt((*t_163850).Counter, 1);
	}
	LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibtablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, stdlibtablesDatInit)(void) {
static TNimNode* TMP888[3];
static TNimNode* TMP889[3];
NI TMP891;
static char* NIM_CONST TMP890[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP893[2];
static TNimNode TMP453[11];
NTI163566.size = sizeof(tkeyvaluepair163566);
NTI163566.kind = 18;
NTI163566.base = 0;
NTI163566.flags = 2;
TMP888[0] = &TMP453[1];
NTI139010.size = sizeof(NU8);
NTI139010.kind = 14;
NTI139010.base = 0;
NTI139010.flags = 3;
for (TMP891 = 0; TMP891 < 3; TMP891++) {
TMP453[TMP891+2].kind = 1;
TMP453[TMP891+2].offset = TMP891;
TMP453[TMP891+2].name = TMP890[TMP891];
TMP889[TMP891] = &TMP453[TMP891+2];
}
TMP453[5].len = 3; TMP453[5].kind = 2; TMP453[5].sons = &TMP889[0];
NTI139010.node = &TMP453[5];
TMP453[1].kind = 1;
TMP453[1].offset = offsetof(tkeyvaluepair163566, Field0);
TMP453[1].typ = (&NTI139010);
TMP453[1].name = "Field0";
TMP888[1] = &TMP453[6];
TMP453[6].kind = 1;
TMP453[6].offset = offsetof(tkeyvaluepair163566, Field1);
TMP453[6].typ = (&NTI143);
TMP453[6].name = "Field1";
TMP888[2] = &TMP453[7];
TMP453[7].kind = 1;
TMP453[7].offset = offsetof(tkeyvaluepair163566, Field2);
TMP453[7].typ = (&NTI112);
TMP453[7].name = "Field2";
TMP453[0].len = 3; TMP453[0].kind = 2; TMP453[0].sons = &TMP888[0];
NTI163566.node = &TMP453[0];
NTI163563.size = sizeof(tkeyvaluepairseq163563*);
NTI163563.kind = 24;
NTI163563.base = (&NTI163566);
NTI163563.flags = 2;
NTI163563.marker = TMP892;
NTI163560.size = sizeof(ttable163560);
NTI163560.kind = 18;
NTI163560.base = 0;
NTI163560.flags = 2;
TMP893[0] = &TMP453[9];
TMP453[9].kind = 1;
TMP453[9].offset = offsetof(ttable163560, Data);
TMP453[9].typ = (&NTI163563);
TMP453[9].name = "data";
TMP893[1] = &TMP453[10];
TMP453[10].kind = 1;
TMP453[10].offset = offsetof(ttable163560, Counter);
TMP453[10].typ = (&NTI106);
TMP453[10].name = "counter";
TMP453[8].len = 2; TMP453[8].kind = 2; TMP453[8].sons = &TMP893[0];
NTI163560.node = &TMP453[8];
}

