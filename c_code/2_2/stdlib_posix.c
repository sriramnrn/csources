/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
TNimType NTI104462; /* TPid */
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void) {
NTI104462.size = sizeof(pid_t);
NTI104462.kind = 31;
NTI104462.base = 0;
NTI104462.flags = 3;
}

