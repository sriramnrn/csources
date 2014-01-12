/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tbitset219010 tbitset219010;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
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
struct tbitset219010 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_219057)(tbitset219010* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_219045)(tbitset219010** x, NI64 elem);
N_NIMCALL(void, hiddenraiseassert_77217)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_219051)(tbitset219010** x, NI64 elem);
N_NIMCALL(void, bitsetinit_219015)(tbitset219010** b, NI length);
N_NIMCALL(void, TMP3053)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_219021)(tbitset219010** x, tbitset219010* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_219027)(tbitset219010** x, tbitset219010* y);
N_NIMCALL(void, bitsetsymdiff_219033)(tbitset219010** x, tbitset219010* y);
N_NIMCALL(void, bitsetintersect_219039)(tbitset219010** x, tbitset219010* y);
N_NIMCALL(NIM_BOOL, bitsetequals_219062)(tbitset219010* x, tbitset219010* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_219067)(tbitset219010* x, tbitset219010* y);
STRING_LITERAL(TMP3046, "0 <= elem ", 10);
extern TFrame* frameptr_12037;
extern TNimType NTI107; /* int8 */
TNimType NTI219010; /* TBitSet */

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NIM_BOOL, bitsetin_219057)(tbitset219010* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP3044;
	NI64 TMP3045;
	nimfr("BitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	nimln(698, "system.nim");
	nimln(698, "system.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3044 = divInt64(e, 8);
	if ((NU)((NI64)(TMP3044)) >= (NU)(x->Sup.len)) raiseIndexError();
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3045 = modInt64(e, 8);
	result = !(((NI8)(x->data[(NI64)(TMP3044)] & ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3045)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}
N_NIMCALL(void, bitsetincl_219045)(tbitset219010** x, NI64 elem) {
	NI64 TMP3047;
	NI64 TMP3048;
	NI64 TMP3049;
	nimfr("BitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		nimln(38, "bitsets.nim");
		nimln(38, "bitsets.nim");
		if (!!((0 <= elem))) goto LA3;
		nimln(38, "bitsets.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP3046));	}	LA3: ;
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3047 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3047)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3048 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3048)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	TMP3049 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3047)] = (NI8)((*x)->data[(NI64)(TMP3048)] | ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3049))))))));
	popFrame();
}
N_NIMCALL(void, bitsetexcl_219051)(tbitset219010** x, NI64 elem) {
	NI64 TMP3050;
	NI64 TMP3051;
	NI64 TMP3052;
	nimfr("BitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3050 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3050)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3051 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3051)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	TMP3052 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3050)] = (NI8)((*x)->data[(NI64)(TMP3051)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3052))))))))));
	popFrame();
}N_NIMCALL(void, TMP3053)(void* p, NI op) {
	tbitset219010* a;
	NI LOC1;
	a = (tbitset219010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_219015)(tbitset219010** b, NI length) {
	nimfr("BitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) &(*b), (tbitset219010*) newSeq((&NTI219010), length));
	popFrame();
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
N_NIMCALL(void, bitsetunion_219021)(tbitset219010** x, tbitset219010* y) {
	NI i_219245;
	NI HEX3Atmp_219246;
	NI res_219248;
	nimfr("BitSetUnion", "bitsets.nim")
	i_219245 = 0;
	HEX3Atmp_219246 = 0;
	nimln(50, "bitsets.nim");
	nimln(50, "bitsets.nim");
	HEX3Atmp_219246 = ((*x)->Sup.len-1);
	nimln(1301, "system.nim");
	res_219248 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219248 <= HEX3Atmp_219246)) goto LA1;
		nimln(1301, "system.nim");
		i_219245 = res_219248;
		nimln(50, "bitsets.nim");
		if ((NU)(i_219245) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(50, "bitsets.nim");
		if ((NU)(i_219245) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_219245) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_219245] = (NI8)((*x)->data[i_219245] | y->data[i_219245]);
		nimln(1304, "system.nim");
		res_219248 = addInt(res_219248, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, bitsetdiff_219027)(tbitset219010** x, tbitset219010* y) {
	NI i_219267;
	NI HEX3Atmp_219268;
	NI res_219270;
	nimfr("BitSetDiff", "bitsets.nim")
	i_219267 = 0;
	HEX3Atmp_219268 = 0;
	nimln(53, "bitsets.nim");
	nimln(53, "bitsets.nim");
	HEX3Atmp_219268 = ((*x)->Sup.len-1);
	nimln(1301, "system.nim");
	res_219270 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219270 <= HEX3Atmp_219268)) goto LA1;
		nimln(1301, "system.nim");
		i_219267 = res_219270;
		nimln(53, "bitsets.nim");
		if ((NU)(i_219267) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_219267) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_219267) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_219267] = (NI8)((*x)->data[i_219267] & (NI8)((NU8) ~(y->data[i_219267])));
		nimln(1304, "system.nim");
		res_219270 = addInt(res_219270, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, bitsetsymdiff_219033)(tbitset219010** x, tbitset219010* y) {
	NI i_219289;
	NI HEX3Atmp_219290;
	NI res_219292;
	nimfr("BitSetSymDiff", "bitsets.nim")
	i_219289 = 0;
	HEX3Atmp_219290 = 0;
	nimln(56, "bitsets.nim");
	nimln(56, "bitsets.nim");
	HEX3Atmp_219290 = ((*x)->Sup.len-1);
	nimln(1301, "system.nim");
	res_219292 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219292 <= HEX3Atmp_219290)) goto LA1;
		nimln(1301, "system.nim");
		i_219289 = res_219292;
		nimln(56, "bitsets.nim");
		if ((NU)(i_219289) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(56, "bitsets.nim");
		if ((NU)(i_219289) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_219289) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_219289] = (NI8)((*x)->data[i_219289] ^ y->data[i_219289]);
		nimln(1304, "system.nim");
		res_219292 = addInt(res_219292, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, bitsetintersect_219039)(tbitset219010** x, tbitset219010* y) {
	NI i_219311;
	NI HEX3Atmp_219312;
	NI res_219314;
	nimfr("BitSetIntersect", "bitsets.nim")
	i_219311 = 0;
	HEX3Atmp_219312 = 0;
	nimln(59, "bitsets.nim");
	nimln(59, "bitsets.nim");
	HEX3Atmp_219312 = ((*x)->Sup.len-1);
	nimln(1301, "system.nim");
	res_219314 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219314 <= HEX3Atmp_219312)) goto LA1;
		nimln(1301, "system.nim");
		i_219311 = res_219314;
		nimln(59, "bitsets.nim");
		if ((NU)(i_219311) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(59, "bitsets.nim");
		if ((NU)(i_219311) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_219311) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_219311] = (NI8)((*x)->data[i_219311] & y->data[i_219311]);
		nimln(1304, "system.nim");
		res_219314 = addInt(res_219314, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, bitsetequals_219062)(tbitset219010* x, tbitset219010* y) {
	NIM_BOOL result;
	NI i_219333;
	NI HEX3Atmp_219334;
	NI res_219336;
	nimfr("BitSetEquals", "bitsets.nim")
	result = 0;
	i_219333 = 0;
	HEX3Atmp_219334 = 0;
	nimln(62, "bitsets.nim");
	nimln(62, "bitsets.nim");
	HEX3Atmp_219334 = (x->Sup.len-1);
	nimln(1301, "system.nim");
	res_219336 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219336 <= HEX3Atmp_219334)) goto LA1;
		nimln(1301, "system.nim");
		i_219333 = res_219336;
		nimln(63, "bitsets.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if ((NU)(i_219333) >= (NU)(x->Sup.len)) raiseIndexError();
			if ((NU)(i_219333) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!((x->data[i_219333] == y->data[i_219333]))) goto LA4;
			nimln(64, "bitsets.nim");
			nimln(64, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}		LA4: ;
		nimln(1304, "system.nim");
		res_219336 = addInt(res_219336, 1);
	} LA1: ;
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, bitsetcontains_219067)(tbitset219010* x, tbitset219010* y) {
	NIM_BOOL result;
	NI i_219355;
	NI HEX3Atmp_219356;
	NI res_219358;
	nimfr("BitSetContains", "bitsets.nim")
	result = 0;
	i_219355 = 0;
	HEX3Atmp_219356 = 0;
	nimln(68, "bitsets.nim");
	nimln(68, "bitsets.nim");
	HEX3Atmp_219356 = (x->Sup.len-1);
	nimln(1301, "system.nim");
	res_219358 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219358 <= HEX3Atmp_219356)) goto LA1;
		nimln(1301, "system.nim");
		i_219355 = res_219358;
		nimln(69, "bitsets.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			nimln(69, "bitsets.nim");
			if ((NU)(i_219355) >= (NU)(x->Sup.len)) raiseIndexError();
			nimln(69, "bitsets.nim");
			if ((NU)(i_219355) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!(((NI8)(x->data[i_219355] & (NI8)((NU8) ~(y->data[i_219355]))) == ((NI8) 0)))) goto LA4;
			nimln(70, "bitsets.nim");
			nimln(70, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}		LA4: ;
		nimln(1304, "system.nim");
		res_219358 = addInt(res_219358, 1);
	} LA1: ;
	nimln(71, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerbitsetsInit)(void) {
	nimfr("bitsets", "bitsets.nim")
	popFrame();
}

N_NOINLINE(void, compilerbitsetsDatInit)(void) {
NTI219010.size = sizeof(tbitset219010*);
NTI219010.kind = 24;
NTI219010.base = (&NTI107);
NTI219010.flags = 2;
NTI219010.marker = TMP3053;
}
