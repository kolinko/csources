/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct tllstream174204 tllstream174204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41488 tcell41488;
typedef struct tcellseq41504 tcellseq41504;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellset41500 tcellset41500;
typedef struct tpagedesc41496 tpagedesc41496;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
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
struct  tcell41488  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41504  {
NI Len;
NI Cap;
tcell41488** D;
};
struct  tcellset41500  {
NI Counter;
NI Max;
tpagedesc41496* Head;
tpagedesc41496** Data;
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
tcellseq41504 Zct;
tcellseq41504 Decstack;
tcellset41500 Cycleroots;
tcellseq41504 Tempstack;
NI Recgclock;
tmemregion23810 Region;
tgcstat43414 Stat;
};
typedef NU8 TY122387[32];
typedef NI TY23018[8];
struct  tpagedesc41496  {
tpagedesc41496* Next;
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
N_NIMCALL(tllstream174204*, llstreamopen_174218)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1626)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41488*, usrtocell_44843)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46402)(tcell41488* c);
N_NOINLINE(void, addzct_44818)(tcellseq41504* s, tcell41488* c);
N_NIMCALL(tllstream174204*, llstreamopen_174222)(FILE** f);
N_NIMCALL(tllstream174204*, llstreamopen_174227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_10403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(tllstream174204*, llstreamopen_174232)(void);
N_NIMCALL(tllstream174204*, llstreamopenstdin_174235)(void);
N_NIMCALL(void, llstreamclose_174238)(tllstream174204* s);
N_NIMCALL(NIM_BOOL, readlinefromstdin_174396)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_10663)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, readline_10687)(FILE* f, NimStringDesc** line);
N_NIMCALL(NIM_BOOL, endswith_174602)(NimStringDesc* x, TY122387 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, endswithopr_174646)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, continueline_174652)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NI, counttriples_174676)(NimStringDesc* s);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, llreadfromstdin_174733)(tllstream174204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, llstreamread_174242)(tllstream174204* s, void* buf, NI buflen);
N_NIMCALL(NI, readbuffer_10827)(FILE* f, void* buffer, NI len);
N_NIMCALL(NIM_BOOL, llstreamreadline_174248)(tllstream174204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, llstreamwrite_174258)(tllstream174204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwriteln_174274)(tllstream174204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwrite_174263)(tllstream174204* s, NIM_CHAR data);
N_NIMCALL(NI, writebuffer_10846)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_174268)(tllstream174204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, llstreamreadall_174254)(tllstream174204* s);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP1627, "", 0);
NIM_CONST TY122387 linecontinuationoprs_174641 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY122387 additionallinecontinuationoprs_174643 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY122387 TMP1629 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY122387 TMP1630 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1633, ">>> ", 4);
STRING_LITERAL(TMP1634, "... ", 4);
STRING_LITERAL(TMP1635, "\012", 1);
extern TNimType NTI2409; /* TObject */
TNimType NTI174204; /* TLLStream */
TNimType NTI174202; /* TLLStreamKind */
extern TNimType NTI10204; /* TFile */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
TNimType NTI174206; /* PLLStream */
extern TFrame* frameptr_13238;
extern tgcheap43416 gch_43444;
N_NIMCALL(void, TMP1626)(void* p, NI op) {
	tllstream174204* a;
	a = (tllstream174204*)p;
	nimGCvisit((void*)(*a).S, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(tcell41488*, usrtocell_44843)(void* usr) {
	tcell41488* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41488*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41488))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41488* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41488* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44843(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(tllstream174204*, llstreamopen_174218)(NimStringDesc* data) {
	tllstream174204* result;
	NimStringDesc* LOC1;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(49, "llstream.nim");
	result = (tllstream174204*) newObj((&NTI174206), sizeof(tllstream174204));
	(*result).Sup.m_type = (&NTI174204);
	nimln(50, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(51, "llstream.nim");
	(*result).Kind = ((NU8) 1);
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, llstreamopen_174222)(FILE** f) {
	tllstream174204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(54, "llstream.nim");
	result = (tllstream174204*) newObj((&NTI174206), sizeof(tllstream174204));
	(*result).Sup.m_type = (&NTI174204);
	nimln(55, "llstream.nim");
	(*result).F = (*f);
	nimln(56, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, llstreamopen_174227)(NimStringDesc* filename, NU8 mode) {
	tllstream174204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(59, "llstream.nim");
	result = (tllstream174204*) newObj((&NTI174206), sizeof(tllstream174204));
	(*result).Sup.m_type = (&NTI174204);
	nimln(60, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	nimln(61, "llstream.nim");
	{
		NIM_BOOL LOC3;
		nimln(61, "llstream.nim");
		nimln(61, "llstream.nim");
		LOC3 = 0;
		LOC3 = open_10403(&(*result).F, filename, mode, -1);
		if (!!(LOC3)) goto LA4;
		nimln(61, "llstream.nim");
		result = NIM_NIL;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, llstreamopen_174232)(void) {
	tllstream174204* result;
	nimfr("llStreamOpen", "llstream.nim")
	result = 0;
	nimln(64, "llstream.nim");
	result = (tllstream174204*) newObj((&NTI174206), sizeof(tllstream174204));
	(*result).Sup.m_type = (&NTI174204);
	nimln(65, "llstream.nim");
	(*result).Kind = ((NU8) 0);
	popFrame();
	return result;
}

N_NIMCALL(tllstream174204*, llstreamopenstdin_174235)(void) {
	tllstream174204* result;
	NimStringDesc* LOC1;
	nimfr("llStreamOpenStdIn", "llstream.nim")
	result = 0;
	nimln(68, "llstream.nim");
	result = (tllstream174204*) newObj((&NTI174206), sizeof(tllstream174204));
	(*result).Sup.m_type = (&NTI174204);
	nimln(69, "llstream.nim");
	(*result).Kind = ((NU8) 3);
	nimln(70, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1627));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(71, "llstream.nim");
	(*result).Lineoffset = -1;
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamclose_174238)(tllstream174204* s) {
	nimfr("llStreamClose", "llstream.nim")
	nimln(74, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(78, "llstream.nim");
		fclose((*s).F);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_174396)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLineFromStdin", "llstream.nim")
	result = 0;
	nimln(83, "llstream.nim");
	write_10663(stdout, prompt);
	nimln(84, "llstream.nim");
	result = readline_10687(stdin, line);
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

N_NIMCALL(NIM_BOOL, endswith_174602)(NimStringDesc* x, TY122387 s) {
	NIM_BOOL result;
	NI i;
	NI TMP1628;
	nimfr("endsWith", "llstream.nim")
	result = 0;
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	TMP1628 = subInt(x->Sup.len, 1);
	i = (NI64)(TMP1628);
	nimln(88, "llstream.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(88, "llstream.nim");
		LOC2 = 0;
		nimln(88, "llstream.nim");
		LOC2 = (0 <= i);
		if (!(LOC2)) goto LA3;
		nimln(88, "llstream.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC2 = ((NU8)(x->data[i]) == (NU8)(32));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(88, "llstream.nim");
		i = subInt(i, 1);
	} LA1: ;
	nimln(89, "llstream.nim");
	{
		NIM_BOOL LOC6;
		nimln(89, "llstream.nim");
		LOC6 = 0;
		nimln(89, "llstream.nim");
		LOC6 = (0 <= i);
		if (!(LOC6)) goto LA7;
		nimln(89, "llstream.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC6 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(90, "llstream.nim");
		result = NIM_TRUE;
	}
	LA8: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, endswithopr_174646)(NimStringDesc* x) {
	NIM_BOOL result;
	nimfr("endsWithOpr", "llstream.nim")
	result = 0;
	nimln(99, "llstream.nim");
	result = endswith_174602(x, TMP1629);
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, continueline_174652)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("continueLine", "llstream.nim")
	result = 0;
	nimln(102, "llstream.nim");
	nimln(103, "llstream.nim");
	LOC1 = 0;
	nimln(102, "llstream.nim");
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	nimln(103, "llstream.nim");
	if ((NU)(0) > (NU)(line->Sup.len)) raiseIndexError();
	LOC2 = ((NU8)(line->data[0]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	nimln(104, "llstream.nim");
	LOC1 = endswith_174602(line, TMP1630);
	LA4: ;
	result = LOC1;
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

N_NIMCALL(NI, counttriples_174676)(NimStringDesc* s) {
	NI result;
	NI i;
	nimfr("countTriples", "llstream.nim")
	result = 0;
	nimln(107, "llstream.nim");
	i = 0;
	nimln(108, "llstream.nim");
	while (1) {
		nimln(108, "llstream.nim");
		nimln(108, "llstream.nim");
		if (!(i < s->Sup.len)) goto LA1;
		nimln(109, "llstream.nim");
		{
			NIM_BOOL LOC4;
			NIM_BOOL LOC5;
			NI TMP1631;
			NI TMP1632;
			nimln(109, "llstream.nim");
			LOC4 = 0;
			nimln(109, "llstream.nim");
			LOC5 = 0;
			nimln(109, "llstream.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[i]) == (NU8)(34));
			if (!(LOC5)) goto LA6;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1631 = addInt(i, 1);
			if ((NU)((NI64)(TMP1631)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[(NI64)(TMP1631)]) == (NU8)(34));
			LA6: ;
			LOC4 = LOC5;
			if (!(LOC4)) goto LA7;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1632 = addInt(i, 2);
			if ((NU)((NI64)(TMP1632)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC4 = ((NU8)(s->data[(NI64)(TMP1632)]) == (NU8)(34));
			LA7: ;
			if (!LOC4) goto LA8;
			nimln(110, "llstream.nim");
			result = addInt(result, 1);
			nimln(111, "llstream.nim");
			i = addInt(i, 2);
		}
		LA8: ;
		nimln(112, "llstream.nim");
		i = addInt(i, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, llreadfromstdin_174733)(tllstream174204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	NI TMP1636;
	nimfr("llReadFromStdin", "llstream.nim")
	result = 0;
	nimln(115, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1627));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(116, "llstream.nim");
	(*s).Rd = 0;
	nimln(117, "llstream.nim");
	nimln(117, "llstream.nim");
	line = rawNewString(120);
	nimln(118, "llstream.nim");
	triples = 0;
	nimln(119, "llstream.nim");
	while (1) {
		NimStringDesc* LOC3;
		NIM_BOOL LOC9;
		NI LOC10;
		nimln(119, "llstream.nim");
		LOC3 = 0;
		nimln(119, "llstream.nim");
		{
			nimln(119, "llstream.nim");
			nimln(119, "llstream.nim");
			if (!((*s).S->Sup.len == 0)) goto LA6;
			LOC3 = copyString(((NimStringDesc*) &TMP1633));
		}
		goto LA4;
		LA6: ;
		{
			LOC3 = copyString(((NimStringDesc*) &TMP1634));
		}
		LA4: ;
		LOC9 = 0;
		LOC9 = readlinefromstdin_174396(LOC3, &line);
		if (!LOC9) goto LA2;
		nimln(120, "llstream.nim");
		(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
		nimln(121, "llstream.nim");
		(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1635));
		nimln(122, "llstream.nim");
		nimln(122, "llstream.nim");
		LOC10 = 0;
		LOC10 = counttriples_174676(line);
		triples = addInt(triples, LOC10);
		nimln(123, "llstream.nim");
		{
			NIM_BOOL LOC13;
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			LOC13 = 0;
			LOC13 = continueline_174652(line, (((NI) ((NI)(triples & 1))) == 1));
			if (!!(LOC13)) goto LA14;
			nimln(123, "llstream.nim");
			goto LA2;
		}
		LA14: ;
	} LA2: ;
	nimln(124, "llstream.nim");
	(*s).Lineoffset = addInt((*s).Lineoffset, 1);
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	TMP1636 = subInt((*s).S->Sup.len, (*s).Rd);
	result = ((buflen <= (NI64)(TMP1636)) ? buflen : (NI64)(TMP1636));
	nimln(126, "llstream.nim");
	{
		nimln(126, "llstream.nim");
		if (!(0 < result)) goto LA18;
		nimln(127, "llstream.nim");
		if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
		memcpy(buf, ((void*) (&(*s).S->data[(*s).Rd])), result);
		nimln(128, "llstream.nim");
		(*s).Rd = addInt((*s).Rd, result);
	}
	LA18: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, llstreamread_174242)(tllstream174204* s, void* buf, NI buflen) {
	NI result;
	nimfr("llStreamRead", "llstream.nim")
	result = 0;
	nimln(131, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(133, "llstream.nim");
		result = 0;
	}
	break;
	case ((NU8) 1):
	{
		NI TMP1637;
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		TMP1637 = subInt((*s).S->Sup.len, (*s).Rd);
		result = ((buflen <= (NI64)(TMP1637)) ? buflen : (NI64)(TMP1637));
		nimln(136, "llstream.nim");
		{
			NI TMP1638;
			nimln(136, "llstream.nim");
			if (!(0 < result)) goto LA5;
			nimln(137, "llstream.nim");
			nimln(137, "llstream.nim");
			TMP1638 = addInt(0, (*s).Rd);
			if ((NU)((NI64)(TMP1638)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(buf, ((void*) (&(*s).S->data[(NI64)(TMP1638)])), result);
			nimln(138, "llstream.nim");
			(*s).Rd = addInt((*s).Rd, result);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "llstream.nim");
		result = readbuffer_10827((*s).F, buf, buflen);
	}
	break;
	case ((NU8) 3):
	{
		nimln(142, "llstream.nim");
		result = llreadfromstdin_174733(s, buf, buflen);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_174248)(tllstream174204* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("llStreamReadLine", "llstream.nim")
	result = 0;
	nimln(145, "llstream.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(146, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(148, "llstream.nim");
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC11;
		nimln(150, "llstream.nim");
		while (1) {
			nimln(150, "llstream.nim");
			nimln(150, "llstream.nim");
			if (!((*s).Rd < (*s).S->Sup.len)) goto LA3;
			nimln(151, "llstream.nim");
			if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
			switch (((NU8)((*s).S->data[(*s).Rd]))) {
			case 13:
			{
				nimln(153, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(154, "llstream.nim");
				{
					nimln(154, "llstream.nim");
					if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
					if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA7;
					nimln(154, "llstream.nim");
					(*s).Rd = addInt((*s).Rd, 1);
				}
				LA7: ;
				nimln(155, "llstream.nim");
				goto LA3;
			}
			break;
			case 10:
			{
				nimln(157, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(158, "llstream.nim");
				goto LA3;
			}
			break;
			default:
			{
				nimln(160, "llstream.nim");
				if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
				(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
				nimln(161, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
			}
			break;
			}
		} LA3: ;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = 0;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = (0 < (*line)->Sup.len);
		if (LOC11) goto LA12;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = ((*s).Rd < (*s).S->Sup.len);
		LA12: ;
		result = LOC11;
	}
	break;
	case ((NU8) 2):
	{
		nimln(164, "llstream.nim");
		result = readline_10687((*s).F, line);
	}
	break;
	case ((NU8) 3):
	{
		nimln(166, "llstream.nim");
		result = readline_10687(stdin, line);
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, llstreamwrite_174258)(tllstream174204* s, NimStringDesc* data) {
	nimfr("llStreamWrite", "llstream.nim")
	nimln(169, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(173, "llstream.nim");
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		nimln(174, "llstream.nim");
		nimln(174, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, data->Sup.len);
	}
	break;
	case ((NU8) 2):
	{
		nimln(176, "llstream.nim");
		write_10663((*s).F, data);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwriteln_174274)(tllstream174204* s, NimStringDesc* data) {
	nimfr("llStreamWriteln", "llstream.nim")
	nimln(179, "llstream.nim");
	llstreamwrite_174258(s, data);
	nimln(180, "llstream.nim");
	llstreamwrite_174258(s, ((NimStringDesc*) &TMP1635));
	popFrame();
}

N_NIMCALL(void, llstreamwrite_174263)(tllstream174204* s, NIM_CHAR data) {
	NIM_CHAR c;
	nimfr("llStreamWrite", "llstream.nim")
	c = 0;
	nimln(184, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(188, "llstream.nim");
		(*s).S = addChar((*s).S, data);
		nimln(189, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, 1);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		nimln(191, "llstream.nim");
		c = data;
		nimln(192, "llstream.nim");
		nimln(192, "llstream.nim");
		LOC4 = 0;
		LOC4 = writebuffer_10846((*s).F, ((void*) (&c)), 1);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, llstreamwrite_174268)(tllstream174204* s, void* buf, NI buflen) {
	nimfr("llStreamWrite", "llstream.nim")
	nimln(195, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		nimln(199, "llstream.nim");
		{
			NI TMP1639;
			NI TMP1640;
			nimln(199, "llstream.nim");
			if (!(0 < buflen)) goto LA5;
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			TMP1639 = addInt((*s).S->Sup.len, buflen);
			(*s).S = setLengthStr((*s).S, (NI64)(TMP1639));
			nimln(201, "llstream.nim");
			nimln(201, "llstream.nim");
			TMP1640 = addInt(0, (*s).Wr);
			if ((NU)((NI64)(TMP1640)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(((void*) (&(*s).S->data[(NI64)(TMP1640)])), buf, buflen);
			nimln(202, "llstream.nim");
			(*s).Wr = addInt((*s).Wr, buflen);
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		NI LOC8;
		nimln(204, "llstream.nim");
		nimln(204, "llstream.nim");
		LOC8 = 0;
		LOC8 = writebuffer_10846((*s).F, buf, buflen);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(NimStringDesc*, llstreamreadall_174254)(tllstream174204* s) {
	NimStringDesc* result;
	nimfr("llStreamReadAll", "llstream.nim")
	result = 0;
	nimln(209, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
		nimln(211, "llstream.nim");
		result = copyString(((NimStringDesc*) &TMP1627));
	}
	break;
	case ((NU8) 1):
	{
		nimln(213, "llstream.nim");
		{
			nimln(213, "llstream.nim");
			if (!((*s).Rd == 0)) goto LA5;
			nimln(213, "llstream.nim");
			result = copyString((*s).S);
		}
		goto LA3;
		LA5: ;
		{
			nimln(214, "llstream.nim");
			nimln(214, "llstream.nim");
			result = copyStr((*s).S, (*s).Rd);
		}
		LA3: ;
		nimln(215, "llstream.nim");
		nimln(215, "llstream.nim");
		(*s).Rd = (*s).S->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		NI bytes;
		NI i;
		nimln(217, "llstream.nim");
		nimln(217, "llstream.nim");
		result = mnewString(2048);
		nimln(218, "llstream.nim");
		if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
		bytes = readbuffer_10827((*s).F, ((void*) (&result->data[0])), 2048);
		nimln(219, "llstream.nim");
		i = bytes;
		nimln(220, "llstream.nim");
		while (1) {
			NI TMP1641;
			NI TMP1642;
			nimln(220, "llstream.nim");
			if (!(bytes == 2048)) goto LA9;
			nimln(221, "llstream.nim");
			nimln(221, "llstream.nim");
			TMP1641 = addInt(i, 2048);
			result = setLengthStr(result, (NI64)(TMP1641));
			nimln(222, "llstream.nim");
			nimln(222, "llstream.nim");
			TMP1642 = addInt(i, 0);
			if ((NU)((NI64)(TMP1642)) > (NU)(result->Sup.len)) raiseIndexError();
			bytes = readbuffer_10827((*s).F, ((void*) (&result->data[(NI64)(TMP1642)])), 2048);
			nimln(223, "llstream.nim");
			i = addInt(i, bytes);
		} LA9: ;
		nimln(224, "llstream.nim");
		result = setLengthStr(result, i);
	}
	break;
	}
	popFrame();
	return result;
}
N_NOINLINE(void, llstreamInit)(void) {
	nimfr("llstream", "llstream.nim")
	popFrame();
}

N_NOINLINE(void, llstreamDatInit)(void) {
static TNimNode* TMP1622[6];
static TNimNode* TMP1623[4];
NI TMP1625;
static char* NIM_CONST TMP1624[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP1620[12];
NTI174204.size = sizeof(tllstream174204);
NTI174204.kind = 17;
NTI174204.base = (&NTI2409);
TMP1622[0] = &TMP1620[1];
NTI174202.size = sizeof(NU8);
NTI174202.kind = 14;
NTI174202.base = 0;
NTI174202.flags = 3;
for (TMP1625 = 0; TMP1625 < 4; TMP1625++) {
TMP1620[TMP1625+2].kind = 1;
TMP1620[TMP1625+2].offset = TMP1625;
TMP1620[TMP1625+2].name = TMP1624[TMP1625];
TMP1623[TMP1625] = &TMP1620[TMP1625+2];
}
TMP1620[6].len = 4; TMP1620[6].kind = 2; TMP1620[6].sons = &TMP1623[0];
NTI174202.node = &TMP1620[6];
TMP1620[1].kind = 1;
TMP1620[1].offset = offsetof(tllstream174204, Kind);
TMP1620[1].typ = (&NTI174202);
TMP1620[1].name = "kind";
TMP1622[1] = &TMP1620[7];
TMP1620[7].kind = 1;
TMP1620[7].offset = offsetof(tllstream174204, F);
TMP1620[7].typ = (&NTI10204);
TMP1620[7].name = "f";
TMP1622[2] = &TMP1620[8];
TMP1620[8].kind = 1;
TMP1620[8].offset = offsetof(tllstream174204, S);
TMP1620[8].typ = (&NTI143);
TMP1620[8].name = "s";
TMP1622[3] = &TMP1620[9];
TMP1620[9].kind = 1;
TMP1620[9].offset = offsetof(tllstream174204, Rd);
TMP1620[9].typ = (&NTI106);
TMP1620[9].name = "rd";
TMP1622[4] = &TMP1620[10];
TMP1620[10].kind = 1;
TMP1620[10].offset = offsetof(tllstream174204, Wr);
TMP1620[10].typ = (&NTI106);
TMP1620[10].name = "wr";
TMP1622[5] = &TMP1620[11];
TMP1620[11].kind = 1;
TMP1620[11].offset = offsetof(tllstream174204, Lineoffset);
TMP1620[11].typ = (&NTI106);
TMP1620[11].name = "lineOffset";
TMP1620[0].len = 6; TMP1620[0].kind = 2; TMP1620[0].sons = &TMP1622[0];
NTI174204.node = &TMP1620[0];
NTI174206.size = sizeof(tllstream174204*);
NTI174206.kind = 22;
NTI174206.base = (&NTI174204);
NTI174206.marker = TMP1626;
}

