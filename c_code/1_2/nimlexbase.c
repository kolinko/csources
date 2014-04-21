/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer177018 tbaselexer177018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream175204 tllstream175204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY124387[32];
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
struct  tbaselexer177018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream175204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
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
struct  tllstream175204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NIMCALL(void, closebaselexer_177035)(tbaselexer177018* l);
N_NOCONV(void, dealloc_4645)(void* p);
N_NIMCALL(void, llstreamclose_175238)(tllstream175204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_177072)(tbaselexer177018* l);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_175242)(tllstream175204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4631)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_177812)(tbaselexer177018* l, NI pos);
N_NIMCALL(NI, handlecr_177050)(tbaselexer177018* l, NI pos);
N_NIMCALL(NI, handlelf_177056)(tbaselexer177018* l, NI pos);
N_NIMCALL(void, skiputf8bom_178419)(tbaselexer177018* l);
N_NIMCALL(void, openbaselexer_177027)(tbaselexer177018* l, tllstream175204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4601)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_177045)(tbaselexer177018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_177040)(tbaselexer177018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY124387 newlines_177014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1646, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1649, "toCopy >= 0 ", 12);
STRING_LITERAL(TMP1657, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1661, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1667, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1669, "L.buf[pos] == CR ", 17);
STRING_LITERAL(TMP1670, "L.buf[pos] == LF ", 17);
STRING_LITERAL(TMP1671, "bufLen > 0 ", 11);
STRING_LITERAL(TMP1675, "", 0);
STRING_LITERAL(TMP1676, "\015\012", 2);
STRING_LITERAL(TMP1677, "^\015\012", 3);
extern TFrame* frameptr_13038;
extern TNimType NTI2409; /* TObject */
TNimType NTI177018; /* TBaseLexer */
extern TNimType NTI106; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI175206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, closebaselexer_177035)(tbaselexer177018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4645(((void*) ((*l).Buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_175238((*l).Stream);
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

N_NIMCALL(void, fillbuffer_177072)(tbaselexer177018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1647;
	NI TMP1648;
	NI TMP1652;
	NI TMP1653;
	NI LOC13;
	NI TMP1654;
	NI TMP1655;
	nimfr("fillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1646));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1647 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1648 = subInt((NI64)(TMP1647), 1);
	tocopy = (NI64)(TMP1648);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1649));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1650;
		NI TMP1651;
		nimln(85, "nimlexbase.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1650 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1651 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI64)(TMP1650)])), (NI64)(TMP1651));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1652 = addInt((*l).Sentinel, 1);
	TMP1653 = mulInt((NI64)(TMP1652), 1);
	LOC13 = 0;
	LOC13 = llstreamread_175242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI64)(TMP1653));
	TMP1654 = divInt(LOC13, 1);
	charsread = (NI64)(TMP1654);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1655 = addInt(tocopy, charsread);
	s = (NI64)(TMP1655);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1656;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1656 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI64)(TMP1656))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				failedassertimpl_81021(((NimStringDesc*) &TMP1657));
			}
			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				LOC25 = 0;
				nimln(99, "nimlexbase.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(99, "nimlexbase.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(100, "nimlexbase.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP1658;
				NI TMP1659;
				void* LOC32;
				NI TMP1662;
				NI LOC37;
				NI TMP1663;
				NI TMP1666;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1658 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI64)(TMP1658);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1659 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4631(((void*) ((*l).Buf)), (NI64)(TMP1659));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1660;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1660 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI64)(TMP1660) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					failedassertimpl_81021(((NimStringDesc*) &TMP1661));
				}
				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1662 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = llstreamread_175242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI64)(TMP1662));
				TMP1663 = divInt(LOC37, 1);
				charsread = (NI64)(TMP1663);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1664;
					NI TMP1665;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1664 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI64)(TMP1664)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1665 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI64)(TMP1665);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1666 = subInt((*l).Buflen, 1);
				s = (NI64)(TMP1666);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_177812)(tbaselexer177018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1667));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1668;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1668 = addInt(pos, 1);
		result = (NI64)(TMP1668);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_177072(l);
		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_177050)(tbaselexer177018* l, NI pos) {
	NI result;
	nimfr("handleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1669));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_177812(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_177812(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_177056)(tbaselexer177018* l, NI pos) {
	NI result;
	nimfr("handleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1670));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_177812(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_178419)(tbaselexer177018* l) {
	nimfr("skipUTF8BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		LOC3 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_177027)(tbaselexer177018* l, tllstream175204* inputstream, NI buflen) {
	NI TMP1672;
	void* LOC5;
	NI TMP1673;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP1671));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1672 = mulInt(buflen, 1);
	LOC5 = 0;
	LOC5 = alloc_4601((NI64)(TMP1672));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1673 = subInt(buflen, 1);
	(*l).Sentinel = (NI64)(TMP1673);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_177072(l);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_178419(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_177045)(tbaselexer177018* l, NI pos) {
	NI result;
	NI TMP1674;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1674 = subInt(pos, (*l).Linestart);
	if ((NI64)(TMP1674) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = (NI64)abs((NI64)(TMP1674));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_177040)(tbaselexer177018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1675));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(164, "nimlexbase.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1676));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_177045(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 3);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1677));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, nimlexbaseDatInit)(void) {
static TNimNode* TMP1915[7];
static TNimNode TMP1621[8];
NTI177018.size = sizeof(tbaselexer177018);
NTI177018.kind = 17;
NTI177018.base = (&NTI2409);
TMP1915[0] = &TMP1621[1];
TMP1621[1].kind = 1;
TMP1621[1].offset = offsetof(tbaselexer177018, Bufpos);
TMP1621[1].typ = (&NTI106);
TMP1621[1].name = "bufpos";
TMP1915[1] = &TMP1621[2];
TMP1621[2].kind = 1;
TMP1621[2].offset = offsetof(tbaselexer177018, Buf);
TMP1621[2].typ = (&NTI145);
TMP1621[2].name = "buf";
TMP1915[2] = &TMP1621[3];
TMP1621[3].kind = 1;
TMP1621[3].offset = offsetof(tbaselexer177018, Buflen);
TMP1621[3].typ = (&NTI106);
TMP1621[3].name = "bufLen";
TMP1915[3] = &TMP1621[4];
TMP1621[4].kind = 1;
TMP1621[4].offset = offsetof(tbaselexer177018, Stream);
TMP1621[4].typ = (&NTI175206);
TMP1621[4].name = "stream";
TMP1915[4] = &TMP1621[5];
TMP1621[5].kind = 1;
TMP1621[5].offset = offsetof(tbaselexer177018, Linenumber);
TMP1621[5].typ = (&NTI106);
TMP1621[5].name = "lineNumber";
TMP1915[5] = &TMP1621[6];
TMP1621[6].kind = 1;
TMP1621[6].offset = offsetof(tbaselexer177018, Sentinel);
TMP1621[6].typ = (&NTI106);
TMP1621[6].name = "sentinel";
TMP1915[6] = &TMP1621[7];
TMP1621[7].kind = 1;
TMP1621[7].offset = offsetof(tbaselexer177018, Linestart);
TMP1621[7].typ = (&NTI106);
TMP1621[7].name = "lineStart";
TMP1621[0].len = 7; TMP1621[0].kind = 2; TMP1621[0].sons = &TMP1915[0];
NTI177018.node = &TMP1621[0];
}

