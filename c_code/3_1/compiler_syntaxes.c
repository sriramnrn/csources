/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode171659 tnode171659;
typedef struct tparsers197026 tparsers197026;
typedef struct tparser185203 tparser185203;
typedef struct tlexer164166 tlexer164166;
typedef struct tbaselexer162018 tbaselexer162018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream161204 tllstream161204;
typedef struct ttoken164164 ttoken164164;
typedef struct tident140017 tident140017;
typedef struct tidobj140011 tidobj140011;
typedef struct ttype171693 ttype171693;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct tsym171689 tsym171689;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tlib171677 tlib171677;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY197015[3];
typedef NimStringDesc* TY197020[4];
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
struct tbaselexer162018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream161204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer164166 {
  tbaselexer162018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken164164 {
NU8 Toktype;
NI Indent;
tident140017* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser185203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer164166 Lex;
ttoken164164 Tok;
};
struct tparsers197026 {
NU8 Skin;
tparser185203 Parser;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tidobj140011 {
  TNimObject Sup;
NI Id;
};
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
};
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tnode171659 {
ttype171693* Typ;
tlineinfo136509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym171689* Sym;
} S4;
struct {tident140017* Ident;
} S5;
struct {tnodeseq171653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY171865[20];
typedef NimStringDesc* TY148228[1];
struct tllstream161204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tloc171673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype171693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct ttype171693 {
  tidobj140011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq171691* Sons;
tnode171659* N;
tsym171689* Destructor;
tsym171689* Owner;
tsym171689* Sym;
NI64 Size;
NI Align;
tloc171673 Loc;
};
struct tstrtable171663 {
NI Counter;
tsymseq171661* Data;
};
struct tsym171689 {
  tidobj140011 Sup;
NU8 Kind;
union {
struct {ttypeseq171691* Typeinstcache;
tscope171683* Typscope;
} S1;
struct {TY171786* Procinstcache;
tscope171683* Scope;
} S2;
struct {TY171786* Usedgenerics;
tstrtable171663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype171693* Typ;
tident140017* Name;
tlineinfo136509 Info;
tsym171689* Owner;
NU32 Flags;
tnode171659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc171673 Loc;
tlib171677* Annex;
tnode171659* Constraint;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tscope171683 {
NI Depthlevel;
tstrtable171663 Symbols;
tnodeseq171653* Usingsyms;
tscope171683* Parent;
};
struct tinstantiation171679 {
tsym171689* Sym;
ttypeseq171691* Concretetypes;
TY171775* Usedby;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib171677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode171659* Path;
};
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
};
struct ttypeseq171691 {
  TGenericSeq Sup;
  ttype171693* data[SEQ_DECL_SIZE];
};
struct TY171786 {
  TGenericSeq Sup;
  tinstantiation171679* data[SEQ_DECL_SIZE];
};
struct tsymseq171661 {
  TGenericSeq Sup;
  tsym171689* data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode171659*, parsefile_197030)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_137708)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_138191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream161204*, llstreamopen_161222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode171659*, parseall_197046)(tparsers197026* p);
N_NIMCALL(tnode171659*, parseall_185209)(tparser185203* p);
N_NIMCALL(tnode171659*, parseall_188005)(tparser185203* p);
N_NIMCALL(void, internalerror_138383)(NimStringDesc* errmsg);
N_NIMCALL(tnode171659*, parsetoplevelstmt_197051)(tparsers197026* p);
N_NIMCALL(tnode171659*, parsetoplevelstmt_185226)(tparser185203* p);
N_NIMCALL(tnode171659*, parsetoplevelstmt_188012)(tparser185203* p);
N_NIMCALL(NI, utf8bom_197091)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_197097)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode171659*, parsepipe_197126)(NimStringDesc* filename, tllstream161204* inputstream);
N_NIMCALL(tllstream161204*, llstreamopen_161227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_161248)(tllstream161204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_185214)(tparser185203* p, NimStringDesc* filename, tllstream161204* inputstream);
N_NIMCALL(tllstream161204*, llstreamopen_161218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_185221)(tparser185203* p);
N_NIMCALL(void, llstreamclose_161238)(tllstream161204* s);
N_NIMCALL(NU8, getfilter_197187)(tident140017* ident);
N_NIMCALL(NIM_BOOL, identeq_140456)(tident140017* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_197234)(tident140017* ident);
N_NIMCALL(tident140017*, getcallee_197281)(tnode171659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_189048)(tnode171659* n, NU8 renderflags);
N_NIMCALL(tllstream161204*, applyfilter_197357)(tparsers197026* p, tnode171659* n, NimStringDesc* filename, tllstream161204* stdin_197363);
N_NIMCALL(tllstream161204*, filtertmpl_196006)(tllstream161204* stdin_196008, NimStringDesc* filename, tnode171659* call);
N_NIMCALL(tllstream161204*, filterstrip_195008)(tllstream161204* stdin_195010, NimStringDesc* filename, tnode171659* call);
N_NIMCALL(tllstream161204*, filterreplace_195002)(tllstream161204* stdin_195004, NimStringDesc* filename, tnode171659* call);
N_NIMCALL(void, rawmessage_138121)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_137839)(NimStringDesc* s);
N_NIMCALL(tllstream161204*, evalpipe_197391)(tparsers197026* p, tnode171659* n, NimStringDesc* filename, tllstream161204* start);
N_NIMCALL(void, openparsers_197034)(tparsers197026* p, NI32 fileidx, tllstream161204* inputstream);
N_NIMCALL(void, openparser_185360)(tparser185203* p, NI32 fileidx, tllstream161204* inputstream);
N_NIMCALL(void, closeparsers_197041)(tparsers197026* p);
STRING_LITERAL(TMP2611, "standard", 8);
STRING_LITERAL(TMP2612, "braces", 6);
STRING_LITERAL(TMP2613, "endx", 4);
NIM_CONST TY197015 parsernames_197014 = {((NimStringDesc*) &TMP2611),
((NimStringDesc*) &TMP2612),
((NimStringDesc*) &TMP2613)}
;
STRING_LITERAL(TMP2614, "none", 4);
STRING_LITERAL(TMP2615, "stdtmpl", 7);
STRING_LITERAL(TMP2616, "replace", 7);
STRING_LITERAL(TMP2617, "strip", 5);
NIM_CONST TY197020 filternames_197019 = {((NimStringDesc*) &TMP2614),
((NimStringDesc*) &TMP2615),
((NimStringDesc*) &TMP2616),
((NimStringDesc*) &TMP2617)}
;
STRING_LITERAL(TMP2622, "parser to implement", 19);
static NIM_CONST TY171865 TMP2626 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2627, "sons", 4);
static NIM_CONST TY171865 TMP2628 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2629, "ident", 5);
STRING_LITERAL(TMP2630, "|", 1);
TNimType NTI197026; /* TParsers */
TNimType NTI197005; /* TParserKind */
extern TNimType NTI185203; /* TParser */
extern TFrame* frameptr_12037;
extern tnode171659* emptynode_172505;
extern NI gverbosity_114117;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tnode171659*, parsefile_197030)(NI32 fileidx) {
	tnode171659* result;
	tparsers197026 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream161204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI197026));
	f = 0;
	nimln(47, "syntaxes.nim");
	filename = tofullpath_137708(fileidx);
	nimln(48, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(48, "syntaxes.nim");
		nimln(48, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_9203(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(49, "syntaxes.nim");
		rawmessage_138191(((NU16) 3), filename);		nimln(50, "syntaxes.nim");
		goto BeforeRet;
	}	LA4: ;
	nimln(51, "syntaxes.nim");
	nimln(51, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_161222(&f);
	openparsers_197034(&p, fileidx, LOC6);	nimln(52, "syntaxes.nim");
	result = parseall_197046(&p);
	nimln(53, "syntaxes.nim");
	closeparsers_197041(&p);	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tnode171659*, parseall_197046)(tparsers197026* p) {
	tnode171659* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(56, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(58, "syntaxes.nim");
		result = parseall_185209(&(*p).Parser);
	}	break;
	case ((NU8) 1):
	{
		nimln(60, "syntaxes.nim");
		result = parseall_188005(&(*p).Parser);
	}	break;
	case ((NU8) 2):
	{
		nimln(62, "syntaxes.nim");
		internalerror_138383(((NimStringDesc*) &TMP2622));		nimln(63, "syntaxes.nim");
		result = emptynode_172505;
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(tnode171659*, parsetoplevelstmt_197051)(tparsers197026* p) {
	tnode171659* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_185226(&(*p).Parser);
	}	break;
	case ((NU8) 1):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_188012(&(*p).Parser);
	}	break;
	case ((NU8) 2):
	{
		nimln(73, "syntaxes.nim");
		internalerror_138383(((NimStringDesc*) &TMP2622));		nimln(74, "syntaxes.nim");
		result = emptynode_172505;
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(NI, utf8bom_197091)(NimStringDesc* s) {
	NI result;
	nimfr("UTF8_BOM", "syntaxes.nim")
	result = 0;
	nimln(78, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(78, "syntaxes.nim");
		LOC3 = 0;
		nimln(78, "syntaxes.nim");
		LOC4 = 0;
		nimln(78, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(78, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(78, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(79, "syntaxes.nim");
		result = 3;
	}	goto LA1;
	LA7: ;
	{
		nimln(81, "syntaxes.nim");
		result = 0;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
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
N_NIMCALL(NIM_BOOL, containsshebang_197097)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(84, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2623;
		NI j;
		NI TMP2624;
		nimln(84, "syntaxes.nim");
		LOC3 = 0;
		nimln(84, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2623 = addInt(i, 1);
		if ((NU)((NI32)(TMP2623)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI32)(TMP2623)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(85, "syntaxes.nim");
		nimln(85, "syntaxes.nim");
		TMP2624 = addInt(i, 2);
		j = (NI32)(TMP2624);
		nimln(86, "syntaxes.nim");
		while (1) {
			nimln(730, "system.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(86, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(87, "syntaxes.nim");
		nimln(87, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}	LA5: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode171659*, parsepipe_197126)(NimStringDesc* filename, tllstream161204* inputstream) {
	tnode171659* result;
	tllstream161204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(90, "syntaxes.nim");
	result = emptynode_172505;
	nimln(91, "syntaxes.nim");
	s = llstreamopen_161227(filename, ((NU8) 0));
	nimln(92, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		line = rawNewString(80);
		nimln(94, "syntaxes.nim");
		nimln(94, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_161248(s, &line);
		nimln(95, "syntaxes.nim");
		i = utf8bom_197091(line);
		nimln(96, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(96, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_197097(line, i);
			if (!LOC8) goto LA9;
			nimln(97, "syntaxes.nim");
			nimln(97, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_161248(s, &line);
			nimln(98, "syntaxes.nim");
			i = 0;
		}		LA9: ;
		nimln(99, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2625;
			tparser185203 q;
			NimStringDesc* LOC19;
			tllstream161204* LOC20;
			nimln(99, "syntaxes.nim");
			LOC14 = 0;
			nimln(99, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(99, "syntaxes.nim");
			nimln(99, "syntaxes.nim");
			TMP2625 = addInt(i, 1);
			if ((NU)((NI32)(TMP2625)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI32)(TMP2625)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(100, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(101, "syntaxes.nim");
			while (1) {
				nimln(730, "system.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(101, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI185203));
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_161218(LOC19);
			openparser_185214(&q, filename, LOC20);			nimln(104, "syntaxes.nim");
			result = parseall_185209(&q);
			nimln(105, "syntaxes.nim");
			closeparser_185221(&q);		}		LA16: ;
		nimln(106, "syntaxes.nim");
		llstreamclose_161238(s);	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(NU8, getfilter_197187)(tident140017* ident) {
	NU8 result;
	NU8 i_197225;
	NU8 res_197229;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_197225 = 0;
	nimln(1301, "system.nim");
	res_197229 = ((NU8) 0);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_197229 <= ((NU8) 3))) goto LA1;
		nimln(1301, "system.nim");
		i_197225 = res_197229;
		nimln(110, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(110, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_140456(ident, filternames_197019[(i_197225)- 0]);
			if (!LOC4) goto LA5;
			nimln(111, "syntaxes.nim");
			nimln(111, "syntaxes.nim");
			result = i_197225;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_197229 = addInt(res_197229, 1);
	} LA1: ;
	nimln(112, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NU8, getparser_197234)(tident140017* ident) {
	NU8 result;
	NU8 i_197272;
	NU8 res_197276;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_197272 = 0;
	nimln(1301, "system.nim");
	res_197276 = ((NU8) 0);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_197276 <= ((NU8) 2))) goto LA1;
		nimln(1301, "system.nim");
		i_197272 = res_197276;
		nimln(116, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_140456(ident, parsernames_197014[(i_197272)- 0]);
			if (!LOC4) goto LA5;
			nimln(117, "syntaxes.nim");
			nimln(117, "syntaxes.nim");
			result = i_197272;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_197276 = addInt(res_197276, 1);
	} LA1: ;
	nimln(118, "syntaxes.nim");
	rawmessage_138191(((NU16) 30), (*ident).S);	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tident140017*, getcallee_197281)(tnode171659* n) {
	tident140017* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(121, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(121, "syntaxes.nim");
		LOC3 = 0;
		nimln(730, "system.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(121, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(122, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2628[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}	goto LA1;
	LA5: ;
	{
		nimln(123, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(124, "syntaxes.nim");
		if (!(((TMP2628[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		result = (*n).kindU.S5.Ident;
	}	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(126, "syntaxes.nim");
		nimln(126, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_189048(n, 0);
		rawmessage_138191(((NU16) 163), LOC11);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, applyfilter_197357)(tparsers197026* p, tnode171659* n, NimStringDesc* filename, tllstream161204* stdin_197363) {
	tllstream161204* result;
	tident140017* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(130, "syntaxes.nim");
	ident = getcallee_197281(n);
	nimln(131, "syntaxes.nim");
	f = getfilter_197187(ident);
	nimln(132, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(134, "syntaxes.nim");
		(*p).Skin = getparser_197234(ident);
		nimln(135, "syntaxes.nim");
		result = stdin_197363;
	}	break;
	case ((NU8) 1):
	{
		nimln(137, "syntaxes.nim");
		result = filtertmpl_196006(stdin_197363, filename, n);
	}	break;
	case ((NU8) 3):
	{
		nimln(139, "syntaxes.nim");
		result = filterstrip_195008(stdin_197363, filename, n);
	}	break;
	case ((NU8) 2):
	{
		nimln(141, "syntaxes.nim");
		result = filterreplace_195002(stdin_197363, filename, n);
	}	break;
	}
	nimln(142, "syntaxes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(143, "syntaxes.nim");
		{
			TY148228 LOC13;
			TY148228 LOC14;
			nimln(702, "system.nim");
			if (!(2 <= gverbosity_114117)) goto LA11;
			nimln(144, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_138121(((NU16) 255), LOC13, 0);			nimln(145, "syntaxes.nim");
			msgwriteln_137839((*result).S);			nimln(146, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_138121(((NU16) 256), LOC14, 0);		}		LA11: ;
	}	LA7: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, evalpipe_197391)(tparsers197026* p, tnode171659* n, NimStringDesc* filename, tllstream161204* start) {
	tllstream161204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(150, "syntaxes.nim");
	result = start;
	nimln(151, "syntaxes.nim");
	{
		nimln(151, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(151, "syntaxes.nim");
		goto BeforeRet;
	}	LA3: ;
	nimln(152, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_197465;
		NI res_197527;
		nimln(152, "syntaxes.nim");
		LOC7 = 0;
		nimln(152, "syntaxes.nim");
		LOC8 = 0;
		nimln(152, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(152, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(153, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2628[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		LOC7 = identeq_140456((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2630));
		LA10: ;
		if (!LOC7) goto LA11;
		i_197465 = 0;
		nimln(1301, "system.nim");
		res_197527 = 1;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_197527 <= 2)) goto LA13;
			nimln(1301, "system.nim");
			i_197465 = res_197527;
			nimln(155, "syntaxes.nim");
			{
				nimln(155, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_197465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_197465]).Kind == ((NU8) 29))) goto LA16;
				nimln(156, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_197465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_197391(p, (*n).kindU.S6.Sons->data[i_197465], filename, result);
			}			goto LA14;
			LA16: ;
			{
				nimln(158, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_197465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_197357(p, (*n).kindU.S6.Sons->data[i_197465], filename, result);
			}			LA14: ;
			nimln(1304, "system.nim");
			res_197527 = addInt(res_197527, 1);
		} LA13: ;
	}	goto LA5;
	LA11: ;
	{
		nimln(159, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(160, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_197391(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}	goto LA5;
	LA20: ;
	{
		nimln(162, "syntaxes.nim");
		result = applyfilter_197357(p, n, filename, result);
	}	LA5: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, openparsers_197034)(tparsers197026* p, NI32 fileidx, tllstream161204* inputstream) {
	tllstream161204* s;
	NimStringDesc* filename;
	tnode171659* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(166, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(167, "syntaxes.nim");
	filename = tofullpath_137708(fileidx);
	nimln(168, "syntaxes.nim");
	pipe = parsepipe_197126(filename, inputstream);
	nimln(169, "syntaxes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(169, "syntaxes.nim");
		s = evalpipe_197391(p, pipe, filename, inputstream);
	}	goto LA1;
	LA3: ;
	{
		nimln(170, "syntaxes.nim");
		s = inputstream;
	}	LA1: ;
	nimln(171, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 2):
	{
		nimln(173, "syntaxes.nim");
		openparser_185360(&(*p).Parser, fileidx, s);	}	break;
	}
	popFrame();
}
N_NIMCALL(void, closeparsers_197041)(tparsers197026* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(176, "syntaxes.nim");
	closeparser_185221(&(*p).Parser);	popFrame();
}N_NOINLINE(void, compilersyntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, compilersyntaxesDatInit)(void) {
static TNimNode* TMP2618[2];
static TNimNode* TMP2619[3];
NI TMP2621;
static char* NIM_CONST TMP2620[3] = {
"skinStandard", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2247[7];
NTI197026.size = sizeof(tparsers197026);
NTI197026.kind = 18;
NTI197026.base = 0;
NTI197026.flags = 2;
TMP2618[0] = &TMP2247[1];
NTI197005.size = sizeof(NU8);
NTI197005.kind = 14;
NTI197005.base = 0;
NTI197005.flags = 3;
for (TMP2621 = 0; TMP2621 < 3; TMP2621++) {
TMP2247[TMP2621+2].kind = 1;
TMP2247[TMP2621+2].offset = TMP2621;
TMP2247[TMP2621+2].name = TMP2620[TMP2621];
TMP2619[TMP2621] = &TMP2247[TMP2621+2];
}
TMP2247[5].len = 3; TMP2247[5].kind = 2; TMP2247[5].sons = &TMP2619[0];
NTI197005.node = &TMP2247[5];
TMP2247[1].kind = 1;
TMP2247[1].offset = offsetof(tparsers197026, Skin);
TMP2247[1].typ = (&NTI197005);
TMP2247[1].name = "skin";
TMP2618[1] = &TMP2247[6];
TMP2247[6].kind = 1;
TMP2247[6].offset = offsetof(tparsers197026, Parser);
TMP2247[6].typ = (&NTI185203);
TMP2247[6].name = "parser";
TMP2247[0].len = 2; TMP2247[0].kind = 2; TMP2247[0].sons = &TMP2618[0];
NTI197026.node = &TMP2247[0];
}

