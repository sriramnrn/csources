/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen544035 tcgen544035;
typedef struct tllstream211204 tllstream211204;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable224867 tidtable224867;
typedef struct tidobj200015 tidobj200015;
typedef struct ttype224855 ttype224855;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tnode224819 tnode224819;
typedef struct tsym224849 tsym224849;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct tidpairseq224865 tidpairseq224865;
typedef struct tidpair224863 tidpair224863;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc544031 tcproc544031;
typedef struct tnodetable224879 tnodetable224879;
typedef struct tnodepairseq224877 tnodepairseq224877;
typedef struct tnodepair224875 tnodepair224875;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct TY195552 TY195552;
typedef struct TY544102 TY544102;
typedef struct tblock544029 tblock544029;
typedef struct tmergesections545861 tmergesections545861;
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
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tident200021 tident200021;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY224939 TY224939;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  tbaselexer213024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream211204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope177009* tcfilesections544019[18];
struct  tidpair224863  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable224867  {
NI Counter;
tidpairseq224865* Data;
};
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair224875  {
NI H;
tnode224819* Key;
NI Val;
};
struct  tnodetable224879  {
NI Counter;
tnodepairseq224877* Data;
};
typedef trope177009* TY544138[10];
struct  tcgen544035  {
  tpasscontext285005 Sup;
tsym224849* Module;
NimStringDesc* Filename;
tcfilesections544019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable224867 Typecache;
tidtable224867 Forwtypecache;
intset221056 Declaredthings;
intset221056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset221056 Typeinfomarker;
tcproc544031* Initproc;
tcproc544031* Postinitproc;
tcproc544031* Preinitproc;
ttypeseq224851* Typestack;
tnodetable224879 Datacache;
tsymseq224821* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY544138 Extensionloaders;
trope177009* Injectstmt;
};
typedef trope177009* tcprocsections544023[3];
struct  tblock544029  {
NI Id;
trope177009* Label;
tcprocsections544023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc544031  {
tsym224849* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq224813* Nestedtrystmts;
NI Inexceptblock;
TY195552* Finallysafepoints;
NI Labels;
TY544102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen544035* Module;
NI Withinloop;
NI Gcframeid;
trope177009* Gcframetype;
};
struct  tmergesections545861  {
tcfilesections544019 F;
tcprocsections544023 P;
};
typedef NimStringDesc* TY545013[18];
typedef NimStringDesc* TY545019[3];
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
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26220 Bits;
};
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct tidpairseq224865 {
  TGenericSeq Sup;
  tidpair224863 data[SEQ_DECL_SIZE];
};
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq224877 {
  TGenericSeq Sup;
  tnodepair224875 data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY544102 {
  TGenericSeq Sup;
  tblock544029 data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_213035)(tbaselexer213024* l, tllstream211204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_545402)(tbaselexer213024* l);
N_NIMCALL(NI, handlecr_213066)(tbaselexer213024* l, NI pos);
N_NIMCALL(NI, handlelf_213074)(tbaselexer213024* l, NI pos);
N_NIMCALL(void, readkey_545535)(tbaselexer213024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_545711)(tbaselexer213024* l, tcgen544035* m);
N_NIMCALL(void, skipwhite_545372)(tbaselexer213024* l);
N_NIMCALL(void, readtypecache_545607)(tbaselexer213024* l, tidtable224867* result);
N_NIMCALL(NI, decodevint_233359)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_233155)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_234196)(tidtable224867* t, tidobj200015* key, TNimObject* val);
N_NIMCALL(ttype224855*, newfaketype_545581)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(void, readintset_545666)(tbaselexer213024* l, intset221056* result);
N_NIMCALL(void, incl_221869)(intset221056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_213045)(tbaselexer213024* l);
static N_INLINE(trope177009**, s_544183)(tcproc544031* p, NU8 s);
N_NIMCALL(void, readmergesections_545867)(NimStringDesc* cfilename, tmergesections545861* m);
N_NIMCALL(trope177009*, readverbatimsection_545489)(tbaselexer213024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_545456)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_545914)(TY545013 a_545919, NimStringDesc* item_545921);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_546017)(TY545019 a_546022, NimStringDesc* item_546024);
N_NIMCALL(trope177009*, con_177024)(trope177009* a, trope177009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void, app_177060)(trope177009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_545224)(tidtable224867 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_233304)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_233042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_177101)(trope177009* p);
N_NIMCALL(void, writeintset_545271)(intset221056* a, NimStringDesc** s);
STRING_LITERAL(TMP4030, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4031, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4032, "typeCache", 9);
STRING_LITERAL(TMP4033, "declared", 8);
STRING_LITERAL(TMP4034, "typeInfo", 8);
STRING_LITERAL(TMP4035, "labels", 6);
STRING_LITERAL(TMP4036, "hasframe", 8);
STRING_LITERAL(TMP4037, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4038, "ccgmerge: unkown key: ", 22);
STRING_LITERAL(TMP4109, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4110, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4111, "", 0);
STRING_LITERAL(TMP4112, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4113, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4114, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4115, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4116, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4117, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4118, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4119, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4120, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4121, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4122, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4123, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4124, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4125, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4126, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4127, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4128, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY545013 cfilesectionnames_545012 = {((NimStringDesc*) &TMP4111),
((NimStringDesc*) &TMP4112),
((NimStringDesc*) &TMP4113),
((NimStringDesc*) &TMP4114),
((NimStringDesc*) &TMP4115),
((NimStringDesc*) &TMP4116),
((NimStringDesc*) &TMP4117),
((NimStringDesc*) &TMP4118),
((NimStringDesc*) &TMP4119),
((NimStringDesc*) &TMP4120),
((NimStringDesc*) &TMP4121),
((NimStringDesc*) &TMP4122),
((NimStringDesc*) &TMP4123),
((NimStringDesc*) &TMP4124),
((NimStringDesc*) &TMP4125),
((NimStringDesc*) &TMP4126),
((NimStringDesc*) &TMP4127),
((NimStringDesc*) &TMP4128)}
;
STRING_LITERAL(TMP4129, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4130, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4131, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY545019 cprocsectionnames_545018 = {((NimStringDesc*) &TMP4129),
((NimStringDesc*) &TMP4130),
((NimStringDesc*) &TMP4131)}
;
STRING_LITERAL(TMP4132, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4133, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4138, "/*\011", 3);
STRING_LITERAL(TMP4139, ":*/", 3);
STRING_LITERAL(TMP4149, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4150, "typeCache:{", 11);
STRING_LITERAL(TMP4151, "declared:{", 10);
STRING_LITERAL(TMP4152, "typeInfo:{", 10);
STRING_LITERAL(TMP4153, "labels:", 7);
STRING_LITERAL(TMP4154, " hasframe:", 10);
STRING_LITERAL(TMP4155, "*/", 2);
extern TNimType NTI213024; /* TBaseLexer */
extern TNimType NTI224815; /* PType */
extern TNimType NTI224855; /* TType */
extern NimStringDesc* tnl_174613;
extern tgcheap46816 gch_46844;
extern NU32 gglobaloptions_169118;

N_NIMCALL(void, skipuntilcmd_545402)(tbaselexer213024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_213066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*l).Buf[(NI64)(pos + 1)]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*l).Buf[(NI64)(pos + 2)]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += 3;
					goto LA1;
				}
				LA11: ;
				pos += 1;
			}
			break;
			default:
			{
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(void, readkey_545535)(tbaselexer213024* l, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	(*result) = setLengthStr((*result), 0);
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_197989(((NimStringDesc*) &TMP4030));
	}
	LA5: ;
	(*l).Bufpos = (NI64)(pos + 1);
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

N_NIMCALL(void, skipwhite_545372)(tbaselexer213024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_213066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
			}
			break;
			case 32:
			{
				pos += 1;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(ttype224855*, newfaketype_545581)(NI id) {
	ttype224855* result;
	result = 0;
	result = (ttype224855*) newObj((&NTI224815), sizeof(ttype224855));
	(*result).Sup.Sup.m_type = (&NTI224855);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_545607)(tbaselexer213024* l, tidtable224867* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_197989(((NimStringDesc*) &TMP4037));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype224855* LOC11;
			trope177009* LOC12;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_545372(l);
			key = decodevint_233359((*l).Buf, &(*l).Bufpos);
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_197989(((NimStringDesc*) &TMP4030));
			}
			LA9: ;
			(*l).Bufpos += 1;
			value = decodestr_233155((*l).Buf, &(*l).Bufpos);
			LOC11 = 0;
			LOC11 = newfaketype_545581(key);
			LOC12 = 0;
			LOC12 = torope_177076(value);
			idtableput_234196(result, &LOC11->Sup, &LOC12->Sup);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

N_NIMCALL(void, readintset_545666)(tbaselexer213024* l, intset221056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_197989(((NimStringDesc*) &TMP4037));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_545372(l);
			key = decodevint_233359((*l).Buf, &(*l).Bufpos);
			incl_221869(result, key);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_545711)(tbaselexer213024* l, tcgen544035* m) {
	NimStringDesc* k;
	k = rawNewString(9);
	{
		while (1) {
			skipwhite_545372(l);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*l).Buf[(NI64)((*l).Bufpos + 1)]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*l).Bufpos += 2;
				goto LA1;
			}
			LA7: ;
			readkey_545535(l, &k);
			if (eqStrings(k, ((NimStringDesc*) &TMP4032))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4033))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4034))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4035))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4036))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_545607(l, &(*m).Typecache);
			}
			goto LA15;
			LA10: ;
			{
				readintset_545666(l, &(*m).Declaredthings);
			}
			goto LA15;
			LA11: ;
			{
				readintset_545666(l, &(*m).Typeinfomarker);
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_233359((*l).Buf, &(*l).Bufpos);
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_233359((*l).Buf, &(*l).Bufpos);
				(*m).Framedeclared = !((LOC22 == 0));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 22);
appendString(LOC24, ((NimStringDesc*) &TMP4038));
appendString(LOC24, k);
				internalerror_197989(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_545815)(NimStringDesc* cfilename, tcgen544035* m) {
	tllstream211204* s_545820;
	tbaselexer213024 l;
	NimStringDesc* k;
	s_545820 = llstreamopen_211233(cfilename, ((NU8) 0));
	{
		if (!(s_545820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.m_type = (&NTI213024);
	openbaselexer_213035(&l, s_545820, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_545402(&l);
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_545535(&l, &k);
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4031))) goto LA13;
				processmergeinfo_545711(&l, m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_213045(&l);
	BeforeRet: ;
}

static N_INLINE(trope177009**, s_544183)(tcproc544031* p, NU8 s) {
	trope177009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI64)((*p).Blocks->Sup.len - 1)].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_546137)(tcgen544035* m) {
	NIM_BOOL result;
	result = 0;
	{
		NU8 i_546185;
		NU8 res_546270;
		i_546185 = 0;
		res_546270 = ((NU8) 1);
		{
			while (1) {
				if (!(res_546270 <= ((NU8) 10))) goto LA3;
				i_546185 = res_546270;
				{
					if (!!(((*m).S[(i_546185)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_546270 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_546249;
		NU8 res_546277;
		i_546249 = 0;
		res_546277 = ((NU8) 0);
		{
			while (1) {
				if (!(res_546277 <= ((NU8) 2))) goto LA10;
				i_546249 = res_546277;
				{
					trope177009** LOC13;
					LOC13 = 0;
					LOC13 = s_544183((*m).Initproc, i_546249);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_546277 += 1;
			} LA10: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_545456)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < 19);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI64)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4110)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += 1;
		} LA2: ;
	}
	result = (s == 19);
	return result;
}

N_NIMCALL(trope177009*, readverbatimsection_545489)(tbaselexer213024* l) {
	trope177009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	r = rawNewString(30000);
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_213066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174613->Sup.len + 0);
appendString(r, tnl_174613);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174613->Sup.len + 0);
appendString(r, tnl_174613);
			}
			break;
			case 0:
			{
				internalerror_197989(((NimStringDesc*) &TMP4109));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_545456(buf, pos);
					if (!LOC9) goto LA10;
					pos += 19;
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
	result = torope_177076(r);
	return result;
}

static N_INLINE(NI, find_545914)(TY545013 a_545919, NimStringDesc* item_545921) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_545983;
		NU8 i_545999;
		i_545983 = 0;
		i_545999 = ((NU8) 0);
		{
			if (!(i_545999 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_545983 = a_545919[(i_545999)- 0];
					{
						if (!eqStrings(i_545983, item_545921)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 17) <= i_545999)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_545999 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_546017)(TY545019 a_546022, NimStringDesc* item_546024) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_546086;
		NU8 i_546102;
		i_546086 = 0;
		i_546102 = ((NU8) 0);
		{
			if (!(i_546102 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_546086 = a_546022[(i_546102)- 0];
					{
						if (!eqStrings(i_546086, item_546024)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 2) <= i_546102)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_546102 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_545867)(NimStringDesc* cfilename, tmergesections545861* m) {
	tllstream211204* s_545873;
	tbaselexer213024 l;
	NimStringDesc* k;
	s_545873 = llstreamopen_211233(cfilename, ((NU8) 0));
	{
		if (!(s_545873 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.m_type = (&NTI213024);
	openbaselexer_213035(&l, s_545873, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_545402(&l);
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_545535(&l, &k);
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4031))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope177009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI64)(l.Bufpos + 1)]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += 2;
				skipwhite_545372(&l);
				verbatim = readverbatimsection_545489(&l);
				skipwhite_545372(&l);
				sectiona = find_545914(cfilesectionnames_545012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (0 < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= 17);
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) &(*m).F[(sectiona)- 0], verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_546017(cprocsectionnames_545018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (0 <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= 2);
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) &(*m).P[(sectionb)- 0], verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4132));
appendString(LOC34, k);
						internalerror_197989(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_197989(((NimStringDesc*) &TMP4133));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_213045(&l);
	BeforeRet: ;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44735* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44735* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, mergefiles_546303)(NimStringDesc* cfilename, tcgen544035* m) {
	tmergesections545861 old;
	memset((void*)&old, 0, sizeof(old));
	readmergesections_545867(cfilename, &old);
	{
		NU8 i_546321;
		NU8 res_546345;
		i_546321 = 0;
		res_546345 = ((NU8) 0);
		{
			while (1) {
				if (!(res_546345 <= ((NU8) 17))) goto LA3;
				i_546321 = res_546345;
				asgnRefNoCycle((void**) &(*m).S[(i_546321)- 0], con_177024(old.F[(i_546321)- 0], (*m).S[(i_546321)- 0]));
				res_546345 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_546336;
		NU8 res_546352;
		i_546336 = 0;
		res_546352 = ((NU8) 0);
		{
			while (1) {
				trope177009** LOC7;
				trope177009** LOC8;
				if (!(res_546352 <= ((NU8) 2))) goto LA6;
				i_546336 = res_546352;
				LOC7 = 0;
				LOC7 = s_544183((*m).Initproc, i_546336);
				LOC8 = 0;
				LOC8 = s_544183((*m).Initproc, i_546336);
				unsureAsgnRef((void**) &(*LOC7), con_177024(old.P[(i_546336)- 0], (*LOC8)));
				res_546352 += 1;
			} LA6: ;
		}
	}
}

N_NIMCALL(trope177009*, gensectionstart_545126)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		result = torope_177076(tnl_174613);
		app_177060(&result, ((NimStringDesc*) &TMP4138));
		app_177060(&result, cprocsectionnames_545018[(ps)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4139));
		app_177060(&result, tnl_174613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_545177)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4110));
appendString(LOC5, tnl_174613);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionstart_545028)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		result = torope_177076(tnl_174613);
		app_177060(&result, ((NimStringDesc*) &TMP4138));
		app_177060(&result, cfilesectionnames_545012[(fs)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4139));
		app_177060(&result, tnl_174613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_545079)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4110));
appendString(LOC5, tnl_174613);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_545224)(tidtable224867 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI id_545230;
		TNimObject* value_545231;
		id_545230 = 0;
		value_545231 = 0;
		{
			NI i_545248;
			NI HEX3Atmp_545250;
			NI res_545252;
			i_545248 = 0;
			HEX3Atmp_545250 = 0;
			HEX3Atmp_545250 = (a.Data->Sup.len-1);
			res_545252 = 0;
			{
				while (1) {
					if (!(res_545252 <= HEX3Atmp_545250)) goto LA4;
					i_545248 = res_545252;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_545248].Key == NIM_NIL))) goto LA7;
						id_545230 = (*a.Data->data[i_545248].Key).Id;
						value_545231 = a.Data->data[i_545248].Val;
						{
							if (!(i == 10)) goto LA11;
							i = 0;
							(*s) = resizeString((*s), tnl_174613->Sup.len + 0);
appendString((*s), tnl_174613);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_233304(id_545230, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_177101(((trope177009*) (value_545231)));
						encodestr_233042(LOC14, s);
						i += 1;
					}
					LA7: ;
					res_545252 += 1;
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_545271)(intset221056* a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI x_545277;
		ttrunk221052* r_545295;
		x_545277 = 0;
		r_545295 = (*a).Head;
		{
			while (1) {
				NI i_545297;
				if (!!((r_545295 == NIM_NIL))) goto LA3;
				i_545297 = 0;
				{
					while (1) {
						NI w_545299;
						NI j_545301;
						if (!(i_545297 <= 7)) goto LA5;
						w_545299 = (*r_545295).Bits[(i_545297)- 0];
						j_545301 = 0;
						{
							while (1) {
								if (!!((w_545299 == 0))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_545299 & 1))) == 0))) goto LA10;
									x_545277 = (NI)((NI)((NU64)((*r_545295).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_545297) << (NU64)(6))) + (NU64)(j_545301)));
									{
										if (!(i == 10)) goto LA14;
										i = 0;
										(*s) = resizeString((*s), tnl_174613->Sup.len + 0);
appendString((*s), tnl_174613);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_233304(x_545277, s);
									i += 1;
								}
								LA10: ;
								j_545301 += 1;
								w_545299 = (NI)((NU64)(w_545299) >> (NU64)(1));
							} LA7: ;
						}
						i_545297 += 1;
					} LA5: ;
				}
				r_545295 = (*r_545295).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope177009*, genmergeinfo_545329)(tcgen544035* m) {
	trope177009* result;
	NimStringDesc* s;
	result = 0;
	{
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4149));
	s = resizeString(s, tnl_174613->Sup.len + 0);
appendString(s, tnl_174613);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4150));
	writetypecache_545224((*m).Typecache, &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4151));
	writeintset_545271(&(*m).Declaredthings, &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4152));
	writeintset_545271(&(*m).Typeinfomarker, &s);
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4153));
	encodevint_233304(((NI) ((*m).Labels)), &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4154));
	encodevint_233304(((NI) ((*m).Framedeclared)), &s);
	s = resizeString(s, tnl_174613->Sup.len + 0);
appendString(s, tnl_174613);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4155));
	result = torope_177076(s);
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeDatInit)(void) {
}

