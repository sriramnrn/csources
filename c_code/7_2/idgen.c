/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
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
typedef NimStringDesc* TY196301[1];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_12403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, togid_222467)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_169001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12689)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(FILE*, open_12417)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_169205)(FILE* f_169209, NimStringDesc** x_169213, NI x_169213Len0);
N_NIMCALL(void, write_12665)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
STRING_LITERAL(TMP1355, "nimrod.gid", 10);
STRING_LITERAL(TMP4104, "\012", 1);
NI gfrontendid_222012;
NI gbackendid_222013;

N_NIMCALL(NimStringDesc*, togid_222467)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = completegeneratedfilepath_169001(((NimStringDesc*) &TMP1355), NIM_TRUE);
	return result;
}

N_NIMCALL(void, loadmaxids_222519)(NimStringDesc* project) {
	FILE* f;
	f = 0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_222467(project);
		LOC4 = 0;
		LOC4 = open_12403(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		line = rawNewString(20);
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_12689(f, &line);
			if (!LOC9) goto LA10;
			frontendid = nsuParseInt(line);
			{
				NIM_BOOL LOC14;
				NI backendid;
				LOC14 = 0;
				LOC14 = readline_12689(f, &line);
				if (!LOC14) goto LA15;
				backendid = nsuParseInt(line);
				gfrontendid_222012 = ((gfrontendid_222012 >= frontendid) ? gfrontendid_222012 : frontendid);
				gbackendid_222013 = ((gbackendid_222013 >= backendid) ? gbackendid_222013 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		fclose(f);
	}
	LA5: ;
}

N_NIMCALL(void, registerid_222201)(tidobj199015* id) {
}

N_NIMCALL(void, idsynchronizationpoint_222458)(NI idrange) {
	gfrontendid_222012 = (NI64)((NI64)((NI64)((NI64)(gfrontendid_222012 / idrange) + 1) * idrange) + 1);
}

static N_INLINE(void, writeln_169205)(FILE* f_169209, NimStringDesc** x_169213, NI x_169213Len0) {
	{
		NimStringDesc* i_169226;
		NI i_169234;
		i_169226 = 0;
		i_169234 = 0;
		{
			while (1) {
				if (!(i_169234 < x_169213Len0)) goto LA3;
				i_169226 = x_169213[i_169234];
				write_12665(f_169209, i_169226);
				i_169234 += 1;
			} LA3: ;
		}
	}
	write_12665(f_169209, ((NimStringDesc*) &TMP4104));
}

N_NIMCALL(void, savemaxids_222477)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY196301 LOC2;
	TY196301 LOC3;
	LOC1 = 0;
	LOC1 = togid_222467(project);
	f = open_12417(LOC1, ((NU8) 1), -1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_222012);
	writeln_169205(f, LOC2, 1);
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_222013);
	writeln_169205(f, LOC3, 1);
	fclose(f);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_idgenInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_idgenDatInit)(void) {
}

