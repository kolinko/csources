/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
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
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_TPreferedDesc_tnd4qt9c4xddV8oKV5zyusw;
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
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
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
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
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
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, renderPlainSymbolName_0mm4u02iK86TVZPOApjzQA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NimStringDesc*, renderDefinitionName_htfLIUnR3bbLycMPnQGh9aA)(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s, NIM_BOOL noQuotes);
N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderParamTypes_nsr8uxcmlhx5QS6xeTtlLA)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ** found, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NimStringDesc*, renderType_0mm4u02iK86TVZPOApjzQA_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NimStringDesc*, typeToString_iUZlBdvGqNPVN17wd9aVBNw)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ, tyEnum_TPreferedDesc_tnd4qt9c4xddV8oKV5zyusw prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen_0, NimStringDesc* sep);
extern TNimType NTI_G4E4Gxe7oI2Cm03rkiOzQw_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_2, "", 0);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_3, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_4, "var", 3);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_5, "ref.", 4);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_6, "ref", 3);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_7, "ptr.", 4);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_8, "ptr", 3);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_9, "proc(", 5);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_10, "proc", 4);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_11, "tuple[", 6);
STRING_LITERAL(TM_SgHDIVcSir4dkKoe0Xsi0A_12, "renderParamTypes(found,n) with ", 31);

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

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderPlainSymbolName_0mm4u02iK86TVZPOApjzQA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_2));
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 31):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 53):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
		result = renderPlainSymbolName_0mm4u02iK86TVZPOApjzQA((*n).kindU.S6.sons->data[(T2_ - 1)]);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = renderDefinitionName_htfLIUnR3bbLycMPnQGh9aA((*n).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 43):
	{
		result = renderPlainSymbolName_0mm4u02iK86TVZPOApjzQA((*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* T7_;
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString(reprEnum((NI)(*n).kind, (&NTI_G4E4Gxe7oI2Cm03rkiOzQw_))->Sup.len + 29);
appendString(T7_, ((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_3));
appendString(T7_, reprEnum((NI)(*n).kind, (&NTI_G4E4Gxe7oI2Cm03rkiOzQw_)));
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, T7_);
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

N_NIMCALL(NimStringDesc*, renderType_0mm4u02iK86TVZPOApjzQA_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = typeToString_iUZlBdvGqNPVN17wd9aVBNw((*(*n).kindU.S4.sym).typ, ((tyEnum_TPreferedDesc_tnd4qt9c4xddV8oKV5zyusw) 0));
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 143):
	{
		{
			NI T6_;
			T6_ = (NI)0;
			T6_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			if (!(T6_ == ((NI) 1))) goto LA7_;
			result = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[((NI) 0)]);
		}
		goto LA4_;
		LA7_: ;
		{
			result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_4));
		}
		LA4_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 141):
	{
		{
			NI T13_;
			NimStringDesc* T16_;
			NimStringDesc* T17_;
			T13_ = (NI)0;
			T13_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			if (!(T13_ == ((NI) 1))) goto LA14_;
			T16_ = (NimStringDesc*)0;
			T17_ = (NimStringDesc*)0;
			T17_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[((NI) 0)]);
			T16_ = rawNewString(T17_->Sup.len + 4);
appendString(T16_, ((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_5));
appendString(T16_, T17_);
			result = T16_;
		}
		goto LA11_;
		LA14_: ;
		{
			result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_6));
		}
		LA11_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 142):
	{
		{
			NI T22_;
			NimStringDesc* T25_;
			NimStringDesc* T26_;
			T22_ = (NI)0;
			T22_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			if (!(T22_ == ((NI) 1))) goto LA23_;
			T25_ = (NimStringDesc*)0;
			T26_ = (NimStringDesc*)0;
			T26_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[((NI) 0)]);
			T25_ = rawNewString(T26_->Sup.len + 4);
appendString(T25_, ((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_7));
appendString(T25_, T26_);
			result = T25_;
		}
		goto LA20_;
		LA23_: ;
		{
			result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_8));
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 147):
	{
		{
			NI T31_;
			tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* params;
			T31_ = (NI)0;
			T31_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			if (!(((NI) 1) < T31_)) goto LA32_;
			params = (*n).kindU.S6.sons->data[((NI) 0)];
			result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_9));
			{
				NI i;
				NI colontmp_;
				NI T35_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T35_ = (NI)0;
				T35_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(params);
				colontmp_ = (T35_ - 1);
				res = ((NI) 1);
				{
					while (1) {
						NimStringDesc* T38_;
						NimStringDesc* T39_;
						if (!(res <= colontmp_)) goto LA37;
						i = res;
						T38_ = (NimStringDesc*)0;
						T39_ = (NimStringDesc*)0;
						T39_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*params).kindU.S6.sons->data[i]);
						T38_ = rawNewString(T39_->Sup.len + 1);
appendString(T38_, T39_);
appendChar(T38_, 44);
						result = resizeString(result, T38_->Sup.len + 0);
appendString(result, T38_);
						res += ((NI) 1);
					} LA37: ;
				}
			}
			result->data[((result ? result->Sup.len : 0) - 1)] = 41;
		}
		goto LA29_;
		LA32_: ;
		{
			result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_10));
		}
		LA29_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 35):
	{
		NI typePos;
		NI T42_;
		NimStringDesc* typeStr;
		T42_ = (NI)0;
		T42_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
		typePos = (NI)(T42_ - ((NI) 2));
		typeStr = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[typePos]);
		result = copyString(typeStr);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (typePos - 1);
			res_2 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T46_;
					if (!(res_2 <= colontmp__2)) goto LA45;
					i_2 = res_2;
					T46_ = (NimStringDesc*)0;
					T46_ = rawNewString(typeStr->Sup.len + 1);
appendChar(T46_, 44);
appendString(T46_, typeStr);
					result = resizeString(result, T46_->Sup.len + 0);
appendString(result, T46_);
					res_2 += ((NI) 1);
				} LA45: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 134):
	{
		result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_11));
		{
			NI i_3;
			NI colontmp__3;
			NI T49_;
			NI res_3;
			i_3 = (NI)0;
			colontmp__3 = (NI)0;
			T49_ = (NI)0;
			T49_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp__3 = (T49_ - 1);
			res_3 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* T52_;
					NimStringDesc* T53_;
					if (!(res_3 <= colontmp__3)) goto LA51;
					i_3 = res_3;
					T52_ = (NimStringDesc*)0;
					T53_ = (NimStringDesc*)0;
					T53_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[i_3]);
					T52_ = rawNewString(T53_->Sup.len + 1);
appendString(T52_, T53_);
appendChar(T52_, 44);
					result = resizeString(result, T52_->Sup.len + 0);
appendString(result, T52_);
					res_3 += ((NI) 1);
				} LA51: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
	{
		NimStringDesc* T55_;
		NimStringDesc* T56_;
		T55_ = (NimStringDesc*)0;
		T56_ = (NimStringDesc*)0;
		T56_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[((NI) 0)]);
		T55_ = rawNewString(T56_->Sup.len + 1);
appendString(T55_, T56_);
appendChar(T55_, 91);
		result = T55_;
		{
			NI i_4;
			NI colontmp__4;
			NI T58_;
			NI res_4;
			i_4 = (NI)0;
			colontmp__4 = (NI)0;
			T58_ = (NI)0;
			T58_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp__4 = (T58_ - 1);
			res_4 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T61_;
					NimStringDesc* T62_;
					if (!(res_4 <= colontmp__4)) goto LA60;
					i_4 = res_4;
					T61_ = (NimStringDesc*)0;
					T62_ = (NimStringDesc*)0;
					T62_ = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[i_4]);
					T61_ = rawNewString(T62_->Sup.len + 1);
appendString(T61_, T62_);
appendChar(T61_, 44);
					result = resizeString(result, T61_->Sup.len + 0);
appendString(result, T61_);
					res_4 += ((NI) 1);
				} LA60: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_2));
	}
	break;
	}
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_NIMCALL(void, renderParamTypes_nsr8uxcmlhx5QS6xeTtlLA)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ** found, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
{	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 76):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp_ = (T3_ - 1);
			res = ((NI) 1);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					renderParamTypes_nsr8uxcmlhx5QS6xeTtlLA(found, (*n).kindU.S6.sons->data[i]);
					res += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 35):
	{
		NI typePos;
		NI T7_;
		NimStringDesc* typeStr;
		T7_ = (NI)0;
		T7_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
		typePos = (NI)(T7_ - ((NI) 2));
		typeStr = renderType_0mm4u02iK86TVZPOApjzQA_2((*n).kindU.S6.sons->data[typePos]);
		{
			NIM_BOOL T10_;
			tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
			T10_ = (NIM_BOOL)0;
			T10_ = ((typeStr ? typeStr->Sup.len : 0) < ((NI) 1));
			if (!(T10_)) goto LA11_;
			T10_ = !(((*(*n).kindU.S6.sons->data[(NI)(typePos + ((NI) 1))]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1)));
			LA11_: ;
			if (!T10_) goto LA12_;
			typ = (*(*n).kindU.S6.sons->data[(NI)(typePos + ((NI) 1))]).typ;
			{
				if (!!((typ == 0))) goto LA16_;
				typeStr = typeToString_iUZlBdvGqNPVN17wd9aVBNw(typ, ((tyEnum_TPreferedDesc_tnd4qt9c4xddV8oKV5zyusw) 2));
			}
			LA16_: ;
			{
				if (!((typeStr ? typeStr->Sup.len : 0) < ((NI) 1))) goto LA20_;
				goto BeforeRet_;
			}
			LA20_: ;
		}
		LA12_: ;
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (typePos - 1);
			res_2 = ((NI) 0);
			{
				while (1) {
					NI T25_;
					NimStringDesc* T26_;
					if (!(res_2 <= colontmp__2)) goto LA24;
					i_2 = res_2;
					(*found) = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&((*found))->Sup, sizeof(NimStringDesc*));
					T25_ = (*found)->Sup.len++;
					T26_ = (NimStringDesc*)0;
					T26_ = (*found)->data[T25_]; (*found)->data[T25_] = copyStringRC1(typeStr);
					if (T26_) nimGCunrefNoCycle(T26_);
					res_2 += ((NI) 1);
				} LA24: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* T28_;
		T28_ = (NimStringDesc*)0;
		T28_ = rawNewString(reprEnum((NI)(*n).kind, (&NTI_G4E4Gxe7oI2Cm03rkiOzQw_))->Sup.len + 31);
appendString(T28_, ((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_12));
appendString(T28_, reprEnum((NI)(*n).kind, (&NTI_G4E4Gxe7oI2Cm03rkiOzQw_)));
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, T28_);
	}
	break;
	}
	}BeforeRet_: ;
}

N_NIMCALL(NimStringDesc*, renderParamTypes_le9bedpmveKS6qhiVCc9c7cg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* sep) {
	NimStringDesc* result;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* found;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_SgHDIVcSir4dkKoe0Xsi0A_2));
	found = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	renderParamTypes_nsr8uxcmlhx5QS6xeTtlLA((&found), n);
	{
		NI T3_;
		T3_ = (found ? found->Sup.len : 0);
		if (!(((NI) 0) < T3_)) goto LA4_;
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA4_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit000)(void) {
}

