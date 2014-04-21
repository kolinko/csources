/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include "Winsock2.h"

#include <string.h>

#include "winsock2.h"
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tsecurityattributes95862 tsecurityattributes95862;
typedef struct tstartupinfo95864 tstartupinfo95864;
typedef struct tprocessinformation95866 tprocessinformation95866;
typedef struct twin32finddata96815 twin32finddata96815;
typedef struct tfiletime95868 tfiletime95868;
typedef struct tbyhandlefileinformation95870 tbyhandlefileinformation95870;
typedef struct tservent97446 tservent97446;
typedef struct thostent97448 thostent97448;
typedef struct tfdset97450 tfdset97450;
typedef struct ttimeval97452 ttimeval97452;
typedef struct taddrinfo97454 taddrinfo97454;
typedef struct toverlapped98206 toverlapped98206;
typedef struct tguid98212 tguid98212;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, TY96021) (NI hobject);
typedef N_STDCALL_PTR(NI32, TY96025) (NI hfile, void* buffer, NI32 nnumberofbytestoread, NI32* lpnumberofbytesread, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY96034) (NI hfile, void* buffer, NI32 nnumberofbytestowrite, NI32* lpnumberofbyteswritten, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY96043) (NI* hreadpipe, NI* hwritepipe, tsecurityattributes95862* lppipeattributes, NI32 nsize);
typedef N_STDCALL_PTR(NI32, TY96052) (NI16* lpapplicationname, NI16* lpcommandline, tsecurityattributes95862* lpprocessattributes, tsecurityattributes95862* lpthreadattributes, NI32 binherithandles, NI32 dwcreationflags, NI16* lpenvironment, NI16* lpcurrentdirectory, tstartupinfo95864* lpstartupinfo, tprocessinformation95866* lpprocessinformation);
typedef N_STDCALL_PTR(NI32, TY96203) (NI hthread);
typedef N_STDCALL_PTR(NI32, TY96207) (NI hthread);
typedef N_STDCALL_PTR(NI32, TY96211) (NI hhandle, NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI32, TY96216) (NI hprocess, NI uexitcode);
typedef N_STDCALL_PTR(NI32, TY96221) (NI hprocess, NI32* lpexitcode);
typedef N_STDCALL_PTR(NI, TY96227) (NI32 nstdhandle);
typedef N_STDCALL_PTR(NI32, TY96231) (NI32 nstdhandle, NI hhandle);
typedef N_STDCALL_PTR(NI32, TY96236) (NI hfile);
typedef N_STDCALL_PTR(NI32, TY96240) (void);
typedef N_STDCALL_PTR(NI32, TY96243) (NI32 dwflags, void* lpsource, NI32 dwmessageid, NI32 dwlanguageid, void* lpbuffer, NI32 nsize, void* arguments);
typedef N_STDCALL_PTR(void, TY96403) (void* p);
typedef N_STDCALL_PTR(NI32, TY96407) (NI32 nbufferlength, NI16* lpbuffer);
typedef N_STDCALL_PTR(NI32, TY96411) (NI16* lppathname);
typedef N_STDCALL_PTR(NI32, TY96414) (NI16* pathname, void* security);
typedef N_STDCALL_PTR(NI32, TY96418) (NI16* lppathname);
typedef N_STDCALL_PTR(NI32, TY96421) (NI16* lpname, NI16* lpvalue);
typedef N_STDCALL_PTR(NI32, TY96425) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(NI32, TY96603) (NI16* lpsymlinkfilename, NI16* lptargetfilename, NI32 flags);
typedef N_STDCALL_PTR(NI32, TY96608) (NI16* lpfilename, NI16* lpexistingfilename, void* security);
typedef N_STDCALL_PTR(NI, TY96834) (NI16* lpfilename, twin32finddata96815* lpfindfiledata);
typedef N_STDCALL_PTR(NI32, TY96839) (NI hfindfile, twin32finddata96815* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY97003) (NI hfindfile);
typedef N_STDCALL_PTR(NI32, TY97007) (NI16* lpfilename, NI32 nbufferlength, NI16* lpbuffer, NI16** lpfilepart);
typedef N_STDCALL_PTR(NI32, TY97014) (NI16* lpfilename);
typedef N_STDCALL_PTR(NI32, TY97017) (NI16* lpfilename, NI32 dwfileattributes);
typedef N_STDCALL_PTR(int, TY97021) (NI16* lpexistingfilename, NI16* lpnewfilename, int bfailifexists);
typedef N_STDCALL_PTR(NI16*, TY97026) (void);
typedef N_STDCALL_PTR(NI32, TY97028) (NI16* para1);
typedef N_STDCALL_PTR(NI16*, TY97031) (void);
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
typedef N_STDCALL_PTR(void, TY97215) (tfiletime95868* lpsystemtimeasfiletime);
typedef N_STDCALL_PTR(void, TY97220) (NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI, TY97224) (NI hwnd, NI16* lpoperation, NI16* lpfile, NI16* lpparameters, NI16* lpdirectory, NI32 nshowcmd);
typedef N_STDCALL_PTR(NI32, TY97403) (NI hfile, tbyhandlefileinformation95870* lpfileinformation);
typedef N_CDECL_PTR(int, TY97426) (void);
typedef N_STDCALL_PTR(tservent97446*, TY97556) (NCSTRING name, NCSTRING proto);
typedef N_STDCALL_PTR(tservent97446*, TY97562) (int port, NCSTRING proto);
typedef N_STDCALL_PTR(thostent97448*, TY97568) (IN_ADDR* ip, int len, int thetype);
typedef N_STDCALL_PTR(thostent97448*, TY97576) (NCSTRING name);
typedef N_STDCALL_PTR(NI, TY97581) (int af, int typ, int protocol);
typedef N_STDCALL_PTR(int, TY97587) (NI s);
typedef N_STDCALL_PTR(NI, TY97591) (NI s, SOCKADDR* a, int* addrlen);
typedef N_STDCALL_PTR(int, TY97599) (NI s, SOCKADDR* name, int namelen);
typedef N_STDCALL_PTR(int, TY97606) (NI s, SOCKADDR* name, int namelen);
typedef N_STDCALL_PTR(int, TY97613) (NI s, SOCKADDR* name, int* namelen);
typedef N_STDCALL_PTR(int, TY97621) (NI s, int level, int optname, void* optval, int* optlen);
typedef N_STDCALL_PTR(int, TY97630) (NI s, int level, int optname, void* optval, int optlen);
typedef N_STDCALL_PTR(int, TY97638) (NI s, int backlog);
typedef N_STDCALL_PTR(int, TY97643) (NI s, void* buf, int len, int flags);
typedef N_STDCALL_PTR(int, TY97650) (NI s, NCSTRING buf, int len, int flags, SOCKADDR* fromm, int* fromlen);
typedef N_STDCALL_PTR(int, TY97661) (int nfds, tfdset97450* readfds, tfdset97450* writefds, tfdset97450* exceptfds, ttimeval97452* timeout);
typedef N_STDCALL_PTR(int, TY97671) (NI s, void* buf, int len, int flags);
typedef N_STDCALL_PTR(int, TY97678) (NI s, void* buf, int len, int flags, SOCKADDR* to, int tolen);
typedef N_STDCALL_PTR(int, TY97688) (NI s, int how);
typedef N_STDCALL_PTR(int, TY97693) (SOCKADDR* a1, int a2, NCSTRING a3, int a4, NCSTRING a5, int a6, int a7);
typedef N_STDCALL_PTR(NI32, TY97704) (NCSTRING cp);
typedef N_STDCALL_PTR(NIM_BOOL, TY97708) (NI s, tfdset97450* fdset);
typedef NI TY97501[64];
struct  tfdset97450  {
int Fdcount;
TY97501 Fdarray;
};
typedef N_STDCALL_PTR(int, TY97754) (NI16 wversionrequired, WSADATA* wsdata);
typedef N_STDCALL_PTR(int, TY97760) (NCSTRING nodename, NCSTRING servname, taddrinfo97454* hints, taddrinfo97454** res);
typedef N_STDCALL_PTR(void, TY97770) (taddrinfo97454* ai);
typedef N_STDCALL_PTR(NCSTRING, TY97775) (IN_ADDR i);
typedef N_STDCALL_PTR(NI32, TY97787) (NI32 ncount, NI* lphandles, NI32 bwaitall, NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI, TY97816) (NI16* lpfilename, NI32 dwdesiredaccess, NI32 dwsharemode, void* lpsecurityattributes, NI32 dwcreationdisposition, NI32 dwflagsandattributes, NI htemplatefile);
typedef N_STDCALL_PTR(NI32, TY97825) (NI16* pathname);
typedef N_STDCALL_PTR(NI32, TY98003) (NI hfile);
typedef N_STDCALL_PTR(NI32, TY98007) (NI hfile, NI32 ldistancetomove, NI32* lpdistancetomovehigh, NI32 dwmovemethod);
typedef N_STDCALL_PTR(NI32, TY98015) (NI hfile, NI32* lpfilesizehigh);
typedef N_STDCALL_PTR(void*, TY98021) (NI hfilemappingobject, NI32 dwdesiredaccess, NI32 dwfileoffsethigh, NI32 dwfileoffsetlow, NI32 dwnumberofbytestomap, void* lpbaseaddress);
typedef N_STDCALL_PTR(NI, TY98030) (NI hfile, void* lpfilemappingattributes, NI32 flprotect, NI32 dwmaximumsizehigh, NI32 dwmaximumsizelow, void* lpname);
typedef N_STDCALL_PTR(NI32, TY98202) (void* lpbaseaddress);
typedef N_STDCALL_PTR(NI, TY98243) (NI filehandle, NI existingcompletionport, NI32 completionkey, NI32 numberofconcurrentthreads);
typedef N_STDCALL_PTR(NI32, TY98250) (NI completionport, NI32* lpnumberofbytestransferred, NI* lpcompletionkey, toverlapped98206** lpoverlapped, NI32 dwmilliseconds);
typedef NI8 TY98225[8];
struct  tguid98212  {
NI32 D1;
NI16 D2;
NI16 D3;
TY98225 D4;
};
typedef NI8 TY98283[8];
typedef N_STDCALL_PTR(void, poverlappedcompletionroutine98210) (NI32 para1, NI32 para2, toverlapped98206* para3);
typedef N_STDCALL_PTR(int, TY98302) (NI s, NI32 dwiocontrolcode, void* lpvinbuffer, NI32 cbinbuffer, void* lpvoutbuffer, NI32 cboutbuffer, NI32* lpcbbytesreturned, toverlapped98206* lpoverlapped, poverlappedcompletionroutine98210 lpcompletionroutine);
typedef N_STDCALL_PTR(int, TY98319) (NI s, WSABUF* buf, NI32 bufcount, NI32* bytesreceived, NI32* flags, toverlapped98206* lpoverlapped, poverlappedcompletionroutine98210 completionproc);
typedef N_STDCALL_PTR(int, TY98330) (NI s, WSABUF* buf, NI32 bufcount, NI32* bytessent, NI32 flags, toverlapped98206* lpoverlapped, poverlappedcompletionroutine98210 completionproc);
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
struct  tsecurityattributes95862  {
NI32 Nlength;
void* Lpsecuritydescriptor;
NI32 Binherithandle;
};
struct  tstartupinfo95864  {
NI32 Cb;
NCSTRING Lpreserved;
NCSTRING Lpdesktop;
NCSTRING Lptitle;
NI32 Dwx;
NI32 Dwy;
NI32 Dwxsize;
NI32 Dwysize;
NI32 Dwxcountchars;
NI32 Dwycountchars;
NI32 Dwfillattribute;
NI32 Dwflags;
NI16 Wshowwindow;
NI16 Cbreserved2;
void* Lpreserved2;
NI Hstdinput;
NI Hstdoutput;
NI Hstderror;
};
struct  tprocessinformation95866  {
NI Hprocess;
NI Hthread;
NI32 Dwprocessid;
NI32 Dwthreadid;
};
struct  tbyhandlefileinformation95870  {
NI32 Dwfileattributes;
tfiletime95868 Ftcreationtime;
tfiletime95868 Ftlastaccesstime;
tfiletime95868 Ftlastwritetime;
NI32 Dwvolumeserialnumber;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Nnumberoflinks;
NI32 Nfileindexhigh;
NI32 Nfileindexlow;
};
struct  tservent97446  {
NCSTRING Sname;
NCSTRING* Saliases;
NCSTRING Sproto;
NI16 Sport;
};
struct  thostent97448  {
NCSTRING Hname;
NCSTRING* Haliases;
NI16 Haddrtype;
NI16 Hlength;
NCSTRING* Haddrlist;
};
typedef NIM_CHAR TY97469[14];
struct  ttimeval97452  {
NI32 Tvsec;
NI32 Tvusec;
};
typedef NIM_CHAR TY97459[257];
typedef NIM_CHAR TY97462[129];
struct  taddrinfo97454  {
int Aiflags;
int Aifamily;
int Aisocktype;
int Aiprotocol;
NI Aiaddrlen;
NCSTRING Aicanonname;
SOCKADDR* Aiaddr;
taddrinfo97454* Ainext;
};
struct  toverlapped98206  {
NI32 Internal;
NI32 Internalhigh;
NI32 Offset;
NI32 Offsethigh;
NI Hevent;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_NIMCALL(NI64, rdfiletime_97202)(tfiletime95868 f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI64, rdfilesize_97208)(twin32finddata96815* f);
N_NIMCALL(int, fdisset_97713)(NI socket, tfdset97450* fdset);
N_NIMCALL(void, fdset_97721)(NI socket, tfdset97450* fdset);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, fdzero_97747)(tfdset97450* fdset);
STRING_LITERAL(TMP140, "kernel32", 8);
STRING_LITERAL(TMP141, "kernel32", 8);
STRING_LITERAL(TMP143, "shell32.dll", 11);
STRING_LITERAL(TMP144, "shell32.dll", 11);
STRING_LITERAL(TMP146, "Ws2_32.dll", 10);
STRING_LITERAL(TMP147, "Ws2_32.dll", 10);
NIM_CONST TY98283 TMP148 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST TY98283 TMP149 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
static void* TMP139;
TY96021 Dl_96020;
TY96025 Dl_96024;
TY96034 Dl_96033;
TY96043 Dl_96042;
TY96052 Dl_96051;
TY96203 Dl_96202;
TY96207 Dl_96206;
TY96211 Dl_96210;
TY96216 Dl_96215;
TY96221 Dl_96220;
TY96227 Dl_96226;
TY96231 Dl_96230;
TY96236 Dl_96235;
TY96240 Dl_96239;
TY96243 Dl_96242;
TY96403 Dl_96402;
TY96407 Dl_96406;
TY96411 Dl_96410;
TY96414 Dl_96413;
TY96418 Dl_96417;
TY96421 Dl_96420;
TY96425 Dl_96424;
TY96603 Dl_96602;
TY96608 Dl_96607;
TY96834 Dl_96833;
TY96839 Dl_96838;
TY97003 Dl_97002;
TY97007 Dl_97006;
TY97014 Dl_97013;
TY97017 Dl_97016;
TY97021 Dl_97020;
TY97026 Dl_97025;
TY97028 Dl_97027;
TY97031 Dl_97030;
extern TFrame* frameptr_13038;
TY97215 Dl_97214;
TY97220 Dl_97219;
static void* TMP142;
TY97224 Dl_97223;
TY97403 Dl_97402;
static void* TMP145;
TY97426 Dl_97425;
TY97556 Dl_97555;
TY97562 Dl_97561;
TY97568 Dl_97567;
TY97576 Dl_97575;
TY97581 Dl_97580;
TY97587 Dl_97586;
TY97591 Dl_97590;
TY97599 Dl_97598;
TY97606 Dl_97605;
TY97613 Dl_97612;
TY97621 Dl_97620;
TY97630 Dl_97629;
TY97638 Dl_97637;
TY97643 Dl_97642;
TY97650 Dl_97649;
TY97661 Dl_97660;
TY97671 Dl_97670;
TY97678 Dl_97677;
TY97688 Dl_97687;
TY97693 Dl_97692;
TY97704 Dl_97703;
TY97708 Dl_97707;
TY97754 Dl_97753;
TY97760 Dl_97759;
TY97770 Dl_97769;
TY97775 Dl_97774;
TY97787 Dl_97786;
TY97816 Dl_97815;
TY97825 Dl_97824;
TY98003 Dl_98002;
TY98007 Dl_98006;
TY98015 Dl_98014;
TY98021 Dl_98020;
TY98030 Dl_98029;
TY98202 Dl_98201;
TY98243 Dl_98242;
TY98250 Dl_98249;
tguid98212 wsaidconnectex_98285;
tguid98212 wsaidacceptex_98289;
tguid98212 wsaidgetacceptexsockaddrs_98293;
TY98302 Dl_98301;
TY98319 Dl_98318;
TY98330 Dl_98329;
TNimType NTI95842; /* THandle */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NI64, rdfiletime_97202)(tfiletime95868 f) {
	NI64 result;
	nimfr("rdFileTime", "winlean.nim")
	result = 0;
	nimln(320, "winlean.nim");
	nimln(320, "winlean.nim");
	nimln(320, "winlean.nim");
	nimln(320, "winlean.nim");
	nimln(320, "winlean.nim");
	result = (NI64)(((NI64)(NU64)(NU32)(f.Dwlowdatetime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f.Dwhighdatetime))) << (NU64)(32)));
	popFrame();
	return result;
}

N_NIMCALL(NI64, rdfilesize_97208)(twin32finddata96815* f) {
	NI64 result;
	nimfr("rdFileSize", "winlean.nim")
	result = 0;
	nimln(323, "winlean.nim");
	nimln(323, "winlean.nim");
	nimln(323, "winlean.nim");
	nimln(323, "winlean.nim");
	nimln(323, "winlean.nim");
	result = (NI64)(((NI64)(NU64)(NU32)((*f).Nfilesizelow)) | (NI64)((NU64)(((NI64)(NU64)(NU32)((*f).Nfilesizehigh))) << (NU64)(32)));
	popFrame();
	return result;
}

N_NIMCALL(int, fdisset_97713)(NI socket, tfdset97450* fdset) {
	int result;
	nimfr("FD_ISSET", "winlean.nim")
	result = 0;
	nimln(528, "winlean.nim");
	nimln(528, "winlean.nim");
	{
		NIM_BOOL LOC3;
		nimln(528, "winlean.nim");
		LOC3 = 0;
		LOC3 = Dl_97707(socket, fdset);
		if (!LOC3) goto LA4;
		result = ((NI32) 1);
	}
	goto LA1;
	LA4: ;
	{
		result = ((NI32) 0);
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(void, fdset_97721)(NI socket, tfdset97450* fdset) {
	nimfr("FD_SET", "winlean.nim")
	nimln(531, "winlean.nim");
	{
		nimln(531, "winlean.nim");
		if (!((*fdset).Fdcount < ((NI32) 64))) goto LA3;
		nimln(532, "winlean.nim");
		if ((NU)(((NI) ((*fdset).Fdcount))) > (NU)(63)) raiseIndexError();
		(*fdset).Fdarray[(((NI) ((*fdset).Fdcount)))- 0] = socket;
		nimln(533, "winlean.nim");
		(*fdset).Fdcount = addInt((*fdset).Fdcount, 1);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, fdzero_97747)(tfdset97450* fdset) {
	nimfr("FD_ZERO", "winlean.nim")
	nimln(536, "winlean.nim");
	(*fdset).Fdcount = ((int) 0);
	popFrame();
}
N_NOINLINE(void, stdlibwinleanInit)(void) {
	tguid98212 LOC1;
	tguid98212 LOC2;
	tguid98212 LOC3;
	nimfr("winlean", "winlean.nim")
	nimln(692, "winlean.nim");
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.D1 = ((NI32) 631375801);
	LOC1.D2 = ((NI16) -8717);
	LOC1.D3 = ((NI16) 18016);
	memcpy((void*)LOC1.D4, (NIM_CONST void*)TMP148, sizeof(LOC1.D4));
	wsaidconnectex_98285 = LOC1;
	nimln(694, "winlean.nim");
	memset((void*)&LOC2, 0, sizeof(LOC2));
	LOC2.D1 = ((NI32) -1254720015);
	LOC2.D2 = ((NI16) -13396);
	LOC2.D3 = ((NI16) 4559);
	memcpy((void*)LOC2.D4, (NIM_CONST void*)TMP149, sizeof(LOC2.D4));
	wsaidacceptex_98289 = LOC2;
	nimln(696, "winlean.nim");
	memset((void*)&LOC3, 0, sizeof(LOC3));
	LOC3.D1 = ((NI32) -1254720014);
	LOC3.D2 = ((NI16) -13396);
	LOC3.D3 = ((NI16) 4559);
	memcpy((void*)LOC3.D4, (NIM_CONST void*)TMP149, sizeof(LOC3.D4));
	wsaidgetacceptexsockaddrs_98293 = LOC3;
	popFrame();
}

N_NOINLINE(void, stdlibwinleanDatInit)(void) {
NTI95842.size = sizeof(NI);
NTI95842.kind = 31;
NTI95842.base = 0;
NTI95842.flags = 3;
if (!((TMP139 = nimLoadLibrary((NimStringDesc*) &TMP140))
)) nimLoadLibraryError((NimStringDesc*) &TMP141);
	Dl_96020 = (TY96021) nimGetProcAddr(TMP139, "CloseHandle");
	Dl_96024 = (TY96025) nimGetProcAddr(TMP139, "ReadFile");
	Dl_96033 = (TY96034) nimGetProcAddr(TMP139, "WriteFile");
	Dl_96042 = (TY96043) nimGetProcAddr(TMP139, "CreatePipe");
	Dl_96051 = (TY96052) nimGetProcAddr(TMP139, "CreateProcessW");
	Dl_96202 = (TY96203) nimGetProcAddr(TMP139, "SuspendThread");
	Dl_96206 = (TY96207) nimGetProcAddr(TMP139, "ResumeThread");
	Dl_96210 = (TY96211) nimGetProcAddr(TMP139, "WaitForSingleObject");
	Dl_96215 = (TY96216) nimGetProcAddr(TMP139, "TerminateProcess");
	Dl_96220 = (TY96221) nimGetProcAddr(TMP139, "GetExitCodeProcess");
	Dl_96226 = (TY96227) nimGetProcAddr(TMP139, "GetStdHandle");
	Dl_96230 = (TY96231) nimGetProcAddr(TMP139, "SetStdHandle");
	Dl_96235 = (TY96236) nimGetProcAddr(TMP139, "FlushFileBuffers");
	Dl_96239 = (TY96240) nimGetProcAddr(TMP139, "GetLastError");
	Dl_96242 = (TY96243) nimGetProcAddr(TMP139, "FormatMessageW");
	Dl_96402 = (TY96403) nimGetProcAddr(TMP139, "LocalFree");
	Dl_96406 = (TY96407) nimGetProcAddr(TMP139, "GetCurrentDirectoryW");
	Dl_96410 = (TY96411) nimGetProcAddr(TMP139, "SetCurrentDirectoryW");
	Dl_96413 = (TY96414) nimGetProcAddr(TMP139, "CreateDirectoryW");
	Dl_96417 = (TY96418) nimGetProcAddr(TMP139, "RemoveDirectoryW");
	Dl_96420 = (TY96421) nimGetProcAddr(TMP139, "SetEnvironmentVariableW");
	Dl_96424 = (TY96425) nimGetProcAddr(TMP139, "GetModuleFileNameW");
	Dl_96602 = (TY96603) nimGetProcAddr(TMP139, "CreateSymbolicLinkW");
	Dl_96607 = (TY96608) nimGetProcAddr(TMP139, "CreateHardLinkW");
	Dl_96833 = (TY96834) nimGetProcAddr(TMP139, "FindFirstFileW");
	Dl_96838 = (TY96839) nimGetProcAddr(TMP139, "FindNextFileW");
	Dl_97002 = (TY97003) nimGetProcAddr(TMP139, "FindClose");
	Dl_97006 = (TY97007) nimGetProcAddr(TMP139, "GetFullPathNameW");
	Dl_97013 = (TY97014) nimGetProcAddr(TMP139, "GetFileAttributesW");
	Dl_97016 = (TY97017) nimGetProcAddr(TMP139, "SetFileAttributesW");
	Dl_97020 = (TY97021) nimGetProcAddr(TMP139, "CopyFileW");
	Dl_97025 = (TY97026) nimGetProcAddr(TMP139, "GetEnvironmentStringsW");
	Dl_97027 = (TY97028) nimGetProcAddr(TMP139, "FreeEnvironmentStringsW");
	Dl_97030 = (TY97031) nimGetProcAddr(TMP139, "GetCommandLineW");
	Dl_97214 = (TY97215) nimGetProcAddr(TMP139, "GetSystemTimeAsFileTime");
	Dl_97219 = (TY97220) nimGetProcAddr(TMP139, "Sleep");
if (!((TMP142 = nimLoadLibrary((NimStringDesc*) &TMP143))
)) nimLoadLibraryError((NimStringDesc*) &TMP144);
	Dl_97223 = (TY97224) nimGetProcAddr(TMP142, "ShellExecuteW");
	Dl_97402 = (TY97403) nimGetProcAddr(TMP139, "GetFileInformationByHandle");
if (!((TMP145 = nimLoadLibrary((NimStringDesc*) &TMP146))
)) nimLoadLibraryError((NimStringDesc*) &TMP147);
	Dl_97425 = (TY97426) nimGetProcAddr(TMP145, "WSAGetLastError");
	Dl_97555 = (TY97556) nimGetProcAddr(TMP145, "getservbyname");
	Dl_97561 = (TY97562) nimGetProcAddr(TMP145, "getservbyport");
	Dl_97567 = (TY97568) nimGetProcAddr(TMP145, "gethostbyaddr");
	Dl_97575 = (TY97576) nimGetProcAddr(TMP145, "gethostbyname");
	Dl_97580 = (TY97581) nimGetProcAddr(TMP145, "socket");
	Dl_97586 = (TY97587) nimGetProcAddr(TMP145, "closesocket");
	Dl_97590 = (TY97591) nimGetProcAddr(TMP145, "accept");
	Dl_97598 = (TY97599) nimGetProcAddr(TMP145, "bind");
	Dl_97605 = (TY97606) nimGetProcAddr(TMP145, "connect");
	Dl_97612 = (TY97613) nimGetProcAddr(TMP145, "getsockname");
	Dl_97620 = (TY97621) nimGetProcAddr(TMP145, "getsockopt");
	Dl_97629 = (TY97630) nimGetProcAddr(TMP145, "setsockopt");
	Dl_97637 = (TY97638) nimGetProcAddr(TMP145, "listen");
	Dl_97642 = (TY97643) nimGetProcAddr(TMP145, "recv");
	Dl_97649 = (TY97650) nimGetProcAddr(TMP145, "recvfrom");
	Dl_97660 = (TY97661) nimGetProcAddr(TMP145, "select");
	Dl_97670 = (TY97671) nimGetProcAddr(TMP145, "send");
	Dl_97677 = (TY97678) nimGetProcAddr(TMP145, "sendto");
	Dl_97687 = (TY97688) nimGetProcAddr(TMP145, "shutdown");
	Dl_97692 = (TY97693) nimGetProcAddr(TMP145, "getnameinfo");
	Dl_97703 = (TY97704) nimGetProcAddr(TMP145, "inet_addr");
	Dl_97707 = (TY97708) nimGetProcAddr(TMP145, "__WSAFDIsSet");
	Dl_97753 = (TY97754) nimGetProcAddr(TMP145, "WSAStartup");
	Dl_97759 = (TY97760) nimGetProcAddr(TMP145, "getaddrinfo");
	Dl_97769 = (TY97770) nimGetProcAddr(TMP145, "freeaddrinfo");
	Dl_97774 = (TY97775) nimGetProcAddr(TMP145, "inet_ntoa");
	Dl_97786 = (TY97787) nimGetProcAddr(TMP139, "WaitForMultipleObjects");
	Dl_97815 = (TY97816) nimGetProcAddr(TMP139, "CreateFileW");
	Dl_97824 = (TY97825) nimGetProcAddr(TMP139, "DeleteFileW");
	Dl_98002 = (TY98003) nimGetProcAddr(TMP139, "SetEndOfFile");
	Dl_98006 = (TY98007) nimGetProcAddr(TMP139, "SetFilePointer");
	Dl_98014 = (TY98015) nimGetProcAddr(TMP139, "GetFileSize");
	Dl_98020 = (TY98021) nimGetProcAddr(TMP139, "MapViewOfFileEx");
	Dl_98029 = (TY98030) nimGetProcAddr(TMP139, "CreateFileMappingW");
	Dl_98201 = (TY98202) nimGetProcAddr(TMP139, "UnmapViewOfFile");
	Dl_98242 = (TY98243) nimGetProcAddr(TMP139, "CreateIoCompletionPort");
	Dl_98249 = (TY98250) nimGetProcAddr(TMP139, "GetQueuedCompletionStatus");
	Dl_98301 = (TY98302) nimGetProcAddr(TMP145, "WSAIoctl");
	Dl_98318 = (TY98319) nimGetProcAddr(TMP145, "WSARecv");
	Dl_98329 = (TY98330) nimGetProcAddr(TMP145, "WSASend");
}

