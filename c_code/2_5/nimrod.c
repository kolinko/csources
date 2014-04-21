/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tcell41288 tcell41288;
typedef struct tcellseq41304 tcellseq41304;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41300 tcellset41300;
typedef struct tpagedesc41296 tpagedesc41296;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct TY109700 TY109700;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY11626;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11626 raiseAction;
};
struct  tcell41288  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41304  {
NI Len;
NI Cap;
tcell41288** D;
};
struct  tcellset41300  {
NI Counter;
NI Max;
tpagedesc41296* Head;
tpagedesc41296** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41304 Zct;
tcellseq41304 Decstack;
tcellset41300 Cycleroots;
tcellseq41304 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY109700 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY22818[16];
struct  tpagedesc41296  {
tpagedesc41296* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, prependcurdir_531401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, handlecmdline_531603)(void);
N_NIMCALL(NI, paramcount_115233)(void);
N_NIMCALL(void, writecommandlineusage_173002)(void);
N_NIMCALL(void, processcmdline_525207)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_137335)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41288* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41288* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41288* c);
N_NOINLINE(void, incl_42055)(tcellset41300* s, tcell41288* cell);
static N_INLINE(void, decref_46602)(tcell41288* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY109700* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_183607)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_169714)(void);
N_NIMCALL(void, maincommand_529011)(void);
N_NIMCALL(NimStringDesc*, gcgetstatistics_6621)(void);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, completecfilepath_169753)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_169785)(NimStringDesc* cmd);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, gcdisablemarkandsweep_6619)(void);
N_NIMCALL(void, initdefines_168072)(void);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, testabilityInit)(void);
N_NOINLINE(void, testabilityDatInit)(void);
N_NOINLINE(void, stdlibparseutilsInit)(void);
N_NOINLINE(void, stdlibparseutilsDatInit)(void);
N_NOINLINE(void, stdlibstrutilsInit)(void);
N_NOINLINE(void, stdlibstrutilsDatInit)(void);
N_NOINLINE(void, stdlibtimesInit)(void);
N_NOINLINE(void, stdlibtimesDatInit)(void);
N_NOINLINE(void, stdlibposixInit)(void);
N_NOINLINE(void, stdlibposixDatInit)(void);
N_NOINLINE(void, stdlibosInit)(void);
N_NOINLINE(void, stdlibosDatInit)(void);
N_NOINLINE(void, listsInit)(void);
N_NOINLINE(void, listsDatInit)(void);
N_NOINLINE(void, stdlibhashesInit)(void);
N_NOINLINE(void, stdlibhashesDatInit)(void);
N_NOINLINE(void, stdlibstrtabsInit)(void);
N_NOINLINE(void, stdlibstrtabsDatInit)(void);
N_NOINLINE(void, stdlibstreamsInit)(void);
N_NOINLINE(void, stdlibstreamsDatInit)(void);
N_NOINLINE(void, stdliblinuxInit)(void);
N_NOINLINE(void, stdliblinuxDatInit)(void);
N_NOINLINE(void, stdlibosprocInit)(void);
N_NOINLINE(void, stdlibosprocDatInit)(void);
N_NOINLINE(void, stdlibmathInit)(void);
N_NOINLINE(void, stdlibmathDatInit)(void);
N_NOINLINE(void, stdlibsetsInit)(void);
N_NOINLINE(void, stdlibsetsDatInit)(void);
N_NOINLINE(void, optionsInit)(void);
N_NOINLINE(void, optionsDatInit)(void);
N_NOINLINE(void, stdlibtablesInit)(void);
N_NOINLINE(void, stdlibtablesDatInit)(void);
N_NOINLINE(void, platformInit)(void);
N_NOINLINE(void, platformDatInit)(void);
N_NOINLINE(void, crcInit)(void);
N_NOINLINE(void, crcDatInit)(void);
N_NOINLINE(void, ropesInit)(void);
N_NOINLINE(void, ropesDatInit)(void);
N_NOINLINE(void, stdlibunsignedInit)(void);
N_NOINLINE(void, stdlibunsignedDatInit)(void);
N_NOINLINE(void, stdlibsocketsInit)(void);
N_NOINLINE(void, stdlibsocketsDatInit)(void);
N_NOINLINE(void, msgsInit)(void);
N_NOINLINE(void, msgsDatInit)(void);
N_NOINLINE(void, nversionInit)(void);
N_NOINLINE(void, nversionDatInit)(void);
N_NOINLINE(void, identsInit)(void);
N_NOINLINE(void, identsDatInit)(void);
N_NOINLINE(void, condsymsInit)(void);
N_NOINLINE(void, condsymsDatInit)(void);
N_NOINLINE(void, extccompInit)(void);
N_NOINLINE(void, extccompDatInit)(void);
N_NOINLINE(void, wordrecgInit)(void);
N_NOINLINE(void, wordrecgDatInit)(void);
N_NOINLINE(void, babelcmdInit)(void);
N_NOINLINE(void, babelcmdDatInit)(void);
N_NOINLINE(void, commandsInit)(void);
N_NOINLINE(void, commandsDatInit)(void);
N_NOINLINE(void, llstreamInit)(void);
N_NOINLINE(void, llstreamDatInit)(void);
N_NOINLINE(void, nimlexbaseInit)(void);
N_NOINLINE(void, nimlexbaseDatInit)(void);
N_NOINLINE(void, lexerInit)(void);
N_NOINLINE(void, lexerDatInit)(void);
N_NOINLINE(void, nimconfInit)(void);
N_NOINLINE(void, nimconfDatInit)(void);
N_NOINLINE(void, stdlibintsetsInit)(void);
N_NOINLINE(void, stdlibintsetsDatInit)(void);
N_NOINLINE(void, idgenInit)(void);
N_NOINLINE(void, idgenDatInit)(void);
N_NOINLINE(void, astInit)(void);
N_NOINLINE(void, astDatInit)(void);
N_NOINLINE(void, rodutilsInit)(void);
N_NOINLINE(void, rodutilsDatInit)(void);
N_NOINLINE(void, astalgoInit)(void);
N_NOINLINE(void, astalgoDatInit)(void);
N_NOINLINE(void, parserInit)(void);
N_NOINLINE(void, parserDatInit)(void);
N_NOINLINE(void, pbracesInit)(void);
N_NOINLINE(void, pbracesDatInit)(void);
N_NOINLINE(void, rendererInit)(void);
N_NOINLINE(void, rendererDatInit)(void);
N_NOINLINE(void, filtersInit)(void);
N_NOINLINE(void, filtersDatInit)(void);
N_NOINLINE(void, filter_tmplInit)(void);
N_NOINLINE(void, filter_tmplDatInit)(void);
N_NOINLINE(void, syntaxesInit)(void);
N_NOINLINE(void, syntaxesDatInit)(void);
N_NOINLINE(void, treesInit)(void);
N_NOINLINE(void, treesDatInit)(void);
N_NOINLINE(void, typesInit)(void);
N_NOINLINE(void, typesDatInit)(void);
N_NOINLINE(void, stdlibmemfilesInit)(void);
N_NOINLINE(void, stdlibmemfilesDatInit)(void);
N_NOINLINE(void, rodreadInit)(void);
N_NOINLINE(void, rodreadDatInit)(void);
N_NOINLINE(void, magicsysInit)(void);
N_NOINLINE(void, magicsysDatInit)(void);
N_NOINLINE(void, bitsetsInit)(void);
N_NOINLINE(void, bitsetsDatInit)(void);
N_NOINLINE(void, nimsetsInit)(void);
N_NOINLINE(void, nimsetsDatInit)(void);
N_NOINLINE(void, passesInit)(void);
N_NOINLINE(void, passesDatInit)(void);
N_NOINLINE(void, treetabInit)(void);
N_NOINLINE(void, treetabDatInit)(void);
N_NOINLINE(void, vmdefInit)(void);
N_NOINLINE(void, vmdefDatInit)(void);
N_NOINLINE(void, semdataInit)(void);
N_NOINLINE(void, semdataDatInit)(void);
N_NOINLINE(void, lookupsInit)(void);
N_NOINLINE(void, lookupsDatInit)(void);
N_NOINLINE(void, importerInit)(void);
N_NOINLINE(void, importerDatInit)(void);
N_NOINLINE(void, rodwriteInit)(void);
N_NOINLINE(void, rodwriteDatInit)(void);
N_NOINLINE(void, saturateInit)(void);
N_NOINLINE(void, saturateDatInit)(void);
N_NOINLINE(void, semfoldInit)(void);
N_NOINLINE(void, semfoldDatInit)(void);
N_NOINLINE(void, procfindInit)(void);
N_NOINLINE(void, procfindDatInit)(void);
N_NOINLINE(void, pragmasInit)(void);
N_NOINLINE(void, pragmasDatInit)(void);
N_NOINLINE(void, semtypinstInit)(void);
N_NOINLINE(void, semtypinstDatInit)(void);
N_NOINLINE(void, parampatternsInit)(void);
N_NOINLINE(void, parampatternsDatInit)(void);
N_NOINLINE(void, stdliblexbaseInit)(void);
N_NOINLINE(void, stdliblexbaseDatInit)(void);
N_NOINLINE(void, stdlibunicodeInit)(void);
N_NOINLINE(void, stdlibunicodeDatInit)(void);
N_NOINLINE(void, stdlibjsonInit)(void);
N_NOINLINE(void, stdlibjsonDatInit)(void);
N_NOINLINE(void, docutilsrstastInit)(void);
N_NOINLINE(void, docutilsrstastDatInit)(void);
N_NOINLINE(void, docutilsrstInit)(void);
N_NOINLINE(void, docutilsrstDatInit)(void);
N_NOINLINE(void, docutilshighliteInit)(void);
N_NOINLINE(void, docutilshighliteDatInit)(void);
N_NOINLINE(void, docutilsrstgenInit)(void);
N_NOINLINE(void, docutilsrstgenDatInit)(void);
N_NOINLINE(void, guardsInit)(void);
N_NOINLINE(void, guardsDatInit)(void);
N_NOINLINE(void, sempass2Init)(void);
N_NOINLINE(void, sempass2DatInit)(void);
N_NOINLINE(void, stdlibmacrosInit)(void);
N_NOINLINE(void, stdlibmacrosDatInit)(void);
N_NOINLINE(void, stdlibxmltreeInit)(void);
N_NOINLINE(void, stdlibxmltreeDatInit)(void);
N_NOINLINE(void, stdlibcookiesInit)(void);
N_NOINLINE(void, stdlibcookiesDatInit)(void);
N_NOINLINE(void, stdlibcgiInit)(void);
N_NOINLINE(void, stdlibcgiDatInit)(void);
N_NOINLINE(void, typesrendererInit)(void);
N_NOINLINE(void, typesrendererDatInit)(void);
N_NOINLINE(void, docgenInit)(void);
N_NOINLINE(void, docgenDatInit)(void);
N_NOINLINE(void, stdlibalgorithmInit)(void);
N_NOINLINE(void, stdlibalgorithmDatInit)(void);
N_NOINLINE(void, stdlibsequtilsInit)(void);
N_NOINLINE(void, stdlibsequtilsDatInit)(void);
N_NOINLINE(void, prettyInit)(void);
N_NOINLINE(void, prettyDatInit)(void);
N_NOINLINE(void, sigmatchInit)(void);
N_NOINLINE(void, sigmatchDatInit)(void);
N_NOINLINE(void, cgmethInit)(void);
N_NOINLINE(void, cgmethDatInit)(void);
N_NOINLINE(void, loweringsInit)(void);
N_NOINLINE(void, loweringsDatInit)(void);
N_NOINLINE(void, lambdaliftingInit)(void);
N_NOINLINE(void, lambdaliftingDatInit)(void);
N_NOINLINE(void, transfInit)(void);
N_NOINLINE(void, transfDatInit)(void);
N_NOINLINE(void, vmgenInit)(void);
N_NOINLINE(void, vmgenDatInit)(void);
N_NOINLINE(void, vmdepsInit)(void);
N_NOINLINE(void, vmdepsDatInit)(void);
N_NOINLINE(void, evaltemplInit)(void);
N_NOINLINE(void, evaltemplDatInit)(void);
N_NOINLINE(void, vmInit)(void);
N_NOINLINE(void, vmDatInit)(void);
N_NOINLINE(void, aliasesInit)(void);
N_NOINLINE(void, aliasesDatInit)(void);
N_NOINLINE(void, patternsInit)(void);
N_NOINLINE(void, patternsDatInit)(void);
N_NOINLINE(void, semmacrosanityInit)(void);
N_NOINLINE(void, semmacrosanityDatInit)(void);
N_NOINLINE(void, semInit)(void);
N_NOINLINE(void, semDatInit)(void);
N_NOINLINE(void, ccgutilsInit)(void);
N_NOINLINE(void, ccgutilsDatInit)(void);
N_NOINLINE(void, cgendataInit)(void);
N_NOINLINE(void, cgendataDatInit)(void);
N_NOINLINE(void, ccgmergeInit)(void);
N_NOINLINE(void, ccgmergeDatInit)(void);
N_NOINLINE(void, cgenInit)(void);
N_NOINLINE(void, cgenDatInit)(void);
N_NOINLINE(void, jsgenInit)(void);
N_NOINLINE(void, jsgenDatInit)(void);
N_NOINLINE(void, passauxInit)(void);
N_NOINLINE(void, passauxDatInit)(void);
N_NOINLINE(void, dependsInit)(void);
N_NOINLINE(void, dependsDatInit)(void);
N_NOINLINE(void, docgen2Init)(void);
N_NOINLINE(void, docgen2DatInit)(void);
N_NOINLINE(void, stdlibparseoptInit)(void);
N_NOINLINE(void, stdlibparseoptDatInit)(void);
N_NOINLINE(void, serviceInit)(void);
N_NOINLINE(void, serviceDatInit)(void);
N_NOINLINE(void, modulesInit)(void);
N_NOINLINE(void, modulesDatInit)(void);
N_NOINLINE(void, mainInit)(void);
N_NOINLINE(void, mainDatInit)(void);
N_NOINLINE(void, nimrodInit)(void);
N_NOINLINE(void, nimrodDatInit)(void);
STRING_LITERAL(TMP7785, "./", 2);
STRING_LITERAL(TMP7786, "", 0);
STRING_LITERAL(TMP7788, "nimrod.cfg", 10);
STRING_LITERAL(TMP7789, "js", 2);
STRING_LITERAL(TMP7790, "node ", 5);
extern TFrame* frameptr_13038;
extern NimStringDesc* gprojectname_137206;
extern TSafePoint* exchandler_13039;
extern NimStringDesc* gprojectfull_137208;
extern tgcheap43216 gch_43244;
extern TNimType NTI2435; /* EOS */
extern E_Base* currexception_13041;
extern NimStringDesc* gprojectpath_137207;
extern NI gverbosity_137120;
extern NI gerrorcounter_164182;
extern NU32 gglobaloptions_137111;
extern NU8 gcmd_137113;
extern NimStringDesc* outfile_137117;
extern NimStringDesc* arguments_525205;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NimStringDesc*, prependcurdir_531401)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("prependCurDir", "nimrod.nim")
	result = 0;
	nimln(29, "nimrod.nim");
	{
		NIM_BOOL LOC3;
		nimln(29, "nimrod.nim");
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		nimln(29, "nimrod.nim");
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		nimln(30, "nimrod.nim");
		nimln(30, "nimrod.nim");
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP7785));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
}

static N_INLINE(tcell41288*, usrtocell_44643)(void* usr) {
	tcell41288* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41288*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41288))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41288* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41288* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44643(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41288* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44643((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13039 = (*exchandler_13039).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13038 = s;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2442, "system.nim");
	result = currexception_13041;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41288* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41288* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_45435)(tcell41288* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42055(&gch_43244.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47027)(tcell41288* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44662(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, decref_46602)(tcell41288* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44662(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41288* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44643(src);
		incref_47027(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41288* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44643((*dest));
		decref_46602(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13041, (*currexception_13041).parent);
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, handlecmdline_531603)(void) {
	nimfr("handleCmdLine", "nimrod.nim")
	nimln(35, "nimrod.nim");
	{
		NI LOC3;
		nimln(35, "nimrod.nim");
		nimln(35, "nimrod.nim");
		LOC3 = 0;
		LOC3 = paramcount_115233();
		if (!(LOC3 == 0)) goto LA4;
		nimln(36, "nimrod.nim");
		writecommandlineusage_173002();
	}
	goto LA1;
	LA4: ;
	{
		nimln(39, "nimrod.nim");
		processcmdline_525207(((NU8) 0), ((NimStringDesc*) &TMP7786));
		nimln(40, "nimrod.nim");
		{
			TSafePoint TMP7787;
			TY109700 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			nimln(40, "nimrod.nim");
			nimln(40, "nimrod.nim");
			if (!!(((gprojectname_137206) && (gprojectname_137206)->Sup.len == 0))) goto LA9;
			nimln(41, "nimrod.nim");
			pushSafePoint(&TMP7787);
			TMP7787.status = setjmp(TMP7787.context);
			if (TMP7787.status == 0) {
				nimln(42, "nimrod.nim");
				asgnRefNoCycle((void**) &gprojectfull_137208, canonicalizepath_137335(gprojectname_137206));
				popSafePoint();
			}
			else {
				popSafePoint();
				setFrame((TFrame*)&F);
				if (isObj(getCurrentException()->Sup.m_type, (&NTI2435))) {
					NimStringDesc* LOC14;
					TMP7787.status = 0;
					nimln(44, "nimrod.nim");
					LOC14 = 0;
					LOC14 = gprojectfull_137208; gprojectfull_137208 = copyStringRC1(gprojectname_137206);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP7787.status != 0) reraiseException();
			nimln(45, "nimrod.nim");
			chckNil((void*)&p);
			memset((void*)&p, 0, sizeof(p));
			nossplitFile(gprojectfull_137208, &p);
			nimln(46, "nimrod.nim");
			LOC15 = 0;
			LOC15 = gprojectpath_137207; gprojectpath_137207 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			nimln(47, "nimrod.nim");
			LOC16 = 0;
			LOC16 = gprojectname_137206; gprojectname_137206 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			nimln(49, "nimrod.nim");
			asgnRefNoCycle((void**) &gprojectpath_137207, nosgetCurrentDir());
		}
		LA7: ;
		nimln(50, "nimrod.nim");
		loadconfigs_183607(((NimStringDesc*) &TMP7788));
		nimln(53, "nimrod.nim");
		initvars_169714();
		nimln(54, "nimrod.nim");
		processcmdline_525207(((NU8) 1), ((NimStringDesc*) &TMP7786));
		nimln(55, "nimrod.nim");
		maincommand_529011();
		nimln(56, "nimrod.nim");
		{
			NimStringDesc* LOC22;
			nimln(56, "nimrod.nim");
			if (!(2 <= gverbosity_137120)) goto LA20;
			nimln(56, "nimrod.nim");
			nimln(56, "nimrod.nim");
			LOC22 = 0;
			LOC22 = gcgetstatistics_6621();
			printf("%s\012", (LOC22)->data);
		}
		LA20: ;
		nimln(58, "nimrod.nim");
		{
			nimln(58, "nimrod.nim");
			if (!(gerrorcounter_164182 == 0)) goto LA25;
			nimln(62, "nimrod.nim");
			{
				nimln(62, "nimrod.nim");
				if (!((gglobaloptions_137111 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				nimln(63, "nimrod.nim");
				{
					NimStringDesc* ex;
					NimStringDesc* LOC44;
					nimln(63, "nimrod.nim");
					if (!(gcmd_137113 == ((NU8) 4))) goto LA33;
					ex = 0;
					nimln(65, "nimrod.nim");
					{
						NimStringDesc* LOC39;
						nimln(65, "nimrod.nim");
						nimln(65, "nimrod.nim");
						if (!(0 < outfile_137117->Sup.len)) goto LA37;
						nimln(66, "nimrod.nim");
						nimln(66, "nimrod.nim");
						LOC39 = 0;
						LOC39 = prependcurdir_531401(outfile_137117);
						ex = nospquoteShell(LOC39);
					}
					goto LA35;
					LA37: ;
					{
						NimStringDesc* LOC41;
						NimStringDesc* LOC42;
						NimStringDesc* LOC43;
						nimln(68, "nimrod.nim");
						nimln(69, "nimrod.nim");
						nimln(69, "nimrod.nim");
						nimln(69, "nimrod.nim");
						LOC41 = 0;
						LOC41 = noschangeFileExt(gprojectfull_137208, ((NimStringDesc*) &TMP7789));
						LOC42 = 0;
						LOC42 = prependcurdir_531401(LOC41);
						LOC43 = 0;
						LOC43 = completecfilepath_169753(LOC42, NIM_TRUE);
						ex = nospquoteShell(LOC43);
					}
					LA35: ;
					nimln(70, "nimrod.nim");
					nimln(70, "nimrod.nim");
					LOC44 = 0;
					LOC44 = rawNewString(ex->Sup.len + arguments_525205->Sup.len + 6);
appendString(LOC44, ((NimStringDesc*) &TMP7790));
appendString(LOC44, ex);
appendChar(LOC44, 32);
appendString(LOC44, arguments_525205);
					execexternalprogram_169785(LOC44);
				}
				goto LA31;
				LA33: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC52;
					binpath = 0;
					nimln(73, "nimrod.nim");
					{
						nimln(73, "nimrod.nim");
						nimln(73, "nimrod.nim");
						if (!(0 < outfile_137117->Sup.len)) goto LA48;
						nimln(75, "nimrod.nim");
						binpath = prependcurdir_531401(outfile_137117);
					}
					goto LA46;
					LA48: ;
					{
						NimStringDesc* LOC51;
						nimln(78, "nimrod.nim");
						nimln(78, "nimrod.nim");
						LOC51 = 0;
						LOC51 = noschangeFileExt(gprojectfull_137208, ((NimStringDesc*) &TMP7786));
						binpath = prependcurdir_531401(LOC51);
					}
					LA46: ;
					nimln(79, "nimrod.nim");
					ex = nospquoteShell(binpath);
					nimln(80, "nimrod.nim");
					nimln(80, "nimrod.nim");
					LOC52 = 0;
					LOC52 = rawNewString(ex->Sup.len + arguments_525205->Sup.len + 1);
appendString(LOC52, ex);
appendChar(LOC52, 32);
appendString(LOC52, arguments_525205);
					execexternalprogram_169785(LOC52);
				}
				LA31: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);
}
void PreMain() {
	systemDatInit();
	systemInit();
	testabilityDatInit();
	stdlibparseutilsDatInit();
	stdlibstrutilsDatInit();
	stdlibtimesDatInit();
	stdlibposixDatInit();
	stdlibosDatInit();
	listsDatInit();
	stdlibhashesDatInit();
	stdlibstrtabsDatInit();
	stdlibstreamsDatInit();
	stdliblinuxDatInit();
	stdlibosprocDatInit();
	stdlibmathDatInit();
	stdlibsetsDatInit();
	optionsDatInit();
	stdlibtablesDatInit();
	platformDatInit();
	crcDatInit();
	ropesDatInit();
	stdlibunsignedDatInit();
	stdlibsocketsDatInit();
	msgsDatInit();
	nversionDatInit();
	identsDatInit();
	condsymsDatInit();
	extccompDatInit();
	wordrecgDatInit();
	babelcmdDatInit();
	commandsDatInit();
	llstreamDatInit();
	nimlexbaseDatInit();
	lexerDatInit();
	nimconfDatInit();
	stdlibintsetsDatInit();
	idgenDatInit();
	astDatInit();
	rodutilsDatInit();
	astalgoDatInit();
	parserDatInit();
	pbracesDatInit();
	rendererDatInit();
	filtersDatInit();
	filter_tmplDatInit();
	syntaxesDatInit();
	treesDatInit();
	typesDatInit();
	stdlibmemfilesDatInit();
	rodreadDatInit();
	magicsysDatInit();
	bitsetsDatInit();
	nimsetsDatInit();
	passesDatInit();
	treetabDatInit();
	vmdefDatInit();
	semdataDatInit();
	lookupsDatInit();
	importerDatInit();
	rodwriteDatInit();
	saturateDatInit();
	semfoldDatInit();
	procfindDatInit();
	pragmasDatInit();
	semtypinstDatInit();
	parampatternsDatInit();
	stdliblexbaseDatInit();
	stdlibunicodeDatInit();
	stdlibjsonDatInit();
	docutilsrstastDatInit();
	docutilsrstDatInit();
	docutilshighliteDatInit();
	docutilsrstgenDatInit();
	guardsDatInit();
	sempass2DatInit();
	stdlibmacrosDatInit();
	stdlibxmltreeDatInit();
	stdlibcookiesDatInit();
	stdlibcgiDatInit();
	typesrendererDatInit();
	docgenDatInit();
	stdlibalgorithmDatInit();
	stdlibsequtilsDatInit();
	prettyDatInit();
	sigmatchDatInit();
	cgmethDatInit();
	loweringsDatInit();
	lambdaliftingDatInit();
	transfDatInit();
	vmgenDatInit();
	vmdepsDatInit();
	evaltemplDatInit();
	vmDatInit();
	aliasesDatInit();
	patternsDatInit();
	semmacrosanityDatInit();
	semDatInit();
	ccgutilsDatInit();
	cgendataDatInit();
	ccgmergeDatInit();
	cgenDatInit();
	jsgenDatInit();
	passauxDatInit();
	dependsDatInit();
	docgen2DatInit();
	stdlibparseoptDatInit();
	serviceDatInit();
	modulesDatInit();
	mainDatInit();
	nimrodDatInit();
	initStackBottom();
	testabilityInit();
	stdlibparseutilsInit();
	stdlibstrutilsInit();
	stdlibtimesInit();
	stdlibposixInit();
	stdlibosInit();
	listsInit();
	stdlibhashesInit();
	stdlibstrtabsInit();
	stdlibstreamsInit();
	stdliblinuxInit();
	stdlibosprocInit();
	stdlibmathInit();
	stdlibsetsInit();
	optionsInit();
	stdlibtablesInit();
	platformInit();
	crcInit();
	ropesInit();
	stdlibunsignedInit();
	stdlibsocketsInit();
	msgsInit();
	nversionInit();
	identsInit();
	condsymsInit();
	extccompInit();
	wordrecgInit();
	babelcmdInit();
	commandsInit();
	llstreamInit();
	nimlexbaseInit();
	lexerInit();
	nimconfInit();
	stdlibintsetsInit();
	idgenInit();
	astInit();
	rodutilsInit();
	astalgoInit();
	parserInit();
	pbracesInit();
	rendererInit();
	filtersInit();
	filter_tmplInit();
	syntaxesInit();
	treesInit();
	typesInit();
	stdlibmemfilesInit();
	rodreadInit();
	magicsysInit();
	bitsetsInit();
	nimsetsInit();
	passesInit();
	treetabInit();
	vmdefInit();
	semdataInit();
	lookupsInit();
	importerInit();
	rodwriteInit();
	saturateInit();
	semfoldInit();
	procfindInit();
	pragmasInit();
	semtypinstInit();
	parampatternsInit();
	stdliblexbaseInit();
	stdlibunicodeInit();
	stdlibjsonInit();
	docutilsrstastInit();
	docutilsrstInit();
	docutilshighliteInit();
	docutilsrstgenInit();
	guardsInit();
	sempass2Init();
	stdlibmacrosInit();
	stdlibxmltreeInit();
	stdlibcookiesInit();
	stdlibcgiInit();
	typesrendererInit();
	docgenInit();
	stdlibalgorithmInit();
	stdlibsequtilsInit();
	prettyInit();
	sigmatchInit();
	cgmethInit();
	loweringsInit();
	lambdaliftingInit();
	transfInit();
	vmgenInit();
	vmdepsInit();
	evaltemplInit();
	vmInit();
	aliasesInit();
	patternsInit();
	semmacrosanityInit();
	semInit();
	ccgutilsInit();
	cgendataInit();
	ccgmergeInit();
	cgenInit();
	jsgenInit();
	passauxInit();
	dependsInit();
	docgen2Init();
	stdlibparseoptInit();
	serviceInit();
	modulesInit();
	mainInit();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	PreMain();
	nimrodInit();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_NOINLINE(void, nimrodInit)(void) {
	nimfr("nimrod", "nimrod.nim")
	nimln(87, "nimrod.nim");
	gcdisablemarkandsweep_6619();
	nimln(88, "nimrod.nim");
	initdefines_168072();
	nimln(91, "nimrod.nim");
	handlecmdline_531603();
	nimln(92, "nimrod.nim");
	nimln(92, "nimrod.nim");
	exit(((NI) (((NI8) ((0 < gerrorcounter_164182))))));
	popFrame();
}

N_NOINLINE(void, nimrodDatInit)(void) {
}

