/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef NU8 tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
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
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
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
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
typedef NU8 tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg;
typedef NU8 tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw;
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
typedef NI tyArray_9agrCtWKhCnWWMJpKKugJag[16];
struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ {
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
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
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_u09cNzf0XUG9bfJ6APE4BeUw)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* a, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b);
N_NIMCALL(void, initIntSet_a9a80eJplB17xrdZJ41Baww)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_J1LKkswOWytqHgN0uw2sxg)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* a, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_NIMCALL(NIM_BOOL, containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_NIMCALL(NIM_BOOL, compareTypes_Wiat9a9c5vPvjDreVawQ2qgA)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* x, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* y, tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg cmp, tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw flags);
N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, skipTypes_pLCdCGDuirMe9cspwviV9aVA)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lastSon_esDJA7239bJDiq4UrX9aHCjg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, internalError_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errMsg);
N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, lastSon_E41DMKHtT9c6sAMyyvhmSIw)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* n);
N_NIMCALL(NI, sonsLen_gG7hUAX9cA629ahMLVL3xN4w)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* n);
N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, sameValue_1Qdwg1ZguEjbL3mmgPJD3w)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
STRING_LITERAL(TM_1vgML9aM876J0EHbm6P1O8A_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TM_1vgML9aM876J0EHbm6P1O8A_3, "isPartOfAux()", 13);

N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp_ = (NI)(T3_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*n).kindU.S6.sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA8_;
						goto BeforeRet_;
					}
					LA8_: ;
					res += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA13_;
			goto BeforeRet_;
		}
		LA13_: ;
		{
			NI i_2;
			NI colontmp__2;
			NI T16_;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			T16_ = (NI)0;
			T16_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp__2 = (NI)(T16_ - ((NI) 1));
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA18;
					i_2 = res_2;
					switch ((*(*n).kindU.S6.sons->data[i_2]).kind) {
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T20_;
						T20_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						T20_ = lastSon_esDJA7239bJDiq4UrX9aHCjg((*n).kindU.S6.sons->data[i_2]);
						result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw(T20_, b, marker);
						{
							if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA23_;
							goto BeforeRet_;
						}
						LA23_: ;
					}
					break;
					default:
					{
						internalError_5XY9cUy7hZmUusM38U9cYYdw(((NimStringDesc*) &TM_1vgML9aM876J0EHbm6P1O8A_2));
					}
					break;
					}
					res_2 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, ((NimStringDesc*) &TM_1vgML9aM876J0EHbm6P1O8A_3));
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_J1LKkswOWytqHgN0uw2sxg)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* a, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = (b == NIM_NIL);
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg(marker, (*a).Sup.id);
		if (!T9_) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = compareTypes_Wiat9a9c5vPvjDreVawQ2qgA(a, b, ((tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg) 1), 0);
		if (!T14_) goto LA15_;
		result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
		goto BeforeRet_;
	}
	LA15_: ;
	switch ((*a).kind) {
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17):
	{
		{
			tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* T22_;
			if (!!(((*a).sons->data[((NI) 0)] == NIM_NIL))) goto LA20_;
			T22_ = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
			T22_ = skipTypes_pLCdCGDuirMe9cspwviV9aVA((*a).sons->data[((NI) 0)], IL64(36028797033646352));
			result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(T22_, b, marker);
		}
		LA20_: ;
		{
			if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA25_;
			result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*a).n, b, marker);
		}
		LA25_: ;
	}
	break;
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 11):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 13):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 4):
	{
		tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* T28_;
		T28_ = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
		T28_ = lastSon_E41DMKHtT9c6sAMyyvhmSIw(a);
		result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(T28_, b, marker);
	}
	break;
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 16):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 19):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 18):
	{
		{
			NI i;
			NI colontmp_;
			NI T31_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T31_ = (NI)0;
			T31_ = sonsLen_gG7hUAX9cA629ahMLVL3xN4w(a);
			colontmp_ = (NI)(T31_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA33;
					i = res;
					result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg((*a).sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA36_;
						goto BeforeRet_;
					}
					LA36_: ;
					res += ((NI) 1);
				} LA33: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_u09cNzf0XUG9bfJ6APE4BeUw)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* a, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg marker;
	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initIntSet_a9a80eJplB17xrdZJ41Baww((&marker));
	result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(b, a, (&marker));
	return result;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kindU.S6.sons == 0)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		T6_ = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
		result = T6_;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8_;
				result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
			}
			goto LA6_;
			LA8_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = ((4384 &(1U<<((NU)((*(*a).kindU.S4.sym).kind)&31U)))!=0);
				if (T11_) goto LA12_;
				T11_ = ((4384 &(1U<<((NU)((*(*b).kindU.S4.sym).kind)&31U)))!=0);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			}
			goto LA6_;
			LA13_: ;
			{
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T18_;
					T18_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T18_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((T18_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA19_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA19_: ;
			}
			LA6_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				NIM_BOOL T24_;
				NI T25_;
				NI T27_;
				T24_ = (NIM_BOOL)0;
				T25_ = (NI)0;
				T25_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(a);
				T24_ = (((NI) 2) <= T25_);
				if (!(T24_)) goto LA26_;
				T27_ = (NI)0;
				T27_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(b);
				T24_ = (((NI) 2) <= T27_);
				LA26_: ;
				if (!T24_) goto LA28_;
				{
					NIM_BOOL T32_;
					NIM_BOOL T33_;
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* y;
					T32_ = (NIM_BOOL)0;
					T33_ = (NIM_BOOL)0;
					T33_ = (result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2));
					if (!(T33_)) goto LA34_;
					T33_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*a).kindU.S6.sons->data[((NI) 1)]);
					LA34_: ;
					T32_ = T33_;
					if (!(T32_)) goto LA35_;
					T32_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*b).kindU.S6.sons->data[((NI) 1)]);
					LA35_: ;
					if (!T32_) goto LA36_;
					{
						if (!((*(*a).kindU.S6.sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA40_;
						x = (*(*a).kindU.S6.sons->data[((NI) 1)]).kindU.S6.sons->data[((NI) 1)];
					}
					goto LA38_;
					LA40_: ;
					{
						x = (*a).kindU.S6.sons->data[((NI) 1)];
					}
					LA38_: ;
					{
						if (!((*(*b).kindU.S6.sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA45_;
						y = (*(*b).kindU.S6.sons->data[((NI) 1)]).kindU.S6.sons->data[((NI) 1)];
					}
					goto LA43_;
					LA45_: ;
					{
						y = (*b).kindU.S6.sons->data[((NI) 1)];
					}
					LA43_: ;
					{
						NIM_BOOL T50_;
						T50_ = (NIM_BOOL)0;
						T50_ = sameValue_1Qdwg1ZguEjbL3mmgPJD3w(x, y);
						if (!T50_) goto LA51_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
					}
					goto LA48_;
					LA51_: ;
					{
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
					}
					LA48_: ;
				}
				LA36_: ;
			}
			goto LA22_;
			LA28_: ;
			{
				{
					if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA57_;
					{
						tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T61_;
						T61_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
						T61_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
						if (!!((T61_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA62_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA62_: ;
				}
				LA57_: ;
			}
			LA22_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA67_;
				{
					if (!!(((*(*(*a).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).Sup.id == (*(*(*b).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).Sup.id))) goto LA71_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
				}
				LA71_: ;
			}
			LA67_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA76_;
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T80_;
					T80_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T80_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
					if (!!((T80_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA81_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA81_: ;
			}
			LA76_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 1)], (*b).kindU.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1_;
	LA3_: ;
	{
		switch ((*b).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 0)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			{
				tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T91_;
				T91_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
				T91_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
				if (!!((T91_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA92_;
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 0)]);
				{
					if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA96_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA96_: ;
			}
			LA92_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			switch ((*a).kind) {
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], b);
			}
			break;
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 1)], b);
			}
			break;
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
			{
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T105_;
					T105_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T105_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
					if (!!((T105_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA106_;
					result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], b);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA110_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA110_: ;
				}
				LA106_: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}

