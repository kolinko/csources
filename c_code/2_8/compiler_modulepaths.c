/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg tyTuple_7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
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
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* dup;
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
typedef NU8 tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef NU8 tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ;
typedef NimStringDesc* tyArray_jcN9bpO9aCR09cTLP9bY4PaJVQ[11];
typedef NU8 tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw;
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
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
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sink;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
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
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
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
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
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
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_oShYsC351gWORZ0SBCGXVQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pathSubs_0CMMAuGT1UklgV9a3pNmucg)(NimStringDesc* p, NimStringDesc* config);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_KZnzGw9baMUf9ad9aixRtHmqg)(NI32 fileIdx);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, localError_GarD0CQJ5aQhoHekHYinVQ)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_amOsb4K20Rndp0lzgjadlA)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(NI, resize_bzF9a0JivP3Z4njqaxuLc5wsystem)(NI old);
N_LIB_PRIVATE N_NIMCALL(void*, growObj_AVYny8c0GTk28gxjmat1MA)(void* old, NI newsize);
N_NIMCALL(TNimType*, extGetCellType)(void* c);
N_LIB_PRIVATE N_NIMCALL(void, forAllChildrenAux_YOI1Uo54H9aas13WthjhsfA)(void* dest, TNimType* mt, tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ op);
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__qX5C9b0n9bOP7jk69amC8dA7A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__lXoMhn1ZYc9cAJa9bfA61msg)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, fileExists_yTPrfdEKg9cKCeSFUA6popQoptions)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_LIB_PRIVATE N_NIMCALL(void, localError_VpilfPWbplGz6ny7O9cfr2g)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findModule_EcukdJLszq41C6G0HEdN9bw)(NimStringDesc* modulename, NimStringDesc* currentModule);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ)(NimStringDesc* filename);
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern NimStringDesc* libpath_sniQ2ei4mGD9av6vrH9bfUgg;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_3, "invalid path: ", 14);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_4, "as", 2);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_5, "std", 3);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_6, "pure", 4);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_7, "core", 4);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_8, "arch", 4);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_9, "pure/collections", 16);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_10, "pure/concurrency", 16);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_11, "impure", 6);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_12, "wrappers", 8);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_13, "wrappers/linenoise", 18);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_14, "windows", 7);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_15, "posix", 5);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_16, "js", 2);
NIM_CONST tyArray_jcN9bpO9aCR09cTLP9bY4PaJVQ stdlibDirs_wTHnUhrGivb3aF9a8BiN5vA = {((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_6),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_7),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_8),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_9),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_10),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_11),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_12),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_13),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_14),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_15),
((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_16)}
;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_17, "nim", 3);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_18, " ", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_19, "", 0);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_20, ".", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_21, "/", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_22, "invalid module name: \'$1\'", 25);

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
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

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(NI, resize_bzF9a0JivP3Z4njqaxuLc5wsystem)(NI old) {
	NI result;
	result = (NI)0;
	{
		if (!(old <= ((NI) 0))) goto LA3_;
		result = ((NI) 4);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(old < ((NI) 65536))) goto LA6_;
		result = (NI)(old * ((NI) 2));
	}
	goto LA1_;
	LA6_: ;
	{
		result = (NI)((NI)(old * ((NI) 3)) / ((NI) 2));
	}
	LA1_: ;
	return result;
}

static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(p, ((int) 0), ((size_t) (size)));
}

static N_INLINE(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen) {
	TGenericSeq* result;
	result = (TGenericSeq*)0;
	result = seq;
	{
		NI r;
		NI T5_;
		void* T6_;
		if (!((NI)((*result).reserved & ((NI) IL64(4611686018427387903))) < newLen)) goto LA3_;
		T5_ = (NI)0;
		T5_ = resize_bzF9a0JivP3Z4njqaxuLc5wsystem((NI)((*result).reserved & ((NI) IL64(4611686018427387903))));
		r = ((T5_ >= newLen) ? T5_ : newLen);
		T6_ = (void*)0;
		T6_ = growObj_AVYny8c0GTk28gxjmat1MA(((void*) (result)), (NI)((NI)(elemSize * r) + ((NI) 16)));
		result = ((TGenericSeq*) (T6_));
		(*result).reserved = r;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(newLen < (*result).len)) goto LA8_;
		{
			TNimType* T12_;
			T12_ = (TNimType*)0;
			T12_ = extGetCellType(((void*) (result)));
			if (!!((((*(*T12_).base).flags &(1U<<((NU)(((tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ) 0))&7U)))!=0))) goto LA13_;
			{
				NI i;
				NI colontmp_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = (NI)((*result).len - ((NI) 1));
				res = newLen;
				{
					while (1) {
						TNimType* T18_;
						if (!(res <= colontmp_)) goto LA17;
						i = res;
						T18_ = (TNimType*)0;
						T18_ = extGetCellType(((void*) (result)));
						forAllChildrenAux_YOI1Uo54H9aas13WthjhsfA(((void*) ((NI)((NU64)((NI)((NU64)(((NI) (ptrdiff_t) (result))) + (NU64)(((NI) 16)))) + (NU64)((NI)((NU64)(i) * (NU64)(elemSize)))))), (*T18_).base, ((tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ) 2));
						res += ((NI) 1);
					} LA17: ;
				}
			}
		}
		LA13_: ;
		zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) ((NI)((NU64)((NI)((NU64)(((NI) (ptrdiff_t) (result))) + (NU64)(((NI) 16)))) + (NU64)((NI)((NU64)(newLen) * (NU64)(elemSize)))))), ((NI) ((NI)((NU64)((NI)((NU64)((*result).len) - (NU64)(newLen))) * (NU64)(elemSize)))));
	}
	goto LA1_;
	LA8_: ;
	LA1_: ;
	(*result).len = newLen;
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

static N_INLINE(NIM_BOOL, fileExists_yTPrfdEKg9cKCeSFUA6popQoptions)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = nosexistsFile(filename);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_oShYsC351gWORZ0SBCGXVQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* volatile result;
{	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 21):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		TSafePoint TM_GM5IT6miOywfWPAzqo7pmA_2;
		pushSafePoint(&TM_GM5IT6miOywfWPAzqo7pmA_2);
		TM_GM5IT6miOywfWPAzqo7pmA_2.status = setjmp(TM_GM5IT6miOywfWPAzqo7pmA_2.context);
		if (TM_GM5IT6miOywfWPAzqo7pmA_2.status == 0) {
			NimStringDesc* T3_;
			tyTuple_7q7q3E6Oj24ZNVJb9aonhAg T4_;
			T3_ = (NimStringDesc*)0;
			T3_ = toFullPath_KZnzGw9baMUf9ad9aixRtHmqg((*n).info.fileIndex);
			memset((void*)(&T4_), 0, sizeof(T4_));
			nossplitFile(T3_, (&T4_));
			result = pathSubs_0CMMAuGT1UklgV9a3pNmucg((*n).kindU.S3.strVal, T4_.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_Gi06FkNeykJn7mrqRZYrkA_))) {
				NimStringDesc* T7_;
				TM_GM5IT6miOywfWPAzqo7pmA_2.status = 0;
				T7_ = (NimStringDesc*)0;
				T7_ = rawNewString((*n).kindU.S3.strVal->Sup.len + 14);
appendString(T7_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_3));
appendString(T7_, (*n).kindU.S3.strVal);
				localError_GarD0CQJ5aQhoHekHYinVQ((*n).info, T7_);
				result = copyString((*n).kindU.S3.strVal);
				popCurrentException();
			}
		}
		if (TM_GM5IT6miOywfWPAzqo7pmA_2.status != 0) reraiseException();
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = copyString((*(*(*n).kindU.S4.sym).name).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 29):
	{
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n0;
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n1;
		NimStringDesc* modname;
		NimStringDesc* T41_;
		n0 = (*n).kindU.S6.sons->data[((NI) 0)];
		n1 = (*n).kindU.S6.sons->data[((NI) 1)];
		{
			NIM_BOOL T13_;
			tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* T15_;
			T13_ = (NIM_BOOL)0;
			T13_ = ((*n0).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
			if (!(T13_)) goto LA14_;
			T15_ = (tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
			T15_ = getIdent_amOsb4K20Rndp0lzgjadlA(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_4));
			T13_ = ((*(*n0).kindU.S5.ident).Sup.id == (*T15_).Sup.id);
			LA14_: ;
			if (!T13_) goto LA16_;
			(*n).kind = ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 78);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), (*n).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 1)]), (*n).kindU.S6.sons->data[((NI) 2)]);
			(*n).kindU.S6.sons = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*) setLengthSeq(&((*n).kindU.S6.sons)->Sup, sizeof(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*), ((NI) 2));
			result = getModuleName_oShYsC351gWORZ0SBCGXVQ((*n).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet_;
		}
		LA16_: ;
		modname = getModuleName_oShYsC351gWORZ0SBCGXVQ((*n).kindU.S6.sons->data[((NI) 2)]);
		{
			NimStringDesc* T20_;
			T20_ = (NimStringDesc*)0;
			T20_ = dollar__qX5C9b0n9bOP7jk69amC8dA7A(n1);
			if (!eqStrings(T20_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_5))) goto LA21_;
			{
				NimStringDesc* candidate;
				NI i;
				candidate = (NimStringDesc*)0;
				i = ((NI) 0);
				{
					if (!(((NI) (i)) <= ((NI) 10))) goto LA26_;
					{
						while (1) {
							NimStringDesc* x;
							NimStringDesc* T30_;
							NimStringDesc* T31_;
							candidate = copyString(stdlibDirs_wTHnUhrGivb3aF9a8BiN5vA[(i)- 0]);
							T30_ = (NimStringDesc*)0;
							T30_ = slash__lXoMhn1ZYc9cAJa9bfA61msg(libpath_sniQ2ei4mGD9av6vrH9bfUgg, candidate);
							T31_ = (NimStringDesc*)0;
							T31_ = slash__lXoMhn1ZYc9cAJa9bfA61msg(T30_, modname);
							x = nosaddFileExt(T31_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_17));
							{
								NIM_BOOL T34_;
								T34_ = (NIM_BOOL)0;
								T34_ = fileExists_yTPrfdEKg9cKCeSFUA6popQoptions(x);
								if (!T34_) goto LA35_;
								result = copyString(x);
								goto BeforeRet_;
							}
							LA35_: ;
							{
								if (!(((NI) 10) <= ((NI) (i)))) goto LA39_;
								goto LA28;
							}
							LA39_: ;
							i += ((NI) 1);
						}
					} LA28: ;
				}
				LA26_: ;
			}
		}
		LA21_: ;
		result = getModuleName_oShYsC351gWORZ0SBCGXVQ(n1);
		T41_ = (NimStringDesc*)0;
		T41_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n0, 4);
		result = resizeString(result, T41_->Sup.len + 0);
appendString(result, T41_);
		result = resizeString(result, modname->Sup.len + 0);
appendString(result, modname);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 30):
	{
		NimStringDesc* T43_;
		T43_ = (NimStringDesc*)0;
		T43_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T43_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_18), ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_19));
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
	{
		NimStringDesc* T45_;
		T45_ = (NimStringDesc*)0;
		T45_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T45_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_20), ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_21));
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 78):
	{
		result = getModuleName_oShYsC351gWORZ0SBCGXVQ((*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* T48_;
		NimStringDesc* T49_;
		T48_ = (NimStringDesc*)0;
		T48_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 0);
		T49_ = (NimStringDesc*)0;
		T49_ = nsuFormatSingleElem(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_22), T48_);
		localError_VpilfPWbplGz6ny7O9cfr2g((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 4), T49_);
		result = copyString(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_19));
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI32, checkModuleName_iCvP1dbPLk1CLzIz6WyYMQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NIM_BOOL doLocalError) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullPath;
	NimStringDesc* T1_;
	result = (NI32)0;
	modulename = getModuleName_oShYsC351gWORZ0SBCGXVQ(n);
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_KZnzGw9baMUf9ad9aixRtHmqg((*n).info.fileIndex);
	fullPath = findModule_EcukdJLszq41C6G0HEdN9bw(modulename, T1_);
	{
		if (!((fullPath ? fullPath->Sup.len : 0) == ((NI) 0))) goto LA4_;
		{
			NimStringDesc* m;
			if (!doLocalError) goto LA8_;
			{
				if (!(((NI) 0) < (modulename ? modulename->Sup.len : 0))) goto LA12_;
				m = modulename;
			}
			goto LA10_;
			LA12_: ;
			{
				m = dollar__qX5C9b0n9bOP7jk69amC8dA7A(n);
			}
			LA10_: ;
			localError_VpilfPWbplGz6ny7O9cfr2g((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 3), m);
		}
		LA8_: ;
		result = ((NI32) -1);
	}
	goto LA2_;
	LA4_: ;
	{
		result = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(fullPath);
	}
	LA2_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulepathsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulepathsDatInit000)(void) {
}

