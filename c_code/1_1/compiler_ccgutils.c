/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
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
typedef struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA tySequence_Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyTuple_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
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
struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q {
NI counter;
tySequence_Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q tyArray_lH3aCMKKYLVdnvOW3MwMBQ[64];
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* tyArray_3PQufyGAQFOztiWDnPtfsQ[64];
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
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
typedef NU8 tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyArray_qZhGNNJ69c1k4POIQ9apOotg[21];
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg {
tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* key;
RootObj* val;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
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
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, initTypeTables_H50zP4i7RX1LUO9c58EAf3A)(void);
N_LIB_PRIVATE N_NIMCALL(void, initIdTable_9cUS2oaKn1IFXKjLdglPZHQ)(tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toCChar_8tBycpmTbY1bylVySsCO1w)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichPragma_tadMdqrtQd2cek9aFwyE1XQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
tyArray_lH3aCMKKYLVdnvOW3MwMBQ gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ;
extern TNimType NTI_9aiv9bp2t5icFNINcg9c4xi1Q_;
TNimType NTI_lH3aCMKKYLVdnvOW3MwMBQ_;
tyArray_3PQufyGAQFOztiWDnPtfsQ gCanonicalTypes_qqf22SW9aaNKMic9cRqA9cBxQ;
extern TNimType NTI_3PQufyGAQFOztiWDnPtfsQ_;
extern tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag;
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_4, "X", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_5, "dollar", 6);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_6, "percent", 7);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_7, "amp", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_8, "roof", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_9, "emark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_10, "qmark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_11, "star", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_12, "plus", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_13, "minus", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_14, "slash", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_15, "eq", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_16, "lt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_17, "gt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_18, "tilde", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_19, "colon", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_20, "dot", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_21, "at", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_22, "bar", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_23, "_", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_24, "\"", 1);
extern NIM_CONST tyArray_qZhGNNJ69c1k4POIQ9apOotg CPU_uYXopJX8pM87pQDCtmgWfQ;
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_2)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 64; T1_++) {
	nimGCvisit((void*)gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ[T1_].data, 0);
	}
}
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_3)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 64; T1_++) {
	nimGCvisit((void*)gCanonicalTypes_qqf22SW9aaNKMic9cRqA9cBxQ[T1_], 0);
	}
}

N_LIB_PRIVATE N_NIMCALL(void, initTypeTables_H50zP4i7RX1LUO9c58EAf3A)(void) {
	{
		tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag i;
		NI res;
		i = (tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 63))) goto LA3;
				i = ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) (res));
				initIdTable_9cUS2oaKn1IFXKjLdglPZHQ((&gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ[(i)- 0]));
				res += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, mangle_0ctHksTXSPyaxjBOgK4TiA)(NimStringDesc* name) {
	NimStringDesc* result;
	NI start;
	NIM_BOOL requiresUnderscore;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	start = ((NI) 0);
	{
		NimStringDesc* T5_;
		if (!(((NU8)(name->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)(name->data[((NI) 0)])) <= ((NU8)(57)))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString(2);
appendString(T5_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_4));
appendChar(T5_, name->data[((NI) 0)]);
		result = resizeString(result, T5_->Sup.len + 0);
appendString(result, T5_);
		start = ((NI) 1);
	}
	LA3_: ;
	requiresUnderscore = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res = start;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				c = name->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 48 ... 57:
				case 65 ... 90:
				{
					result = addChar(result, c);
				}
				break;
				case 95:
				{
					{
						NIM_BOOL T13_;
						NIM_BOOL T14_;
						T13_ = (NIM_BOOL)0;
						T14_ = (NIM_BOOL)0;
						T14_ = (((NI) 0) < i);
						if (!(T14_)) goto LA15_;
						T14_ = (i < (NI)((name ? name->Sup.len : 0) - ((NI) 1)));
						LA15_: ;
						T13_ = T14_;
						if (!(T13_)) goto LA16_;
						T13_ = (((NU8)(name->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(name->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
						LA16_: ;
						if (!T13_) goto LA17_;
					}
					goto LA11_;
					LA17_: ;
					{
						result = addChar(result, c);
					}
					LA11_: ;
				}
				break;
				case 36:
				{
					result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_5));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 37:
				{
					result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_6));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 38:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_7));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 94:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_8));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 33:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_9));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 63:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_10));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 42:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_11));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 43:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_12));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 45:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_13));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 47:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_14));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 61:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_15));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 60:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_16));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 62:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_17));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 126:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_18));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 58:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_19));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 46:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_20));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 64:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_21));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 124:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_22));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				default:
				{
					NimStringDesc* T39_;
					NimStringDesc* T40_;
					T39_ = (NimStringDesc*)0;
					T40_ = (NimStringDesc*)0;
					T40_ = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					T39_ = rawNewString(T40_->Sup.len + 1);
appendString(T39_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_4));
appendString(T39_, T40_);
					result = resizeString(result, T39_->Sup.len + 0);
appendString(result, T39_);
					requiresUnderscore = NIM_TRUE;
				}
				break;
				}
				res += ((NI) 1);
			} LA8: ;
		}
	}
	{
		if (!requiresUnderscore) goto LA43_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_23));
	}
	LA43_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, makeSingleLineCString_59a1Z83zpqnyWoTdIAQEfHQ)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_24));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* T4_;
				if (!(i < L)) goto LA3;
				c = s->data[i];
				T4_ = (NimStringDesc*)0;
				T4_ = toCChar_8tBycpmTbY1bylVySsCO1w(c);
				result = resizeString(result, T4_->Sup.len + 0);
appendString(result, T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, getUniqueType_HEGWNfEn5UAm9aUHUXxHEwQ)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* key) {
	tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* result;
	result = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
	result = key;
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

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					result = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw((*n).kindU.S6.sons->data[i], w);
					{
						if (!!((result == NIM_NIL))) goto LA7_;
						goto LA2;
					}
					LA7_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		} LA2: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 90):
	{
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA12;
					i_3 = i_4;
					{
						tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw T15_;
						T15_ = (tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
						T15_ = whichPragma_tadMdqrtQd2cek9aFwyE1XQ((*n).kindU.S6.sons->data[i_3]);
						if (!(T15_ == w)) goto LA16_;
						result = (*n).kindU.S6.sons->data[i_3];
						goto BeforeRet_;
					}
					LA16_: ;
					i_4 += ((NI) 1);
				} LA12: ;
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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, stmtsContainPragma_9aY8Dd0aB4xmQTh5kptvVOg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	NIM_BOOL result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	result = (NIM_BOOL)0;
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw(n, w);
	result = !((T1_ == NIM_NIL));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, hashString_Pyx5T9crDr8ERTxY9apZjP2g)(NimStringDesc* s) {
	NI64 result;
	result = (NI64)0;
	{
		NI64 b;
		if (!(CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64))) goto LA3_;
		b = IL64(0);
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
					if (!(res <= colontmp_)) goto LA7;
					i = res;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 6))));
					res += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 15)))));
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA11;
					i_2 = res_2;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_2]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_2 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
nimRegisterGlobalMarker(TM_Z07Nb1SkYoziC0Zz9be4mTA_2);
nimRegisterGlobalMarker(TM_Z07Nb1SkYoziC0Zz9be4mTA_3);
	initTypeTables_H50zP4i7RX1LUO9c58EAf3A();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.size = sizeof(tyArray_lH3aCMKKYLVdnvOW3MwMBQ);
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.kind = 16;
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.base = (&NTI_9aiv9bp2t5icFNINcg9c4xi1Q_);
}

