/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <dirent.h>
#include <setjmp.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <glob.h>
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
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
typedef struct tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg;
typedef struct tySequence_4eQHGndY6XBYpFOH09apV8Q tySequence_4eQHGndY6XBYpFOH09apV8Q;
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
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
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
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
typedef NU8 tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg;
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
NimStringDesc* trace;
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
typedef NIM_CHAR tyArray_dTlC27m9c9aWd5dvuePYanug[256];
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg {
NI a;
NI b;
};
struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw {
  RootObj Sup;
NI counter;
tySequence_4eQHGndY6XBYpFOH09apV8Q* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
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
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
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
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  tyTuple_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(void, insert_uR2a6wvjQXz8X49aJA9a9c9cdw)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ** x, NimStringDesc* item, NI i);
N_NIMCALL(void, addPathRec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, slash__lXoMhn1ZYc9cAJa9bfA61msg)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg, getSymlinkFileKind_WoXOp8qmMec1P4MyA3LBKg)(NimStringDesc* path);
N_NIMCALL(void, addPackage_mPfTsfux8gBVeyQ8xwDYTQ)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages, NimStringDesc* p);
N_NIMCALL(void, getPathVersion_VKHg68gAlFhA9bjF06atqSw)(NimStringDesc* p, tyTuple_UV3llMMYFckfui8YMBuUZA* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, nsuFindStr)(NimStringDesc* s, NimStringDesc* sub, NI start, NI last);
N_NIMCALL(NI, rfind_W87p20m1kfFLClLIyJo0kw)(NimStringDesc* s, NIM_CHAR sub, NI start);
static N_INLINE(NimStringDesc*, X5BX5D__Sq9b57KCLKZryBwyHy49aBswnimblecmd)(NimStringDesc* s, tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAnimblecmd)(NI a, NI b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, newVersion_2tUj1VbvNWvoeXROqIRlGw)(NimStringDesc* ver);
N_NOINLINE(void, raiseAssert_PpfSiTIeNpMAb9a5o6SglJw_2)(NimStringDesc* msg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, lt__DANcsLFNgwcQ9a9cRogUJnTw)(NimStringDesc* ver, NimStringDesc* ver2);
N_NIMCALL(NIM_BOOL, isSpecial_fTExY0bbf8OuVlO7yhFUaQ)(NimStringDesc* ver);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, nsuSplitChar)(NimStringDesc* s, NIM_CHAR sep, NI maxsplit);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getOrDefault_sPC3Tb9bX9b1TxdHlL7x9cN3Q)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* default_0);
N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, addNimblePath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, nsuSplitLines)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, readFile_T9cm5LIRX2tKEH9aREBZ8A0w)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(void, message_VpilfPWbplGz6ny7O9cfr2g_2)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
extern tySequence_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths_XRBeXIYowTeRSkTUFC0m2w;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths_uObU3TsEr9bGIxsNFEkim6Q;
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_3, ".", 1);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_4, "..", 2);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_5, "", 0);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_6, "-#", 2);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_7, "len(ver) == 0 or contains({0, 35, 48..57}, ver[0]) Wrong versio"
"n: ", 66);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_8, "#head", 5);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_9, "*.nimble-link", 13);

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

static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!eqStrings(i, item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, addPath_t70rbGc1vt9aCRgpPrT47WQ)(NimStringDesc* path, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd(searchPaths_XRBeXIYowTeRSkTUFC0m2w->data, searchPaths_XRBeXIYowTeRSkTUFC0m2w->Sup.len, path);
		if (!!(T3_)) goto LA4_;
		insert_uR2a6wvjQXz8X49aJA9a9c9cdw((&searchPaths_XRBeXIYowTeRSkTUFC0m2w), path, ((NI) 0));
	}
	LA4_: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(NimStringDesc*, X5BX5D__Sq9b57KCLKZryBwyHy49aBswnimblecmd)(NimStringDesc* s, tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAnimblecmd)(NI a, NI b) {
	tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(void, getPathVersion_VKHg68gAlFhA9bjF06atqSw)(NimStringDesc* p, tyTuple_UV3llMMYFckfui8YMBuUZA* Result) {
	NI sepIdx;
	tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg T9_;
{	unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_5)));
	unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_5)));
	sepIdx = nsuFindStr(p, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_6), ((NI) 0), ((NI) 0));
	{
		if (!(sepIdx == ((NI) -1))) goto LA3_;
		sepIdx = rfind_W87p20m1kfFLClLIyJo0kw(p, 45, ((NI) -1));
	}
	LA3_: ;
	{
		if (!(sepIdx == ((NI) -1))) goto LA7_;
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(p));
		goto BeforeRet_;
	}
	LA7_: ;
	T9_ = dotdot__18yoMoUbfoITYgEZSwZDYAnimblecmd(((NI) 0), (NI)(sepIdx - ((NI) 1)));
	unsureAsgnRef((void**) (&(*Result).Field0), X5BX5D__Sq9b57KCLKZryBwyHy49aBswnimblecmd(p, T9_));
	unsureAsgnRef((void**) (&(*Result).Field1), copyStr(p, (NI)(sepIdx + ((NI) 1))));
	}BeforeRet_: ;
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

N_NIMCALL(NimStringDesc*, newVersion_2tUj1VbvNWvoeXROqIRlGw)(NimStringDesc* ver) {
	NimStringDesc* result;
{	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((ver ? ver->Sup.len : 0) == ((NI) 0));
		if (T3_) goto LA4_;
		T3_ = (((NU8)(ver->data[((NI) 0)])) == ((NU8)(0)) || ((NU8)(ver->data[((NI) 0)])) == ((NU8)(35)) || ((NU8)(ver->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)(ver->data[((NI) 0)])) <= ((NU8)(57)));
		LA4_: ;
		if (!!(T3_)) goto LA5_;
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString(ver->Sup.len + 66);
appendString(T7_, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_7));
appendString(T7_, ver);
		raiseAssert_PpfSiTIeNpMAb9a5o6SglJw_2(T7_);
	}
	LA5_: ;
	result = copyString(ver);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isSpecial_fTExY0bbf8OuVlO7yhFUaQ)(NimStringDesc* ver) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < (ver ? ver->Sup.len : 0));
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(ver->data[((NI) 0)]) == (NU8)(35));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, lt__DANcsLFNgwcQ9a9cRogUJnTw)(NimStringDesc* ver, NimStringDesc* ver2) {
	NIM_BOOL result;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* sVer;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* sVer2;
{	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isSpecial_fTExY0bbf8OuVlO7yhFUaQ(ver);
		if (T3_) goto LA4_;
		T3_ = isSpecial_fTExY0bbf8OuVlO7yhFUaQ(ver2);
		LA4_: ;
		if (!T3_) goto LA5_;
		{
			NIM_BOOL T9_;
			NimStringDesc* T11_;
			NimStringDesc* T14_;
			T9_ = (NIM_BOOL)0;
			T9_ = isSpecial_fTExY0bbf8OuVlO7yhFUaQ(ver2);
			if (!(T9_)) goto LA10_;
			T11_ = (NimStringDesc*)0;
			T11_ = nsuNormalize(ver2);
			T9_ = eqStrings(T11_, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_8));
			LA10_: ;
			if (!T9_) goto LA12_;
			T14_ = (NimStringDesc*)0;
			T14_ = nsuNormalize(ver);
			result = !(eqStrings(T14_, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_8)));
			goto BeforeRet_;
		}
		LA12_: ;
		{
			NIM_BOOL T17_;
			NimStringDesc* T20_;
			T17_ = (NIM_BOOL)0;
			T17_ = isSpecial_fTExY0bbf8OuVlO7yhFUaQ(ver2);
			if (!!(T17_)) goto LA18_;
			T20_ = (NimStringDesc*)0;
			T20_ = nsuNormalize(ver);
			result = !(eqStrings(T20_, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_8)));
			goto BeforeRet_;
		}
		LA18_: ;
	}
	LA5_: ;
	sVer = nsuSplitChar(ver, 46, ((NI) -1));
	sVer2 = nsuSplitChar(ver2, 46, ((NI) -1));
	{
		NI i;
		NI colontmp_;
		NI T22_;
		NI T23_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T22_ = (sVer ? sVer->Sup.len : 0);
		T23_ = (sVer2 ? sVer2->Sup.len : 0);
		colontmp_ = (NI)(((T22_ >= T23_) ? T22_ : T23_) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				NI sVerI;
				NI sVerI2;
				if (!(res <= colontmp_)) goto LA25;
				i = res;
				sVerI = ((NI) 0);
				{
					NI T28_;
					NI T31_;
					T28_ = (sVer ? sVer->Sup.len : 0);
					if (!(i < T28_)) goto LA29_;
					T31_ = (NI)0;
					T31_ = npuParseInt(sVer->data[i], (&sVerI), ((NI) 0));
					T31_;
				}
				LA29_: ;
				sVerI2 = ((NI) 0);
				{
					NI T34_;
					NI T37_;
					T34_ = (sVer2 ? sVer2->Sup.len : 0);
					if (!(i < T34_)) goto LA35_;
					T37_ = (NI)0;
					T37_ = npuParseInt(sVer2->data[i], (&sVerI2), ((NI) 0));
					T37_;
				}
				LA35_: ;
				{
					if (!(sVerI < sVerI2)) goto LA40_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				goto LA38_;
				LA40_: ;
				{
					if (!(sVerI == sVerI2)) goto LA43_;
				}
				goto LA38_;
				LA43_: ;
				{
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA38_: ;
				res += ((NI) 1);
			} LA25: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, addPackage_mPfTsfux8gBVeyQ8xwDYTQ)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages, NimStringDesc* p) {
	tyTuple_UV3llMMYFckfui8YMBuUZA T1_;
	NimStringDesc* name;
	NimStringDesc* ver;
	NimStringDesc* version;
	memset((void*)(&T1_), 0, sizeof(T1_));
	getPathVersion_VKHg68gAlFhA9bjF06atqSw(p, (&T1_));
	name = (NimStringDesc*)0;
	name = T1_.Field0;
	ver = (NimStringDesc*)0;
	ver = T1_.Field1;
	version = newVersion_2tUj1VbvNWvoeXROqIRlGw(ver);
	{
		NIM_BOOL T4_;
		NimStringDesc* T5_;
		NimStringDesc* T6_;
		NIM_BOOL T8_;
		T4_ = (NIM_BOOL)0;
		T5_ = (NimStringDesc*)0;
		T5_ = getOrDefault_sPC3Tb9bX9b1TxdHlL7x9cN3Q(packages, name, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_5));
		T6_ = (NimStringDesc*)0;
		T6_ = newVersion_2tUj1VbvNWvoeXROqIRlGw(T5_);
		T4_ = lt__DANcsLFNgwcQ9a9cRogUJnTw(T6_, version);
		if (T4_) goto LA7_;
		T8_ = (NIM_BOOL)0;
		T8_ = nsthasKey(packages, name);
		T4_ = !(T8_);
		LA7_: ;
		if (!T4_) goto LA9_;
		nstPut(packages, name, version);
	}
	LA9_: ;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
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

N_NIMCALL(void, addNimblePath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	NimStringDesc* path;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* nimbleLinks;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* volatile result;
	path = copyString(p);
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	{
		NimStringDesc* x;
		NimStringDesc* colontmp_;
		glob_t f;
		NI res;
		int T2_;
		TSafePoint TM_asNQM9aynXXg9ccUABbReyew_10;
		x = (NimStringDesc*)0;
		colontmp_ = (NimStringDesc*)0;
		colontmp_ = slash__lXoMhn1ZYc9cAJa9bfA61msg(p, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_9));
		memset((void*)(&f), 0, sizeof(f));
		res = (NI)0;
		f.gl_offs = ((NI) 0);
		f.gl_pathc = ((NI) 0);
		f.gl_pathv = NIM_NIL;
		T2_ = (int)0;
		T2_ = glob(colontmp_->data, ((int) 0), NIM_NIL, (&f));
		res = ((NI) (T2_));
		pushSafePoint(&TM_asNQM9aynXXg9ccUABbReyew_10);
		TM_asNQM9aynXXg9ccUABbReyew_10.status = setjmp(TM_asNQM9aynXXg9ccUABbReyew_10.context);
		if (TM_asNQM9aynXXg9ccUABbReyew_10.status == 0) {
			{
				if (!(res == ((NI) 0))) goto LA6_;
				{
					NI i;
					NI colontmp__2;
					NI volatile res_2;
					i = (NI)0;
					colontmp__2 = (NI)0;
					colontmp__2 = (NI)(f.gl_pathc - ((NI) 1));
					res_2 = ((NI) 0);
					{
						while (1) {
							NimStringDesc* path_2;
							if (!(res_2 <= colontmp__2)) goto LA10;
							i = res_2;
							path_2 = cstrToNimstr(f.gl_pathv[(i)- 0]);
							{
								NI T15_;
								NimStringDesc* T16_;
								if (!NIM_TRUE) goto LA13_;
								x = path_2;
								result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(result)->Sup, sizeof(NimStringDesc*));
								T15_ = result->Sup.len++;
								T16_ = (NimStringDesc*)0;
								T16_ = result->data[T15_]; result->data[T15_] = copyStringRC1(x);
								if (T16_) nimGCunrefNoCycle(T16_);
							}
							LA13_: ;
							res_2 += ((NI) 1);
						} LA10: ;
					}
				}
			}
			LA6_: ;
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			globfree((&f));
		}
		if (TM_asNQM9aynXXg9ccUABbReyew_10.status != 0) reraiseException();
	}
	nimbleLinks = result;
	{
		NI T21_;
		tySequence_sM4lkSb7zS6F7OVMvW9cffQ* nimbleLinkLines;
		NimStringDesc* T24_;
		T21_ = (nimbleLinks ? nimbleLinks->Sup.len : 0);
		if (!(((NI) 0) < T21_)) goto LA22_;
		T24_ = (NimStringDesc*)0;
		T24_ = readFile_T9cm5LIRX2tKEH9aREBZ8A0w(nimbleLinks->data[((NI) 0)]);
		nimbleLinkLines = nsuSplitLines(T24_);
		path = copyString(nimbleLinkLines->data[((NI) 1)]);
		{
			NIM_BOOL T27_;
			T27_ = (NIM_BOOL)0;
			T27_ = nosisAbsolute(path);
			if (!!(T27_)) goto LA28_;
			path = slash__lXoMhn1ZYc9cAJa9bfA61msg(p, path);
		}
		LA28_: ;
	}
	LA22_: ;
	{
		NIM_BOOL T32_;
		T32_ = (NIM_BOOL)0;
		T32_ = contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd(searchPaths_XRBeXIYowTeRSkTUFC0m2w->data, searchPaths_XRBeXIYowTeRSkTUFC0m2w->Sup.len, path);
		if (!!(T32_)) goto LA33_;
		message_VpilfPWbplGz6ny7O9cfr2g_2(info, ((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 283), path);
		insert_uR2a6wvjQXz8X49aJA9a9c9cdw((&lazyPaths_uObU3TsEr9bGIxsNFEkim6Q), path, ((NI) 0));
	}
	LA33_: ;
}

N_NIMCALL(void, addPathRec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages;
	NI pos;
	packages = nstnewStringTable(((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3_;
		pos += ((NI) 1);
	}
	LA3_: ;
	{
		tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg k;
		NimStringDesc* p;
		DIR* d;
		k = (tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg)0;
		p = (NimStringDesc*)0;
		d = opendir(dir->data);
		{
			TSafePoint TM_asNQM9aynXXg9ccUABbReyew_2;
			if (!!((d == NIM_NIL))) goto LA8_;
			pushSafePoint(&TM_asNQM9aynXXg9ccUABbReyew_2);
			TM_asNQM9aynXXg9ccUABbReyew_2.status = setjmp(TM_asNQM9aynXXg9ccUABbReyew_2.context);
			if (TM_asNQM9aynXXg9ccUABbReyew_2.status == 0) {
				{
					while (1) {
						struct dirent* x;
						NimStringDesc* volatile y;
						x = readdir(d);
						{
							if (!(x == NIM_NIL)) goto LA15_;
							goto LA11;
						}
						LA15_: ;
						y = cstrToNimstr(((NCSTRING) ((*x).d_name)));
						{
							NIM_BOOL T19_;
							struct stat s;
							tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg volatile k_2;
							T19_ = (NIM_BOOL)0;
							T19_ = !(eqStrings(y, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_3)));
							if (!(T19_)) goto LA20_;
							T19_ = !(eqStrings(y, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_4)));
							LA20_: ;
							if (!T19_) goto LA21_;
							memset((void*)(&s), 0, sizeof(s));
							{
								if (!NIM_TRUE) goto LA25_;
								y = slash__lXoMhn1ZYc9cAJa9bfA61msg(dir, y);
							}
							LA25_: ;
							k_2 = ((tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 0);
							{
								int T29_;
								T29_ = (int)0;
								T29_ = lstat(y->data, (&s));
								if (!(T29_ < ((NI32) 0))) goto LA30_;
								goto LA11;
							}
							LA30_: ;
							{
								NIM_BOOL T34_;
								T34_ = (NIM_BOOL)0;
								T34_ = S_ISDIR(s.st_mode);
								if (!T34_) goto LA35_;
								k_2 = ((tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 2);
							}
							goto LA32_;
							LA35_: ;
							{
								NIM_BOOL T38_;
								T38_ = (NIM_BOOL)0;
								T38_ = S_ISLNK(s.st_mode);
								if (!T38_) goto LA39_;
								k_2 = getSymlinkFileKind_WoXOp8qmMec1P4MyA3LBKg(y);
							}
							goto LA32_;
							LA39_: ;
							LA32_: ;
							k = k_2;
							p = y;
							{
								NIM_BOOL T43_;
								T43_ = (NIM_BOOL)0;
								T43_ = (k == ((tyEnum_PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 2));
								if (!(T43_)) goto LA44_;
								T43_ = !(((NU8)(p->data[pos]) == (NU8)(46)));
								LA44_: ;
								if (!T43_) goto LA45_;
								addPackage_mPfTsfux8gBVeyQ8xwDYTQ(packages, p);
							}
							LA45_: ;
						}
						LA21_: ;
					}
				} LA11: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				int T49_;
				T49_ = (int)0;
				T49_ = closedir(d);
				T49_;
			}
			if (TM_asNQM9aynXXg9ccUABbReyew_2.status != 0) reraiseException();
		}
		LA8_: ;
	}
	{
		NimStringDesc* p_2;
		p_2 = (NimStringDesc*)0;
		{
			NimStringDesc* key;
			NimStringDesc* val;
			key = (NimStringDesc*)0;
			val = (NimStringDesc*)0;
			{
				NI h;
				NI colontmp_;
				NI T53_;
				NI res;
				h = (NI)0;
				colontmp_ = (NI)0;
				T53_ = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				colontmp_ = T53_;
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA55;
						h = res;
						{
							NimStringDesc* res_2;
							if (!!(((*packages).data->data[h].Field0 == 0))) goto LA58_;
							key = (*packages).data->data[h].Field0;
							val = (*packages).data->data[h].Field1;
							{
								if (!((val ? val->Sup.len : 0) == ((NI) 0))) goto LA62_;
								res_2 = key;
							}
							goto LA60_;
							LA62_: ;
							{
								NimStringDesc* T65_;
								T65_ = (NimStringDesc*)0;
								T65_ = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(T65_, key);
appendChar(T65_, 45);
appendString(T65_, val);
								res_2 = T65_;
							}
							LA60_: ;
							p_2 = res_2;
							addNimblePath_Io0tiMEKgDlbf67BdbC9cWw(p_2, info);
						}
						LA58_: ;
						res += ((NI) 1);
					} LA55: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblePath_JlgWmHvYGMBlcPx0hG1xEQ)(NimStringDesc* path, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	addPathRec_3JEODh79bt1SXwL9cUHI7lhw(path, info);
	addNimblePath_Io0tiMEKgDlbf67BdbC9cWw(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

