/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

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
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
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
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
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
typedef NU8 tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef NU8 tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ;
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
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
typedef NU8 tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
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
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
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
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b, NIM_BOOL strictSymEquality);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword_WhYAAh6vF1PoyH6Hsspu4Q)(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* id);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ** s);
static N_INLINE(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(NI, resize_bzF9a0JivP3Z4njqaxuLc5wsystem)(NI old);
N_LIB_PRIVATE N_NIMCALL(void*, growObj_AVYny8c0GTk28gxjmat1MA)(void* old, NI newsize);
N_NIMCALL(TNimType*, extGetCellType)(void* c);
N_LIB_PRIVATE N_NIMCALL(void, forAllChildrenAux_YOI1Uo54H9aas13WthjhsfA)(void* dest, TNimType* mt, tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ op);
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_LIB_PRIVATE N_NIMCALL(void, unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result);
static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ_3)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_jIQp9ciM8if1a6TX6toZelw)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NI children);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, skipTypes_pLCdCGDuirMe9cspwviV9aVA)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
extern TNimType NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b, NIM_BOOL strictSymEquality) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = !((a == NIM_NIL));
		if (!(T7_)) goto LA8_;
		T7_ = !((b == NIM_NIL));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = ((*a).kind == (*b).kind);
		LA9_: ;
		if (!T6_) goto LA10_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!strictSymEquality) goto LA15_;
				result = ((*a).kindU.S4.sym == (*b).kindU.S4.sym);
			}
			goto LA13_;
			LA15_: ;
			{
				result = ((*(*(*a).kindU.S4.sym).name).Sup.id == (*(*(*b).kindU.S4.sym).name).Sup.id);
			}
			LA13_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
		{
			result = ((*a).kindU.S1.intVal == (*b).kindU.S1.intVal);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
		{
			result = ((*a).kindU.S2.floatVal == (*b).kindU.S2.floatVal);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
		{
			result = eqStrings((*a).kindU.S3.strVal, (*b).kindU.S3.strVal);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125):
		{
			result = eqStrings((*a).comment, (*b).comment);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI T27_;
				NI T28_;
				T27_ = (NI)0;
				T27_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
				T28_ = (NI)0;
				T28_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(b);
				if (!(T27_ == T28_)) goto LA29_;
				{
					NI i;
					NI colontmp_;
					NI T32_;
					NI res;
					i = (NI)0;
					colontmp_ = (NI)0;
					T32_ = (NI)0;
					T32_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
					colontmp_ = (NI)(T32_ - ((NI) 1));
					res = ((NI) 0);
					{
						while (1) {
							if (!(res <= colontmp_)) goto LA34;
							i = res;
							{
								NIM_BOOL T37_;
								T37_ = (NIM_BOOL)0;
								T37_ = exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg((*a).kindU.S6.sons->data[i], (*b).kindU.S6.sons->data[i], strictSymEquality);
								if (!!(T37_)) goto LA38_;
								goto BeforeRet_;
							}
							LA38_: ;
							res += ((NI) 1);
						} LA34: ;
					}
				}
				result = NIM_TRUE;
			}
			LA29_: ;
		}
		break;
		}
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
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

N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichPragma_tadMdqrtQd2cek9aFwyE1XQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key;
	result = (tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		NIM_BOOL T3_;
		NI T5_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 34) || (*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 27) || (*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 28));
		if (!(T3_)) goto LA4_;
		T5_ = (NI)0;
		T5_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
		T3_ = (((NI) 0) < T5_);
		LA4_: ;
		if (!T3_) goto LA6_;
		key = (*n).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1_;
	LA6_: ;
	{
		key = n;
	}
	LA1_: ;
	{
		if (!((*key).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2))) goto LA11_;
		result = whichKeyword_WhYAAh6vF1PoyH6Hsspu4Q((*key).kindU.S5.ident);
	}
	LA11_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg, getMagic_gSv3iFkSzJc9bXZaNBHR9bQA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* op) {
	tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg result;
	result = (tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg)0;
	switch ((*op).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 26) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 32):
	{
		switch ((*(*op).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			result = (*(*(*op).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result = ((tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg) 0);
	}
	break;
	}
	return result;
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

static N_INLINE(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ** s) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI L;
	NI T1_;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = (NI)(T1_ - ((NI) 1));
	result = (*s)->data[L];
	(*s) = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*) setLengthSeq(&((*s))->Sup, sizeof(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*), ((NI) (L)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* v;
		tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* colontmp_;
		NI i;
		NI L;
		NI T6_;
		v = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		colontmp_ = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
		colontmp_ = (*visited);
		i = ((NI) 0);
		T6_ = (colontmp_ ? colontmp_->Sup.len : 0);
		L = T6_;
		{
			while (1) {
				if (!(i < L)) goto LA8;
				v = colontmp_->data[i];
				{
					if (!(v == n)) goto LA11_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA11_: ;
				i += ((NI) 1);
			} LA8: ;
		}
	}
	{
		NI T17_;
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T27_;
		if (!!(((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA15_;
		(*visited) = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*) incrSeqV2(&((*visited))->Sup, sizeof(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*));
		T17_ = (*visited)->Sup.len++;
		asgnRefNoCycle((void**) (&(*visited)->data[T17_]), n);
		{
			tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* nSon;
			tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* colontmp__2;
			NI i_2;
			NI L_2;
			NI T19_;
			nSon = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
			colontmp__2 = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
			colontmp__2 = (*n).kindU.S6.sons;
			i_2 = ((NI) 0);
			T19_ = (colontmp__2 ? colontmp__2->Sup.len : 0);
			L_2 = T19_;
			{
				while (1) {
					if (!(i_2 < L_2)) goto LA21;
					nSon = colontmp__2->data[i_2];
					{
						NIM_BOOL T24_;
						T24_ = (NIM_BOOL)0;
						T24_ = cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA(nSon, visited);
						if (!T24_) goto LA25_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA25_: ;
					i_2 += ((NI) 1);
				} LA21: ;
			}
		}
		T27_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		T27_ = pop_d29cpXTitwhGntYusVkzaCgtrees(visited);
		T27_;
	}
	LA15_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, cyclicTree_FTbvAnf1y9b9c3Krp9bsHDTiw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* visited;
	result = (NIM_BOOL)0;
	visited = (tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ*) newSeq((&NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ_), 0);
	result = cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA(n, (&visited));
	return result;
}

static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
		if (T3_) goto LA4_;
		T3_ = ((*n).kindU.S6.sons == 0);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA5_: ;
	{
		NI T8_;
		T8_ = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
		result = T8_;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result) {
	{
		if (!((*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115))) goto LA3_;
		{
			tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
			x = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < colontmp_)) goto LA8;
						i = i_2;
						x = (*n).kindU.S6.sons->data[i];
						unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ(x, result);
						i_2 += ((NI) 1);
					} LA8: ;
				}
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		if (!!(((*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125) || (*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA10_;
		add_gCCf68XrWL79bKes6htzFjQ_3(result, n);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, flattenStmts_kDuk7Mp6Hb4CD2EwZbGQ3g)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115), (*n).info);
	unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ(n, result);
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(result);
		if (!(T3_ == ((NI) 1))) goto LA4_;
		result = (*result).kindU.S6.sons->data[((NI) 0)];
	}
	LA4_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, extractRange_hXdHXhYIaWyizlIOoxd1YA)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI a, NI b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeI_jIQp9ciM8if1a6TX6toZelw(k, (*n).info, (NI)((NI)(b - a) + ((NI) 1)));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(b - a);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i]), (*n).kindU.S6.sons->data[(NI)(i + a)]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139))) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7;
				i = i_2;
				{
					NIM_BOOL T10_;
					T10_ = (NIM_BOOL)0;
					T10_ = isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3((*n).kindU.S6.sons->data[i]);
					if (!T10_) goto LA11_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA11_: ;
				i_2 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 10):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 33):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 34):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
	{
		result = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 41):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 37):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 155):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44):
	{
		{
			NI i;
			NI colontmp_;
			NI colontmp__2;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp__2 = (NI)0;
			colontmp_ = ((*n).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38));
			colontmp__2 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			i_2 = colontmp_;
			{
				while (1) {
					if (!(i_2 < colontmp__2)) goto LA6;
					i = i_2;
					{
						NIM_BOOL T9_;
						T9_ = (NIM_BOOL)0;
						T9_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n).kindU.S6.sons->data[i]);
						if (!!(T9_)) goto LA10_;
						result = NIM_FALSE;
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA6: ;
			}
		}
		{
			if (!((*n).typ == 0)) goto LA14_;
			result = NIM_TRUE;
		}
		goto LA12_;
		LA14_: ;
		{
			tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t;
			t = skipTypes_pLCdCGDuirMe9cspwviV9aVA((*n).typ, IL64(70368744187920));
			{
				if (!((6291456 &((NU64)1<<((NU)((*t).kind)&63U)))!=0)) goto LA19_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA19_: ;
			{
				NIM_BOOL T23_;
				NIM_BOOL T25_;
				T23_ = (NIM_BOOL)0;
				T23_ = !(((*t).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17)));
				if (T23_) goto LA24_;
				T25_ = (NIM_BOOL)0;
				T25_ = isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3((*t).n);
				T23_ = !(T25_);
				LA24_: ;
				if (!T23_) goto LA26_;
				result = NIM_TRUE;
			}
			LA26_: ;
		}
		LA12_: ;
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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_4)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
	if (T1_) goto LA2_;
	T1_ = (((*n).flags &(1U<<((NU)(((tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg) 4))&31U)))!=0);
	LA2_: ;
	result = T1_;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

