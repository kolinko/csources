/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR TY193024[81];
N_NIMCALL(NimStringDesc*, tostrmaxprecision_193017)(NF f);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, encodestr_193031)(NimStringDesc* s, NimStringDesc** result);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hexchar_193064)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, decodestr_193126)(NCSTRING s, NI* pos);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, encodevbiggestintaux_193198)(NI64 x, NimStringDesc** result);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NIMCALL(void, encodevbiggestint_193224)(NI64 x, NimStringDesc** result);
N_NIMCALL(void, encodevintaux_193231)(NI x, NimStringDesc** result);
static N_INLINE(NI, modInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NIMCALL(void, encodevint_193256)(NI x, NimStringDesc** result);
N_NIMCALL(NI, decodevint_193305)(NCSTRING s, NI* pos);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI64, decodevbiggestint_193530)(NCSTRING s, NI* pos);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
STRING_LITERAL(TMP2091, "NAN", 3);
STRING_LITERAL(TMP2092, "0.0", 3);
STRING_LITERAL(TMP2093, "INF", 3);
STRING_LITERAL(TMP2094, "-INF", 4);
STRING_LITERAL(TMP2101, "", 0);
STRING_LITERAL(TMP2107, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP2115, "s[i] in\015\012    {\'a\' (..|..|..) \'z\', \'A\' (..|..|..) \'Z\', \'0\' (..|."
".|..) \'9\', \'-\', \015\012     \'\\x80\' (..|..|..) \'\\xFF\'} ", 112);
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_193017)(NF f) {
	NimStringDesc* result;
	nimfr("toStrMaxPrecision", "rodutils.nim")
	result = 0;
	nimln(16, "rodutils.nim");
	{
		nimln(16, "rodutils.nim");
		nimln(16, "rodutils.nim");
		if (!!((f == f))) goto LA3;
		nimln(17, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2091));
	}
	goto LA1;
	LA3: ;
	{
		nimln(18, "rodutils.nim");
		if (!(f == 0.0)) goto LA6;
		nimln(19, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2092));
	}
	goto LA1;
	LA6: ;
	{
		nimln(20, "rodutils.nim");
		nimln(20, "rodutils.nim");
		if (!(f == ((NF)(5.0000000000000000e-001) * (NF)(f)))) goto LA9;
		nimln(21, "rodutils.nim");
		{
			nimln(21, "rodutils.nim");
			if (!(0.0 < f)) goto LA13;
			nimln(21, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2093));
		}
		goto LA11;
		LA13: ;
		{
			nimln(22, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2094));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY193024 buf;
		memset((void*)buf, 0, sizeof(buf));
		nimln(25, "rodutils.nim");
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		nimln(26, "rodutils.nim");
		nimln(26, "rodutils.nim");
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	popFrame();
	return result;
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

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, encodestr_193031)(NimStringDesc* s, NimStringDesc** result) {
	NI i_193048;
	NI HEX3Atmp_193057;
	NI TMP2095;
	NI res_193059;
	nimfr("encodeStr", "rodutils.nim")
	i_193048 = 0;
	HEX3Atmp_193057 = 0;
	nimln(29, "rodutils.nim");
	nimln(29, "rodutils.nim");
	nimln(29, "rodutils.nim");
	TMP2095 = subInt(s->Sup.len, 1);
	HEX3Atmp_193057 = (NI32)(TMP2095);
	nimln(1450, "system.nim");
	res_193059 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_193059 <= HEX3Atmp_193057)) goto LA1;
		nimln(1450, "system.nim");
		i_193048 = res_193059;
		nimln(30, "rodutils.nim");
		if ((NU)(i_193048) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_193048]))) {
		case 97 ... 122:
		case 65 ... 90:
		case 48 ... 57:
		case 95:
		{
			nimln(31, "rodutils.nim");
			if ((NU)(i_193048) > (NU)(s->Sup.len)) raiseIndexError();
			(*result) = addChar((*result), s->data[i_193048]);
		}
		break;
		default:
		{
			NimStringDesc* LOC4;
			NimStringDesc* LOC5;
			nimln(32, "rodutils.nim");
			nimln(32, "rodutils.nim");
			LOC4 = 0;
			nimln(32, "rodutils.nim");
			nimln(32, "rodutils.nim");
			if ((NU)(i_193048) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = 0;
			LOC5 = nsuToHex(((NI64) (((NU8)(s->data[i_193048])))), 2);
			LOC4 = rawNewString(LOC5->Sup.len + 1);
appendChar(LOC4, 92);
appendString(LOC4, LOC5);
			(*result) = resizeString((*result), LOC4->Sup.len + 0);
appendString((*result), LOC4);
		}
		break;
		}
		nimln(1453, "system.nim");
		res_193059 = addInt(res_193059, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, hexchar_193064)(NIM_CHAR c, NI* xi) {
	nimfr("hexChar", "rodutils.nim")
	nimln(35, "rodutils.nim");
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		NI TMP2096;
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		TMP2096 = subInt(((NI) (((NU8)(c)))), 48);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2096))));
	}
	break;
	case 97 ... 102:
	{
		NI TMP2097;
		NI TMP2098;
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		TMP2097 = subInt(((NI) (((NU8)(c)))), 97);
		TMP2098 = addInt(((NI) ((NI32)(TMP2097))), 10);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2098))));
	}
	break;
	case 65 ... 70:
	{
		NI TMP2099;
		NI TMP2100;
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		TMP2099 = subInt(((NI) (((NU8)(c)))), 65);
		TMP2100 = addInt(((NI) ((NI32)(TMP2099))), 10);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2100))));
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, decodestr_193126)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	nimfr("decodeStr", "rodutils.nim")
	result = 0;
	nimln(42, "rodutils.nim");
	i = (*pos);
	nimln(43, "rodutils.nim");
	result = copyString(((NimStringDesc*) &TMP2101));
	nimln(44, "rodutils.nim");
	while (1) {
		nimln(45, "rodutils.nim");
		switch (((NU8)(s[i]))) {
		case 92:
		{
			NI xi;
			NI TMP2102;
			NI TMP2103;
			nimln(47, "rodutils.nim");
			i = addInt(i, 3);
			nimln(48, "rodutils.nim");
			xi = 0;
			nimln(49, "rodutils.nim");
			nimln(49, "rodutils.nim");
			TMP2102 = subInt(i, 2);
			hexchar_193064(s[(NI32)(TMP2102)], &xi);
			nimln(50, "rodutils.nim");
			nimln(50, "rodutils.nim");
			TMP2103 = subInt(i, 1);
			hexchar_193064(s[(NI32)(TMP2103)], &xi);
			nimln(51, "rodutils.nim");
			nimln(51, "rodutils.nim");
			result = addChar(result, ((NIM_CHAR) (((NI)chckRange(xi, 0, 255)))));
		}
		break;
		case 97 ... 122:
		case 65 ... 90:
		case 48 ... 57:
		case 95:
		{
			nimln(53, "rodutils.nim");
			result = addChar(result, s[i]);
			nimln(54, "rodutils.nim");
			i = addInt(i, 1);
		}
		break;
		default:
		{
			nimln(55, "rodutils.nim");
			goto LA1;
		}
		break;
		}
	} LA1: ;
	nimln(56, "rodutils.nim");
	(*pos) = i;
	popFrame();
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
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

N_NIMCALL(void, encodevbiggestintaux_193198)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_193204;
	NI64 v_193206;
	NI64 rem_193208;
	NI64 TMP2104;
	NI idx_193210;
	nimfr("encodeVBiggestIntAux", "rodutils.nim")
	d_193204 = 0;
	nimln(69, "rodutils.nim");
	v_193206 = x;
	nimln(70, "rodutils.nim");
	nimln(70, "rodutils.nim");
	TMP2104 = modInt64(v_193206, 190);
	rem_193208 = (NI64)(TMP2104);
	nimln(71, "rodutils.nim");
	{
		NI64 TMP2105;
		nimln(71, "rodutils.nim");
		if (!(((NI) (rem_193208)) < 0)) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		TMP2105 = divInt64(v_193206, 190);
		if ((NI64)(TMP2105) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		v_193206 = -((NI64)(TMP2105));
		nimln(74, "rodutils.nim");
		nimln(74, "rodutils.nim");
		if (((NI64) (rem_193208)) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		rem_193208 = -(((NI64) (rem_193208)));
	}
	goto LA1;
	LA3: ;
	{
		NI64 TMP2106;
		nimln(76, "rodutils.nim");
		nimln(76, "rodutils.nim");
		TMP2106 = divInt64(v_193206, 190);
		v_193206 = (NI64)(TMP2106);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_193210 = ((NI) (rem_193208));
	nimln(78, "rodutils.nim");
	{
		nimln(78, "rodutils.nim");
		if (!(idx_193210 < 62)) goto LA8;
		nimln(78, "rodutils.nim");
		if ((NU)(idx_193210) > (NU)(((NimStringDesc*) &TMP2107)->Sup.len)) raiseIndexError();
		d_193204 = ((NimStringDesc*) &TMP2107)->data[idx_193210];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2108;
		NI TMP2109;
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		TMP2108 = subInt(idx_193210, 62);
		TMP2109 = addInt((NI32)(TMP2108), 128);
		d_193204 = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP2109), 0, 255))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		nimln(80, "rodutils.nim");
		nimln(80, "rodutils.nim");
		if (!!((v_193206 == 0))) goto LA13;
		nimln(80, "rodutils.nim");
		encodevbiggestintaux_193198(v_193206, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_193204);
	popFrame();
}

N_NIMCALL(void, encodevbiggestint_193224)(NI64 x, NimStringDesc** result) {
	nimfr("encodeVBiggestInt", "rodutils.nim")
	nimln(89, "rodutils.nim");
	nimln(89, "rodutils.nim");
	encodevbiggestintaux_193198((NI64)((NU64)(x) + (NU64)(5)), result);
	popFrame();
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI32)(a % b);
	goto BeforeRet;
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
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, encodevintaux_193231)(NI x, NimStringDesc** result) {
	NIM_CHAR d_193237;
	NI v_193239;
	NI rem_193241;
	NI TMP2110;
	NI idx_193243;
	nimfr("encodeVIntAux", "rodutils.nim")
	d_193237 = 0;
	nimln(69, "rodutils.nim");
	v_193239 = x;
	nimln(70, "rodutils.nim");
	nimln(70, "rodutils.nim");
	TMP2110 = modInt(v_193239, 190);
	rem_193241 = (NI32)(TMP2110);
	nimln(71, "rodutils.nim");
	{
		NI TMP2111;
		nimln(71, "rodutils.nim");
		if (!(((NI) (rem_193241)) < 0)) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		TMP2111 = divInt(v_193239, 190);
		if ((NI32)(TMP2111) == (-2147483647 -1)) raiseOverflow();
		v_193239 = ((NI32)-((NI32)(TMP2111)));
		nimln(74, "rodutils.nim");
		nimln(74, "rodutils.nim");
		if (((NI) (rem_193241)) == (-2147483647 -1)) raiseOverflow();
		rem_193241 = ((NI32)-(((NI) (rem_193241))));
	}
	goto LA1;
	LA3: ;
	{
		NI TMP2112;
		nimln(76, "rodutils.nim");
		nimln(76, "rodutils.nim");
		TMP2112 = divInt(v_193239, 190);
		v_193239 = (NI32)(TMP2112);
	}
	LA1: ;
	nimln(77, "rodutils.nim");
	idx_193243 = ((NI) (rem_193241));
	nimln(78, "rodutils.nim");
	{
		nimln(78, "rodutils.nim");
		if (!(idx_193243 < 62)) goto LA8;
		nimln(78, "rodutils.nim");
		if ((NU)(idx_193243) > (NU)(((NimStringDesc*) &TMP2107)->Sup.len)) raiseIndexError();
		d_193237 = ((NimStringDesc*) &TMP2107)->data[idx_193243];
	}
	goto LA6;
	LA8: ;
	{
		NI TMP2113;
		NI TMP2114;
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		TMP2113 = subInt(idx_193243, 62);
		TMP2114 = addInt((NI32)(TMP2113), 128);
		d_193237 = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP2114), 0, 255))));
	}
	LA6: ;
	nimln(80, "rodutils.nim");
	{
		nimln(80, "rodutils.nim");
		nimln(80, "rodutils.nim");
		if (!!((v_193239 == 0))) goto LA13;
		nimln(80, "rodutils.nim");
		encodevintaux_193231(v_193239, result);
	}
	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_193237);
	popFrame();
}

N_NIMCALL(void, encodevint_193256)(NI x, NimStringDesc** result) {
	nimfr("encodeVInt", "rodutils.nim")
	nimln(98, "rodutils.nim");
	nimln(98, "rodutils.nim");
	encodevintaux_193231((NI)((NU32)(x) + (NU32)(5)), result);
	popFrame();
}

N_NIMCALL(NI, decodevint_193305)(NCSTRING s, NI* pos) {
	NI result;
	NI i_193312;
	NI sign_193314;
	NI TMP2131;
	nimfr("decodeVInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_193312 = (*pos);
	nimln(102, "rodutils.nim");
	sign_193314 = -1;
	nimln(103, "rodutils.nim");
	{
		nimln(103, "rodutils.nim");
		nimln(103, "rodutils.nim");
		if (!!((((NU8)(s[i_193312])) >= ((NU8)(97)) && ((NU8)(s[i_193312])) <= ((NU8)(122)) || ((NU8)(s[i_193312])) >= ((NU8)(65)) && ((NU8)(s[i_193312])) <= ((NU8)(90)) || ((NU8)(s[i_193312])) >= ((NU8)(48)) && ((NU8)(s[i_193312])) <= ((NU8)(57)) || ((NU8)(s[i_193312])) == ((NU8)(45)) || ((NU8)(s[i_193312])) >= ((NU8)(128)) && ((NU8)(s[i_193312])) <= ((NU8)(255))))) goto LA3;
		nimln(103, "rodutils.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP2115));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		nimln(104, "rodutils.nim");
		if (!((NU8)(s[i_193312]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		i_193312 = addInt(i_193312, 1);
		nimln(106, "rodutils.nim");
		sign_193314 = 1;
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = 0;
	nimln(108, "rodutils.nim");
	while (1) {
		nimln(109, "rodutils.nim");
		switch (((NU8)(s[i_193312]))) {
		case 48 ... 57:
		{
			NI TMP2116;
			NI TMP2117;
			NI TMP2118;
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2116 = mulInt(result, 190);
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2117 = subInt(((NI) (((NU8)(s[i_193312])))), 48);
			TMP2118 = subInt((NI32)(TMP2116), ((NI) ((NI32)(TMP2117))));
			result = (NI32)(TMP2118);
		}
		break;
		case 97 ... 122:
		{
			NI TMP2119;
			NI TMP2120;
			NI TMP2121;
			NI TMP2122;
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2119 = mulInt(result, 190);
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2120 = subInt(((NI) (((NU8)(s[i_193312])))), 97);
			TMP2121 = addInt(((NI) ((NI32)(TMP2120))), 10);
			TMP2122 = subInt((NI32)(TMP2119), ((NI) ((NI32)(TMP2121))));
			result = (NI32)(TMP2122);
		}
		break;
		case 65 ... 90:
		{
			NI TMP2123;
			NI TMP2124;
			NI TMP2125;
			NI TMP2126;
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2123 = mulInt(result, 190);
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2124 = subInt(((NI) (((NU8)(s[i_193312])))), 65);
			TMP2125 = addInt(((NI) ((NI32)(TMP2124))), 36);
			TMP2126 = subInt((NI32)(TMP2123), ((NI) ((NI32)(TMP2125))));
			result = (NI32)(TMP2126);
		}
		break;
		case 128 ... 255:
		{
			NI TMP2127;
			NI TMP2128;
			NI TMP2129;
			NI TMP2130;
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2127 = mulInt(result, 190);
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2128 = subInt(((NI) (((NU8)(s[i_193312])))), 128);
			TMP2129 = addInt(((NI) ((NI32)(TMP2128))), 62);
			TMP2130 = subInt((NI32)(TMP2127), ((NI) ((NI32)(TMP2129))));
			result = (NI32)(TMP2130);
		}
		break;
		default:
		{
			nimln(114, "rodutils.nim");
			goto LA9;
		}
		break;
		}
		nimln(115, "rodutils.nim");
		i_193312 = addInt(i_193312, 1);
	} LA9: ;
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	TMP2131 = mulInt(result, sign_193314);
	result = (NI)((NU32)((NI32)(TMP2131)) - (NU32)(5));
	nimln(117, "rodutils.nim");
	(*pos) = i_193312;
	popFrame();
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, decodevbiggestint_193530)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_193537;
	NI sign_193539;
	NI64 TMP2147;
	nimfr("decodeVBiggestInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_193537 = (*pos);
	nimln(102, "rodutils.nim");
	sign_193539 = -1;
	nimln(103, "rodutils.nim");
	{
		nimln(103, "rodutils.nim");
		nimln(103, "rodutils.nim");
		if (!!((((NU8)(s[i_193537])) >= ((NU8)(97)) && ((NU8)(s[i_193537])) <= ((NU8)(122)) || ((NU8)(s[i_193537])) >= ((NU8)(65)) && ((NU8)(s[i_193537])) <= ((NU8)(90)) || ((NU8)(s[i_193537])) >= ((NU8)(48)) && ((NU8)(s[i_193537])) <= ((NU8)(57)) || ((NU8)(s[i_193537])) == ((NU8)(45)) || ((NU8)(s[i_193537])) >= ((NU8)(128)) && ((NU8)(s[i_193537])) <= ((NU8)(255))))) goto LA3;
		nimln(103, "rodutils.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP2115));
	}
	LA3: ;
	nimln(104, "rodutils.nim");
	{
		nimln(104, "rodutils.nim");
		if (!((NU8)(s[i_193537]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		i_193537 = addInt(i_193537, 1);
		nimln(106, "rodutils.nim");
		sign_193539 = 1;
	}
	LA7: ;
	nimln(107, "rodutils.nim");
	result = 0;
	nimln(108, "rodutils.nim");
	while (1) {
		nimln(109, "rodutils.nim");
		switch (((NU8)(s[i_193537]))) {
		case 48 ... 57:
		{
			NI64 TMP2132;
			NI TMP2133;
			NI64 TMP2134;
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2132 = mulInt64(result, 190);
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2133 = subInt(((NI) (((NU8)(s[i_193537])))), 48);
			TMP2134 = subInt64((NI64)(TMP2132), ((NI64) ((NI32)(TMP2133))));
			result = (NI64)(TMP2134);
		}
		break;
		case 97 ... 122:
		{
			NI64 TMP2135;
			NI TMP2136;
			NI TMP2137;
			NI64 TMP2138;
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2135 = mulInt64(result, 190);
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2136 = subInt(((NI) (((NU8)(s[i_193537])))), 97);
			TMP2137 = addInt(((NI) ((NI32)(TMP2136))), 10);
			TMP2138 = subInt64((NI64)(TMP2135), ((NI64) ((NI32)(TMP2137))));
			result = (NI64)(TMP2138);
		}
		break;
		case 65 ... 90:
		{
			NI64 TMP2139;
			NI TMP2140;
			NI TMP2141;
			NI64 TMP2142;
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2139 = mulInt64(result, 190);
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2140 = subInt(((NI) (((NU8)(s[i_193537])))), 65);
			TMP2141 = addInt(((NI) ((NI32)(TMP2140))), 36);
			TMP2142 = subInt64((NI64)(TMP2139), ((NI64) ((NI32)(TMP2141))));
			result = (NI64)(TMP2142);
		}
		break;
		case 128 ... 255:
		{
			NI64 TMP2143;
			NI TMP2144;
			NI TMP2145;
			NI64 TMP2146;
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2143 = mulInt64(result, 190);
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2144 = subInt(((NI) (((NU8)(s[i_193537])))), 128);
			TMP2145 = addInt(((NI) ((NI32)(TMP2144))), 62);
			TMP2146 = subInt64((NI64)(TMP2143), ((NI64) ((NI32)(TMP2145))));
			result = (NI64)(TMP2146);
		}
		break;
		default:
		{
			nimln(114, "rodutils.nim");
			goto LA9;
		}
		break;
		}
		nimln(115, "rodutils.nim");
		i_193537 = addInt(i_193537, 1);
	} LA9: ;
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	TMP2147 = mulInt64(result, ((NI64) (sign_193539)));
	result = (NI64)((NU64)((NI64)(TMP2147)) - (NU64)(5));
	nimln(117, "rodutils.nim");
	(*pos) = i_193537;
	popFrame();
	return result;
}
N_NOINLINE(void, rodutilsInit)(void) {
	nimfr("rodutils", "rodutils.nim")
	popFrame();
}

N_NOINLINE(void, rodutilsDatInit)(void) {
}

