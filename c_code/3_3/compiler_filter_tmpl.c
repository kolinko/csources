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
typedef struct tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
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
typedef NU8 tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
struct tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg {
tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* inp;
tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ state;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
NI indent;
NI emitPar;
NimStringDesc* x;
tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* outp;
NIM_CHAR subsChar;
NIM_CHAR nimDirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* toStr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingExprLine;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
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
static N_INLINE(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl)(NimStringDesc* filename, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_Shbbzc11c9bnWkBc9b42npzA)(NI32 fileInfoIdx, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg_9a2s5yGJN0q64pYjhEbI1pQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_hrsET2VpzHuUBdZObITwmQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite_p1fwzwO1YKdwAKg6V27RTw)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d);
static N_INLINE(NIM_BOOL, withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, localError_VpilfPWbplGz6ny7O9cfr2g)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_m1TSS3QwQPclQATuiRuVZg)(NimStringDesc* s, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite_qahxCxkD1WgPXDAm4CZKqw)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NIM_CHAR data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_TQe1mwqs39ccgay5ywsr9azw)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_2, "", 0);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_3, "subschar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_4, "metachar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_5, "emit", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_6, "result.add", 10);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_7, "conc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_8, " & ", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_9, "tostring", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_10, "$", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_11, "\012", 1);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_paI0W78l0CRDBLjAHJxn6w_12 = {
0x00, 0x00, 0x00, 0x00, 0x70, 0xBC, 0x00, 0x50,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_13, "end", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_14, "if", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_15, "when", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_16, "try", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_17, "while", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_18, "for", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_19, "block", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_20, "case", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_21, "proc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_22, "iterator", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_23, "converter", 9);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_24, "macro", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_25, "template", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_26, "method", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_27, "func", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_28, "elif", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_29, "of", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_30, "else", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_31, "except", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_32, "finally", 7);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_33, "let", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_34, "var", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_35, "const", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_36, "type", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_37, "#end", 4);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_paI0W78l0CRDBLjAHJxn6w_38 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_39, "\"", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_40, "(\"", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_41, "\\x", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_42, "\\\\", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_43, "\\\'", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_44, "\\\"", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_45, "}", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_46, "\\n\"", 3);

static N_INLINE(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl)(NimStringDesc* filename, NI line, NI col) {
	tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw result;
	NI32 T1_;
	memset((void*)(&result), 0, sizeof(result));
	T1_ = (NI32)0;
	T1_ = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(filename);
	result = newLineInfo_Shbbzc11c9bnWkBc9b42npzA(T1_, line, col);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = nsuRepeatChar(41, ((NI) ((*p).emitPar)));
	llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T1_);
	(*p).emitPar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).info.line)) goto LA4_;
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_11));
	}
	LA4_: ;
	{
		NimStringDesc* T10_;
		if (!(*p).pendingExprLine) goto LA8_;
		T10_ = (NimStringDesc*)0;
		T10_ = nsuRepeatChar(32, ((NI) 2));
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T10_);
		(*p).pendingExprLine = NIM_FALSE;
	}
	LA8_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).x->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (((NI) 0) < (*p).par);
	if (T2_) goto LA3_;
	T2_ = (((NI) 0) < (*p).bracket);
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA4_;
	T1_ = (((NI) 0) < (*p).curly);
	LA4_: ;
	result = T1_;
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NI j;
	j = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimDirective));
		if (!(T5_)) goto LA6_;
		T5_ = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(63));
		LA6_: ;
		if (!T5_) goto LA7_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
	}
	goto LA3_;
	LA7_: ;
	{
		NI d;
		NimStringDesc* keyw;
		NIM_BOOL T16_;
		if (!((NU8)((*p).x->data[j]) == (NU8)((*p).nimDirective))) goto LA10_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_2));
		{
			while (1) {
				if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).x->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanPar_UZozihWMkEBOt7RUxfUnzw(p, j);
		T16_ = (NIM_BOOL)0;
		T16_ = withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl((&(*p)));
		if (T16_) goto LA17_;
		T16_ = endsWith_RTbJaR5kDAZUyj9bXErnbyg((*p).x, TM_paI0W78l0CRDBLjAHJxn6w_12);
		LA17_: ;
		(*p).pendingExprLine = T16_;
		switch (hashString(keyw) & 31) {
		case 1: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_17))) goto LA19_;
break;
		case 3: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_29))) goto LA20_;
break;
		case 6: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_20))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_24))) goto LA19_;
break;
		case 7: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_14))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_26))) goto LA19_;
break;
		case 9: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_31))) goto LA20_;
break;
		case 10: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_21))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_33))) goto LA21_;
break;
		case 12: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_34))) goto LA21_;
break;
		case 16: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_15))) goto LA19_;
break;
		case 17: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_22))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_28))) goto LA20_;
break;
		case 18: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_25))) goto LA19_;
break;
		case 19: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_18))) goto LA19_;
break;
		case 21: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_30))) goto LA20_;
break;
		case 23: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_13))) goto LA18_;
break;
		case 24: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_23))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_32))) goto LA20_;
break;
		case 26: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_35))) goto LA21_;
break;
		case 27: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_16))) goto LA19_;
break;
		case 29: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_19))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_27))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_36))) goto LA21_;
break;
		}
		goto LA22_;
		LA18_: ;
		{
			NimStringDesc* T30_;
			{
				if (!(((NI) 2) <= (*p).indent)) goto LA27_;
				(*p).indent -= ((NI) 2);
			}
			goto LA25_;
			LA27_: ;
			{
				(*p).info.col = ((NI16) (j));
				localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 169), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_13));
			}
			LA25_: ;
			T30_ = (NimStringDesc*)0;
			T30_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T30_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_37));
		}
		goto LA23_;
		LA19_: ;
		{
			NimStringDesc* T32_;
			NimStringDesc* T33_;
			T32_ = (NimStringDesc*)0;
			T32_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T32_);
			T33_ = (NimStringDesc*)0;
			T33_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T33_);
			(*p).indent += ((NI) 2);
		}
		goto LA23_;
		LA20_: ;
		{
			NimStringDesc* T35_;
			NimStringDesc* T36_;
			T35_ = (NimStringDesc*)0;
			T35_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent - ((NI) 2)))));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T35_);
			T36_ = (NimStringDesc*)0;
			T36_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T36_);
		}
		goto LA23_;
		LA21_: ;
		{
			NimStringDesc* T38_;
			NimStringDesc* T39_;
			T38_ = (NimStringDesc*)0;
			T38_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T38_);
			T39_ = (NimStringDesc*)0;
			T39_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T39_);
			{
				NIM_BOOL T42_;
				T42_ = (NIM_BOOL)0;
				T42_ = contains_m1TSS3QwQPclQATuiRuVZg((*p).x, TM_paI0W78l0CRDBLjAHJxn6w_38);
				if (!!(T42_)) goto LA43_;
				(*p).indent += ((NI) 2);
			}
			LA43_: ;
		}
		goto LA23_;
		LA22_: ;
		{
			NimStringDesc* T46_;
			NimStringDesc* T47_;
			T46_ = (NimStringDesc*)0;
			T46_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T46_);
			T47_ = (NimStringDesc*)0;
			T47_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T47_);
		}
		LA23_: ;
		(*p).state = ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0);
	}
	goto LA3_;
	LA10_: ;
	{
		(*p).par = ((NI) 0);
		(*p).curly = ((NI) 0);
		(*p).bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).state) {
		case ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1):
		{
			NimStringDesc* T50_;
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_11));
			T50_ = (NimStringDesc*)0;
			T50_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent + ((NI) 2)))));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T50_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_39));
		}
		break;
		case ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0):
		{
			NimStringDesc* T52_;
			newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
			T52_ = (NimStringDesc*)0;
			T52_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T52_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).emit);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_40));
			(*p).emitPar += ((NI) 1);
		}
		break;
		}
		(*p).state = ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1);
		{
			while (1) {
				switch (((NU8)((*p).x->data[j]))) {
				case 0:
				{
					goto LA53;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* T57_;
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_41));
					T57_ = (NimStringDesc*)0;
					T57_ = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T57_);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_42));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_43));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_44));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA64_;
						j += ((NI) 1);
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI curly;
							(*p).info.col = ((NI16) (j));
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).toStr);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).x->data[j]))) {
									case 0:
									{
										localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 195), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_45));
										goto LA67;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA74_;
											goto LA67;
										}
										LA74_: ;
										{
											if (!(((NI) 0) < curly)) goto LA78_;
											curly -= ((NI) 1);
										}
										LA78_: ;
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 125);
									}
									break;
									default:
									{
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA67: ;
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 41);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).toStr);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA83;
									llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
									j += ((NI) 1);
								} LA83: ;
							}
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 41);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA87_;
								llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).subsChar);
								j += ((NI) 1);
							}
							goto LA85_;
							LA87_: ;
							{
								(*p).info.col = ((NI16) (j));
								localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 173), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
							}
							LA85_: ;
						}
						break;
						}
					}
					goto LA62_;
					LA64_: ;
					{
						llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
						j += ((NI) 1);
					}
					LA62_: ;
				}
				break;
				}
			}
		} LA53: ;
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_46));
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, filterTmpl_JvVu6X7Xrt789cwD0XA6mWg)(tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg p;
	result = (tyObject_TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	memset((void*)(&p), 0, sizeof(p));
	p.info = newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl(filename, ((NI) 0), ((NI) 0));
	p.outp = llStreamOpen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_2));
	p.inp = stdin_0;
	p.subsChar = charArg_9a2s5yGJN0q64pYjhEbI1pQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_3), ((NI) 1), 36);
	p.nimDirective = charArg_9a2s5yGJN0q64pYjhEbI1pQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_4), ((NI) 2), 35);
	p.emit = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_5), ((NI) 3), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_6));
	p.conc = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_7), ((NI) 4), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_8));
	p.toStr = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_9), ((NI) 5), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
	p.x = rawNewString(((NI) 120));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(p.inp, (&p.x));
		if (!T3_) goto LA4_;
		p.info.line = (NI16)(p.info.line + ((NI16) 1));
	}
	LA4_: ;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(p.inp, (&p.x));
			if (!T8_) goto LA7;
			p.info.line = (NI16)(p.info.line + ((NI16) 1));
			parseLine_Seop6SJMf7a68kj2jl0nsQ((&p));
		} LA7: ;
	}
	newLine_P1DA7WwGEY1zF3DfWYV6Pg((&p));
	result = p.outp;
	llStreamClose_TQe1mwqs39ccgay5ywsr9azw(p.inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit000)(void) {
}

