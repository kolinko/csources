/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode187813 tnode187813;
typedef struct tparser205203 tparser205203;
typedef struct ttype187847 ttype187847;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym187843 tsym187843;
typedef struct tident167019 tident167019;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tlexer179176 tlexer179176;
typedef struct tbaselexer177018 tbaselexer177018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream175204 tllstream175204;
typedef struct ttoken179174 ttoken179174;
typedef struct tidobj167013 tidobj167013;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tlib187831 tlib187831;
typedef struct TY187932 TY187932;
typedef struct tlistentry120017 tlistentry120017;
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode187813  {
ttype187847* Typ;
tlineinfo163527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym187843* Sym;
} S4;
struct {tident167019* Ident;
} S5;
struct {tnodeseq187807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer177018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream175204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer179176  {
  tbaselexer177018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken179174  {
NU8 Toktype;
NI Indent;
tident167019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser205203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer179176 Lex;
ttoken179174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  tloc187827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype187847* T;
trope145007* R;
trope145007* Heaproot;
NI A;
};
struct  ttype187847  {
  tidobj167013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq187845* Sons;
tnode187813* N;
tsym187843* Destructor;
tsym187843* Owner;
tsym187843* Sym;
NI64 Size;
NI Align;
tloc187827 Loc;
};
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
};
struct  tsym187843  {
  tidobj167013 Sup;
NU8 Kind;
union {
struct {ttypeseq187845* Typeinstcache;
tscope187837* Typscope;
} S1;
struct {TY187943* Procinstcache;
tscope187837* Scope;
} S2;
struct {TY187943* Usedgenerics;
tstrtable187817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype187847* Typ;
tident167019* Name;
tlineinfo163527 Info;
tsym187843* Owner;
NU32 Flags;
tnode187813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc187827 Loc;
tlib187831* Annex;
tnode187813* Constraint;
};
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tllstream175204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope187837  {
NI Depthlevel;
tstrtable187817 Symbols;
tnodeseq187807* Usingsyms;
tscope187837* Parent;
};
struct  tinstantiation187833  {
tsym187843* Sym;
ttypeseq187845* Concretetypes;
TY187932* Usedby;
};
struct  tlistentry120017  {
  TNimObject Sup;
tlistentry120017* Prev;
tlistentry120017* Next;
};
struct  tlib187831  {
  tlistentry120017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope145007* Name;
tnode187813* Path;
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct ttypeseq187845 {
  TGenericSeq Sup;
  ttype187847* data[SEQ_DECL_SIZE];
};
struct TY187943 {
  TGenericSeq Sup;
  tinstantiation187833* data[SEQ_DECL_SIZE];
};
struct tsymseq187815 {
  TGenericSeq Sup;
  tsym187843* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode187813*, parseall_210006)(tparser205203* p);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode187813*, parsetoplevelstmt_210013)(tparser205203* p);
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tnode187813*, parseall_210006)(tparser205203* p) {
	tnode187813* result;
	nimfr("parseAll", "pbraces.nim")
	result = 0;
	nimln(14, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}

N_NIMCALL(tnode187813*, parsetoplevelstmt_210013)(tparser205203* p) {
	tnode187813* result;
	nimfr("parseTopLevelStmt", "pbraces.nim")
	result = 0;
	nimln(17, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}
N_NOINLINE(void, pbracesInit)(void) {
	nimfr("pbraces", "pbraces.nim")
	popFrame();
}

N_NOINLINE(void, pbracesDatInit)(void) {
}

