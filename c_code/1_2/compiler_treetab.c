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
typedef struct tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tySequence_vhmj4KkIKPinmRXny9c2Q6Q tySequence_vhmj4KkIKPinmRXny9c2Q6Q;
typedef struct tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
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
struct tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg {
NI h;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key;
NI val;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
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
struct tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A {
NI counter;
tySequence_vhmj4KkIKPinmRXny9c2Q6Q* data;
};
typedef NU8 tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw;
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
struct tySequence_vhmj4KkIKPinmRXny9c2Q6Q {
  TGenericSeq Sup;
  tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashTree_Eo8objaHseTSHqIz1ec9cmQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val);
N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NI, nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key);
N_NIMCALL(NIM_BOOL, treesEquivalent_ES5PGoVkhviLiuaGxC9avVw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NIM_BOOL, sameTypeOrNil_EjIk4Kwv9bxfpaU9cx49cCrBQ_2)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* a, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* b, tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw flags);
static N_INLINE(NI, nextTry_4YWwV26d3PsQh1gUwwAjvAastalgo)(NI h, NI maxHash);
N_NIMCALL(NIM_BOOL, mustRehash_UPHU5PqxEqM9bt6KyM7sznQ)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodeTableRawInsert_37KAHLfXcMoI3ByIpFkxKg)(tySequence_vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI_vhmj4KkIKPinmRXny9c2Q6Q_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val) {
	NI result;
	result = (NI)0;
	result = (NI)((NU64)(h) + (NU64)(val));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashTree_Eo8objaHseTSHqIz1ec9cmQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
{	result = (NI)0;
	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	result = ((NI) ((*n).kind));
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
	{
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = ((IL64(-9223372036854775807) - IL64(1)) <= (*n).kindU.S1.intVal);
			if (!(T11_)) goto LA12_;
			T11_ = ((*n).kindU.S1.intVal <= IL64(9223372036854775807));
			LA12_: ;
			if (!T11_) goto LA13_;
			result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, ((NI) ((*n).kindU.S1.intVal)));
		}
		LA13_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
	{
		{
			NIM_BOOL T18_;
			T18_ = (NIM_BOOL)0;
			T18_ = (-1.0000000000000000e+06 <= (*n).kindU.S2.floatVal);
			if (!(T18_)) goto LA19_;
			T18_ = ((*n).kindU.S2.floatVal <= 1.0000000000000000e+06);
			LA19_: ;
			if (!T18_) goto LA20_;
			result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, float64ToInt32((*n).kindU.S2.floatVal));
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		{
			NI T27_;
			if (!!(((*n).kindU.S3.strVal == 0))) goto LA25_;
			T27_ = (NI)0;
			T27_ = hash_uBstFm5SYVQeOL3j9c9bc58A((*n).kindU.S3.strVal);
			result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, T27_);
		}
		LA25_: ;
	}
	break;
	default:
	{
		{
			NI i;
			NI colontmp_;
			NI T30_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T30_ = (NI)0;
			T30_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp_ = (NI)(T30_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					NI T33_;
					if (!(res <= colontmp_)) goto LA32;
					i = res;
					T33_ = (NI)0;
					T33_ = hashTree_Eo8objaHseTSHqIz1ec9cmQ((*n).kindU.S6.sons->data[i]);
					result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, T33_);
					res += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet_: ;
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

N_NIMCALL(NIM_BOOL, treesEquivalent_ES5PGoVkhviLiuaGxC9avVw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
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
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
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
		default:
		{
			{
				NI T21_;
				NI T22_;
				T21_ = (NI)0;
				T21_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
				T22_ = (NI)0;
				T22_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(b);
				if (!(T21_ == T22_)) goto LA23_;
				{
					NI i;
					NI colontmp_;
					NI T26_;
					NI res;
					i = (NI)0;
					colontmp_ = (NI)0;
					T26_ = (NI)0;
					T26_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
					colontmp_ = (NI)(T26_ - ((NI) 1));
					res = ((NI) 0);
					{
						while (1) {
							if (!(res <= colontmp_)) goto LA28;
							i = res;
							{
								NIM_BOOL T31_;
								T31_ = (NIM_BOOL)0;
								T31_ = treesEquivalent_ES5PGoVkhviLiuaGxC9avVw((*a).kindU.S6.sons->data[i], (*b).kindU.S6.sons->data[i]);
								if (!!(T31_)) goto LA32_;
								goto BeforeRet_;
							}
							LA32_: ;
							res += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23_: ;
		}
		break;
		}
		{
			if (!result) goto LA36_;
			result = sameTypeOrNil_EjIk4Kwv9bxfpaU9cx49cCrBQ_2((*a).typ, (*b).typ, 0);
		}
		LA36_: ;
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_4YWwV26d3PsQh1gUwwAjvAastalgo)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxHash);
	return result;
}

N_NIMCALL(NI, nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key) {
	NI result;
	NI h;
	NI T1_;
{	result = (NI)0;
	T1_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T10_;
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA3;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = (t.data->data[h].h == k);
				if (!(T6_)) goto LA7_;
				T6_ = treesEquivalent_ES5PGoVkhviLiuaGxC9avVw(t.data->data[h].key, key);
				LA7_: ;
				if (!T6_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_4YWwV26d3PsQh1gUwwAjvAastalgo(h, T10_);
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet_: ;
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

N_NIMCALL(void, nodeTableRawInsert_37KAHLfXcMoI3ByIpFkxKg)(tySequence_vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI h;
	NI T1_;
	T1_ = ((*data) ? ((*data)->Sup.len-1) : -1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T4_;
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA3;
			T4_ = ((*data) ? ((*data)->Sup.len-1) : -1);
			h = nextTry_4YWwV26d3PsQh1gUwwAjvAastalgo(h, T4_);
		} LA3: ;
	}
	(*data)->data[h].h = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].key), key);
	(*data)->data[h].val = val;
}

N_NIMCALL(NI, nodeTableTestOrSet_tWmKJP7glBWLCISQFGGk2Q)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A* t, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI result;
	tySequence_vhmj4KkIKPinmRXny9c2Q6Q* n;
	NI k;
	NI index;
	result = (NI)0;
	n = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*)0;
	k = hashTree_Eo8objaHseTSHqIz1ec9cmQ(key);
	index = nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = (*t).data->data[index].val;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NI T8_;
			NIM_BOOL T9_;
			NI T12_;
			tySequence_vhmj4KkIKPinmRXny9c2Q6Q* T21_;
			T8_ = ((*t).data ? (*t).data->Sup.len : 0);
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash_UPHU5PqxEqM9bt6KyM7sznQ(T8_, (*t).counter);
			if (!T9_) goto LA10_;
			T12_ = ((*t).data ? (*t).data->Sup.len : 0);
			n = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*) newSeq((&NTI_vhmj4KkIKPinmRXny9c2Q6Q_), ((NI) ((NI)(T12_ * ((NI) 2)))));
			{
				NI i;
				NI colontmp_;
				NI T14_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T14_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				colontmp_ = T14_;
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA16;
						i = res;
						{
							if (!!(((*t).data->data[i].key == NIM_NIL))) goto LA19_;
							nodeTableRawInsert_37KAHLfXcMoI3ByIpFkxKg((&n), (*t).data->data[i].h, (*t).data->data[i].key, (*t).data->data[i].val);
						}
						LA19_: ;
						res += ((NI) 1);
					} LA16: ;
				}
			}
			T21_ = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*)0;
			T21_ = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = T21_;
		}
		LA10_: ;
		nodeTableRawInsert_37KAHLfXcMoI3ByIpFkxKg((&(*t).data), k, key, val);
		result = val;
		(*t).counter += ((NI) 1);
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit000)(void) {
}

