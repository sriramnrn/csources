/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode173659 tnode173659;
typedef struct ttype173693 ttype173693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym173689 tsym173689;
typedef struct tident141017 tident141017;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
typedef struct tlib173677 tlib173677;
typedef struct tcontext264019 tcontext264019;
typedef struct tidentiter180106 tidentiter180106;
typedef struct TY173775 TY173775;
typedef struct tlistentry110014 tlistentry110014;
typedef struct tpasscontext224003 tpasscontext224003;
typedef struct tproccon264009 tproccon264009;
typedef struct tintset170043 tintset170043;
typedef struct ttrunk170039 ttrunk170039;
typedef struct ttrunkseq170041 ttrunkseq170041;
typedef struct tlinkedlist110020 tlinkedlist110020;
typedef struct tidtable173705 tidtable173705;
typedef struct tidpairseq173703 tidpairseq173703;
typedef struct tidpair173701 tidpair173701;
typedef struct tevalcontext254212 tevalcontext254212;
typedef struct TY264110 TY264110;
typedef struct tinstantiationpair264011 tinstantiationpair264011;
typedef struct tstackframe254204 tstackframe254204;
typedef struct tidnodetable173711 tidnodetable173711;
typedef struct tidnodepairseq173709 tidnodepairseq173709;
typedef struct tidnodepair173707 tidnodepair173707;
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode173659 {
ttype173693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym173689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq173653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY173865[20];
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
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
};
struct tloc173673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173693* T;
trope122007* R;
trope122007* Heaproot;
NI A;
};
struct tsym173689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq173691* Typeinstcache;
tscope173683* Typscope;
} S1;
struct {TY173786* Procinstcache;
tscope173683* Scope;
} S2;
struct {TY173786* Usedgenerics;
tstrtable173663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym173689* Owner;
NU32 Flags;
tnode173659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173673 Loc;
tlib173677* Annex;
tnode173659* Constraint;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tidentiter180106 {
NI H;
tident141017* Name;
};
struct tscope173683 {
NI Depthlevel;
tstrtable173663 Symbols;
tnodeseq173653* Usingsyms;
tscope173683* Parent;
};
struct ttype173693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173691* Sons;
tnode173659* N;
tsym173689* Destructor;
tsym173689* Owner;
tsym173689* Sym;
NI64 Size;
NI Align;
tloc173673 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tinstantiation173679 {
tsym173689* Sym;
ttypeseq173691* Concretetypes;
TY173775* Usedby;
};
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry110014 {
  TNimObject Sup;
tlistentry110014* Prev;
tlistentry110014* Next;
};
struct tlib173677 {
  tlistentry110014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope122007* Name;
tnode173659* Path;
};
struct tpasscontext224003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tintset170043 {
NI Counter;
NI Max;
ttrunk170039* Head;
ttrunkseq170041* Data;
};
struct tlinkedlist110020 {
tlistentry110014* Head;
tlistentry110014* Tail;
NI Counter;
};
struct tidpair173701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable173705 {
NI Counter;
tidpairseq173703* Data;
};
typedef N_NIMCALL_PTR(tnode173659*, TY264058) (tcontext264019* c, tnode173659* n);
typedef N_NIMCALL_PTR(tnode173659*, TY264063) (tcontext264019* c, tnode173659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode173659*, TY264071) (tcontext264019* c, tnode173659* n, NU8 flags, NIM_BOOL buffererrors);
typedef N_NIMCALL_PTR(tnode173659*, TY264080) (tcontext264019* c, tnode173659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode173659*, TY264088) (tcontext264019* c, tnode173659* n);
typedef N_NIMCALL_PTR(tnode173659*, TY264093) (tcontext264019* c, tnode173659* n, tnode173659* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype173693*, TY264100) (tcontext264019* c, tnode173659* n, ttype173693* prev);
struct tinstantiationpair264011 {
tsym173689* Genericsym;
tinstantiation173679* Inst;
};
struct tcontext264019 {
  tpasscontext224003 Sup;
tsym173689* Module;
tscope173683* Currentscope;
tscope173683* Importtable;
tscope173683* Toplevelscope;
tproccon264009* P;
tsym173689* Friendmodule;
NI Instcounter;
tsymseq173661* Threadentries;
tintset170043 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq173661* Converters;
tsymseq173661* Patterns;
tlinkedlist110020 Optionstack;
tidtable173705 Symmapping;
tlinkedlist110020 Libs;
TY264058 Semconstexpr;
TY264063 Semexpr;
TY264071 Semtryexpr;
TY264080 Semoperand;
TY264088 Semconstboolexpr;
TY264093 Semoverloadedcall;
TY264100 Semtypenode;
tintset170043 Includedfiles;
tstrtable173663 Userpragmas;
tevalcontext254212* Evalcontext;
tintset170043 Unknownidents;
TY264110* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
};
struct tproccon264009 {
tsym173689* Owner;
tsym173689* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon264009* Next;
};
typedef NI TY21218[8];
struct ttrunk170039 {
ttrunk170039* Next;
NI Key;
TY21218 Bits;
};
struct tidnodepair173707 {
tidobj141011* Key;
tnode173659* Val;
};
struct tidnodetable173711 {
NI Counter;
tidnodepairseq173709* Data;
};
typedef struct {
N_NIMCALL_PTR(tnode173659*, ClPrc) (tnode173659* n, void* ClEnv);
void* ClEnv;
} TY254237;
struct tevalcontext254212 {
  tpasscontext224003 Sup;
tsym173689* Module;
tstackframe254204* Tos;
tnode173659* Lastexception;
tnode173659* Callsite;
NU8 Mode;
NU8 Features;
tidnodetable173711 Globals;
TY254237 Gettype;
TY254237 Handleisoperator;
};
struct tstackframe254204 {
tsym173689* Prc;
tnodeseq173653* Slots;
tnode173659* Call;
tstackframe254204* Next;
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct ttrunkseq170041 {
  TGenericSeq Sup;
  ttrunk170039* data[SEQ_DECL_SIZE];
};
struct tidpairseq173703 {
  TGenericSeq Sup;
  tidpair173701 data[SEQ_DECL_SIZE];
};
struct TY264110 {
  TGenericSeq Sup;
  tinstantiationpair264011 data[SEQ_DECL_SIZE];
};
struct tidnodepairseq173709 {
  TGenericSeq Sup;
  tidnodepair173707 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_271010)(tnode173659* proca, tnode173659* procb);
static N_INLINE(NI, sonslen_174022)(tnode173659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_139369)(tlineinfo137509 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_206663)(ttype173693* a, ttype173693* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_200122)(tnode173659* a, tnode173659* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym173689*, searchforproc_271141)(tcontext264019* c, tscope173683* scope, tsym173689* fn);
N_NIMCALL(tsym173689*, initidentiter_180110)(tidentiter180106* ti, tstrtable173663 tab, tident141017* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_178792)(tsym173689* s);
N_NIMCALL(tsym173689*, nextidentiter_180117)(tidentiter180106* ti, tstrtable173663 tab);
N_NIMCALL(NU8, equalparams_202066)(tnode173659* a, tnode173659* b);
N_NIMCALL(void, localerror_139349)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
static NIM_CONST TY173865 TMP3692 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3693, "sons", 4);
STRING_LITERAL(TMP3695, "equalGenericParams", 18);
static NIM_CONST TY173865 TMP3696 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3697, "sym", 3);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, sonslen_174022)(tnode173659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3692[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3692[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, equalgenericparams_271010)(tnode173659* proca, tnode173659* procb) {
	NIM_BOOL result;
	NI i_271024;
	NI HEX3Atmp_271134;
	NI LOC7;
	NI TMP3694;
	NI res_271136;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(17, "procfind.nim");
		LOC3 = 0;
		LOC3 = sonslen_174022(proca);
		nimln(17, "procfind.nim");
		LOC4 = 0;
		LOC4 = sonslen_174022(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}	LA5: ;
	i_271024 = 0;
	HEX3Atmp_271134 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = 0;
	LOC7 = sonslen_174022(proca);
	TMP3694 = subInt(LOC7, 1);
	HEX3Atmp_271134 = (NI64)(TMP3694);
	nimln(1301, "system.nim");
	res_271136 = 0;
	nimln(1302, "system.nim");
	while (1) {
		tsym173689* a;
		tsym173689* b;
		nimln(1302, "system.nim");
		if (!(res_271136 <= HEX3Atmp_271134)) goto LA8;
		nimln(1301, "system.nim");
		i_271024 = res_271136;
		nimln(19, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3692[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
			if ((NU)(i_271024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_271024]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_139369((*proca).Info, ((NimStringDesc*) &TMP3695));			nimln(21, "procfind.nim");
			goto BeforeRet;
		}		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3692[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
			if ((NU)(i_271024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_271024]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_139369((*procb).Info, ((NimStringDesc*) &TMP3695));			nimln(24, "procfind.nim");
			goto BeforeRet;
		}		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3692[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if ((NU)(i_271024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3696[(*(*proca).kindU.S6.Sons->data[i_271024]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_271024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3697));
		a = (*(*proca).kindU.S6.Sons->data[i_271024]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3692[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if ((NU)(i_271024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3696[(*(*procb).kindU.S6.Sons->data[i_271024]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_271024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3697));
		b = (*(*procb).kindU.S6.Sons->data[i_271024]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			LOC19 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = 0;
			LOC21 = sametypeornil_206663((*a).Typ, (*b).Typ, 2);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			LOC26 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = 0;
				LOC32 = exprstructuralequivalent_200122((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}			LA33: ;
		}		LA28: ;
		nimln(1304, "system.nim");
		res_271136 = addInt(res_271136, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tsym173689*, searchforproc_271141)(tcontext264019* c, tscope173683* scope, tsym173689* fn) {
	tsym173689* result;
	tidentiter180106 it;
	nimfr("SearchForProc", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_180110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = 0;
		LOC3 = isgenericroutine_178792(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode173659* genr;
				tnode173659* genf;
				nimln(44, "procfind.nim");
				LOC9 = 0;
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_178792(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3692[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3692[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					LOC15 = 0;
					nimln(47, "procfind.nim");
					LOC16 = 0;
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_200122(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3692[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3692[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_200122((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_271010(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}				LA19: ;
			}			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_180117(&it, (*scope).Symbols);
		} LA6: ;
	}	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				LOC25 = 0;
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = 0;
				LOC27 = isgenericroutine_178792(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = 0;
				LOC30 = equalparams_202066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_139349((*fn).Info, ((NU16) 66), (*(*fn).Name).S);					nimln(61, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 0):
				{
				}				break;
				}
			}			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_180117(&it, (*scope).Symbols);
		} LA22: ;
	}	LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerprocfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, compilerprocfindDatInit)(void) {
}

