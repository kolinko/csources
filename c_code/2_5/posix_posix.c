/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <errno.h>

#include <netdb.h>

#include <time.h>

#include <aio.h>

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
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
TNimType NTI91457; /* TPid */
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}N_NOINLINE(void, posixposixInit)(void) {
	nimfr("posix", "posix.nim")
	popFrame();
}

N_NOINLINE(void, posixposixDatInit)(void) {
NTI91457.size = sizeof(pid_t);
NTI91457.kind = 31;
NTI91457.base = 0;
NTI91457.flags = 3;
}
