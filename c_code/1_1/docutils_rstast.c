/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trstnode341011 trstnode341011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq341009 trstnodeseq341009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode341011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq341009* Sons;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY26020[16];
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
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct trstnodeseq341009 {
  TGenericSeq Sup;
  trstnode341011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2457)(void* p, NI op);
N_NIMCALL(void, TMP2458)(void* p, NI op);
N_NIMCALL(trstnode341011*, newrstnode_341105)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_341183)(trstnode341011* father, trstnode341011* son);
TNimType NTI341011; /* TRstNode */
TNimType NTI341005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI341009; /* TRstNodeSeq */
TNimType NTI341007; /* PRstNode */
extern tgcheap46616 gch_46644;

N_NIMCALL(NI, len_341084)(trstnode341011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode341011*, lastson_341162)(trstnode341011* n) {
	trstnode341011* result;
	result = 0;
	result = (*n).Sons->data[(NI32)((*n).Sons->Sup.len - 1)];
	return result;
}
N_NIMCALL(void, TMP2457)(void* p, NI op) {
	trstnodeseq341009* a;
	NI LOC1;
	a = (trstnodeseq341009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2458)(void* p, NI op) {
	trstnode341011* a;
	a = (trstnode341011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44533* c;
	c = usrtocell_48246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_49804(c);
	}
	LA3: ;
}

N_NIMCALL(trstnode341011*, newrstnode_341105)(NU8 kind) {
	trstnode341011* result;
	result = 0;
	result = (trstnode341011*) newObj((&NTI341007), sizeof(trstnode341011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq341009*) newSeqRC1((&NTI341009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode341011*, newrstnode_341151)(NU8 kind, NimStringDesc* s) {
	trstnode341011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_341105(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, add_341183)(trstnode341011* father, trstnode341011* son) {
	(*father).Sons = (trstnodeseq341009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode341011*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
}

N_NIMCALL(void, addifnotnil_341211)(trstnode341011* father, trstnode341011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_341183(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2453[4];
static TNimNode* TMP2454[65];
NI TMP2456;
static char* NIM_CONST TMP2455[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP887[71];
NTI341011.size = sizeof(trstnode341011);
NTI341011.kind = 18;
NTI341011.base = 0;
NTI341011.flags = 2;
TMP2453[0] = &TMP887[1];
NTI341005.size = sizeof(NU8);
NTI341005.kind = 14;
NTI341005.base = 0;
NTI341005.flags = 3;
for (TMP2456 = 0; TMP2456 < 65; TMP2456++) {
TMP887[TMP2456+2].kind = 1;
TMP887[TMP2456+2].offset = TMP2456;
TMP887[TMP2456+2].name = TMP2455[TMP2456];
TMP2454[TMP2456] = &TMP887[TMP2456+2];
}
TMP887[67].len = 65; TMP887[67].kind = 2; TMP887[67].sons = &TMP2454[0];
NTI341005.node = &TMP887[67];
TMP887[1].kind = 1;
TMP887[1].offset = offsetof(trstnode341011, Kind);
TMP887[1].typ = (&NTI341005);
TMP887[1].name = "kind";
TMP2453[1] = &TMP887[68];
TMP887[68].kind = 1;
TMP887[68].offset = offsetof(trstnode341011, Text);
TMP887[68].typ = (&NTI149);
TMP887[68].name = "text";
TMP2453[2] = &TMP887[69];
TMP887[69].kind = 1;
TMP887[69].offset = offsetof(trstnode341011, Level);
TMP887[69].typ = (&NTI108);
TMP887[69].name = "level";
TMP2453[3] = &TMP887[70];
NTI341009.size = sizeof(trstnodeseq341009*);
NTI341009.kind = 24;
NTI341009.base = (&NTI341007);
NTI341009.flags = 2;
NTI341009.marker = TMP2457;
TMP887[70].kind = 1;
TMP887[70].offset = offsetof(trstnode341011, Sons);
TMP887[70].typ = (&NTI341009);
TMP887[70].name = "sons";
TMP887[0].len = 4; TMP887[0].kind = 2; TMP887[0].sons = &TMP2453[0];
NTI341011.node = &TMP887[0];
NTI341007.size = sizeof(trstnode341011*);
NTI341007.kind = 22;
NTI341007.base = (&NTI341011);
NTI341007.flags = 2;
NTI341007.marker = TMP2458;
}

