/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <errno.h>

#include <netdb.h>

#include <time.h>

#include <dlfcn.h>

#include <fcntl.h>

#include <fenv.h>

#include <fmtmsg.h>

#include <fnmatch.h>

#include <ftw.h>

#include <glob.h>

#include <langinfo.h>

#include <locale.h>

#include <pthread.h>

#include <unistd.h>

#include <semaphore.h>

#include <sys/ipc.h>

#include <sys/stat.h>

#include <sys/statvfs.h>

#include <sys/mman.h>

#include <sys/wait.h>

#include <signal.h>

#include <nl_types.h>

#include <sched.h>

#include <sys/select.h>

#include <sys/socket.h>

#include <net/if.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <poll.h>

#include <spawn.h>

#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
TNimType NTI97457; /* TPid */
extern TFrame* frameptr_13038;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}
N_NOINLINE(void, stdlibposixInit)(void) {
	nimfr("posix", "posix.nim")
	popFrame();
}

N_NOINLINE(void, stdlibposixDatInit)(void) {
NTI97457.size = sizeof(pid_t);
NTI97457.kind = 31;
NTI97457.base = 0;
NTI97457.flags = 3;
}

