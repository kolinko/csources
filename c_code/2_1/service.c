/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell41290 tcell41290;
typedef struct TNimType TNimType;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41302 tcellset41302;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct toptparser522807 toptparser522807;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct TY10665 TY10665;
typedef struct tsocketimpl149605 tsocketimpl149605;
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
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
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
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
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
struct  toptparser522807  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY126462[1];
typedef N_NIMCALL_PTR(void, TY524294) (void);
typedef NIM_CHAR TY149630[4001];
struct  tsocketimpl149605  {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY149630 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
};
typedef NI TY22818[16];
struct  tpagedesc41298  {
tpagedesc41298* Next;
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
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, processcmdline_524207)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(void, initoptparser_522819)(NimStringDesc* cmdline, toptparser522807* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(toptparser522807* p);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_70824, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, processswitch_172016)(NimStringDesc* switch_172018, NimStringDesc* arg, NU8 pass, tlineinfo162527 info);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser522807* p);
N_NIMCALL(void, rawmessage_164292)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, serve_524292)(TY524294 action);
N_NIMCALL(NimStringDesc*, getconfigvar_136311)(NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, readline_10484)(FILE* f);
N_NIMCALL(tsocketimpl149605*, socket_150402)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void, oserror_106205)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_106231)(void);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_151584)(tsocketimpl149605* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, listen_151405)(tsocketimpl149605* socket, int backlog);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, accept_153201)(tsocketimpl149605* server, tsocketimpl149605** client);
N_NIMCALL(void, readline_158033)(tsocketimpl149605* socket, NimStringDesc** line, NI timeout);
N_NIMCALL(void, send_159604)(tsocketimpl149605* socket, NimStringDesc* data);
N_NIMCALL(void, close_153266)(tsocketimpl149605* socket);
STRING_LITERAL(TMP7639, "", 0);
STRING_LITERAL(TMP7646, "server.type", 11);
STRING_LITERAL(TMP7647, "stdin", 5);
STRING_LITERAL(TMP7648, "tcp", 3);
STRING_LITERAL(TMP7649, "quit", 4);
STRING_LITERAL(TMP7654, "server.port", 11);
STRING_LITERAL(TMP7655, "server.address", 14);
STRING_LITERAL(TMP7681, "\015\012", 2);
STRING_LITERAL(TMP7682, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_524203;
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
NimStringDesc* lastcaascmd_524204;
NimStringDesc* arguments_524205;
extern TNimType NTI522807; /* TOptParser */
extern tlineinfo162527 gcmdlineinfo_163104;
extern NimStringDesc* command_136212;
extern TY10665* commandargs_136234;
extern NimStringDesc* gprojectname_136206;
extern NU32 gglobaloptions_136111;
extern NI32 gdirtybufferidx_136127;
extern NI32 gdirtyoriginalidx_136128;
extern NI gerrorcounter_163182;
extern tsocketimpl149605* invalidsocket_149678;
extern tsocketimpl149605* stdoutsocket_163192;
extern TNimType NTI149607; /* TSocket */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41290* c;
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
		tcell41290* c;
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

N_NIMCALL(void, processcmdline_524207)(NU8 pass, NimStringDesc* cmd) {
	toptparser522807 p;
	NI argscount;
	nimfr("processCmdLine", "service.nim")
	nimln(33, "service.nim");
	chckNil((void*)&p);
	memset((void*)&p, 0, sizeof(p));
	p.Sup.m_type = (&NTI522807);
	initoptparser_522819(cmd, &p);
	nimln(34, "service.nim");
	argscount = 0;
	nimln(35, "service.nim");
	while (1) {
		nimln(36, "service.nim");
		nponext(&p);
		nimln(37, "service.nim");
		switch (p.Kind) {
		case ((NU8) 0):
		{
			nimln(38, "service.nim");
			goto LA1;
		}
		break;
		case ((NU8) 2):
		case ((NU8) 3):
		{
			NI bracketle;
			nimln(42, "service.nim");
			bracketle = nsuFindChar(p.Key, 91, 0);
			nimln(43, "service.nim");
			{
				NimStringDesc* key;
				NI TMP7644;
				NimStringDesc* val;
				NimStringDesc* LOC8;
				NI TMP7645;
				NimStringDesc* LOC9;
				nimln(43, "service.nim");
				if (!(0 <= bracketle)) goto LA6;
				nimln(44, "service.nim");
				nimln(44, "service.nim");
				nimln(44, "service.nim");
				TMP7644 = subInt(bracketle, 1);
				key = copyStrLast(p.Key, 0, (NI32)(TMP7644));
				nimln(45, "service.nim");
				nimln(45, "service.nim");
				LOC8 = 0;
				nimln(45, "service.nim");
				nimln(45, "service.nim");
				TMP7645 = addInt(bracketle, 1);
				LOC9 = 0;
				LOC9 = copyStr(p.Key, (NI32)(TMP7645));
				LOC8 = rawNewString(LOC9->Sup.len + p.Val->Sup.len + 1);
appendString(LOC8, LOC9);
appendChar(LOC8, 58);
appendString(LOC8, p.Val);
				val = LOC8;
				nimln(46, "service.nim");
				processswitch_172016(key, val, pass, gcmdlineinfo_163104);
			}
			goto LA4;
			LA6: ;
			{
				nimln(48, "service.nim");
				processswitch_172016(p.Key, p.Val, pass, gcmdlineinfo_163104);
			}
			LA4: ;
		}
		break;
		case ((NU8) 1):
		{
			nimln(50, "service.nim");
			{
				NimStringDesc* LOC16;
				nimln(50, "service.nim");
				if (!(argscount == 0)) goto LA14;
				nimln(51, "service.nim");
				LOC16 = 0;
				LOC16 = command_136212; command_136212 = copyStringRC1(p.Key);
				if (LOC16) nimGCunrefNoCycle(LOC16);
			}
			goto LA12;
			LA14: ;
			{
				nimln(53, "service.nim");
				{
					NimStringDesc* LOC22;
					nimln(53, "service.nim");
					if (!(pass == ((NU8) 0))) goto LA20;
					nimln(53, "service.nim");
					commandargs_136234 = (TY10665*) incrSeq(&(commandargs_136234)->Sup, sizeof(NimStringDesc*));
					LOC22 = 0;
					LOC22 = commandargs_136234->data[commandargs_136234->Sup.len-1]; commandargs_136234->data[commandargs_136234->Sup.len-1] = copyStringRC1(p.Key);
					if (LOC22) nimGCunrefNoCycle(LOC22);
				}
				LA20: ;
				nimln(54, "service.nim");
				{
					nimln(54, "service.nim");
					if (!(argscount == 1)) goto LA25;
					nimln(56, "service.nim");
					asgnRefNoCycle((void**) &gprojectname_136206, nosunixToNativePath(p.Key, ((NimStringDesc*) &TMP7639)));
					nimln(57, "service.nim");
					asgnRefNoCycle((void**) &arguments_524205, npocmdLineRest(&p));
					nimln(58, "service.nim");
					goto LA1;
				}
				LA25: ;
			}
			LA12: ;
			nimln(59, "service.nim");
			argscount = addInt(argscount, 1);
		}
		break;
		}
	} LA1: ;
	nimln(61, "service.nim");
	{
		nimln(61, "service.nim");
		if (!(pass == ((NU8) 1))) goto LA29;
		nimln(62, "service.nim");
		{
			NIM_BOOL LOC33;
			TY126462 LOC37;
			nimln(62, "service.nim");
			LOC33 = 0;
			nimln(62, "service.nim");
			nimln(62, "service.nim");
			LOC33 = !(((gglobaloptions_136111 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC33)) goto LA34;
			nimln(62, "service.nim");
			nimln(62, "service.nim");
			LOC33 = !(((arguments_524205) && (arguments_524205)->Sup.len == 0));
			LA34: ;
			if (!LOC33) goto LA35;
			nimln(63, "service.nim");
			memset((void*)LOC37, 0, sizeof(LOC37));
			rawmessage_164292(((NU16) 57), LOC37, 0);
		}
		LA35: ;
	}
	LA29: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, serve_524292)(TY524294 action) {
	NimStringDesc* typ;
	nimfr("serve", "service.nim")
	nimln(74, "service.nim");
	typ = getconfigvar_136311(((NimStringDesc*) &TMP7646));
	nimln(75, "service.nim");
	if (eqStrings(typ, ((NimStringDesc*) &TMP7647))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP7648))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP7639))) goto LA2;
	goto LA3;
	LA1: ;
	{
		nimln(77, "service.nim");
		while (1) {
			NimStringDesc* line;
			NimStringDesc* LOC11;
			nimln(78, "service.nim");
			nimln(78, "service.nim");
			line = readline_10484(stdin);
			nimln(79, "service.nim");
			{
				nimln(79, "service.nim");
				if (!eqStrings(line, ((NimStringDesc*) &TMP7649))) goto LA9;
				nimln(79, "service.nim");
				exit(0);
			}
			LA9: ;
			nimln(67, "service.nim");
			LOC11 = 0;
			LOC11 = curcaascmd_524203; curcaascmd_524203 = copyStringRC1(line);
			if (LOC11) nimGCunrefNoCycle(LOC11);
			nimln(68, "service.nim");
			processcmdline_524207(((NU8) 1), line);
			nimln(69, "service.nim");
			action();
			nimln(70, "service.nim");
			gdirtybufferidx_136127 = ((NI32) 0);
			nimln(71, "service.nim");
			gdirtyoriginalidx_136128 = ((NI32) 0);
			nimln(72, "service.nim");
			gerrorcounter_163182 = 0;
			nimln(81, "service.nim");
			printf("%s\012", (((NimStringDesc*) &TMP7639))->data);
			nimln(82, "service.nim");
			fflush(stdout);
		}
	}
	goto LA4;
	LA2: ;
	{
		tsocketimpl149605* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC24;
		NimStringDesc* inp;
		nimln(86, "service.nim");
		server = socket_150402(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		nimln(87, "service.nim");
		{
			NI32 LOC17;
			nimln(87, "service.nim");
			if (!(server == invalidsocket_149678)) goto LA15;
			nimln(87, "service.nim");
			nimln(87, "service.nim");
			LOC17 = 0;
			LOC17 = oslasterror_106231();
			oserror_106205(LOC17);
		}
		LA15: ;
		nimln(88, "service.nim");
		p = getconfigvar_136311(((NimStringDesc*) &TMP7654));
		nimln(89, "service.nim");
		nimln(89, "service.nim");
		{
			NI LOC22;
			nimln(89, "service.nim");
			nimln(89, "service.nim");
			if (!(0 < p->Sup.len)) goto LA20;
			nimln(89, "service.nim");
			LOC22 = 0;
			LOC22 = nsuParseInt(p);
			port = ((NU16) (LOC22));
		}
		goto LA18;
		LA20: ;
		{
			port = ((NU16) 6000);
		}
		LA18: ;
		nimln(90, "service.nim");
		nimln(90, "service.nim");
		LOC24 = 0;
		LOC24 = getconfigvar_136311(((NimStringDesc*) &TMP7655));
		bindaddr_151584(server, port, LOC24);
		nimln(91, "service.nim");
		inp = copyString(((NimStringDesc*) &TMP7639));
		nimln(92, "service.nim");
		listen_151405(server, SOMAXCONN);
		nimln(93, "service.nim");
		if (stdoutsocket_163192) nimGCunrefNoCycle(stdoutsocket_163192);
		stdoutsocket_163192 = (tsocketimpl149605*) newObjRC1((&NTI149607), sizeof(tsocketimpl149605));
		nimln(94, "service.nim");
		while (1) {
			NimStringDesc* LOC26;
			nimln(95, "service.nim");
			accept_153201(server, &stdoutsocket_163192);
			nimln(96, "service.nim");
			readline_158033(stdoutsocket_163192, &inp, -1);
			nimln(67, "service.nim");
			LOC26 = 0;
			LOC26 = curcaascmd_524203; curcaascmd_524203 = copyStringRC1(inp);
			if (LOC26) nimGCunrefNoCycle(LOC26);
			nimln(68, "service.nim");
			processcmdline_524207(((NU8) 1), inp);
			nimln(69, "service.nim");
			action();
			nimln(70, "service.nim");
			gdirtybufferidx_136127 = ((NI32) 0);
			nimln(71, "service.nim");
			gdirtyoriginalidx_136128 = ((NI32) 0);
			nimln(72, "service.nim");
			gerrorcounter_163182 = 0;
			nimln(98, "service.nim");
			send_159604(stdoutsocket_163192, ((NimStringDesc*) &TMP7681));
			nimln(99, "service.nim");
			close_153266(stdoutsocket_163192);
		}
	}
	goto LA4;
	LA3: ;
	{
		nimln(103, "service.nim");
		printf("%s%s\012", (((NimStringDesc*) &TMP7682))->data, (typ)->data);
		nimln(104, "service.nim");
		exit(1);
	}
	LA4: ;
	popFrame();
}
N_NOINLINE(void, serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	nimfr("service", "service.nim")
	nimln(24, "service.nim");
	LOC1 = 0;
	LOC1 = curcaascmd_524203; curcaascmd_524203 = copyStringRC1(((NimStringDesc*) &TMP7639));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(25, "service.nim");
	LOC2 = 0;
	LOC2 = lastcaascmd_524204; lastcaascmd_524204 = copyStringRC1(((NimStringDesc*) &TMP7639));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	nimln(28, "service.nim");
	LOC3 = 0;
	LOC3 = arguments_524205; arguments_524205 = copyStringRC1(((NimStringDesc*) &TMP7639));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	popFrame();
}

N_NOINLINE(void, serviceDatInit)(void) {
}

