/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode224819 tnode224819;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tcell44533 tcell44533;
typedef struct tcellseq44549 tcellseq44549;
typedef struct tgcheap46616 tgcheap46616;
typedef struct tcellset44545 tcellset44545;
typedef struct tpagedesc44541 tpagedesc44541;
typedef struct tmemregion26810 tmemregion26810;
typedef struct tsmallchunk26040 tsmallchunk26040;
typedef struct tllchunk26804 tllchunk26804;
typedef struct tbigchunk26042 tbigchunk26042;
typedef struct tintset26017 tintset26017;
typedef struct ttrunk26013 ttrunk26013;
typedef struct tavlnode26808 tavlnode26808;
typedef struct tgcstat46614 tgcstat46614;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
typedef struct TY224939 TY224939;
typedef struct tlistentry128022 tlistentry128022;
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tcell44533  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44549  {
NI Len;
NI Cap;
tcell44533** D;
};
struct  tcellset44545  {
NI Counter;
NI Max;
tpagedesc44541* Head;
tpagedesc44541** Data;
};
typedef tsmallchunk26040* TY26822[512];
typedef ttrunk26013* ttrunkbuckets26015[256];
struct  tintset26017  {
ttrunkbuckets26015 Data;
};
struct  tmemregion26810  {
NI Minlargeobj;
NI Maxlargeobj;
TY26822 Freesmallchunks;
tllchunk26804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26042* Freechunkslist;
tintset26017 Chunkstarts;
tavlnode26808* Root;
tavlnode26808* Deleted;
tavlnode26808* Last;
tavlnode26808* Freeavlnodes;
};
struct  tgcstat46614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44549 Zct;
tcellseq44549 Decstack;
tcellset44545 Cycleroots;
tcellseq44549 Tempstack;
NI Recgclock;
tmemregion26810 Region;
tgcstat46614 Stat;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26020[8];
struct  tpagedesc44541  {
tpagedesc44541* Next;
NI Key;
TY26020 Bits;
};
struct  tbasechunk26038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26040  {
  tbasechunk26038 Sup;
tsmallchunk26040* Next;
tsmallchunk26040* Prev;
tfreecell26030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26804  {
NI Size;
NI Acc;
tllchunk26804* Next;
};
struct  tbigchunk26042  {
  tbasechunk26038 Sup;
tbigchunk26042* Next;
tbigchunk26042* Prev;
NI Align;
NF Data;
};
struct  ttrunk26013  {
ttrunk26013* Next;
NI Key;
TY26020 Bits;
};
typedef tavlnode26808* TY26814[2];
struct  tavlnode26808  {
TY26814 Link;
NI Key;
NI Upperbound;
NI Level;
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
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib224837  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(ttype224855*, skiptypes_229245)(ttype224855* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(tsym224849*, ithfield_478012)(tnode224819* n, NI field);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n);
N_NIMCALL(void, globalerror_197928)(tlineinfo195539 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_478223)(tnode224819* n, ttype224855* t);
N_NIMCALL(NI, len_229005)(ttype224855* n);
N_NIMCALL(ttype224855*, elemtype_261656)(ttype224855* t);
STRING_LITERAL(TMP3135, "ithField", 8);
STRING_LITERAL(TMP3136, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3137, "invalid field at index ", 23);
STRING_LITERAL(TMP3138, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3139, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3140, "{} must have the set type", 25);
STRING_LITERAL(TMP3141, "float literal must have some float type", 39);
STRING_LITERAL(TMP3142, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3143, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3144, "nil literal must be of some pointer type", 40);
extern tgcheap46616 gch_46644;

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44533* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44533* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_225367)(tnode224819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(NI, sonslen_225252)(tnode224819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n) {
	tnode224819* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_225252(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym224849*, ithfield_478012)(tnode224819* n, NI field) {
	tsym224849* result;
	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		{
			NI i_478029;
			NI HEX3Atmp_478188;
			NI LOC3;
			NI res_478191;
			i_478029 = 0;
			HEX3Atmp_478188 = 0;
			LOC3 = 0;
			LOC3 = sonslen_225252(n);
			HEX3Atmp_478188 = (NI64)(LOC3 - 1);
			res_478191 = 0;
			{
				while (1) {
					if (!(res_478191 <= HEX3Atmp_478188)) goto LA5;
					i_478029 = res_478191;
					result = ithfield_478012((*n).kindU.S6.Sons->data[i_478029], (NI64)(field - i_478029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_478191 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 137):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3135));
		}
		LA13: ;
		result = ithfield_478012((*n).kindU.S6.Sons->data[0], (NI64)(field - 1));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_478127;
			NI HEX3Atmp_478194;
			NI LOC20;
			NI res_478197;
			i_478127 = 0;
			HEX3Atmp_478194 = 0;
			LOC20 = 0;
			LOC20 = sonslen_225252(n);
			HEX3Atmp_478194 = (NI64)(LOC20 - 1);
			res_478197 = 1;
			{
				while (1) {
					if (!(res_478197 <= HEX3Atmp_478194)) goto LA22;
					i_478127 = res_478197;
					switch ((*(*n).kindU.S6.Sons->data[i_478127]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode224819* LOC24;
						LOC24 = 0;
						LOC24 = lastson_225264((*n).kindU.S6.Sons->data[i_478127]);
						result = ithfield_478012(LOC24, (NI64)(field - 1));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3136));
					}
					break;
					}
					res_478197 += 1;
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!(field == 0)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_478223)(tnode224819* n, ttype224855* t) {
	ttype224855* x;
	x = skiptypes_229245(t, IL64(211106232576256));
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) &(*n).Typ, t);
			{
				NI i_478258;
				NI HEX3Atmp_478434;
				NI LOC7;
				NI res_478437;
				i_478258 = 0;
				HEX3Atmp_478434 = 0;
				LOC7 = 0;
				LOC7 = len_225367(n);
				HEX3Atmp_478434 = (LOC7 - 1);
				res_478437 = 0;
				{
					while (1) {
						tsym224849* field;
						if (!(res_478437 <= HEX3Atmp_478434)) goto LA9;
						i_478258 = res_478437;
						field = ithfield_478012((*x).N, i_478258);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_478258);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3137));
appendString(LOC14, LOC15);
							globalerror_197928((*n).Info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_478223((*n).kindU.S6.Sons->data[i_478258], (*field).Typ);
						}
						LA10: ;
						res_478437 += 1;
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			if (!((*x).Kind == ((NU8) 18))) goto LA18;
			asgnRefNoCycle((void**) &(*n).Typ, t);
			{
				NI i_478315;
				NI HEX3Atmp_478440;
				NI LOC21;
				NI res_478443;
				i_478315 = 0;
				HEX3Atmp_478440 = 0;
				LOC21 = 0;
				LOC21 = len_225367(n);
				HEX3Atmp_478440 = (LOC21 - 1);
				res_478443 = 0;
				{
					while (1) {
						if (!(res_478443 <= HEX3Atmp_478440)) goto LA23;
						i_478315 = res_478443;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_229005(x);
							if (!(LOC26 <= i_478315)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_478315);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3137));
appendString(LOC29, LOC30);
							globalerror_197928((*n).Info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_478223((*n).kindU.S6.Sons->data[i_478315], (*x).Sons->data[i_478315]);
						}
						LA24: ;
						res_478443 += 1;
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			LOC33 = 0;
			LOC33 = ((*x).Kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).Callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA2;
		LA35: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3138));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((151060496 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA41;
			asgnRefNoCycle((void**) &(*n).Typ, t);
			{
				tnode224819* m_478362;
				m_478362 = 0;
				{
					NI i_478449;
					NI HEX3Atmp_478451;
					NI LOC45;
					NI res_478453;
					i_478449 = 0;
					HEX3Atmp_478451 = 0;
					LOC45 = 0;
					LOC45 = len_225367(n);
					HEX3Atmp_478451 = (LOC45 - 1);
					res_478453 = 0;
					{
						while (1) {
							ttype224855* LOC48;
							if (!(res_478453 <= HEX3Atmp_478451)) goto LA47;
							i_478449 = res_478453;
							m_478362 = (*n).kindU.S6.Sons->data[i_478449];
							LOC48 = 0;
							LOC48 = elemtype_261656(x);
							annotatetype_478223(m_478362, LOC48);
							res_478453 += 1;
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3139));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((524288 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA53;
			asgnRefNoCycle((void**) &(*n).Typ, t);
			{
				tnode224819* m_478377;
				m_478377 = 0;
				{
					NI i_478458;
					NI HEX3Atmp_478460;
					NI LOC57;
					NI res_478462;
					i_478458 = 0;
					HEX3Atmp_478460 = 0;
					LOC57 = 0;
					LOC57 = len_225367(n);
					HEX3Atmp_478460 = (LOC57 - 1);
					res_478462 = 0;
					{
						while (1) {
							ttype224855* LOC60;
							if (!(res_478462 <= HEX3Atmp_478460)) goto LA59;
							i_478458 = res_478462;
							m_478377 = (*n).kindU.S6.Sons->data[i_478458];
							LOC60 = 0;
							LOC60 = elemtype_261656(x);
							annotatetype_478223(m_478377, LOC60);
							res_478462 += 1;
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3140));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA65;
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3141));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA71;
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3142));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((805306368 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA77;
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3143));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA83;
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_197928((*n).Info, ((NimStringDesc*) &TMP3144));
		}
		LA81: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityDatInit)(void) {
}

