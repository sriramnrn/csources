/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct streamobj134035 streamobj134035;
typedef struct TNimObject TNimObject;
typedef struct filestreamobj134742 filestreamobj134742;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ioerror3231 ioerror3231;
typedef struct systemerror3229 systemerror3229;
typedef struct Exception Exception;
typedef struct tcell44735 tcell44735;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44747 tcellset44747;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY134036) (streamobj134035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY134040) (streamobj134035* s);
typedef N_NIMCALL_PTR(void, TY134044) (streamobj134035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY134049) (streamobj134035* s);
typedef N_NIMCALL_PTR(NI, TY134053) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134059) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134065) (streamobj134035* s);
struct  streamobj134035  {
  TNimObject Sup;
TY134036 Closeimpl;
TY134040 Atendimpl;
TY134044 Setpositionimpl;
TY134049 Getpositionimpl;
TY134053 Readdataimpl;
TY134059 Writedataimpl;
TY134065 Flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  filestreamobj134742  {
  streamobj134035 Sup;
FILE* F;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3229  {
  Exception Sup;
};
struct  ioerror3231  {
  systemerror3229 Sup;
};
struct  tcell44735  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44751  {
NI Len;
NI Cap;
tcell44735** D;
};
struct  tcellset44747  {
NI Counter;
NI Max;
tpagedesc44743* Head;
tpagedesc44743** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44751 Zct;
tcellseq44751 Decstack;
tcellset44747 Cycleroots;
tcellseq44751 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
};
typedef NI TY26220[8];
struct  tpagedesc44743  {
tpagedesc44743* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
N_NIMCALL(void, TMP2689)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_12403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(filestreamobj134742*, newfilestream_134814)(FILE* f);
N_NIMCALL(void, TMP2690)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_134746)(streamobj134035* s);
N_NIMCALL(NIM_BOOL, fsatend_134775)(streamobj134035* s);
N_NIMCALL(NIM_BOOL, endoffile_12630)(FILE* f);
N_NIMCALL(void, fssetposition_134782)(streamobj134035* s, NI pos);
N_NIMCALL(void, setfilepos_12851)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_134789)(streamobj134035* s);
N_NIMCALL(NI64, getfilepos_12855)(FILE* f);
N_NIMCALL(NI, fsreaddata_134797)(streamobj134035* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_12827)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_134806)(streamobj134035* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_12846)(FILE* f, void* buffer, NI len);
N_NIMCALL(ioerror3231*, neweio_134005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_134769)(streamobj134035* s);
N_NIMCALL(void, writedata_134207)(streamobj134035* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_134298)(streamobj134035* s);
N_NIMCALL(NI, readdata_134182)(streamobj134035* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP2693, "cannot write to stream", 22);
STRING_LITERAL(TMP2840, "", 0);
extern TNimType NTI3211; /* RootObj */
TNimType NTI134035; /* StreamObj */
TNimType NTI134036; /* proc (Stream){.gcsafe.} */
TNimType NTI134040; /* proc (Stream): bool{.gcsafe.} */
TNimType NTI134044; /* proc (Stream, int){.gcsafe.} */
TNimType NTI134049; /* proc (Stream): int{.gcsafe.} */
TNimType NTI134053; /* proc (Stream, pointer, int): int{.gcsafe.} */
TNimType NTI134059; /* proc (Stream, pointer, int){.gcsafe.} */
TNimType NTI134065; /* proc (Stream){.gcsafe.} */
TNimType NTI134033; /* Stream */
TNimType NTI134742; /* FileStreamObj */
extern TNimType NTI12204; /* File */
TNimType NTI134740; /* FileStream */
extern TNimType NTI76801; /* ref IOError */
extern TNimType NTI3231; /* IOError */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP2689)(void* p, NI op) {
	streamobj134035* a;
	a = (streamobj134035*)p;
}

N_NIMCALL(NI, readdata_134182)(streamobj134035* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).Readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2690)(void* p, NI op) {
	filestreamobj134742* a;
	a = (filestreamobj134742*)p;
}

N_NIMCALL(void, fsclose_134746)(streamobj134035* s) {
	{
		if (!!(((*((filestreamobj134742*) (s))).F == NIM_NIL))) goto LA3;
		fclose((*((filestreamobj134742*) (s))).F);
		(*((filestreamobj134742*) (s))).F = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_134775)(streamobj134035* s) {
	NIM_BOOL result;
	result = 0;
	result = endoffile_12630((*((filestreamobj134742*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_134782)(streamobj134035* s, NI pos) {
	setfilepos_12851((*((filestreamobj134742*) (s))).F, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_134789)(streamobj134035* s) {
	NI result;
	NI64 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_12855((*((filestreamobj134742*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_134797)(streamobj134035* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_12827((*((filestreamobj134742*) (s))).F, buffer, buflen);
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

N_NIMCALL(ioerror3231*, neweio_134005)(NimStringDesc* msg) {
	ioerror3231* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (ioerror3231*) newObj((&NTI76801), sizeof(ioerror3231));
	(*result).Sup.Sup.Sup.m_type = (&NTI3231);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_134806)(streamobj134035* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		ioerror3231* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_12846((*((filestreamobj134742*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_134005(((NimStringDesc*) &TMP2693));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_134769)(streamobj134035* s) {
	fflush((*((filestreamobj134742*) (s))).F);
}

N_NIMCALL(filestreamobj134742*, newfilestream_134814)(FILE* f) {
	filestreamobj134742* result;
	result = 0;
	result = (filestreamobj134742*) newObj((&NTI134740), sizeof(filestreamobj134742));
	(*result).Sup.Sup.m_type = (&NTI134742);
	(*result).F = f;
	(*result).Sup.Closeimpl = fsclose_134746;
	(*result).Sup.Atendimpl = fsatend_134775;
	(*result).Sup.Setpositionimpl = fssetposition_134782;
	(*result).Sup.Getpositionimpl = fsgetposition_134789;
	(*result).Sup.Readdataimpl = fsreaddata_134797;
	(*result).Sup.Writedataimpl = fswritedata_134806;
	(*result).Sup.Flushimpl = fsflush_134769;
	return result;
}

N_NIMCALL(filestreamobj134742*, newfilestream_134837)(NimStringDesc* filename, NU8 mode) {
	filestreamobj134742* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12403(&f, filename, mode, -1);
		if (!LOC3) goto LA4;
		result = newfilestream_134814(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_134093)(streamobj134035* s) {
	{
		if (!!((*s).Closeimpl == 0)) goto LA3;
		(*s).Closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_134207)(streamobj134035* s, void* buffer, NI buflen) {
	(*s).Writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_134241)(streamobj134035* s, NimStringDesc* x) {
	writedata_134207(s, ((void*) (x->data)), x->Sup.len);
}

N_NIMCALL(NIM_BOOL, atend_134119)(streamobj134035* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).Atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_134298)(streamobj134035* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_134182(s, ((void*) (&result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_134564)(streamobj134035* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2840));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_134298(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_134298(s);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP2688[7];
static TNimNode TMP31[9];
NTI134035.size = sizeof(streamobj134035);
NTI134035.kind = 17;
NTI134035.base = (&NTI3211);
NTI134035.flags = 1;
TMP2688[0] = &TMP31[1];
NTI134036.size = sizeof(TY134036);
NTI134036.kind = 25;
NTI134036.base = 0;
NTI134036.flags = 3;
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(streamobj134035, Closeimpl);
TMP31[1].typ = (&NTI134036);
TMP31[1].name = "closeImpl";
TMP2688[1] = &TMP31[2];
NTI134040.size = sizeof(TY134040);
NTI134040.kind = 25;
NTI134040.base = 0;
NTI134040.flags = 3;
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(streamobj134035, Atendimpl);
TMP31[2].typ = (&NTI134040);
TMP31[2].name = "atEndImpl";
TMP2688[2] = &TMP31[3];
NTI134044.size = sizeof(TY134044);
NTI134044.kind = 25;
NTI134044.base = 0;
NTI134044.flags = 3;
TMP31[3].kind = 1;
TMP31[3].offset = offsetof(streamobj134035, Setpositionimpl);
TMP31[3].typ = (&NTI134044);
TMP31[3].name = "setPositionImpl";
TMP2688[3] = &TMP31[4];
NTI134049.size = sizeof(TY134049);
NTI134049.kind = 25;
NTI134049.base = 0;
NTI134049.flags = 3;
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(streamobj134035, Getpositionimpl);
TMP31[4].typ = (&NTI134049);
TMP31[4].name = "getPositionImpl";
TMP2688[4] = &TMP31[5];
NTI134053.size = sizeof(TY134053);
NTI134053.kind = 25;
NTI134053.base = 0;
NTI134053.flags = 3;
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(streamobj134035, Readdataimpl);
TMP31[5].typ = (&NTI134053);
TMP31[5].name = "readDataImpl";
TMP2688[5] = &TMP31[6];
NTI134059.size = sizeof(TY134059);
NTI134059.kind = 25;
NTI134059.base = 0;
NTI134059.flags = 3;
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(streamobj134035, Writedataimpl);
TMP31[6].typ = (&NTI134059);
TMP31[6].name = "writeDataImpl";
TMP2688[6] = &TMP31[7];
NTI134065.size = sizeof(TY134065);
NTI134065.kind = 25;
NTI134065.base = 0;
NTI134065.flags = 3;
TMP31[7].kind = 1;
TMP31[7].offset = offsetof(streamobj134035, Flushimpl);
TMP31[7].typ = (&NTI134065);
TMP31[7].name = "flushImpl";
TMP31[0].len = 7; TMP31[0].kind = 2; TMP31[0].sons = &TMP2688[0];
NTI134035.node = &TMP31[0];
NTI134033.size = sizeof(streamobj134035*);
NTI134033.kind = 22;
NTI134033.base = (&NTI134035);
NTI134033.marker = TMP2689;
NTI134742.size = sizeof(filestreamobj134742);
NTI134742.kind = 17;
NTI134742.base = (&NTI134035);
NTI134742.flags = 1;
TMP31[8].kind = 1;
TMP31[8].offset = offsetof(filestreamobj134742, F);
TMP31[8].typ = (&NTI12204);
TMP31[8].name = "f";
NTI134742.node = &TMP31[8];
NTI134740.size = sizeof(filestreamobj134742*);
NTI134740.kind = 22;
NTI134740.base = (&NTI134742);
NTI134740.marker = TMP2690;
}

