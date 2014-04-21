/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/mman.h>

#include <sys/types.h>

#include <string.h>

#include <fcntl.h>

#include <unistd.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct tmemfile234204 tmemfile234204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  tmemfile234204  {
void* Mem;
NI Size;
int Handle;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void*, mapmem_234210)(tmemfile234204* m, NU8 mode, NI mappedsize, NI offset);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
N_NIMCALL(void, oserror_107205)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_107231)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, unmapmem_234605)(tmemfile234204* f, void* p, NI size);
N_NIMCALL(tmemfile234204, open_234803)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(void, close_235243)(tmemfile234204* f);
STRING_LITERAL(TMP2959, "mappedSize > 0 ", 15);
STRING_LITERAL(TMP2960, "newFileSize == - 1 or mode != fmRead ", 37);
extern TFrame* frameptr_13038;
TNimType NTI234204; /* TMemFile */
extern TNimType NTI147; /* pointer */
extern TNimType NTI106; /* int */
extern TNimType NTI4409; /* cint */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void*, mapmem_234210)(tmemfile234204* m, NU8 mode, NI mappedsize, NI offset) {
	void* result;
	NIM_BOOL readonly;
	int LOC5;
	int LOC11;
	nimfr("mapMem", "memfiles.nim")
	result = 0;
	nimln(40, "memfiles.nim");
	nimln(40, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(52, "memfiles.nim");
	{
		nimln(52, "memfiles.nim");
		nimln(52, "memfiles.nim");
		if (!!((0 < mappedsize))) goto LA3;
		nimln(52, "memfiles.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP2959));
	}
	LA3: ;
	nimln(53, "memfiles.nim");
	LOC5 = 0;
	nimln(56, "memfiles.nim");
	{
		if (!readonly) goto LA8;
		LOC5 = PROT_READ;
	}
	goto LA6;
	LA8: ;
	{
		nimln(56, "memfiles.nim");
		LOC5 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA6: ;
	LOC11 = 0;
	nimln(57, "memfiles.nim");
	{
		if (!readonly) goto LA14;
		LOC11 = MAP_PRIVATE;
	}
	goto LA12;
	LA14: ;
	{
		LOC11 = MAP_SHARED;
	}
	LA12: ;
	result = mmap(NIM_NIL, mappedsize, LOC5, LOC11, (*m).Handle, ((off_t) (offset)));
	nimln(59, "memfiles.nim");
	{
		NI32 LOC21;
		nimln(59, "memfiles.nim");
		if (!(result == ((void*) (MAP_FAILED)))) goto LA19;
		nimln(60, "memfiles.nim");
		nimln(60, "memfiles.nim");
		LOC21 = 0;
		LOC21 = oslasterror_107231();
		oserror_107205(LOC21);
	}
	LA19: ;
	popFrame();
	return result;
}

N_NIMCALL(void, unmapmem_234605)(tmemfile234204* f, void* p, NI size) {
	nimfr("unmapMem", "memfiles.nim")
	nimln(71, "memfiles.nim");
	{
		int LOC3;
		NI32 LOC6;
		nimln(71, "memfiles.nim");
		nimln(71, "memfiles.nim");
		nimln(71, "memfiles.nim");
		LOC3 = 0;
		LOC3 = munmap(p, size);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		nimln(71, "memfiles.nim");
		nimln(71, "memfiles.nim");
		LOC6 = 0;
		LOC6 = oslasterror_107231();
		oserror_107205(LOC6);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(tmemfile234204, open_234803)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	tmemfile234204 result;
	NIM_BOOL readonly;
	int flags;
	int LOC58;
	int LOC64;
	nimfr("open", "memfiles.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(82, "memfiles.nim");
	{
		NIM_BOOL LOC3;
		nimln(82, "memfiles.nim");
		nimln(82, "memfiles.nim");
		LOC3 = 0;
		nimln(82, "memfiles.nim");
		LOC3 = (newfilesize == -1);
		if (LOC3) goto LA4;
		nimln(82, "memfiles.nim");
		nimln(82, "memfiles.nim");
		LOC3 = !((mode == ((NU8) 0)));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		nimln(82, "memfiles.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP2960));
	}
	LA5: ;
	nimln(83, "memfiles.nim");
	nimln(83, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(164, "memfiles.nim");
	nimln(164, "memfiles.nim");
	{
		if (!readonly) goto LA9;
		flags = O_RDONLY;
	}
	goto LA7;
	LA9: ;
	{
		flags = O_RDWR;
	}
	LA7: ;
	nimln(166, "memfiles.nim");
	{
		nimln(166, "memfiles.nim");
		nimln(166, "memfiles.nim");
		if (!!((newfilesize == -1))) goto LA14;
		nimln(167, "memfiles.nim");
		nimln(167, "memfiles.nim");
		nimln(167, "memfiles.nim");
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
	}
	LA14: ;
	nimln(169, "memfiles.nim");
	result.Handle = open(filename->data, flags);
	nimln(170, "memfiles.nim");
	{
		NI32 LOC25;
		nimln(170, "memfiles.nim");
		if (!(result.Handle == ((NI32) -1))) goto LA18;
		nimln(86, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(87, "memfiles.nim");
		result.Size = 0;
		nimln(161, "memfiles.nim");
		{
			int LOC24;
			nimln(161, "memfiles.nim");
			nimln(161, "memfiles.nim");
			if (!!((result.Handle == ((NI32) 0)))) goto LA22;
			nimln(161, "memfiles.nim");
			nimln(161, "memfiles.nim");
			LOC24 = 0;
			LOC24 = close(result.Handle);
		}
		LA22: ;
		nimln(162, "memfiles.nim");
		nimln(173, "memfiles.nim");
		LOC25 = 0;
		LOC25 = oslasterror_107231();
		oserror_107205(LOC25);
	}
	LA18: ;
	nimln(175, "memfiles.nim");
	{
		nimln(175, "memfiles.nim");
		nimln(175, "memfiles.nim");
		if (!!((newfilesize == -1))) goto LA28;
		nimln(176, "memfiles.nim");
		{
			int LOC32;
			NI32 LOC40;
			nimln(176, "memfiles.nim");
			nimln(176, "memfiles.nim");
			LOC32 = 0;
			LOC32 = ftruncate(result.Handle, ((off_t) (newfilesize)));
			if (!(LOC32 == ((NI32) -1))) goto LA33;
			nimln(86, "memfiles.nim");
			result.Mem = NIM_NIL;
			nimln(87, "memfiles.nim");
			result.Size = 0;
			nimln(161, "memfiles.nim");
			{
				int LOC39;
				nimln(161, "memfiles.nim");
				nimln(161, "memfiles.nim");
				if (!!((result.Handle == ((NI32) 0)))) goto LA37;
				nimln(161, "memfiles.nim");
				nimln(161, "memfiles.nim");
				LOC39 = 0;
				LOC39 = close(result.Handle);
			}
			LA37: ;
			nimln(162, "memfiles.nim");
			nimln(177, "memfiles.nim");
			LOC40 = 0;
			LOC40 = oslasterror_107231();
			oserror_107205(LOC40);
		}
		LA33: ;
	}
	LA28: ;
	nimln(179, "memfiles.nim");
	{
		nimln(179, "memfiles.nim");
		nimln(179, "memfiles.nim");
		if (!!((mappedsize == -1))) goto LA43;
		nimln(180, "memfiles.nim");
		result.Size = mappedsize;
	}
	goto LA41;
	LA43: ;
	{
		struct stat stat;
		memset((void*)&stat, 0, sizeof(stat));
		nimln(183, "memfiles.nim");
		{
			int LOC48;
			nimln(183, "memfiles.nim");
			nimln(183, "memfiles.nim");
			nimln(183, "memfiles.nim");
			LOC48 = 0;
			LOC48 = fstat(result.Handle, &stat);
			if (!!((LOC48 == ((NI32) -1)))) goto LA49;
			nimln(186, "memfiles.nim");
			result.Size = ((NI)chckRange64(stat.st_size, (-2147483647 -1), 2147483647));
		}
		goto LA46;
		LA49: ;
		{
			NI32 LOC57;
			nimln(86, "memfiles.nim");
			result.Mem = NIM_NIL;
			nimln(87, "memfiles.nim");
			result.Size = 0;
			nimln(161, "memfiles.nim");
			{
				int LOC56;
				nimln(161, "memfiles.nim");
				nimln(161, "memfiles.nim");
				if (!!((result.Handle == ((NI32) 0)))) goto LA54;
				nimln(161, "memfiles.nim");
				nimln(161, "memfiles.nim");
				LOC56 = 0;
				LOC56 = close(result.Handle);
			}
			LA54: ;
			nimln(162, "memfiles.nim");
			nimln(188, "memfiles.nim");
			LOC57 = 0;
			LOC57 = oslasterror_107231();
			oserror_107205(LOC57);
		}
		LA46: ;
	}
	LA41: ;
	nimln(190, "memfiles.nim");
	LOC58 = 0;
	nimln(193, "memfiles.nim");
	{
		if (!readonly) goto LA61;
		LOC58 = PROT_READ;
	}
	goto LA59;
	LA61: ;
	{
		nimln(193, "memfiles.nim");
		LOC58 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA59: ;
	LOC64 = 0;
	nimln(194, "memfiles.nim");
	{
		if (!readonly) goto LA67;
		LOC64 = MAP_PRIVATE;
	}
	goto LA65;
	LA67: ;
	{
		LOC64 = MAP_SHARED;
	}
	LA65: ;
	result.Mem = mmap(NIM_NIL, result.Size, LOC58, LOC64, result.Handle, ((off_t) (offset)));
	nimln(198, "memfiles.nim");
	{
		NI32 LOC79;
		nimln(198, "memfiles.nim");
		if (!(result.Mem == ((void*) (MAP_FAILED)))) goto LA72;
		nimln(86, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(87, "memfiles.nim");
		result.Size = 0;
		nimln(161, "memfiles.nim");
		{
			int LOC78;
			nimln(161, "memfiles.nim");
			nimln(161, "memfiles.nim");
			if (!!((result.Handle == ((NI32) 0)))) goto LA76;
			nimln(161, "memfiles.nim");
			nimln(161, "memfiles.nim");
			LOC78 = 0;
			LOC78 = close(result.Handle);
		}
		LA76: ;
		nimln(162, "memfiles.nim");
		nimln(199, "memfiles.nim");
		LOC79 = 0;
		LOC79 = oslasterror_107231();
		oserror_107205(LOC79);
	}
	LA72: ;
	popFrame();
	return result;
}

N_NIMCALL(void, close_235243)(tmemfile234204* f) {
	NIM_BOOL error;
	NI32 lasterr;
	nimfr("close", "memfiles.nim")
	nimln(205, "memfiles.nim");
	error = NIM_FALSE;
	lasterr = 0;
	nimln(215, "memfiles.nim");
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		nimln(215, "memfiles.nim");
		nimln(215, "memfiles.nim");
		if (!!(((*f).Handle == ((NI32) 0)))) goto LA3;
		nimln(216, "memfiles.nim");
		nimln(216, "memfiles.nim");
		nimln(216, "memfiles.nim");
		nimln(216, "memfiles.nim");
		LOC5 = 0;
		LOC5 = munmap((*f).Mem, (*f).Size);
		error = !((LOC5 == ((NI32) 0)));
		nimln(217, "memfiles.nim");
		lasterr = oslasterror_107231();
		nimln(218, "memfiles.nim");
		nimln(218, "memfiles.nim");
		LOC6 = 0;
		nimln(218, "memfiles.nim");
		nimln(218, "memfiles.nim");
		nimln(218, "memfiles.nim");
		LOC7 = 0;
		LOC7 = close((*f).Handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
	}
	LA3: ;
	nimln(220, "memfiles.nim");
	(*f).Size = 0;
	nimln(221, "memfiles.nim");
	(*f).Mem = NIM_NIL;
	nimln(227, "memfiles.nim");
	(*f).Handle = ((int) 0);
	nimln(229, "memfiles.nim");
	{
		if (!error) goto LA11;
		nimln(229, "memfiles.nim");
		oserror_107205(lasterr);
	}
	LA11: ;
	popFrame();
}
N_NOINLINE(void, stdlibmemfilesInit)(void) {
	nimfr("memfiles", "memfiles.nim")
	popFrame();
}

N_NOINLINE(void, stdlibmemfilesDatInit)(void) {
static TNimNode* TMP3041[3];
static TNimNode TMP2957[4];
NTI234204.size = sizeof(tmemfile234204);
NTI234204.kind = 18;
NTI234204.base = 0;
NTI234204.flags = 3;
TMP3041[0] = &TMP2957[1];
TMP2957[1].kind = 1;
TMP2957[1].offset = offsetof(tmemfile234204, Mem);
TMP2957[1].typ = (&NTI147);
TMP2957[1].name = "mem";
TMP3041[1] = &TMP2957[2];
TMP2957[2].kind = 1;
TMP2957[2].offset = offsetof(tmemfile234204, Size);
TMP2957[2].typ = (&NTI106);
TMP2957[2].name = "size";
TMP3041[2] = &TMP2957[3];
TMP2957[3].kind = 1;
TMP2957[3].offset = offsetof(tmemfile234204, Handle);
TMP2957[3].typ = (&NTI4409);
TMP2957[3].name = "handle";
TMP2957[0].len = 3; TMP2957[0].kind = 2; TMP2957[0].sons = &TMP3041[0];
NTI234204.node = &TMP2957[0];
}

