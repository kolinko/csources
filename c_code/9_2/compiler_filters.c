/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NU8 tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* dup;
};
struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sink;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw {
  RootObj Sup;
tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ {
  RootObj Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA {
tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getArg_4LRC3jIE5TPe1ACm9aPVpBQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma_54ZurtFnCR0LbrbLzC8vrw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, localError_VpilfPWbplGz6ny7O9cfr2g)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_hrsET2VpzHuUBdZObITwmQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg_J1A66BRI6GgqzqhU0EZntw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln_p1fwzwO1YKdwAKg6V27RTw_2)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_TQe1mwqs39ccgay5ywsr9azw)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_2, "startswith", 10);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_3, "", 0);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_4, "true", 4);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_5, "false", 5);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_6, "leading", 7);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_7, "trailing", 8);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_TpC7tIfhGAaosc7HIsUuXA_8 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_9, "sub", 3);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_10, "by", 2);

N_LIB_PRIVATE N_NIMCALL(void, invalidPragma_54ZurtFnCR0LbrbLzC8vrw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
	localError_VpilfPWbplGz6ny7O9cfr2g((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 169), T1_);
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getArg_4LRC3jIE5TPe1ACm9aPVpBQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = NIM_NIL;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI T6_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T6_ = (NI)0;
		T6_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
		colontmp_ = (NI)(T6_ - ((NI) 1));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				{
					if (!((*(*n).kindU.S6.sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 33))) goto LA11_;
					{
						if (!!(((*(*(*n).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2)))) goto LA15_;
						invalidPragma_54ZurtFnCR0LbrbLzC8vrw(n);
					}
					LA15_: ;
					{
						NI T19_;
						T19_ = (NI)0;
						T19_ = nsuCmpIgnoreStyle((*(*(*(*n).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).s, name);
						if (!(T19_ == ((NI) 0))) goto LA20_;
						result = (*(*n).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet_;
					}
					LA20_: ;
				}
				goto LA9_;
				LA11_: ;
				{
					if (!(i == pos)) goto LA23_;
					result = (*n).kindU.S6.sons->data[i];
					goto BeforeRet_;
				}
				goto LA9_;
				LA23_: ;
				LA9_: ;
				res += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg_9a2s5yGJN0q64pYjhEbI1pQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0) {
	NIM_CHAR result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_CHAR)0;
	x = getArg_4LRC3jIE5TPe1ACm9aPVpBQ(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5))) goto LA6_;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.intVal))))));
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma_54ZurtFnCR0LbrbLzC8vrw(n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_hrsET2VpzHuUBdZObITwmQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0) {
	NimStringDesc* result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NimStringDesc*)0;
	x = getArg_4LRC3jIE5TPe1ACm9aPVpBQ(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = copyString(default_0);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) && (*x).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22))) goto LA6_;
		result = copyString((*x).kindU.S3.strVal);
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma_54ZurtFnCR0LbrbLzC8vrw(n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg_J1A66BRI6GgqzqhU0EZntw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0) {
	NIM_BOOL result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_BOOL)0;
	x = getArg_4LRC3jIE5TPe1ACm9aPVpBQ(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NI T8_;
		T6_ = (NIM_BOOL)0;
		T6_ = ((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T6_)) goto LA7_;
		T8_ = (NI)0;
		T8_ = nsuCmpIgnoreStyle((*(*x).kindU.S5.ident).s, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_4));
		T6_ = (T8_ == ((NI) 0));
		LA7_: ;
		if (!T6_) goto LA9_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA9_: ;
	{
		NIM_BOOL T12_;
		NI T14_;
		T12_ = (NIM_BOOL)0;
		T12_ = ((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T12_)) goto LA13_;
		T14_ = (NI)0;
		T14_ = nsuCmpIgnoreStyle((*(*x).kindU.S5.ident).s, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_5));
		T12_ = (T14_ == ((NI) 0));
		LA13_: ;
		if (!T12_) goto LA15_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA15_: ;
	{
		invalidPragma_54ZurtFnCR0LbrbLzC8vrw(n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, filterStrip_8vZ6X8KZZNI4xsTx2A9bPBw)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = (tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	pattern = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_2), ((NI) 1), ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3));
	leading = boolArg_J1A66BRI6GgqzqhU0EZntw(call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_6), ((NI) 2), NIM_TRUE);
	trailing = boolArg_J1A66BRI6GgqzqhU0EZntw(call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_7), ((NI) 3), NIM_TRUE);
	result = llStreamOpen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* stripped;
			T3_ = (NIM_BOOL)0;
			T3_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(stdin_0, (&line));
			if (!T3_) goto LA2;
			stripped = nsuStrip(line, leading, trailing, TM_TpC7tIfhGAaosc7HIsUuXA_8);
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (T6_) goto LA7_;
				T6_ = nsuStartsWith(stripped, pattern);
				LA7_: ;
				if (!T6_) goto LA8_;
				llStreamWriteln_p1fwzwO1YKdwAKg6V27RTw_2(result, stripped);
			}
			goto LA4_;
			LA8_: ;
			{
				llStreamWriteln_p1fwzwO1YKdwAKg6V27RTw_2(result, line);
			}
			LA4_: ;
		} LA2: ;
	}
	llStreamClose_TQe1mwqs39ccgay5ywsr9azw(stdin_0);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, filterReplace_8vZ6X8KZZNI4xsTx2A9bPBw_2)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = (tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	sub = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_9), ((NI) 1), ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3_;
		invalidPragma_54ZurtFnCR0LbrbLzC8vrw(call);
	}
	LA3_: ;
	by = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_10), ((NI) 2), ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3));
	result = llStreamOpen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T7_;
			NimStringDesc* T8_;
			T7_ = (NIM_BOOL)0;
			T7_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(stdin_0, (&line));
			if (!T7_) goto LA6;
			T8_ = (NimStringDesc*)0;
			T8_ = nsuReplaceStr(line, sub, by);
			llStreamWriteln_p1fwzwO1YKdwAKg6V27RTw_2(result, T8_);
		} LA6: ;
	}
	llStreamClose_TQe1mwqs39ccgay5ywsr9azw(stdin_0);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit000)(void) {
}

