/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct toptparser522807 toptparser522807;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  toptparser522807  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
typedef NU8 TY121387[32];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initoptparser_522819)(NimStringDesc* cmdline, toptparser522807* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_114233)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_90237)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_114205)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, parseword_523002)(NimStringDesc* s, NI i, NimStringDesc** w, TY121387 delim);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, handleshortoption_523106)(toptparser522807* p);
N_NIMCALL(void, nponext)(toptparser522807* p);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser522807* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_70824, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
STRING_LITERAL(TMP7631, "", 0);
STRING_LITERAL(TMP7635, "", 0);
static NIM_CONST TY121387 TMP7636 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY121387 TMP7637 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_13038;
extern TNimType NTI2409; /* TObject */
TNimType NTI522807; /* TOptParser */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
extern TNimType NTI134; /* bool */
TNimType NTI522805; /* TCmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, initoptparser_522819)(NimStringDesc* cmdline, toptparser522807* Result) {
	nimfr("initOptParser", "parseopt.nim")
	nimln(47, "parseopt.nim");
	(*Result).Pos = 0;
	nimln(48, "parseopt.nim");
	(*Result).Inshortstate = NIM_FALSE;
	nimln(49, "parseopt.nim");
	{
		nimln(49, "parseopt.nim");
		nimln(49, "parseopt.nim");
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		nimln(50, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		NI i_522835;
		NI HEX3Atmp_522837;
		NI res_522839;
		nimln(52, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP7631)));
		i_522835 = 0;
		HEX3Atmp_522837 = 0;
		nimln(53, "parseopt.nim");
		HEX3Atmp_522837 = paramcount_114233();
		nimln(1450, "system.nim");
		res_522839 = 1;
		nimln(1451, "system.nim");
		while (1) {
			NimStringDesc* LOC7;
			NimStringDesc* LOC8;
			NimStringDesc* LOC9;
			nimln(1451, "system.nim");
			if (!(res_522839 <= HEX3Atmp_522837)) goto LA6;
			nimln(1450, "system.nim");
			i_522835 = res_522839;
			nimln(54, "parseopt.nim");
			nimln(54, "parseopt.nim");
			LOC7 = 0;
			nimln(54, "parseopt.nim");
			nimln(54, "parseopt.nim");
			LOC8 = 0;
			LOC8 = paramstr_114205(i_522835);
			LOC9 = 0;
			LOC9 = quoteifcontainswhite_90237(LOC8);
			LOC7 = rawNewString((*Result).Cmd->Sup.len + LOC9->Sup.len + 1);
appendString(LOC7, (*Result).Cmd);
appendString(LOC7, LOC9);
appendChar(LOC7, 32);
			unsureAsgnRef((void**) &(*Result).Cmd, LOC7);
			nimln(1453, "system.nim");
			res_522839 = addInt(res_522839, 1);
		} LA6: ;
	}
	LA1: ;
	nimln(55, "parseopt.nim");
	(*Result).Kind = ((NU8) 0);
	nimln(56, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP7635)));
	nimln(57, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP7635)));
	popFrame();
}

N_NIMCALL(NI, parseword_523002)(NimStringDesc* s, NI i, NimStringDesc** w, TY121387 delim) {
	NI result;
	nimfr("parseWord", "parseopt.nim")
	result = 0;
	nimln(61, "parseopt.nim");
	result = i;
	nimln(62, "parseopt.nim");
	{
		nimln(62, "parseopt.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		nimln(63, "parseopt.nim");
		result = addInt(result, 1);
		nimln(64, "parseopt.nim");
		while (1) {
			nimln(64, "parseopt.nim");
			nimln(64, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA5;
			nimln(65, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(66, "parseopt.nim");
			result = addInt(result, 1);
		} LA5: ;
		nimln(67, "parseopt.nim");
		{
			nimln(67, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA8;
			nimln(67, "parseopt.nim");
			result = addInt(result, 1);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(69, "parseopt.nim");
		while (1) {
			nimln(69, "parseopt.nim");
			nimln(69, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA11;
			nimln(70, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(71, "parseopt.nim");
			result = addInt(result, 1);
		} LA11: ;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, handleshortoption_523106)(toptparser522807* p) {
	NI i;
	nimfr("handleShortOption", "parseopt.nim")
	nimln(74, "parseopt.nim");
	i = (*p).Pos;
	nimln(75, "parseopt.nim");
	(*p).Kind = ((NU8) 3);
	nimln(76, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	(*p).Key = addChar((*p).Key, (*p).Cmd->data[i]);
	nimln(77, "parseopt.nim");
	i = addInt(i, 1);
	nimln(78, "parseopt.nim");
	(*p).Inshortstate = NIM_TRUE;
	nimln(79, "parseopt.nim");
	while (1) {
		nimln(79, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(80, "parseopt.nim");
		i = addInt(i, 1);
		nimln(81, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	} LA1: ;
	nimln(82, "parseopt.nim");
	{
		nimln(82, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA4;
		nimln(83, "parseopt.nim");
		i = addInt(i, 1);
		nimln(84, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
		nimln(85, "parseopt.nim");
		while (1) {
			nimln(85, "parseopt.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA6;
			nimln(85, "parseopt.nim");
			i = addInt(i, 1);
		} LA6: ;
		nimln(86, "parseopt.nim");
		i = parseword_523002((*p).Cmd, i, &(*p).Val, TMP7636);
	}
	LA4: ;
	nimln(87, "parseopt.nim");
	{
		nimln(87, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).Cmd->data[i]) == (NU8)(0))) goto LA9;
		nimln(87, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	}
	LA9: ;
	nimln(88, "parseopt.nim");
	(*p).Pos = i;
	popFrame();
}

N_NIMCALL(void, nponext)(toptparser522807* p) {
	NI i;
	nimfr("next", "parseopt.nim")
	nimln(94, "parseopt.nim");
	i = (*p).Pos;
	nimln(95, "parseopt.nim");
	while (1) {
		nimln(95, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(95, "parseopt.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(96, "parseopt.nim");
	(*p).Pos = i;
	nimln(97, "parseopt.nim");
	(*p).Key = setLengthStr((*p).Key, 0);
	nimln(98, "parseopt.nim");
	(*p).Val = setLengthStr((*p).Val, 0);
	nimln(99, "parseopt.nim");
	{
		if (!(*p).Inshortstate) goto LA4;
		nimln(100, "parseopt.nim");
		handleshortoption_523106(p);
		nimln(101, "parseopt.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(102, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	switch (((NU8)((*p).Cmd->data[i]))) {
	case 0:
	{
		nimln(104, "parseopt.nim");
		(*p).Kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		nimln(106, "parseopt.nim");
		i = addInt(i, 1);
		nimln(107, "parseopt.nim");
		{
			nimln(107, "parseopt.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).Cmd->data[i]) == (NU8)(45))) goto LA10;
			nimln(108, "parseopt.nim");
			(*p).Kind = ((NU8) 2);
			nimln(109, "parseopt.nim");
			i = addInt(i, 1);
			nimln(110, "parseopt.nim");
			i = parseword_523002((*p).Cmd, i, &(*p).Key, TMP7637);
			nimln(111, "parseopt.nim");
			while (1) {
				nimln(111, "parseopt.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA12;
				nimln(111, "parseopt.nim");
				i = addInt(i, 1);
			} LA12: ;
			nimln(112, "parseopt.nim");
			{
				nimln(112, "parseopt.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA15;
				nimln(113, "parseopt.nim");
				i = addInt(i, 1);
				nimln(114, "parseopt.nim");
				while (1) {
					nimln(114, "parseopt.nim");
					if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
					if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA17;
					nimln(114, "parseopt.nim");
					i = addInt(i, 1);
				} LA17: ;
				nimln(115, "parseopt.nim");
				(*p).Pos = parseword_523002((*p).Cmd, i, &(*p).Val, TMP7636);
			}
			goto LA13;
			LA15: ;
			{
				nimln(117, "parseopt.nim");
				(*p).Pos = i;
			}
			LA13: ;
		}
		goto LA8;
		LA10: ;
		{
			nimln(119, "parseopt.nim");
			(*p).Pos = i;
			nimln(120, "parseopt.nim");
			handleshortoption_523106(p);
		}
		LA8: ;
	}
	break;
	default:
	{
		nimln(122, "parseopt.nim");
		(*p).Kind = ((NU8) 1);
		nimln(123, "parseopt.nim");
		(*p).Pos = parseword_523002((*p).Cmd, i, &(*p).Key, TMP7636);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
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

N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser522807* p) {
	NimStringDesc* result;
	NI TMP7638;
	NimStringDesc* LOC1;
	nimfr("cmdLineRest", "parseopt.nim")
	result = 0;
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	TMP7638 = subInt((*p).Cmd->Sup.len, 1);
	LOC1 = 0;
	LOC1 = copyStrLast((*p).Cmd, (*p).Pos, (NI64)(TMP7638));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibparseoptInit)(void) {
	nimfr("parseopt", "parseopt.nim")
	popFrame();
}

N_NOINLINE(void, stdlibparseoptDatInit)(void) {
static TNimNode* TMP7640[6];
static TNimNode* TMP7641[4];
NI TMP7643;
static char* NIM_CONST TMP7642[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongoption", 
"cmdShortOption"};
static TNimNode TMP7629[12];
NTI522807.size = sizeof(toptparser522807);
NTI522807.kind = 17;
NTI522807.base = (&NTI2409);
TMP7640[0] = &TMP7629[1];
TMP7629[1].kind = 1;
TMP7629[1].offset = offsetof(toptparser522807, Cmd);
TMP7629[1].typ = (&NTI143);
TMP7629[1].name = "cmd";
TMP7640[1] = &TMP7629[2];
TMP7629[2].kind = 1;
TMP7629[2].offset = offsetof(toptparser522807, Pos);
TMP7629[2].typ = (&NTI106);
TMP7629[2].name = "pos";
TMP7640[2] = &TMP7629[3];
TMP7629[3].kind = 1;
TMP7629[3].offset = offsetof(toptparser522807, Inshortstate);
TMP7629[3].typ = (&NTI134);
TMP7629[3].name = "inShortState";
TMP7640[3] = &TMP7629[4];
NTI522805.size = sizeof(NU8);
NTI522805.kind = 14;
NTI522805.base = 0;
NTI522805.flags = 3;
for (TMP7643 = 0; TMP7643 < 4; TMP7643++) {
TMP7629[TMP7643+5].kind = 1;
TMP7629[TMP7643+5].offset = TMP7643;
TMP7629[TMP7643+5].name = TMP7642[TMP7643];
TMP7641[TMP7643] = &TMP7629[TMP7643+5];
}
TMP7629[9].len = 4; TMP7629[9].kind = 2; TMP7629[9].sons = &TMP7641[0];
NTI522805.node = &TMP7629[9];
TMP7629[4].kind = 1;
TMP7629[4].offset = offsetof(toptparser522807, Kind);
TMP7629[4].typ = (&NTI522805);
TMP7629[4].name = "kind";
TMP7640[4] = &TMP7629[10];
TMP7629[10].kind = 1;
TMP7629[10].offset = offsetof(toptparser522807, Key);
TMP7629[10].typ = (&NTI143);
TMP7629[10].name = "key";
TMP7640[5] = &TMP7629[11];
TMP7629[11].kind = 1;
TMP7629[11].offset = offsetof(toptparser522807, Val);
TMP7629[11].typ = (&NTI143);
TMP7629[11].name = "val";
TMP7629[0].len = 6; TMP7629[0].kind = 2; TMP7629[0].sons = &TMP7640[0];
NTI522807.node = &TMP7629[0];
}

