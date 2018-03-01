/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA;
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, hexChar_AQ39b2vc2IkLN3FY9bhdTqCg)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux_UxDO4XNnIGIEXt1v5wvZJQ_2)(NI x, NimStringDesc** result);
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_rfodLs2J9b87EDgWnWZoObA)(NF x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, encodeVBiggestIntAux_nNFWlW1IRaHQroAl4mzSKg_2)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_2, "", 0);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_3, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_4, "NAN", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_5, "-0.0", 4);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_6, "0.0", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_7, "INF", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_8, "-INF", 4);

N_LIB_PRIVATE N_NIMCALL(NI, decodeVInt_P9b8WkVDF9cqEDrYeG3xWGwQ)(NCSTRING s, NI* pos) {
	NI result;
	NI i;
	NI sign;
	result = (NI)0;
	i = (*pos);
	sign = ((NI) -1);
	{
		if (!((NU8)(s[i]) == (NU8)(45))) goto LA3_;
		i += ((NI) 1);
		sign = ((NI) 1);
	}
	LA3_: ;
	result = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 48 ... 57:
			{
				result = (NI)((NI)(result * ((NI) 190)) - (NI)(((NU8)(s[i])) - ((NI) 48)));
			}
			break;
			case 97 ... 122:
			{
				result = (NI)((NI)(result * ((NI) 190)) - (NI)((NI)(((NU8)(s[i])) - ((NI) 97)) + ((NI) 10)));
			}
			break;
			case 65 ... 90:
			{
				result = (NI)((NI)(result * ((NI) 190)) - (NI)((NI)(((NU8)(s[i])) - ((NI) 65)) + ((NI) 36)));
			}
			break;
			case 128 ... 255:
			{
				result = (NI)((NI)(result * ((NI) 190)) - (NI)((NI)(((NU8)(s[i])) - ((NI) 128)) + ((NI) 62)));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA5: ;
	result = (NI)((NU64)((NI)(result * sign)) - (NU64)(((NI) 5)));
	(*pos) = i;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, hexChar_AQ39b2vc2IkLN3FY9bhdTqCg)(NIM_CHAR c, NI* xi) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | (NI)(((NU8)(c)) - ((NI) 48)));
	}
	break;
	case 97 ... 102:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | (NI)((NI)(((NU8)(c)) - ((NI) 97)) + ((NI) 10)));
	}
	break;
	case 65 ... 70:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | (NI)((NI)(((NU8)(c)) - ((NI) 65)) + ((NI) 10)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, decodeStr_STVN8cb52NB3wWUNHppyDQ)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = (NimStringDesc*)0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_2));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += ((NI) 3);
				xi = ((NI) 0);
				hexChar_AQ39b2vc2IkLN3FY9bhdTqCg(s[(NI)(i - ((NI) 2))], (&xi));
				hexChar_AQ39b2vc2IkLN3FY9bhdTqCg(s[(NI)(i - ((NI) 1))], (&xi));
				result = addChar(result, ((NIM_CHAR) (((NI) (xi)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result = addChar(result, s[i]);
				i += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos) = i;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, decodeVBiggestInt_5JGKp2eBU7Vp9cFMYv9bssUA)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i;
	NI sign;
	result = (NI64)0;
	i = (*pos);
	sign = ((NI) -1);
	{
		if (!((NU8)(s[i]) == (NU8)(45))) goto LA3_;
		i += ((NI) 1);
		sign = ((NI) 1);
	}
	LA3_: ;
	result = IL64(0);
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NU8)(s[i])) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)((NI)(((NU8)(s[i])) - ((NI) 97)) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)((NI)(((NU8)(s[i])) - ((NI) 65)) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)((NI)(((NU8)(s[i])) - ((NI) 128)) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign)))) - (NU64)(IL64(5)));
	(*pos) = i;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux_UxDO4XNnIGIEXt1v5wvZJQ_2)(NI x, NimStringDesc** result) {
	NIM_CHAR d;
	NI v;
	NI rem;
	NI idx;
	d = (NIM_CHAR)0;
	v = x;
	rem = (NI)(v % ((NI) 190));
	{
		if (!(rem < ((NI) 0))) goto LA3_;
		(*result) = addChar((*result), 45);
		v = ((NI64)-((NI)(v / ((NI) 190))));
		rem = ((NI64)-(rem));
	}
	goto LA1_;
	LA3_: ;
	{
		v = (NI)(v / ((NI) 190));
	}
	LA1_: ;
	idx = rem;
	{
		if (!(idx < ((NI) 62))) goto LA8_;
		d = ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_3)->data[idx];
	}
	goto LA6_;
	LA8_: ;
	{
		d = ((NIM_CHAR) (((NI) ((NI)((NI)(idx - ((NI) 62)) + ((NI) 128))))));
	}
	LA6_: ;
	{
		if (!!((v == ((NI) 0)))) goto LA13_;
		encodeVIntAux_UxDO4XNnIGIEXt1v5wvZJQ_2(v, result);
	}
	LA13_: ;
	(*result) = addChar((*result), d);
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVInt_UxDO4XNnIGIEXt1v5wvZJQ)(NI x, NimStringDesc** result) {
	encodeVIntAux_UxDO4XNnIGIEXt1v5wvZJQ_2((NI)((NU64)(x) + (NU64)(((NI) 5))), result);
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toStrMaxPrecision_bUxkE4LG1hqvhXMwxWRgAw)(NF f, NimStringDesc* literalPostfix) {
	NimStringDesc* result;
	tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA T1_;
	result = (NimStringDesc*)0;
	T1_ = (tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T1_ = classify_rfodLs2J9b87EDgWnWZoObA(f);
	switch (T1_) {
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 4):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_4));
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 3):
	{
		NimStringDesc* T4_;
		T4_ = (NimStringDesc*)0;
		T4_ = rawNewString(literalPostfix->Sup.len + 4);
appendString(T4_, ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_5));
appendString(T4_, literalPostfix);
		result = T4_;
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 2):
	{
		NimStringDesc* T6_;
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString(literalPostfix->Sup.len + 3);
appendString(T6_, ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_6));
appendString(T6_, literalPostfix);
		result = T6_;
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 5):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_7));
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 6):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8));
	}
	break;
	default:
	{
		int n;
		result = mnewString(((NI) 81));
		n = snprintf(result->data, ((NU) ((result ? result->Sup.len : 0))), "%#.16e%s", f, literalPostfix->data);
		result = setLengthStr(result, ((NI) (n)));
	}
	break;
	}
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(void, encodeStr_fnpFTBPI8YDkXyVTnD89aFw)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				switch (((NU8)(s->data[i]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i]);
				}
				break;
				default:
				{
					NimStringDesc* T6_;
					NimStringDesc* T7_;
					T6_ = (NimStringDesc*)0;
					T7_ = (NimStringDesc*)0;
					T7_ = nsuToHex(((NI64) (((NU8)(s->data[i])))), ((NI) 2));
					T6_ = rawNewString(T7_->Sup.len + 1);
appendChar(T6_, 92);
appendString(T6_, T7_);
					(*result) = resizeString((*result), T6_->Sup.len + 0);
appendString((*result), T6_);
				}
				break;
				}
				res += ((NI) 1);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVBiggestIntAux_nNFWlW1IRaHQroAl4mzSKg_2)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d;
	NI64 v;
	NI64 rem;
	NI idx;
	d = (NIM_CHAR)0;
	v = x;
	rem = (NI64)(v % IL64(190));
	{
		if (!(rem < IL64(0))) goto LA3_;
		(*result) = addChar((*result), 45);
		v = -((NI64)(v / IL64(190)));
		rem = -(rem);
	}
	goto LA1_;
	LA3_: ;
	{
		v = (NI64)(v / IL64(190));
	}
	LA1_: ;
	idx = ((NI) (rem));
	{
		if (!(idx < ((NI) 62))) goto LA8_;
		d = ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_3)->data[idx];
	}
	goto LA6_;
	LA8_: ;
	{
		d = ((NIM_CHAR) (((NI) ((NI)((NI)(idx - ((NI) 62)) + ((NI) 128))))));
	}
	LA6_: ;
	{
		if (!!((v == IL64(0)))) goto LA13_;
		encodeVBiggestIntAux_nNFWlW1IRaHQroAl4mzSKg_2(v, result);
	}
	LA13_: ;
	(*result) = addChar((*result), d);
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVBiggestInt_nNFWlW1IRaHQroAl4mzSKg)(NI64 x, NimStringDesc** result) {
	encodeVBiggestIntAux_nNFWlW1IRaHQroAl4mzSKg_2((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}

