/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
#undef far
#undef powerpc
#undef unix
typedef struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw tyObject_Target_9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA tySequence_PJMRIt5QxCm6bRaVyQ5CGA;
typedef struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence_7lEisrXlQEzwtUKW5pzRCw tySequence_7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ tySequence_Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw tySequence_pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw tyTuple_xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg {
tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* inp;
tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ state;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
NI indent;
NI emitPar;
NimStringDesc* x;
tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* outp;
NIM_CHAR subsChar;
NIM_CHAR nimDirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* toStr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingExprLine;
tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config;
};
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA {
tySequence_7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence_PJMRIt5QxCm6bRaVyQ5CGA* msgContext;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence_Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA;
typedef NU64 tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc_QYEVXrYc9beQ379crS3rzqRA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA;
typedef NU8 tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc_22mgIiTBBoqNe1T0FSw9ahQ;
struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw {
tyObject_Target_9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw selectedGC;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ features;
NimStringDesc* arguments;
NIM_BOOL helpWritten;
tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg enableNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg disableNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg foreignPackageNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg notes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NI32 projectMainIdx;
NimStringDesc* command;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NIM_BOOL keepComments;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* ccompilerpath;
tySequence_pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc_QYEVXrYc9beQ379crS3rzqRA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA writelnHook;
tyProc_22mgIiTBBoqNe1T0FSw9ahQ structuredErrorHook;
NimStringDesc* cppCustomNamespace;
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
typedef NU8 tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyfile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA flags;
};
struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA {
  TGenericSeq Sup;
  tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q data[SEQ_DECL_SIZE];
};
struct tySequence_7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple_xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size);
static N_INLINE(tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q, newLineInfo_q6yS31W9c9bTxOv5YvOB1n7gcommands)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q, newLineInfo_2NFGLtpUAEoivNwJGP9cmxw)(NI32 fileInfoIdx, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx_3HRSVgYDcnQTolSZGx1zjA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen_jPVNKrpc70V5PGNIB9aNmnA)(NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg_zwtWXyb9bxwLC8jk2KVKyAQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_Nf4wML3oKvfTVSpIoKYpNg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d);
static N_INLINE(NIM_BOOL, withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, localError_NF6kBGchnhQYPbCedyefVA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_9bUFQ4OV1temcDF0GZp317g)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_m1TSS3QwQPclQATuiRuVZg)(NimStringDesc* s, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, NIM_CHAR data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_OvGAfUZQ8pvVGcrtn64p2g)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_2, "subschar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_3, "metachar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_4, "emit", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_5, "result.add", 10);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_6, "conc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_7, " & ", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_8, "tostring", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_9, "$", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_10, "\012", 1);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_paI0W78l0CRDBLjAHJxn6w_11 = {
0x00, 0x00, 0x00, 0x00, 0x70, 0xBC, 0x00, 0x50,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_12, "end", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_13, "if", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_14, "when", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_15, "try", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_16, "while", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_17, "for", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_18, "block", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_19, "case", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_20, "proc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_21, "iterator", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_22, "converter", 9);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_23, "macro", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_24, "template", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_25, "method", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_26, "func", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_27, "elif", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_28, "of", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_29, "else", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_30, "except", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_31, "finally", 7);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_32, "let", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_33, "var", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_34, "const", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_35, "type", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_36, "\'end\' does not close a control flow construct", 45);
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
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_45, "expected closing \'}\'", 20);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_46, "invalid expression", 18);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_47, "\\n\"", 3);

static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem(p, ((int) 0), size);
}

static N_INLINE(tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q, newLineInfo_q6yS31W9c9bTxOv5YvOB1n7gcommands)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename, NI line, NI col) {
	tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q result;
	NI32 T1_;
	nimZeroMem((void*)(&result), sizeof(tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q));
	T1_ = (NI32)0;
	T1_ = fileInfoIdx_3HRSVgYDcnQTolSZGx1zjA(conf, filename);
	result = newLineInfo_2NFGLtpUAEoivNwJGP9cmxw(T1_, line, col);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = nsuRepeatChar(41, ((NI) ((*p).emitPar)));
	llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T1_);
	(*p).emitPar = ((NI) 0);
	{
		if (!((NU16)(((NU16) 1)) < (NU16)((*p).info.line))) goto LA4_;
		llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
	}
	LA4_: ;
	{
		NimStringDesc* T10_;
		if (!(*p).pendingExprLine) goto LA8_;
		T10_ = (NimStringDesc*)0;
		T10_ = nsuRepeatChar(32, ((NI) 2));
		llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T10_);
		(*p).pendingExprLine = NIM_FALSE;
	}
	LA8_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			if (!(i < ((*p).x ? (*p).x->Sup.len : 0))) goto LA2;
			switch (((NU8)((*p).x->data[i]))) {
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
		} LA2: ;
	}
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

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NI j;
	NI len;
	j = ((NI) 0);
	len = ((*p).x ? (*p).x->Sup.len : 0);
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (j < len);
			if (!(T3_)) goto LA4_;
			T3_ = ((NU8)((*p).x->data[j]) == (NU8)(32));
			LA4_: ;
			if (!T3_) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		NIM_BOOL T8_;
		T7_ = (NIM_BOOL)0;
		T8_ = (NIM_BOOL)0;
		T8_ = (((NI) 2) <= len);
		if (!(T8_)) goto LA9_;
		T8_ = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimDirective));
		LA9_: ;
		T7_ = T8_;
		if (!(T7_)) goto LA10_;
		T7_ = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(63));
		LA10_: ;
		if (!T7_) goto LA11_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
	}
	goto LA5_;
	LA11_: ;
	{
		NIM_BOOL T14_;
		NI d;
		NimStringDesc* keyw;
		NIM_BOOL T26_;
		T14_ = (NIM_BOOL)0;
		T14_ = (j < len);
		if (!(T14_)) goto LA15_;
		T14_ = ((NU8)((*p).x->data[j]) == (NU8)((*p).nimDirective));
		LA15_: ;
		if (!T14_) goto LA16_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
		j += ((NI) 1);
		{
			while (1) {
				NIM_BOOL T20_;
				T20_ = (NIM_BOOL)0;
				T20_ = (j < len);
				if (!(T20_)) goto LA21_;
				T20_ = ((NU8)((*p).x->data[j]) == (NU8)(32));
				LA21_: ;
				if (!T20_) goto LA19;
				j += ((NI) 1);
			} LA19: ;
		}
		d = j;
		keyw = ((NimStringDesc*) NIM_NIL);
		{
			while (1) {
				NIM_BOOL T24_;
				T24_ = (NIM_BOOL)0;
				T24_ = (j < len);
				if (!(T24_)) goto LA25_;
				T24_ = (((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)));
				LA25_: ;
				if (!T24_) goto LA23;
				keyw = addChar(keyw, (*p).x->data[j]);
				j += ((NI) 1);
			} LA23: ;
		}
		scanPar_UZozihWMkEBOt7RUxfUnzw(p, j);
		T26_ = (NIM_BOOL)0;
		T26_ = withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl((&(*p)));
		if (T26_) goto LA27_;
		T26_ = endsWith_RTbJaR5kDAZUyj9bXErnbyg((*p).x, TM_paI0W78l0CRDBLjAHJxn6w_11);
		LA27_: ;
		(*p).pendingExprLine = T26_;
		switch (hashString(keyw) & 31) {
		case 3: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_28))) goto LA30_;
break;
		case 6: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_19))) goto LA29_;
break;
		case 7: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_13))) goto LA29_;
break;
		case 10: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_20))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_32))) goto LA31_;
break;
		case 12: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_21))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_33))) goto LA31_;
break;
		case 13: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_25))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_30))) goto LA30_;
break;
		case 16: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_14))) goto LA29_;
break;
		case 17: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_27))) goto LA30_;
break;
		case 18: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_24))) goto LA29_;
break;
		case 19: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_17))) goto LA29_;
break;
		case 21: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_29))) goto LA30_;
break;
		case 23: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_12))) goto LA28_;
break;
		case 24: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_31))) goto LA30_;
break;
		case 25: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_16))) goto LA29_;
break;
		case 26: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_34))) goto LA31_;
break;
		case 27: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_15))) goto LA29_;
break;
		case 29: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_18))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_26))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_35))) goto LA31_;
break;
		case 30: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_22))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_23))) goto LA29_;
break;
		}
		goto LA32_;
		LA28_: ;
		{
			NimStringDesc* T40_;
			{
				if (!(((NI) 2) <= (*p).indent)) goto LA37_;
				(*p).indent -= ((NI) 2);
			}
			goto LA35_;
			LA37_: ;
			{
				(*p).info.col = ((NI16) (j));
				localError_NF6kBGchnhQYPbCedyefVA((*p).config, (*p).info, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_36));
			}
			LA35_: ;
			T40_ = (NimStringDesc*)0;
			T40_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T40_);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_37));
		}
		goto LA33_;
		LA29_: ;
		{
			NimStringDesc* T42_;
			NimStringDesc* T43_;
			T42_ = (NimStringDesc*)0;
			T42_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T42_);
			T43_ = (NimStringDesc*)0;
			T43_ = substr_9bUFQ4OV1temcDF0GZp317g((*p).x, d);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T43_);
			(*p).indent += ((NI) 2);
		}
		goto LA33_;
		LA30_: ;
		{
			NimStringDesc* T45_;
			NimStringDesc* T46_;
			T45_ = (NimStringDesc*)0;
			T45_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent - ((NI) 2)))));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T45_);
			T46_ = (NimStringDesc*)0;
			T46_ = substr_9bUFQ4OV1temcDF0GZp317g((*p).x, d);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T46_);
		}
		goto LA33_;
		LA31_: ;
		{
			NimStringDesc* T48_;
			NimStringDesc* T49_;
			T48_ = (NimStringDesc*)0;
			T48_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T48_);
			T49_ = (NimStringDesc*)0;
			T49_ = substr_9bUFQ4OV1temcDF0GZp317g((*p).x, d);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T49_);
			{
				NIM_BOOL T52_;
				T52_ = (NIM_BOOL)0;
				T52_ = contains_m1TSS3QwQPclQATuiRuVZg((*p).x, TM_paI0W78l0CRDBLjAHJxn6w_38);
				if (!!(T52_)) goto LA53_;
				(*p).indent += ((NI) 2);
			}
			LA53_: ;
		}
		goto LA33_;
		LA32_: ;
		{
			NimStringDesc* T56_;
			NimStringDesc* T57_;
			T56_ = (NimStringDesc*)0;
			T56_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T56_);
			T57_ = (NimStringDesc*)0;
			T57_ = substr_9bUFQ4OV1temcDF0GZp317g((*p).x, d);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T57_);
		}
		LA33_: ;
		(*p).state = ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0);
	}
	goto LA5_;
	LA16_: ;
	{
		(*p).par = ((NI) 0);
		(*p).curly = ((NI) 0);
		(*p).bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).state) {
		case ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1):
		{
			NimStringDesc* T60_;
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).conc);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
			T60_ = (NimStringDesc*)0;
			T60_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent + ((NI) 2)))));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T60_);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_39));
		}
		break;
		case ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0):
		{
			NimStringDesc* T62_;
			newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
			T62_ = (NimStringDesc*)0;
			T62_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T62_);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).emit);
			llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_40));
			(*p).emitPar += ((NI) 1);
		}
		break;
		}
		(*p).state = ((tyEnum_TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1);
		{
			while (1) {
				if (!(j < len)) goto LA64;
				switch (((NU8)((*p).x->data[j]))) {
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* T66_;
					llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_41));
					T66_ = (NimStringDesc*)0;
					T66_ = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, T66_);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_42));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_43));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_44));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA73_;
						j += ((NI) 1);
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI curly;
							(*p).info.col = ((NI16) (j));
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 34);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).conc);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).toStr);
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									if (!(j < len)) goto LA77;
									switch (((NU8)((*p).x->data[j]))) {
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA82_;
											goto LA76;
										}
										LA82_: ;
										{
											if (!(((NI) 0) < curly)) goto LA86_;
											curly -= ((NI) 1);
										}
										LA86_: ;
										llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 125);
									}
									break;
									default:
									{
										llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, (*p).x->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								} LA77: ;
							} LA76: ;
							{
								if (!(((NI) 0) < curly)) goto LA91_;
								localError_NF6kBGchnhQYPbCedyefVA((*p).config, (*p).info, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_45));
								goto LA63;
							}
							LA91_: ;
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 41);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).conc);
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 34);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).conc);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).toStr);
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 40);
							{
								while (1) {
									NIM_BOOL T96_;
									T96_ = (NIM_BOOL)0;
									T96_ = (j < len);
									if (!(T96_)) goto LA97_;
									T96_ = (((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)));
									LA97_: ;
									if (!T96_) goto LA95;
									llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, (*p).x->data[j]);
									j += ((NI) 1);
								} LA95: ;
							}
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 41);
							llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, (*p).conc);
							llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA101_;
								llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, (*p).subsChar);
								j += ((NI) 1);
							}
							goto LA99_;
							LA101_: ;
							{
								(*p).info.col = ((NI16) (j));
								localError_NF6kBGchnhQYPbCedyefVA((*p).config, (*p).info, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_46));
							}
							LA99_: ;
						}
						break;
						}
					}
					goto LA71_;
					LA73_: ;
					{
						llStreamWrite_lCJCsvQ1GRp58X1sJyDxTg((*p).outp, (*p).x->data[j]);
						j += ((NI) 1);
					}
					LA71_: ;
				}
				break;
				}
			} LA64: ;
		} LA63: ;
		llStreamWrite_8Mx5Tw58I5xO4sWRiefqHQ((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_47));
	}
	LA5_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*, filterTmpl_ktXx03A4I583g1JBDSVOmw)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call, tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf) {
	tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* result;
	tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg p;
	result = (tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*)0;
	nimZeroMem((void*)(&p), sizeof(tyObject_TTmplParser_hVXV9cC75rOvsaODz9bp1zeg));
	p.config = conf;
	p.info = newLineInfo_q6yS31W9c9bTxOv5YvOB1n7gcommands(conf, filename, ((NI) 0), ((NI) 0));
	p.outp = llStreamOpen_jPVNKrpc70V5PGNIB9aNmnA(((NimStringDesc*) NIM_NIL));
	p.inp = stdin_0;
	p.subsChar = charArg_zwtWXyb9bxwLC8jk2KVKyAQ(conf, call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_2), ((NI) 1), 36);
	p.nimDirective = charArg_zwtWXyb9bxwLC8jk2KVKyAQ(conf, call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_3), ((NI) 2), 35);
	p.emit = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_4), ((NI) 3), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_5));
	p.conc = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_6), ((NI) 4), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_7));
	p.toStr = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_8), ((NI) 5), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_9));
	p.x = rawNewString(((NI) 120));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ(p.inp, (&p.x));
		if (!T3_) goto LA4_;
		p.info.line = (NU16)((NU16)(p.info.line) + (NU16)(((NU16) 1)));
	}
	LA4_: ;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ(p.inp, (&p.x));
			if (!T8_) goto LA7;
			p.info.line = (NU16)((NU16)(p.info.line) + (NU16)(((NU16) 1)));
			parseLine_Seop6SJMf7a68kj2jl0nsQ((&p));
		} LA7: ;
	}
	newLine_P1DA7WwGEY1zF3DfWYV6Pg((&p));
	result = p.outp;
	llStreamClose_OvGAfUZQ8pvVGcrtn64p2g(p.inp);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_filter_tmplInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_filter_tmplDatInit000)(void) {
}

