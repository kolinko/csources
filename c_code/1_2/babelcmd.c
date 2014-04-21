/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tlinkedlist120023 tlinkedlist120023;
typedef struct tlistentry120017 tlistentry120017;
typedef struct tstringtable123810 tstringtable123810;
typedef struct twin32finddata96815 twin32finddata96815;
typedef struct tfiletime95868 tfiletime95868;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq123808 tkeyvaluepairseq123808;
typedef struct TY99504 TY99504;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tlinkedlist120023  {
tlistentry120017* Head;
tlistentry120017* Tail;
NI Counter;
};
struct  tfiletime95868  {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NI16 TY96824[260];
typedef NI16 TY96828[14];
struct  twin32finddata96815  {
NI32 Dwfileattributes;
tfiletime95868 Ftcreationtime;
tfiletime95868 Ftlastaccesstime;
tfiletime95868 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY96824 Cfilename;
TY96828 Calternatefilename;
};
typedef N_STDCALL_PTR(NI32, TY96839) (NI hfindfile, twin32finddata96815* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY97003) (NI hfindfile);
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
struct TY99504 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable123810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq123808* Data;
NU8 Mode;
};
struct  tlistentry120017  {
  TNimObject Sup;
tlistentry120017* Prev;
tlistentry120017* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tkeyvaluepairseq123808 {
  TGenericSeq Sup;
  TY99504 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_172007)(NimStringDesc* path, tlineinfo163527 info);
N_NIMCALL(NIM_BOOL, contains_120237)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_120437)(tlinkedlist120023* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_172014)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172054)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_172137)(tstringtable123810* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_70624, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable123810* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(tstringtable123810* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addbabelpath_172163)(NimStringDesc* p, tlineinfo163527 info);
N_NIMCALL(void, message_165584)(tlineinfo163527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_172170)(NimStringDesc* p, tlineinfo163527 info);
N_NIMCALL(NIM_BOOL, hasnimfile_172174)(NimStringDesc* dir);
N_NIMCALL(NI, findfirstfile_105616)(NimStringDesc* a, twin32finddata96815* b);
N_NIMCALL(NimStringDesc*, HEX2F_108477)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_105634)(twin32finddata96815* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_74391)(NI16* s);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_172210)(NimStringDesc* dir, tlineinfo163527 info);
N_NIMCALL(tstringtable123810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, babelpath_172281)(NimStringDesc* path, tlineinfo163527 info);
STRING_LITERAL(TMP1417, "head", 4);
STRING_LITERAL(TMP1420, "*", 1);
STRING_LITERAL(TMP1424, ".nim", 4);
extern tlinkedlist120023 searchpaths_137115;
extern TFrame* frameptr_13038;
extern NI gverbosity_137120;
extern tlinkedlist120023 lazypaths_137116;
extern TY96839 Dl_96838;
extern TY97003 Dl_97002;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, addpath_172007)(NimStringDesc* path, tlineinfo163527 info) {
	nimfr("addPath", "babelcmd.nim")
	nimln(15, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(15, "babelcmd.nim");
		nimln(15, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_120237(&searchpaths_137115, path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "babelcmd.nim");
		prependstr_120437(&searchpaths_137115, path);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, versionsplitpos_172014)(NimStringDesc* s) {
	NI result;
	NI TMP1416;
	nimfr("versionSplitPos", "babelcmd.nim")
	result = 0;
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	TMP1416 = subInt(s->Sup.len, 2);
	result = (NI64)(TMP1416);
	nimln(20, "babelcmd.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(20, "babelcmd.nim");
		LOC2 = 0;
		nimln(20, "babelcmd.nim");
		LOC2 = (1 < result);
		if (!(LOC2)) goto LA3;
		nimln(20, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		LOC2 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(20, "babelcmd.nim");
		result = subInt(result, 1);
	} LA1: ;
	nimln(21, "babelcmd.nim");
	{
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA6;
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		result = s->Sup.len;
	}
	LA6: ;
	popFrame();
	return result;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172054)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "babelcmd.nim")
	result = 0;
	nimln(28, "babelcmd.nim");
	{
		nimln(28, "babelcmd.nim");
		if (!eqStrings(a, ((NimStringDesc*) &TMP1417))) goto LA3;
		nimln(28, "babelcmd.nim");
		nimln(28, "babelcmd.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	nimln(29, "babelcmd.nim");
	i = 0;
	nimln(30, "babelcmd.nim");
	j = 0;
	nimln(31, "babelcmd.nim");
	vera = 0;
	nimln(32, "babelcmd.nim");
	verb = 0;
	nimln(33, "babelcmd.nim");
	while (1) {
		NI ii;
		NI jj;
		nimln(34, "babelcmd.nim");
		ii = npuParseInt(a, &vera, i);
		nimln(35, "babelcmd.nim");
		jj = npuParseInt(b, &verb, j);
		nimln(37, "babelcmd.nim");
		{
			NIM_BOOL LOC8;
			nimln(37, "babelcmd.nim");
			LOC8 = 0;
			nimln(37, "babelcmd.nim");
			LOC8 = (ii <= 0);
			if (LOC8) goto LA9;
			nimln(37, "babelcmd.nim");
			LOC8 = (jj <= 0);
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			result = (0 < jj);
			goto BeforeRet;
		}
		LA10: ;
		nimln(38, "babelcmd.nim");
		{
			nimln(38, "babelcmd.nim");
			if (!(vera < verb)) goto LA14;
			nimln(38, "babelcmd.nim");
			nimln(38, "babelcmd.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		goto LA12;
		LA14: ;
		{
			nimln(39, "babelcmd.nim");
			if (!(verb < vera)) goto LA17;
			nimln(39, "babelcmd.nim");
			nimln(39, "babelcmd.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		goto LA12;
		LA17: ;
		LA12: ;
		nimln(41, "babelcmd.nim");
		i = addInt(i, ii);
		nimln(42, "babelcmd.nim");
		j = addInt(j, jj);
		nimln(43, "babelcmd.nim");
		{
			nimln(43, "babelcmd.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA21;
			nimln(43, "babelcmd.nim");
			i = addInt(i, 1);
		}
		LA21: ;
		nimln(44, "babelcmd.nim");
		{
			nimln(44, "babelcmd.nim");
			if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
			if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA25;
			nimln(44, "babelcmd.nim");
			j = addInt(j, 1);
		}
		LA25: ;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_172137)(tstringtable123810* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1418;
	nimfr("addPackage", "babelcmd.nim")
	nimln(47, "babelcmd.nim");
	x = versionsplitpos_172014(p);
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	TMP1418 = subInt(x, 1);
	name = copyStrLast(p, 0, (NI64)(TMP1418));
	nimln(49, "babelcmd.nim");
	{
		NimStringDesc* version;
		NI TMP1419;
		nimln(49, "babelcmd.nim");
		nimln(49, "babelcmd.nim");
		if (!(x < p->Sup.len)) goto LA3;
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		TMP1419 = addInt(x, 1);
		version = copyStr(p, (NI64)(TMP1419));
		nimln(51, "babelcmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			nimln(51, "babelcmd.nim");
			nimln(51, "babelcmd.nim");
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_172054(LOC7, version);
			if (!LOC8) goto LA9;
			nimln(52, "babelcmd.nim");
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(54, "babelcmd.nim");
		nstPut(packages, name, ((NimStringDesc*) &TMP1417));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addbabelpath_172163)(NimStringDesc* p, tlineinfo163527 info) {
	nimfr("addBabelPath", "babelcmd.nim")
	nimln(62, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(62, "babelcmd.nim");
		nimln(62, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_120237(&searchpaths_137115, p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "babelcmd.nim");
		{
			nimln(63, "babelcmd.nim");
			if (!(1 <= gverbosity_137120)) goto LA8;
			nimln(63, "babelcmd.nim");
			message_165584(info, ((NU16) 269), p);
		}
		LA8: ;
		nimln(64, "babelcmd.nim");
		prependstr_120437(&lazypaths_137116, p);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, skipfinddata_105634)(twin32finddata96815* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	nimfr("skipFindData", "os.nim")
	result = 0;
	nimln(369, "os.nim");
	nimln(369, "os.nim");
	LOC1 = 0;
	nimln(369, "os.nim");
	LOC1 = (((NI) ((*f).Cfilename[(0)- 0])) == 46);
	if (!(LOC1)) goto LA2;
	nimln(369, "os.nim");
	LOC3 = 0;
	nimln(369, "os.nim");
	LOC3 = (((NI) ((*f).Cfilename[(1)- 0])) == 0);
	if (LOC3) goto LA4;
	nimln(370, "os.nim");
	LOC5 = 0;
	nimln(370, "os.nim");
	LOC5 = (((NI) ((*f).Cfilename[(1)- 0])) == 46);
	if (!(LOC5)) goto LA6;
	nimln(370, "os.nim");
	LOC5 = (((NI) ((*f).Cfilename[(2)- 0])) == 0);
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, hasnimfile_172174)(NimStringDesc* dir) {
	NIM_BOOL result;
	NU8 kind_172178;
	NimStringDesc* path_172179;
	twin32finddata96815 f_172190;
	NI h_172192;
	NimStringDesc* LOC1;
	nimfr("hasNimFile", "babelcmd.nim")
	result = 0;
	kind_172178 = 0;
	path_172179 = 0;
	memset((void*)&f_172190, 0, sizeof(f_172190));
	nimln(1249, "os.nim");
	nimln(1249, "os.nim");
	LOC1 = 0;
	LOC1 = HEX2F_108477(dir, ((NimStringDesc*) &TMP1420));
	h_172192 = findfirstfile_105616(LOC1, &f_172190);
	nimln(1250, "os.nim");
	{
		nimln(1250, "os.nim");
		nimln(1250, "os.nim");
		if (!!((h_172192 == -1))) goto LA4;
		nimln(1251, "os.nim");
		while (1) {
			NU8 k_172194;
			nimln(1252, "os.nim");
			k_172194 = ((NU8) 0);
			nimln(1253, "os.nim");
			{
				NIM_BOOL LOC9;
				NimStringDesc* LOC20;
				NimStringDesc* LOC21;
				nimln(1253, "os.nim");
				nimln(1253, "os.nim");
				LOC9 = 0;
				LOC9 = skipfinddata_105634(&f_172190);
				if (!!(LOC9)) goto LA10;
				nimln(1254, "os.nim");
				{
					nimln(1254, "os.nim");
					nimln(1254, "os.nim");
					nimln(1254, "os.nim");
					if (!!(((NI32)(f_172190.Dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA14;
					nimln(1255, "os.nim");
					k_172194 = ((NU8) 2);
				}
				LA14: ;
				nimln(1256, "os.nim");
				{
					nimln(1256, "os.nim");
					nimln(1256, "os.nim");
					nimln(1256, "os.nim");
					if (!!(((NI32)(f_172190.Dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA18;
					nimln(1257, "os.nim");
					nimln(1257, "os.nim");
					k_172194 = addInt(k_172194, 1);
				}
				LA18: ;
				nimln(1252, "os.nim");
				kind_172178 = k_172194;
				nimln(1258, "os.nim");
				nimln(1258, "os.nim");
				nimln(1258, "os.nim");
				LOC20 = 0;
				LOC20 = HEX24_74391(((NI16*) (&f_172190.Cfilename[(0)- 0])));
				LOC21 = 0;
				LOC21 = nosextractFilename(LOC20);
				path_172179 = HEX2F_108477(dir, LOC21);
				nimln(69, "babelcmd.nim");
				{
					NIM_BOOL LOC24;
					nimln(69, "babelcmd.nim");
					LOC24 = 0;
					nimln(69, "babelcmd.nim");
					LOC24 = (kind_172178 == ((NU8) 0));
					if (!(LOC24)) goto LA25;
					nimln(69, "babelcmd.nim");
					LOC24 = nsuEndsWith(path_172179, ((NimStringDesc*) &TMP1424));
					LA25: ;
					if (!LOC24) goto LA26;
					nimln(70, "babelcmd.nim");
					result = NIM_TRUE;
					nimln(71, "babelcmd.nim");
					goto LA6;
				}
				LA26: ;
			}
			LA10: ;
			nimln(1259, "os.nim");
			{
				NI32 LOC30;
				nimln(1259, "os.nim");
				nimln(1259, "os.nim");
				LOC30 = 0;
				LOC30 = Dl_96838(h_172192, &f_172190);
				if (!(LOC30 == ((NI32) 0))) goto LA31;
				nimln(1259, "os.nim");
				goto LA6;
			}
			LA31: ;
		} LA6: ;
		nimln(1260, "os.nim");
		Dl_97002(h_172192);
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_172170)(NimStringDesc* p, tlineinfo163527 info) {
	nimfr("addPathWithNimFiles", "babelcmd.nim")
	nimln(72, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(72, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = hasnimfile_172174(p);
		if (!LOC3) goto LA4;
		nimln(73, "babelcmd.nim");
		addbabelpath_172163(p, info);
	}
	goto LA1;
	LA4: ;
	{
		NU8 kind_172198;
		NimStringDesc* p2_172199;
		twin32finddata96815 f_172201;
		NI h_172203;
		NimStringDesc* LOC7;
		kind_172198 = 0;
		p2_172199 = 0;
		memset((void*)&f_172201, 0, sizeof(f_172201));
		nimln(1249, "os.nim");
		nimln(1249, "os.nim");
		LOC7 = 0;
		LOC7 = HEX2F_108477(p, ((NimStringDesc*) &TMP1420));
		h_172203 = findfirstfile_105616(LOC7, &f_172201);
		nimln(1250, "os.nim");
		{
			nimln(1250, "os.nim");
			nimln(1250, "os.nim");
			if (!!((h_172203 == -1))) goto LA10;
			nimln(1251, "os.nim");
			while (1) {
				NU8 k_172205;
				nimln(1252, "os.nim");
				k_172205 = ((NU8) 0);
				nimln(1253, "os.nim");
				{
					NIM_BOOL LOC15;
					NimStringDesc* LOC26;
					NimStringDesc* LOC27;
					nimln(1253, "os.nim");
					nimln(1253, "os.nim");
					LOC15 = 0;
					LOC15 = skipfinddata_105634(&f_172201);
					if (!!(LOC15)) goto LA16;
					nimln(1254, "os.nim");
					{
						nimln(1254, "os.nim");
						nimln(1254, "os.nim");
						nimln(1254, "os.nim");
						if (!!(((NI32)(f_172201.Dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
						nimln(1255, "os.nim");
						k_172205 = ((NU8) 2);
					}
					LA20: ;
					nimln(1256, "os.nim");
					{
						nimln(1256, "os.nim");
						nimln(1256, "os.nim");
						nimln(1256, "os.nim");
						if (!!(((NI32)(f_172201.Dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
						nimln(1257, "os.nim");
						nimln(1257, "os.nim");
						k_172205 = addInt(k_172205, 1);
					}
					LA24: ;
					nimln(1252, "os.nim");
					kind_172198 = k_172205;
					nimln(1258, "os.nim");
					nimln(1258, "os.nim");
					nimln(1258, "os.nim");
					LOC26 = 0;
					LOC26 = HEX24_74391(((NI16*) (&f_172201.Cfilename[(0)- 0])));
					LOC27 = 0;
					LOC27 = nosextractFilename(LOC26);
					p2_172199 = HEX2F_108477(p, LOC27);
					nimln(76, "babelcmd.nim");
					{
						NIM_BOOL LOC30;
						nimln(76, "babelcmd.nim");
						LOC30 = 0;
						LOC30 = hasnimfile_172174(p2_172199);
						if (!LOC30) goto LA31;
						nimln(76, "babelcmd.nim");
						addbabelpath_172163(p2_172199, info);
					}
					LA31: ;
				}
				LA16: ;
				nimln(1259, "os.nim");
				{
					NI32 LOC35;
					nimln(1259, "os.nim");
					nimln(1259, "os.nim");
					LOC35 = 0;
					LOC35 = Dl_96838(h_172203, &f_172201);
					if (!(LOC35 == ((NI32) 0))) goto LA36;
					nimln(1259, "os.nim");
					goto LA12;
				}
				LA36: ;
			} LA12: ;
			nimln(1260, "os.nim");
			Dl_97002(h_172203);
		}
		LA10: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, addpathrec_172210)(NimStringDesc* dir, tlineinfo163527 info) {
	tstringtable123810* packages;
	NI pos;
	NI TMP1425;
	NU8 k_172246;
	NimStringDesc* p_172247;
	twin32finddata96815 f_172259;
	NI h_172261;
	NimStringDesc* LOC5;
	NimStringDesc* p_172257;
	NimStringDesc* key_172266;
	NimStringDesc* val_172268;
	NI h_172270;
	NI HEX3Atmp_172272;
	NI res_172274;
	nimfr("addPathRec", "babelcmd.nim")
	nimln(79, "babelcmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	TMP1425 = subInt(dir->Sup.len, 1);
	pos = (NI64)(TMP1425);
	nimln(81, "babelcmd.nim");
	{
		nimln(81, "babelcmd.nim");
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		nimln(81, "babelcmd.nim");
		pos = addInt(pos, 1);
	}
	LA3: ;
	k_172246 = 0;
	p_172247 = 0;
	memset((void*)&f_172259, 0, sizeof(f_172259));
	nimln(1249, "os.nim");
	nimln(1249, "os.nim");
	LOC5 = 0;
	LOC5 = HEX2F_108477(dir, ((NimStringDesc*) &TMP1420));
	h_172261 = findfirstfile_105616(LOC5, &f_172259);
	nimln(1250, "os.nim");
	{
		nimln(1250, "os.nim");
		nimln(1250, "os.nim");
		if (!!((h_172261 == -1))) goto LA8;
		nimln(1251, "os.nim");
		while (1) {
			NU8 k_172263;
			nimln(1252, "os.nim");
			k_172263 = ((NU8) 0);
			nimln(1253, "os.nim");
			{
				NIM_BOOL LOC13;
				NimStringDesc* LOC24;
				NimStringDesc* LOC25;
				nimln(1253, "os.nim");
				nimln(1253, "os.nim");
				LOC13 = 0;
				LOC13 = skipfinddata_105634(&f_172259);
				if (!!(LOC13)) goto LA14;
				nimln(1254, "os.nim");
				{
					nimln(1254, "os.nim");
					nimln(1254, "os.nim");
					nimln(1254, "os.nim");
					if (!!(((NI32)(f_172259.Dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA18;
					nimln(1255, "os.nim");
					k_172263 = ((NU8) 2);
				}
				LA18: ;
				nimln(1256, "os.nim");
				{
					nimln(1256, "os.nim");
					nimln(1256, "os.nim");
					nimln(1256, "os.nim");
					if (!!(((NI32)(f_172259.Dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA22;
					nimln(1257, "os.nim");
					nimln(1257, "os.nim");
					k_172263 = addInt(k_172263, 1);
				}
				LA22: ;
				nimln(1252, "os.nim");
				k_172246 = k_172263;
				nimln(1258, "os.nim");
				nimln(1258, "os.nim");
				nimln(1258, "os.nim");
				LOC24 = 0;
				LOC24 = HEX24_74391(((NI16*) (&f_172259.Cfilename[(0)- 0])));
				LOC25 = 0;
				LOC25 = nosextractFilename(LOC24);
				p_172247 = HEX2F_108477(dir, LOC25);
				nimln(83, "babelcmd.nim");
				{
					NIM_BOOL LOC28;
					nimln(83, "babelcmd.nim");
					LOC28 = 0;
					nimln(83, "babelcmd.nim");
					LOC28 = (k_172246 == ((NU8) 2));
					if (!(LOC28)) goto LA29;
					nimln(83, "babelcmd.nim");
					nimln(83, "babelcmd.nim");
					if ((NU)(pos) > (NU)(p_172247->Sup.len)) raiseIndexError();
					LOC28 = !(((NU8)(p_172247->data[pos]) == (NU8)(46)));
					LA29: ;
					if (!LOC28) goto LA30;
					nimln(84, "babelcmd.nim");
					addpackage_172137(packages, p_172247);
				}
				LA30: ;
			}
			LA14: ;
			nimln(1259, "os.nim");
			{
				NI32 LOC34;
				nimln(1259, "os.nim");
				nimln(1259, "os.nim");
				LOC34 = 0;
				LOC34 = Dl_96838(h_172261, &f_172259);
				if (!(LOC34 == ((NI32) 0))) goto LA35;
				nimln(1259, "os.nim");
				goto LA10;
			}
			LA35: ;
		} LA10: ;
		nimln(1260, "os.nim");
		Dl_97002(h_172261);
	}
	LA8: ;
	p_172257 = 0;
	key_172266 = 0;
	val_172268 = 0;
	h_172270 = 0;
	HEX3Atmp_172272 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_172272 = ((*packages).Data->Sup.len-1);
	nimln(1457, "system.nim");
	res_172274 = 0;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_172274 <= HEX3Atmp_172272)) goto LA37;
		nimln(1457, "system.nim");
		h_172270 = res_172274;
		nimln(41, "strtabs.nim");
		{
			NimStringDesc* res_172276;
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_172270) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			if (!!((*packages).Data->data[h_172270].Field0 == 0)) goto LA40;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172270) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			key_172266 = (*packages).Data->data[h_172270].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172270) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			val_172268 = (*packages).Data->data[h_172270].Field1;
			nimln(58, "babelcmd.nim");
			nimln(58, "babelcmd.nim");
			{
				nimln(58, "babelcmd.nim");
				if (!eqStrings(val_172268, ((NimStringDesc*) &TMP1417))) goto LA44;
				res_172276 = key_172266;
			}
			goto LA42;
			LA44: ;
			{
				NimStringDesc* LOC47;
				nimln(58, "babelcmd.nim");
				LOC47 = 0;
				LOC47 = rawNewString(key_172266->Sup.len + val_172268->Sup.len + 1);
appendString(LOC47, key_172266);
appendChar(LOC47, 45);
appendString(LOC47, val_172268);
				res_172276 = LOC47;
			}
			LA42: ;
			nimln(58, "babelcmd.nim");
			p_172257 = res_172276;
			nimln(86, "babelcmd.nim");
			addbabelpath_172163(p_172257, info);
		}
		LA40: ;
		nimln(1460, "system.nim");
		res_172274 = addInt(res_172274, 1);
	} LA37: ;
	popFrame();
}

N_NIMCALL(void, babelpath_172281)(NimStringDesc* path, tlineinfo163527 info) {
	nimfr("babelPath", "babelcmd.nim")
	nimln(89, "babelcmd.nim");
	addpathrec_172210(path, info);
	nimln(90, "babelcmd.nim");
	addbabelpath_172163(path, info);
	popFrame();
}
N_NOINLINE(void, babelcmdInit)(void) {
	nimfr("babelcmd", "babelcmd.nim")
	popFrame();
}

N_NOINLINE(void, babelcmdDatInit)(void) {
}

