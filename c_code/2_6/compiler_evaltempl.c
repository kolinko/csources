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
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
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
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q;
typedef struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA tySequence_Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct tyTuple_XOVT24GHXwqiEj5GCsEGCA tyTuple_XOVT24GHXwqiEj5GCsEGCA;
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
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU8 tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw;
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
struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q {
NI counter;
tySequence_Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
struct tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* genSymOwner;
NIM_BOOL instLines;
tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q mapping;
};
struct tyTuple_XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
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
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg {
tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* key;
RootObj* val;
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
NI align;
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
typedef NI tyArray_9agrCtWKhCnWWMJpKKugJag[16];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
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
struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalError_VpilfPWbplGz6ny7O9cfr2g_3)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, evalTemplateArgs_dw0jfqH3BrkE5IDOxRZp9cw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s, NIM_BOOL fromHlo);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NI, len_gG7hUAX9cA629ahMLVL3xN4w_2)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* n);
N_NIMCALL(NimStringDesc*, renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(void, addSon_gCCf68XrWL79bKes6htzFjQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_NIMCALL(void, localError_VpilfPWbplGz6ny7O9cfr2g)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* src);
N_NIMCALL(void, initIdTable_9cUS2oaKn1IFXKjLdglPZHQ)(tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q* x);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getBody_eMf5HLowckpW9cDxAV9bNIZw)(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s);
static N_INLINE(NIM_BOOL, isAtom_NyXYMHACmbtWJZnWqE9cJCAparampatterns)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, evalTemplateAux_AHGrgjfRCGeqRF8aKpZ9apw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* templ, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* actual, tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result);
static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ_3)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_NIMCALL(void, internalError_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errMsg);
N_NIMCALL(NimStringDesc*, dollar__k53Ge4e9cDjc7y9c5uML7sPQ)(tyTuple_XOVT24GHXwqiEj5GCsEGCA x);
N_NIMCALL(RootObj*, idTableGet_D12lVDWWPrKae8szg3EYLw)(tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q t, tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* key);
N_NIMCALL(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw*, copySym_KkocQl2VXhKLz8kG9aC7GEw)(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s, NIM_BOOL keepId);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, idTablePut_3gLsywwJ9bZDaf06DfKpYbw)(tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q* t, tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* key, RootObj* val);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newSymNode_slQ2jWOFI1ND3N9c79b7b18g)(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, copyNode_HoisCusAu6Qks82zEN9cbNg)(tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q* ctx, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, copyNode_lz8T1F9c0YwEOpUnrAUYgjg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* src);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, wrapInComesFrom_YbfXH27kQZj5oIysAn7Rfg)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* res);
N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lastSon_esDJA7239bJDiq4UrX9aHCjg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
NI evalTemplateCounter_jPNQnHnAL0wozxUYkowWUA;
extern tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* emptyNode_69ccLGuQ2mITw7zylZYtWcA;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_N0xGjswvcjwwH43PvVNJAg_2, "", 0);
STRING_LITERAL(TM_N0xGjswvcjwwH43PvVNJAg_4, "evaltempl.nim", 13);
NIM_CONST tyTuple_XOVT24GHXwqiEj5GCsEGCA TM_N0xGjswvcjwwH43PvVNJAg_3 = {((NimStringDesc*) &TM_N0xGjswvcjwwH43PvVNJAg_4),
((NI) 45)}
;

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

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, evalTemplateArgs_dw0jfqH3BrkE5IDOxRZp9cw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s, NIM_BOOL fromHlo) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI totalParams;
	NI genericParams;
	NI expectedRegularParams;
	NI T11_;
	NI givenRegularParams;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 27):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 29):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 30):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 31):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 26):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 28):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
		totalParams = (NI)(T2_ - ((NI) 1));
	}
	break;
	default:
	{
		totalParams = ((NI) 0);
	}
	break;
	}
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (((*s).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 26))&63U)))!=0);
		if (T6_) goto LA7_;
		T6_ = fromHlo;
		LA7_: ;
		if (!T6_) goto LA8_;
		genericParams = ((NI) 0);
	}
	goto LA4_;
	LA8_: ;
	{
		genericParams = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting((*(*s).ast).kindU.S6.sons->data[((NI) 2)]);
	}
	LA4_: ;
	T11_ = (NI)0;
	T11_ = len_gG7hUAX9cA629ahMLVL3xN4w_2((*s).typ);
	expectedRegularParams = (T11_ - 1);
	givenRegularParams = (NI)(totalParams - genericParams);
	{
		if (!(givenRegularParams < ((NI) 0))) goto LA14_;
		givenRegularParams = ((NI) 0);
	}
	LA14_: ;
	{
		if (!((NI)(expectedRegularParams + genericParams) < totalParams)) goto LA18_;
		globalError_VpilfPWbplGz6ny7O9cfr2g_3((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 136), ((NimStringDesc*) &TM_N0xGjswvcjwwH43PvVNJAg_2));
	}
	LA18_: ;
	{
		NimStringDesc* T24_;
		if (!(totalParams < genericParams)) goto LA22_;
		T24_ = (NimStringDesc*)0;
		T24_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 0);
		globalError_VpilfPWbplGz6ny7O9cfr2g_3((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 138), T24_);
	}
	LA22_: ;
	result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 152), (*n).info);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= givenRegularParams)) goto LA27;
				i = res;
				addSon_gCCf68XrWL79bKes6htzFjQ(result, (*n).kindU.S6.sons->data[i]);
				res += ((NI) 1);
			} LA27: ;
		}
	}
	{
		NI i_2;
		NI colontmp_;
		NI res_2;
		i_2 = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(givenRegularParams + ((NI) 1));
		res_2 = colontmp_;
		{
			while (1) {
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* default_1;
				if (!(res_2 <= expectedRegularParams)) goto LA30;
				i_2 = res_2;
				default_1 = (*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_2]).kindU.S4.sym).ast;
				{
					NIM_BOOL T33_;
					T33_ = (NIM_BOOL)0;
					T33_ = (default_1 == 0);
					if (T33_) goto LA34_;
					T33_ = ((*default_1).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1));
					LA34_: ;
					if (!T33_) goto LA35_;
					localError_VpilfPWbplGz6ny7O9cfr2g((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 136), ((NimStringDesc*) &TM_N0xGjswvcjwwH43PvVNJAg_2));
					addSon_gCCf68XrWL79bKes6htzFjQ(result, emptyNode_69ccLGuQ2mITw7zylZYtWcA);
				}
				goto LA31_;
				LA35_: ;
				{
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T38_;
					T38_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
					T38_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(default_1);
					addSon_gCCf68XrWL79bKes6htzFjQ(result, T38_);
				}
				LA31_: ;
				res_2 += ((NI) 1);
			} LA30: ;
		}
	}
	{
		NI i_3;
		NI res_3;
		i_3 = (NI)0;
		res_3 = ((NI) 1);
		{
			while (1) {
				if (!(res_3 <= genericParams)) goto LA41;
				i_3 = res_3;
				addSon_gCCf68XrWL79bKes6htzFjQ(result, (*n).kindU.S6.sons->data[(NI)(givenRegularParams + i_3)]);
				res_3 += ((NI) 1);
			} LA41: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isAtom_NyXYMHACmbtWJZnWqE9cJCAparampatterns)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) <= (*n).kind);
	if (!(T1_)) goto LA2_;
	T1_ = ((*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
	LA2_: ;
	result = T1_;
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

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
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
			if (!((NU32)((*c_2).refcount) < (NU32)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, copyNode_HoisCusAu6Qks82zEN9cbNg)(tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q* ctx, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = copyNode_lz8T1F9c0YwEOpUnrAUYgjg(a);
	{
		if (!(*ctx).instLines) goto LA3_;
		(*result).info = (*b).info;
	}
	LA3_: ;
	return result;
}

N_NIMCALL(void, evalTemplateAux_AHGrgjfRCGeqRF8aKpZ9apw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* templ, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* actual, tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result) {
	switch ((*templ).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4_;
			{
				NIM_BOOL T8_;
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
				T8_ = (NIM_BOOL)0;
				T8_ = ((*s).kind == ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 3));
				if (!(T8_)) goto LA9_;
				T8_ = !((((*s).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 32))&63U)))!=0));
				LA9_: ;
				if (!T8_) goto LA10_;
				x = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 152))) goto LA14_;
					{
						tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* y;
						y = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						{
							NI i;
							NI colontmp_;
							NI T18_;
							NI res;
							i = (NI)0;
							colontmp_ = (NI)0;
							T18_ = (NI)0;
							T18_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(x);
							colontmp_ = (T18_ - 1);
							res = ((NI) 0);
							{
								while (1) {
									if (!(res <= colontmp_)) goto LA20;
									i = res;
									y = (*x).kindU.S6.sons->data[i];
									add_gCCf68XrWL79bKes6htzFjQ_3(result, y);
									res += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12_;
				LA14_: ;
				{
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T22_;
					T22_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
					T22_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(x);
					add_gCCf68XrWL79bKes6htzFjQ_3(result, T22_);
				}
				LA12_: ;
			}
			goto LA6_;
			LA10_: ;
			{
				NIM_BOOL T24_;
				NIM_BOOL T26_;
				NIM_BOOL T27_;
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x_2;
				NI T32_;
				T24_ = (NIM_BOOL)0;
				T24_ = ((*s).kind == ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 4));
				if (T24_) goto LA25_;
				T26_ = (NIM_BOOL)0;
				T27_ = (NIM_BOOL)0;
				T27_ = ((*s).kind == ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 7));
				if (!(T27_)) goto LA28_;
				T27_ = !(((*s).typ == NIM_NIL));
				LA28_: ;
				T26_ = T27_;
				if (!(T26_)) goto LA29_;
				T26_ = ((*(*s).typ).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 12));
				LA29_: ;
				T24_ = T26_;
				LA25_: ;
				if (!T24_) goto LA30_;
				T32_ = (NI)0;
				T32_ = len_gG7hUAX9cA629ahMLVL3xN4w_2((*(*s).owner).typ);
				x_2 = (*actual).kindU.S6.sons->data[(NI)((NI)(T32_ + (*s).position) - ((NI) 1))];
				{
					if (!((*x_2).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 152))) goto LA35_;
					{
						tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* y_2;
						y_2 = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						{
							NI i_2;
							NI colontmp__2;
							NI T39_;
							NI res_2;
							i_2 = (NI)0;
							colontmp__2 = (NI)0;
							T39_ = (NI)0;
							T39_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(x_2);
							colontmp__2 = (T39_ - 1);
							res_2 = ((NI) 0);
							{
								while (1) {
									if (!(res_2 <= colontmp__2)) goto LA41;
									i_2 = res_2;
									y_2 = (*x_2).kindU.S6.sons->data[i_2];
									add_gCCf68XrWL79bKes6htzFjQ_3(result, y_2);
									res_2 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33_;
				LA35_: ;
				{
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T43_;
					T43_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
					T43_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(x_2);
					add_gCCf68XrWL79bKes6htzFjQ_3(result, T43_);
				}
				LA33_: ;
			}
			goto LA6_;
			LA30_: ;
			{
				tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* x_3;
				tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* T50_;
				RootObj* T51_;
				tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw T58_;
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T64_;
				{
					NimStringDesc* T49_;
					if (!!((((*s).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 32))&63U)))!=0))) goto LA47_;
					T49_ = (NimStringDesc*)0;
					T49_ = dollar__k53Ge4e9cDjc7y9c5uML7sPQ(TM_N0xGjswvcjwwH43PvVNJAg_3);
					internalError_5XY9cUy7hZmUusM38U9cYYdw(T49_);
				}
				LA47_: ;
				T50_ = (tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg*)0;
				T50_ = &s->Sup;
				T51_ = (RootObj*)0;
				T51_ = idTableGet_D12lVDWWPrKae8szg3EYLw((*c).mapping, T50_);
				x_3 = ((tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw*) (T51_));
				{
					tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg* T56_;
					RootObj* T57_;
					if (!(x_3 == NIM_NIL)) goto LA54_;
					x_3 = copySym_KkocQl2VXhKLz8kG9aC7GEw(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x_3).owner), (*c).genSymOwner);
					T56_ = (tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg*)0;
					T56_ = &s->Sup;
					T57_ = (RootObj*)0;
					T57_ = &x_3->Sup.Sup;
					idTablePut_3gLsywwJ9bZDaf06DfKpYbw((&(*c).mapping), T56_, T57_);
				}
				LA54_: ;
				{
					if (!(*c).instLines) goto LA61_;
					T58_ = (*actual).info;
				}
				goto LA59_;
				LA61_: ;
				{
					T58_ = (*templ).info;
				}
				LA59_: ;
				T64_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
				T64_ = newSymNode_slQ2jWOFI1ND3N9c79b7b18g(x_3, T58_);
				add_gCCf68XrWL79bKes6htzFjQ_3(result, T64_);
			}
			LA6_: ;
		}
		goto LA2_;
		LA4_: ;
		{
			tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T66_;
			T66_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
			T66_ = copyNode_HoisCusAu6Qks82zEN9cbNg((&(*c)), templ, actual);
			add_gCCf68XrWL79bKes6htzFjQ_3(result, T66_);
		}
		LA2_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T68_;
		T68_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		T68_ = copyNode_HoisCusAu6Qks82zEN9cbNg((&(*c)), templ, actual);
		add_gCCf68XrWL79bKes6htzFjQ_3(result, T68_);
	}
	break;
	default:
	{
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* res_3;
		res_3 = copyNode_HoisCusAu6Qks82zEN9cbNg((&(*c)), templ, actual);
		{
			NI i_3;
			NI colontmp__3;
			NI T71_;
			NI res_4;
			i_3 = (NI)0;
			colontmp__3 = (NI)0;
			T71_ = (NI)0;
			T71_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(templ);
			colontmp__3 = (NI)(T71_ - ((NI) 1));
			res_4 = ((NI) 0);
			{
				while (1) {
					if (!(res_4 <= colontmp__3)) goto LA73;
					i_3 = res_4;
					evalTemplateAux_AHGrgjfRCGeqRF8aKpZ9apw((*templ).kindU.S6.sons->data[i_3], actual, c, res_3);
					res_4 += ((NI) 1);
				} LA73: ;
			}
		}
		add_gCCf68XrWL79bKes6htzFjQ_3(result, res_3);
	}
	break;
	}
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, wrapInComesFrom_YbfXH27kQZj5oIysAn7Rfg)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* res) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = res;
	(*result).info = info;
	{
		NIM_BOOL T3_;
		NI T5_;
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T8_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*result).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115) || (*result).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 126));
		if (!(T3_)) goto LA4_;
		T5_ = (NI)0;
		T5_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(result);
		T3_ = (((NI) 0) < T5_);
		LA4_: ;
		if (!T3_) goto LA6_;
		T8_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		T8_ = lastSon_esDJA7239bJDiq4UrX9aHCjg(result);
		(*T8_).info = info;
	}
	LA6_: ;
	return result;
}

N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, evalTemplate_xOup9aA9cJdjuapy5rkGnHBQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* tmpl, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* genSymOwner, NIM_BOOL fromHlo) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* args;
	tyObject_TemplCtx_og0XwfDLUlsX2HzoVx0s3Q ctx;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* body;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	evalTemplateCounter_jPNQnHnAL0wozxUYkowWUA += ((NI) 1);
	{
		if (!(((NI) 100) < evalTemplateCounter_jPNQnHnAL0wozxUYkowWUA)) goto LA3_;
		globalError_VpilfPWbplGz6ny7O9cfr2g_3((*n).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 189), ((NimStringDesc*) &TM_N0xGjswvcjwwH43PvVNJAg_2));
		result = n;
	}
	LA3_: ;
	args = evalTemplateArgs_dw0jfqH3BrkE5IDOxRZp9cw(n, tmpl, fromHlo);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.genSymOwner = genSymOwner;
	initIdTable_9cUS2oaKn1IFXKjLdglPZHQ((&ctx.mapping));
	body = getBody_eMf5HLowckpW9cDxAV9bNIZw(tmpl);
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = isAtom_NyXYMHACmbtWJZnWqE9cJCAparampatterns(body);
		if (!T7_) goto LA8_;
		result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 37), (*body).info);
		evalTemplateAux_AHGrgjfRCGeqRF8aKpZ9apw(body, args, (&ctx), result);
		{
			NI T12_;
			T12_ = (NI)0;
			T12_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(result);
			if (!(T12_ == ((NI) 1))) goto LA13_;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10_;
		LA13_: ;
		{
			NimStringDesc* T16_;
			T16_ = (NimStringDesc*)0;
			T16_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(result, 4);
			localError_VpilfPWbplGz6ny7O9cfr2g((*result).info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 2), T16_);
		}
		LA10_: ;
	}
	goto LA5_;
	LA8_: ;
	{
		result = copyNode_lz8T1F9c0YwEOpUnrAUYgjg(body);
		{
			NI i;
			NI colontmp_;
			NI T19_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T19_ = (NI)0;
			T19_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(body);
			colontmp_ = (NI)(T19_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA21;
					i = res;
					evalTemplateAux_AHGrgjfRCGeqRF8aKpZ9apw((*body).kindU.S6.sons->data[i], args, (&ctx), result);
					res += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5_: ;
	(*result).flags |= ((NU32)1)<<((((tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg) 16))%(sizeof(NU32)*8));
	result = wrapInComesFrom_YbfXH27kQZj5oIysAn7Rfg((*n).info, result);
	evalTemplateCounter_jPNQnHnAL0wozxUYkowWUA -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evalTemplateCounter_jPNQnHnAL0wozxUYkowWUA = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

