/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tbaselexer276029 tbaselexer276029;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstream123629 tstream123629;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY121387[32];
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
struct  tbaselexer276029  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tstream123629* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
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
typedef N_NIMCALL_PTR(void, TY123630) (tstream123629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY123634) (tstream123629* s);
typedef N_NIMCALL_PTR(void, TY123638) (tstream123629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY123643) (tstream123629* s);
typedef N_NIMCALL_PTR(NI, TY123647) (tstream123629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY123653) (tstream123629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY123659) (tstream123629* s);
struct  tstream123629  {
  TNimObject Sup;
TY123630 Closeimpl;
TY123634 Atendimpl;
TY123638 Setpositionimpl;
TY123643 Getpositionimpl;
TY123647 Readdataimpl;
TY123653 Writedataimpl;
TY123659 Flushimpl;
};
N_NIMCALL(void, close_276047)(tbaselexer276029* l);
N_NOCONV(void, dealloc_4645)(void* p);
N_NIMCALL(void, close_123676)(tstream123629* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_276084)(tbaselexer276029* l);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, readdata_123733)(tstream123629* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4631)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_276812)(tbaselexer276029* l, NI pos);
N_NIMCALL(NI, handlecr_276062)(tbaselexer276029* l, NI pos);
N_NIMCALL(NI, handlelf_276068)(tbaselexer276029* l, NI pos);
N_NIMCALL(void, skiputf8bom_277419)(tbaselexer276029* l);
N_NIMCALL(void, open_276039)(tbaselexer276029* l, tstream123629* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_4601)(NI size);
N_NIMCALL(NI, getcolnumber_276057)(tbaselexer276029* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_276052)(tbaselexer276029* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY121387 newlines_276024 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3617, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP3620, "toCopy >= 0 ", 12);
STRING_LITERAL(TMP3628, "s < L.bufLen ", 13);
STRING_LITERAL(TMP3632, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP3638, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP3640, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP3641, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP3642, "bufLen > 0 ", 11);
STRING_LITERAL(TMP3643, "input != nil ", 13);
STRING_LITERAL(TMP3647, "", 0);
STRING_LITERAL(TMP3648, "\012", 1);
STRING_LITERAL(TMP3649, "^\012", 2);
extern TFrame* frameptr_13038;
extern TNimType NTI2409; /* TObject */
TNimType NTI276029; /* TBaseLexer */
extern TNimType NTI106; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI123627; /* PStream */
extern TNimType NTI134; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, close_276047)(tbaselexer276029* l) {
	nimfr("close", "lexbase.nim")
	nimln(66, "lexbase.nim");
	dealloc_4645(((void*) ((*l).Buf)));
	nimln(67, "lexbase.nim");
	close_123676((*l).Input);
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

N_NIMCALL(void, fillbuffer_276084)(tbaselexer276029* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP3618;
	NI TMP3619;
	NI TMP3623;
	NI TMP3624;
	NI LOC13;
	NI TMP3625;
	NI TMP3626;
	nimfr("fillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(77, "lexbase.nim");
	{
		nimln(77, "lexbase.nim");
		nimln(77, "lexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(77, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3617));
	}
	LA3: ;
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	TMP3618 = subInt((*l).Buflen, (*l).Sentinel);
	TMP3619 = subInt((NI64)(TMP3618), 1);
	tocopy = (NI64)(TMP3619);
	nimln(79, "lexbase.nim");
	{
		nimln(79, "lexbase.nim");
		nimln(79, "lexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(79, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3620));
	}
	LA7: ;
	nimln(80, "lexbase.nim");
	{
		NI TMP3621;
		NI TMP3622;
		nimln(80, "lexbase.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(81, "lexbase.nim");
		nimln(81, "lexbase.nim");
		TMP3621 = addInt((*l).Sentinel, 1);
		nimln(81, "lexbase.nim");
		TMP3622 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI64)(TMP3621)])), (NI64)(TMP3622));
	}
	LA11: ;
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(84, "lexbase.nim");
	TMP3623 = addInt((*l).Sentinel, 1);
	TMP3624 = mulInt((NI64)(TMP3623), 1);
	LOC13 = 0;
	LOC13 = readdata_123733((*l).Input, ((void*) (&(*l).Buf[tocopy])), (NI64)(TMP3624));
	TMP3625 = divInt(LOC13, 1);
	charsread = (NI64)(TMP3625);
	nimln(85, "lexbase.nim");
	nimln(85, "lexbase.nim");
	TMP3626 = addInt(tocopy, charsread);
	s = (NI64)(TMP3626);
	nimln(86, "lexbase.nim");
	{
		NI TMP3627;
		nimln(86, "lexbase.nim");
		nimln(86, "lexbase.nim");
		TMP3627 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI64)(TMP3627))) goto LA16;
		nimln(87, "lexbase.nim");
		(*l).Buf[s] = 0;
		nimln(88, "lexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(91, "lexbase.nim");
		s = subInt(s, 1);
		nimln(92, "lexbase.nim");
		while (1) {
			nimln(93, "lexbase.nim");
			{
				nimln(93, "lexbase.nim");
				nimln(93, "lexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(93, "lexbase.nim");
				failedassertimpl_79821(((NimStringDesc*) &TMP3628));
			}
			LA22: ;
			nimln(94, "lexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(94, "lexbase.nim");
				LOC25 = 0;
				nimln(94, "lexbase.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(94, "lexbase.nim");
				nimln(94, "lexbase.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(94, "lexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(95, "lexbase.nim");
			{
				nimln(95, "lexbase.nim");
				if (!(0 <= s)) goto LA29;
				nimln(97, "lexbase.nim");
				(*l).Sentinel = s;
				nimln(98, "lexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP3629;
				NI TMP3630;
				void* LOC32;
				NI TMP3633;
				NI LOC37;
				NI TMP3634;
				NI TMP3637;
				nimln(102, "lexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(103, "lexbase.nim");
				nimln(103, "lexbase.nim");
				TMP3629 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI64)(TMP3629);
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				TMP3630 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4631(((void*) ((*l).Buf)), (NI64)(TMP3630));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(105, "lexbase.nim");
				{
					NI TMP3631;
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					TMP3631 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI64)(TMP3631) == oldbuflen))) goto LA35;
					nimln(105, "lexbase.nim");
					failedassertimpl_79821(((NimStringDesc*) &TMP3632));
				}
				LA35: ;
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				TMP3633 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = readdata_123733((*l).Input, ((void*) (&(*l).Buf[oldbuflen])), (NI64)(TMP3633));
				TMP3634 = divInt(LOC37, 1);
				charsread = (NI64)(TMP3634);
				nimln(108, "lexbase.nim");
				{
					NI TMP3635;
					NI TMP3636;
					nimln(108, "lexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(109, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP3635 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI64)(TMP3635)] = 0;
					nimln(110, "lexbase.nim");
					nimln(110, "lexbase.nim");
					TMP3636 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI64)(TMP3636);
					nimln(111, "lexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(112, "lexbase.nim");
				nimln(112, "lexbase.nim");
				TMP3637 = subInt((*l).Buflen, 1);
				s = (NI64)(TMP3637);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_276812)(tbaselexer276029* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(115, "lexbase.nim");
	{
		nimln(115, "lexbase.nim");
		nimln(115, "lexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(115, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3638));
	}
	LA3: ;
	nimln(116, "lexbase.nim");
	{
		NI TMP3639;
		nimln(116, "lexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(117, "lexbase.nim");
		nimln(117, "lexbase.nim");
		TMP3639 = addInt(pos, 1);
		result = (NI64)(TMP3639);
	}
	goto LA5;
	LA7: ;
	{
		nimln(119, "lexbase.nim");
		fillbuffer_276084(l);
		nimln(120, "lexbase.nim");
		(*l).Bufpos = 0;
		nimln(121, "lexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(122, "lexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_276062)(tbaselexer276029* l, NI pos) {
	NI result;
	nimfr("handleCR", "lexbase.nim")
	result = 0;
	nimln(125, "lexbase.nim");
	{
		nimln(125, "lexbase.nim");
		nimln(125, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(125, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3640));
	}
	LA3: ;
	nimln(126, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(127, "lexbase.nim");
	result = fillbaselexer_276812(l, pos);
	nimln(128, "lexbase.nim");
	{
		nimln(128, "lexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(129, "lexbase.nim");
		result = fillbaselexer_276812(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_276068)(tbaselexer276029* l, NI pos) {
	NI result;
	nimfr("handleLF", "lexbase.nim")
	result = 0;
	nimln(132, "lexbase.nim");
	{
		nimln(132, "lexbase.nim");
		nimln(132, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(132, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3641));
	}
	LA3: ;
	nimln(133, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(134, "lexbase.nim");
	result = fillbaselexer_276812(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_277419)(tbaselexer276029* l) {
	nimfr("skipUtf8Bom", "lexbase.nim")
	nimln(137, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(137, "lexbase.nim");
		LOC3 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(137, "lexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(138, "lexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(139, "lexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_276039)(tbaselexer276029* l, tstream123629* input, NI buflen) {
	NI TMP3644;
	void* LOC9;
	NI TMP3645;
	nimfr("open", "lexbase.nim")
	nimln(142, "lexbase.nim");
	{
		nimln(142, "lexbase.nim");
		nimln(142, "lexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(142, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3642));
	}
	LA3: ;
	nimln(143, "lexbase.nim");
	{
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		if (!!(!((input == NIM_NIL)))) goto LA7;
		nimln(143, "lexbase.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3643));
	}
	LA7: ;
	nimln(144, "lexbase.nim");
	unsureAsgnRef((void**) &(*l).Input, input);
	nimln(145, "lexbase.nim");
	(*l).Bufpos = 0;
	nimln(146, "lexbase.nim");
	(*l).Buflen = buflen;
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	TMP3644 = mulInt(buflen, 1);
	LOC9 = 0;
	LOC9 = alloc_4601((NI64)(TMP3644));
	(*l).Buf = ((NCSTRING) (LOC9));
	nimln(148, "lexbase.nim");
	nimln(148, "lexbase.nim");
	TMP3645 = subInt(buflen, 1);
	(*l).Sentinel = (NI64)(TMP3645);
	nimln(149, "lexbase.nim");
	(*l).Linestart = 0;
	nimln(150, "lexbase.nim");
	(*l).Linenumber = 1;
	nimln(151, "lexbase.nim");
	fillbuffer_276084(l);
	nimln(152, "lexbase.nim");
	skiputf8bom_277419(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_276057)(tbaselexer276029* l, NI pos) {
	NI result;
	NI TMP3646;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	TMP3646 = subInt(pos, (*l).Linestart);
	if ((NI64)(TMP3646) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = (NI64)abs((NI64)(TMP3646));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_276052)(tbaselexer276029* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(159, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP3647));
	nimln(160, "lexbase.nim");
	i = (*l).Linestart;
	nimln(161, "lexbase.nim");
	while (1) {
		nimln(161, "lexbase.nim");
		nimln(161, "lexbase.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(162, "lexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(163, "lexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(164, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP3648));
	nimln(165, "lexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC6 = 0;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_276057(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP3649));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, stdliblexbaseInit)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

N_NOINLINE(void, stdliblexbaseDatInit)(void) {
static TNimNode* TMP3757[8];
static TNimNode TMP3615[9];
NTI276029.size = sizeof(tbaselexer276029);
NTI276029.kind = 17;
NTI276029.base = (&NTI2409);
TMP3757[0] = &TMP3615[1];
TMP3615[1].kind = 1;
TMP3615[1].offset = offsetof(tbaselexer276029, Bufpos);
TMP3615[1].typ = (&NTI106);
TMP3615[1].name = "bufpos";
TMP3757[1] = &TMP3615[2];
TMP3615[2].kind = 1;
TMP3615[2].offset = offsetof(tbaselexer276029, Buf);
TMP3615[2].typ = (&NTI145);
TMP3615[2].name = "buf";
TMP3757[2] = &TMP3615[3];
TMP3615[3].kind = 1;
TMP3615[3].offset = offsetof(tbaselexer276029, Buflen);
TMP3615[3].typ = (&NTI106);
TMP3615[3].name = "bufLen";
TMP3757[3] = &TMP3615[4];
TMP3615[4].kind = 1;
TMP3615[4].offset = offsetof(tbaselexer276029, Input);
TMP3615[4].typ = (&NTI123627);
TMP3615[4].name = "input";
TMP3757[4] = &TMP3615[5];
TMP3615[5].kind = 1;
TMP3615[5].offset = offsetof(tbaselexer276029, Linenumber);
TMP3615[5].typ = (&NTI106);
TMP3615[5].name = "lineNumber";
TMP3757[5] = &TMP3615[6];
TMP3615[6].kind = 1;
TMP3615[6].offset = offsetof(tbaselexer276029, Sentinel);
TMP3615[6].typ = (&NTI106);
TMP3615[6].name = "sentinel";
TMP3757[6] = &TMP3615[7];
TMP3615[7].kind = 1;
TMP3615[7].offset = offsetof(tbaselexer276029, Linestart);
TMP3615[7].typ = (&NTI106);
TMP3615[7].name = "lineStart";
TMP3757[7] = &TMP3615[8];
TMP3615[8].kind = 1;
TMP3615[8].offset = offsetof(tbaselexer276029, Fileopened);
TMP3615[8].typ = (&NTI134);
TMP3615[8].name = "fileOpened";
TMP3615[0].len = 8; TMP3615[0].kind = 2; TMP3615[0].sons = &TMP3757[0];
NTI276029.node = &TMP3615[0];
}

