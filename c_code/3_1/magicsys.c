/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym186843 tsym186843;
typedef struct ttype186847 ttype186847;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tnode186813 tnode186813;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tcell41490 tcell41490;
typedef struct tcellseq41506 tcellseq41506;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellset41502 tcellset41502;
typedef struct tpagedesc41498 tpagedesc41498;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident166019 tident166019;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct tlib186831 tlib186831;
typedef struct tidentiter195106 tidentiter195106;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
typedef ttype186847* TY241045[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable186817  {
NI Counter;
tsymseq186815* Data;
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
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  tloc186827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype186847* T;
trope144007* R;
trope144007* Heaproot;
NI A;
};
struct  ttype186847  {
  tidobj166013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq186845* Sons;
tnode186813* N;
tsym186843* Destructor;
tsym186843* Owner;
tsym186843* Sym;
NI64 Size;
NI Align;
tloc186827 Loc;
};
struct  tcell41490  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41506  {
NI Len;
NI Cap;
tcell41490** D;
};
struct  tcellset41502  {
NI Counter;
NI Max;
tpagedesc41498* Head;
tpagedesc41498** Data;
};
typedef tsmallchunk23038* TY23822[512];
typedef ttrunk23011* ttrunkbuckets23013[256];
struct  tintset23015  {
ttrunkbuckets23013 Data;
};
struct  tmemregion23810  {
NI Minlargeobj;
NI Maxlargeobj;
TY23822 Freesmallchunks;
tllchunk23804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23040* Freechunkslist;
tintset23015 Chunkstarts;
tavlnode23808* Root;
tavlnode23808* Deleted;
tavlnode23808* Last;
tavlnode23808* Freeavlnodes;
};
struct  tgcstat43414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41506 Zct;
tcellseq41506 Decstack;
tcellset41502 Cycleroots;
tcellseq41506 Tempstack;
NI Recgclock;
tmemregion23810 Region;
tgcstat43414 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tsym186843  {
  tidobj166013 Sup;
NU8 Kind;
union {
struct {ttypeseq186845* Typeinstcache;
tscope186837* Typscope;
} S1;
struct {TY186943* Procinstcache;
tscope186837* Scope;
} S2;
struct {TY186943* Usedgenerics;
tstrtable186817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype186847* Typ;
tident166019* Name;
tlineinfo162527 Info;
tsym186843* Owner;
NU32 Flags;
tnode186813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc186827 Loc;
tlib186831* Annex;
tnode186813* Constraint;
};
struct  tidentiter195106  {
NI H;
tident166019* Name;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef ttype186847* TY241287[70];
struct  tnode186813  {
ttype186847* Typ;
tlineinfo162527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym186843* Sym;
} S4;
struct {tident166019* Ident;
} S5;
struct {tnodeseq186807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY187025[20];
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY23018[16];
struct  tpagedesc41498  {
tpagedesc41498* Next;
NI Key;
TY23018 Bits;
};
struct  tbasechunk23036  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23038  {
  tbasechunk23036 Sup;
tsmallchunk23038* Next;
tsmallchunk23038* Prev;
tfreecell23028* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23804  {
NI Size;
NI Acc;
tllchunk23804* Next;
};
struct  tbigchunk23040  {
  tbasechunk23036 Sup;
tbigchunk23040* Next;
tbigchunk23040* Prev;
NI Align;
NF Data;
};
struct  ttrunk23011  {
ttrunk23011* Next;
NI Key;
TY23018 Bits;
};
typedef tavlnode23808* TY23814[2];
struct  tavlnode23808  {
TY23814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
NI H;
};
struct  tscope186837  {
NI Depthlevel;
tstrtable186817 Symbols;
tnodeseq186807* Usingsyms;
tscope186837* Parent;
};
struct  tinstantiation186833  {
tsym186843* Sym;
ttypeseq186845* Concretetypes;
TY186932* Usedby;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib186831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope144007* Name;
tnode186813* Path;
};
struct  tfreecell23028  {
tfreecell23028* Next;
NI Zerofield;
};
struct tsymseq186815 {
  TGenericSeq Sup;
  tsym186843* data[SEQ_DECL_SIZE];
};
struct ttypeseq186845 {
  TGenericSeq Sup;
  ttype186847* data[SEQ_DECL_SIZE];
};
struct TY186943 {
  TGenericSeq Sup;
  tinstantiation186833* data[SEQ_DECL_SIZE];
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registersystype_241020)(ttype186847* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
N_NIMCALL(ttype186847*, newsystype_241075)(NU8 kind, NI size);
N_NIMCALL(ttype186847*, newtype_187070)(NU8 kind, tsym186843* owner);
N_NIMCALL(tsym186843*, getsyssym_241040)(NimStringDesc* name);
N_NIMCALL(tsym186843*, strtableget_195084)(tstrtable186817 t, tident166019* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(tident166019*, getident_166456)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_164386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym186843*, newsym_187063)(NU8 symkind, tident166019* name, tsym186843* owner, tlineinfo162527 info);
N_NIMCALL(void, loadstub_238239)(tsym186843* s);
N_NIMCALL(tsym186843*, getsysmagic_241128)(NimStringDesc* name, NU16 m);
N_NIMCALL(tsym186843*, initidentiter_195110)(tidentiter195106* ti, tstrtable186817 tab, tident166019* s);
N_NIMCALL(tsym186843*, nextidentiter_195117)(tidentiter195106* ti, tstrtable186817 tab);
N_NIMCALL(ttype186847*, systypefromname_241204)(NimStringDesc* name);
N_NIMCALL(ttype186847*, getsystype_241024)(NU8 kind);
N_NIMCALL(void, internalerror_164606)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76280, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_241292)(void);
N_NIMCALL(void, initstrtable_187120)(tstrtable186817* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(ttype186847*, getintlittype_241378)(tnode186813* literal);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(ttype186847*, copytype_187151)(ttype186847* t, tsym186843* owner, NIM_BOOL keepid);
N_NIMCALL(ttype186847*, getfloatlittype_241418)(tnode186813* literal);
static N_INLINE(ttype186847*, skipintlit_241424)(ttype186847* t);
N_NIMCALL(void, addsonskipintlit_241461)(ttype186847* father, ttype186847* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_190852)(ttype186847* owner, ttype186847* elem);
N_NIMCALL(void, setintlittype_241517)(tnode186813* result);
N_NIMCALL(void, internalerror_164591)(tlineinfo162527 info, NimStringDesc* errmsg);
N_NIMCALL(tsym186843*, getcompilerproc_241028)(NimStringDesc* name);
N_NIMCALL(tident166019*, getident_166462)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_119859)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_195078)(tstrtable186817* t, tsym186843* n);
N_NIMCALL(void, registercompilerproc_241032)(tsym186843* s);
N_NIMCALL(void, finishsystem_241036)(tstrtable186817 tab);
STRING_LITERAL(TMP3108, "tab", 3);
STRING_LITERAL(TMP3109, "int", 3);
STRING_LITERAL(TMP3110, "int8", 4);
STRING_LITERAL(TMP3111, "int16", 5);
STRING_LITERAL(TMP3112, "int32", 5);
STRING_LITERAL(TMP3113, "int64", 5);
STRING_LITERAL(TMP3114, "uint", 4);
STRING_LITERAL(TMP3115, "uint8", 5);
STRING_LITERAL(TMP3116, "uint16", 6);
STRING_LITERAL(TMP3117, "uint32", 6);
STRING_LITERAL(TMP3118, "uint64", 6);
STRING_LITERAL(TMP3119, "float", 5);
STRING_LITERAL(TMP3120, "float32", 7);
STRING_LITERAL(TMP3121, "float64", 7);
STRING_LITERAL(TMP3122, "float128", 8);
STRING_LITERAL(TMP3123, "bool", 4);
STRING_LITERAL(TMP3124, "char", 4);
STRING_LITERAL(TMP3125, "string", 6);
STRING_LITERAL(TMP3126, "cstring", 7);
STRING_LITERAL(TMP3127, "pointer", 7);
STRING_LITERAL(TMP3128, "request for typekind: ", 22);
STRING_LITERAL(TMP3129, "wanted: ", 8);
STRING_LITERAL(TMP3130, " got: ", 6);
STRING_LITERAL(TMP3131, "type not found: ", 16);
static NIM_CONST TY187025 TMP3132 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3133, "intVal", 6);
STRING_LITERAL(TMP3134, "invalid int size", 16);
tsym186843* systemmodule_241017;
TY241045 gsystypes_241048;
tstrtable186817 compilerprocs_241049;
extern TFrame* frameptr_13238;
extern tgcheap43416 gch_43444;
extern NI ptrsize_141592;
extern TNimType NTI186240; /* TTypeKind */
TY241287 inttypecache_241289;
extern TNimType NTI186845; /* TTypeSeq */
extern NI intsize_141590;
extern tstrtable186817 rodcompilerprocs_235058;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(tcell41490*, usrtocell_44843)(void* usr) {
	tcell41490* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41490*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41490))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41490* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41490* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44843(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41490* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44843((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46402(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, registersystype_241020)(ttype186847* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(31, "magicsys.nim");
	{
		nimln(31, "magicsys.nim");
		if (!(gsystypes_241048[((*t).Kind)- 0] == NIM_NIL)) goto LA3;
		nimln(31, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_241048[((*t).Kind)- 0], t);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(ttype186847*, newsystype_241075)(NU8 kind, NI size) {
	ttype186847* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(34, "magicsys.nim");
	result = newtype_187070(kind, systemmodule_241017);
	nimln(35, "magicsys.nim");
	(*result).Size = ((NI64) (size));
	nimln(36, "magicsys.nim");
	(*result).Align = size;
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, getsyssym_241040)(NimStringDesc* name) {
	tsym186843* result;
	tident166019* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(39, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_241017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3108));
	nimln(39, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getident_166456(name);
	result = strtableget_195084((*systemmodule_241017).kindU.S3.Tab, LOC1);
	nimln(40, "magicsys.nim");
	{
		tident166019* LOC6;
		nimln(40, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(41, "magicsys.nim");
		rawmessage_164386(((NU16) 64), name);
		nimln(42, "magicsys.nim");
		nimln(42, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_166456(name);
		result = newsym_187063(((NU8) 0), LOC6, systemmodule_241017, (*systemmodule_241017).Info);
		nimln(43, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, newtype_187070(((NU8) 50), systemmodule_241017));
	}
	LA4: ;
	nimln(44, "magicsys.nim");
	{
		nimln(44, "magicsys.nim");
		if (!((*result).Kind == ((NU8) 23))) goto LA9;
		nimln(44, "magicsys.nim");
		loadstub_238239(result);
	}
	LA9: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, getsysmagic_241128)(NimStringDesc* name, NU16 m) {
	tsym186843* result;
	tidentiter195106 ti;
	tident166019* id;
	nimfr("getSysMagic", "magicsys.nim")
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	nimln(48, "magicsys.nim");
	id = getident_166456(name);
	nimln(49, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_241017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3108));
	result = initidentiter_195110(&ti, (*systemmodule_241017).kindU.S3.Tab, id);
	nimln(50, "magicsys.nim");
	while (1) {
		nimln(50, "magicsys.nim");
		nimln(50, "magicsys.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(51, "magicsys.nim");
		{
			nimln(51, "magicsys.nim");
			if (!((*result).Kind == ((NU8) 23))) goto LA4;
			nimln(51, "magicsys.nim");
			loadstub_238239(result);
		}
		LA4: ;
		nimln(52, "magicsys.nim");
		{
			nimln(52, "magicsys.nim");
			if (!((*result).Magic == m)) goto LA8;
			nimln(52, "magicsys.nim");
			goto BeforeRet;
		}
		LA8: ;
		nimln(53, "magicsys.nim");
		if (!(((64 &(1<<(((*systemmodule_241017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3108));
		result = nextidentiter_195117(&ti, (*systemmodule_241017).kindU.S3.Tab);
	} LA1: ;
	nimln(54, "magicsys.nim");
	rawmessage_164386(((NU16) 64), name);
	nimln(55, "magicsys.nim");
	result = newsym_187063(((NU8) 0), id, systemmodule_241017, (*systemmodule_241017).Info);
	nimln(56, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).Typ, newtype_187070(((NU8) 50), systemmodule_241017));
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(ttype186847*, systypefromname_241204)(NimStringDesc* name) {
	ttype186847* result;
	tsym186843* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(59, "magicsys.nim");
	nimln(59, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_241040(name);
	result = (*LOC1).Typ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(ttype186847*, getsystype_241024)(NU8 kind) {
	ttype186847* result;
	nimfr("getSysType", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	result = gsystypes_241048[(kind)- 0];
	nimln(63, "magicsys.nim");
	{
		nimln(63, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA3;
		nimln(64, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(65, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3109));
		}
		break;
		case ((NU8) 32):
		{
			nimln(66, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3110));
		}
		break;
		case ((NU8) 33):
		{
			nimln(67, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3111));
		}
		break;
		case ((NU8) 34):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3112));
		}
		break;
		case ((NU8) 35):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3113));
		}
		break;
		case ((NU8) 40):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3114));
		}
		break;
		case ((NU8) 41):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3115));
		}
		break;
		case ((NU8) 42):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3116));
		}
		break;
		case ((NU8) 43):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3117));
		}
		break;
		case ((NU8) 44):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3118));
		}
		break;
		case ((NU8) 36):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3119));
		}
		break;
		case ((NU8) 37):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3120));
		}
		break;
		case ((NU8) 38):
		{
			nimln(77, "magicsys.nim");
			nimln(77, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3121));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3122));
		}
		break;
		case ((NU8) 1):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3123));
		}
		break;
		case ((NU8) 2):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3124));
		}
		break;
		case ((NU8) 28):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3125));
		}
		break;
		case ((NU8) 29):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3126));
		}
		break;
		case ((NU8) 26):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_241204(((NimStringDesc*) &TMP3127));
		}
		break;
		case ((NU8) 5):
		{
			nimln(84, "magicsys.nim");
			result = newsystype_241075(((NU8) 5), ptrsize_141592);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(85, "magicsys.nim");
			nimln(85, "magicsys.nim");
			LOC26 = 0;
			nimln(85, "magicsys.nim");
			LOC26 = rawNewString(reprEnum(kind, (&NTI186240))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP3128));
appendString(LOC26, reprEnum(kind, (&NTI186240)));
			internalerror_164606(LOC26);
		}
		break;
		}
		nimln(86, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_241048[(kind)- 0], result);
	}
	LA3: ;
	nimln(87, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		nimln(87, "magicsys.nim");
		nimln(87, "magicsys.nim");
		if (!!(((*result).Kind == kind))) goto LA29;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = 0;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = rawNewString(reprEnum(kind, (&NTI186240))->Sup.len + reprEnum((*result).Kind, (&NTI186240))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP3129));
appendString(LOC31, reprEnum(kind, (&NTI186240)));
appendString(LOC31, ((NimStringDesc*) &TMP3130));
appendString(LOC31, reprEnum((*result).Kind, (&NTI186240)));
		internalerror_164606(LOC31);
	}
	LA29: ;
	nimln(89, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		nimln(89, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA34;
		nimln(89, "magicsys.nim");
		nimln(89, "magicsys.nim");
		LOC36 = 0;
		nimln(89, "magicsys.nim");
		LOC36 = rawNewString(reprEnum(kind, (&NTI186240))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP3131));
appendString(LOC36, reprEnum(kind, (&NTI186240)));
		internalerror_164606(LOC36);
	}
	LA34: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, resetsystypes_241292)(void) {
	NU8 i_241335;
	NU8 res_241369;
	NI i_241367;
	NI res_241372;
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(95, "magicsys.nim");
	asgnRefNoCycle((void**) &systemmodule_241017, NIM_NIL);
	nimln(96, "magicsys.nim");
	initstrtable_187120(&compilerprocs_241049);
	i_241335 = 0;
	nimln(1457, "system.nim");
	res_241369 = ((NU8) 0);
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_241369 <= ((NU8) 61))) goto LA1;
		nimln(1457, "system.nim");
		i_241335 = res_241369;
		nimln(98, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_241048[(i_241335)- 0], NIM_NIL);
		nimln(1460, "system.nim");
		res_241369 = addInt(res_241369, 1);
	} LA1: ;
	i_241367 = 0;
	nimln(1457, "system.nim");
	res_241372 = -5;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(((NI) (res_241372)) <= 64)) goto LA2;
		nimln(1457, "system.nim");
		i_241367 = res_241372;
		nimln(101, "magicsys.nim");
		if (i_241367 < -5 || i_241367 > 64) raiseIndexError();
		asgnRefNoCycle((void**) &inttypecache_241289[(i_241367)- -5], NIM_NIL);
		nimln(1460, "system.nim");
		res_241372 = addInt(res_241372, 1);
	} LA2: ;
	popFrame();
}

N_NIMCALL(ttype186847*, getintlittype_241378)(tnode186813* literal) {
	ttype186847* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(105, "magicsys.nim");
	if (!(((TMP3132[(*literal).Kind/8] &(1<<((*literal).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3133));
	value = (*literal).kindU.S1.Intval;
	nimln(106, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(106, "magicsys.nim");
		LOC3 = 0;
		nimln(106, "magicsys.nim");
		LOC3 = (-5 <= value);
		if (!(LOC3)) goto LA4;
		nimln(106, "magicsys.nim");
		LOC3 = (value <= 64);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(107, "magicsys.nim");
		if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
		result = inttypecache_241289[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5];
		nimln(108, "magicsys.nim");
		{
			ttype186847* ti;
			nimln(108, "magicsys.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(109, "magicsys.nim");
			ti = getsystype_241024(((NU8) 31));
			nimln(110, "magicsys.nim");
			result = copytype_187151(ti, (*ti).Owner, NIM_FALSE);
			nimln(111, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).N, literal);
			nimln(112, "magicsys.nim");
			if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
			asgnRefNoCycle((void**) &inttypecache_241289[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5], result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		ttype186847* ti;
		nimln(114, "magicsys.nim");
		ti = getsystype_241024(((NU8) 31));
		nimln(115, "magicsys.nim");
		result = copytype_187151(ti, (*ti).Owner, NIM_FALSE);
		nimln(116, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).N, literal);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(ttype186847*, getfloatlittype_241418)(tnode186813* literal) {
	ttype186847* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(120, "magicsys.nim");
	result = newsystype_241075(((NU8) 36), 8);
	nimln(121, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).N, literal);
	popFrame();
	return result;
}

static N_INLINE(ttype186847*, skipintlit_241424)(ttype186847* t) {
	ttype186847* result;
	nimfr("skipIntLit", "magicsys.nim")
	result = 0;
	nimln(124, "magicsys.nim");
	{
		nimln(124, "magicsys.nim");
		nimln(124, "magicsys.nim");
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		nimln(125, "magicsys.nim");
		{
			nimln(125, "magicsys.nim");
			if (!((*t).Kind == ((NU8) 31) || (*t).Kind == ((NU8) 36))) goto LA7;
			nimln(126, "magicsys.nim");
			nimln(126, "magicsys.nim");
			result = getsystype_241024((*t).Kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	nimln(127, "magicsys.nim");
	result = t;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41490* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44843(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, addsonskipintlit_241461)(ttype186847* father, ttype186847* son) {
	ttype186847* s;
	nimfr("addSonSkipIntLit", "magicsys.nim")
	nimln(130, "magicsys.nim");
	{
		nimln(130, "magicsys.nim");
		if (!(*father).Sons == 0) goto LA3;
		nimln(130, "magicsys.nim");
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq186845*) newSeqRC1((&NTI186845), 0);
	}
	LA3: ;
	nimln(131, "magicsys.nim");
	s = skipintlit_241424(son);
	nimln(132, "magicsys.nim");
	(*father).Sons = (ttypeseq186845*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype186847*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], s);
	nimln(133, "magicsys.nim");
	propagatetoowner_190852(father, s);
	popFrame();
}

N_NIMCALL(void, setintlittype_241517)(tnode186813* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(136, "magicsys.nim");
	if (!(((TMP3132[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3133));
	i = (*result).kindU.S1.Intval;
	nimln(137, "magicsys.nim");
	switch (intsize_141590) {
	case 8:
	{
		nimln(138, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, getintlittype_241378(result));
	}
	break;
	case 4:
	{
		nimln(140, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			nimln(140, "magicsys.nim");
			LOC5 = 0;
			nimln(140, "magicsys.nim");
			LOC5 = ((-2147483647 -1) <= i);
			if (!(LOC5)) goto LA6;
			nimln(140, "magicsys.nim");
			LOC5 = (i <= 2147483647);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(141, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_241378(result));
		}
		goto LA3;
		LA7: ;
		{
			nimln(143, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case 2:
	{
		nimln(145, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			nimln(145, "magicsys.nim");
			LOC13 = 0;
			nimln(145, "magicsys.nim");
			LOC13 = (-32768 <= i);
			if (!(LOC13)) goto LA14;
			nimln(145, "magicsys.nim");
			LOC13 = (i <= 32767);
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_241378(result));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(147, "magicsys.nim");
			LOC18 = 0;
			nimln(147, "magicsys.nim");
			LOC18 = ((-2147483647 -1) <= i);
			if (!(LOC18)) goto LA19;
			nimln(147, "magicsys.nim");
			LOC18 = (i <= 2147483647);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(148, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			nimln(150, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case 1:
	{
		nimln(153, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			nimln(153, "magicsys.nim");
			LOC26 = 0;
			nimln(153, "magicsys.nim");
			LOC26 = (-128 <= i);
			if (!(LOC26)) goto LA27;
			nimln(153, "magicsys.nim");
			LOC26 = (i <= 127);
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(154, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_241378(result));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(155, "magicsys.nim");
			LOC31 = 0;
			nimln(155, "magicsys.nim");
			LOC31 = (-32768 <= i);
			if (!(LOC31)) goto LA32;
			nimln(155, "magicsys.nim");
			LOC31 = (i <= 32767);
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(156, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(157, "magicsys.nim");
			LOC36 = 0;
			nimln(157, "magicsys.nim");
			LOC36 = ((-2147483647 -1) <= i);
			if (!(LOC36)) goto LA37;
			nimln(157, "magicsys.nim");
			LOC36 = (i <= 2147483647);
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(158, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			nimln(160, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_241024(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		nimln(161, "magicsys.nim");
		internalerror_164591((*result).Info, ((NimStringDesc*) &TMP3134));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(tsym186843*, getcompilerproc_241028)(NimStringDesc* name) {
	tsym186843* result;
	tident166019* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(164, "magicsys.nim");
	nimln(164, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_119859(name);
	ident = getident_166462(name, LOC1);
	nimln(165, "magicsys.nim");
	result = strtableget_195084(compilerprocs_241049, ident);
	nimln(166, "magicsys.nim");
	{
		nimln(166, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(167, "magicsys.nim");
		result = strtableget_195084(rodcompilerprocs_235058, ident);
		nimln(168, "magicsys.nim");
		{
			nimln(168, "magicsys.nim");
			nimln(168, "magicsys.nim");
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(169, "magicsys.nim");
			strtableadd_195078(&compilerprocs_241049, result);
			nimln(170, "magicsys.nim");
			{
				nimln(170, "magicsys.nim");
				if (!((*result).Kind == ((NU8) 23))) goto LA12;
				nimln(170, "magicsys.nim");
				loadstub_238239(result);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, registercompilerproc_241032)(tsym186843* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(173, "magicsys.nim");
	strtableadd_195078(&compilerprocs_241049, s);
	popFrame();
}

N_NIMCALL(void, finishsystem_241036)(tstrtable186817 tab) {
	nimfr("finishSystem", "magicsys.nim")
	popFrame();
}
N_NOINLINE(void, magicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(177, "magicsys.nim");
	initstrtable_187120(&compilerprocs_241049);
	popFrame();
}

N_NOINLINE(void, magicsysDatInit)(void) {
}

