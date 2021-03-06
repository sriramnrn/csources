/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tbitset282012 tbitset282012;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct tbitset282012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP2802)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI110; /* int8 */
TNimType NTI282012; /* TBitSet */
N_NIMCALL(void, TMP2802)(void* p, NI op) {
	tbitset282012* a;
	NI LOC1;
	a = (tbitset282012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_282021)(tbitset282012** b, NI length) {
	unsureAsgnRef((void**) &(*b), (tbitset282012*) newSeq((&NTI282012), length));
}

N_NIMCALL(void, bitsetincl_282061)(tbitset282012** x, NI64 elem) {
	(*x)->data[(NI64)(elem / 8)] = (NI8)((*x)->data[(NI64)(elem / 8)] | ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(elem % 8))))))));
}

N_NIMCALL(void, bitsetdiff_282037)(tbitset282012** x, tbitset282012* y) {
	{
		NI i_282305;
		NI HEX3Atmp_282307;
		NI res_282310;
		i_282305 = 0;
		HEX3Atmp_282307 = 0;
		HEX3Atmp_282307 = ((*x)->Sup.len-1);
		res_282310 = 0;
		{
			while (1) {
				if (!(res_282310 <= HEX3Atmp_282307)) goto LA3;
				i_282305 = res_282310;
				(*x)->data[i_282305] = (NI8)((*x)->data[i_282305] & (NI8)((NU8) ~(y->data[i_282305])));
				res_282310 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_282077)(tbitset282012* x, NI64 e) {
	NIM_BOOL result;
	result = 0;
	result = !(((NI8)(x->data[(NI64)(e / 8)] & ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(e % 8)))))))) == ((NI8) 0)));
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_282091)(tbitset282012* x, tbitset282012* y) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_282461;
		NI HEX3Atmp_282463;
		NI res_282466;
		i_282461 = 0;
		HEX3Atmp_282463 = 0;
		HEX3Atmp_282463 = (x->Sup.len-1);
		res_282466 = 0;
		{
			while (1) {
				if (!(res_282466 <= HEX3Atmp_282463)) goto LA3;
				i_282461 = res_282466;
				{
					if (!!(((NI8)(x->data[i_282461] & (NI8)((NU8) ~(y->data[i_282461]))) == ((NI8) 0)))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_282466 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetequals_282084)(tbitset282012* x, tbitset282012* y) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_282422;
		NI HEX3Atmp_282424;
		NI res_282427;
		i_282422 = 0;
		HEX3Atmp_282424 = 0;
		HEX3Atmp_282424 = (x->Sup.len-1);
		res_282427 = 0;
		{
			while (1) {
				if (!(res_282427 <= HEX3Atmp_282424)) goto LA3;
				i_282422 = res_282427;
				{
					if (!!((x->data[i_282422] == y->data[i_282422]))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_282427 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, bitsetintersect_282053)(tbitset282012** x, tbitset282012* y) {
	{
		NI i_282383;
		NI HEX3Atmp_282385;
		NI res_282388;
		i_282383 = 0;
		HEX3Atmp_282385 = 0;
		HEX3Atmp_282385 = ((*x)->Sup.len-1);
		res_282388 = 0;
		{
			while (1) {
				if (!(res_282388 <= HEX3Atmp_282385)) goto LA3;
				i_282383 = res_282388;
				(*x)->data[i_282383] = (NI8)((*x)->data[i_282383] & y->data[i_282383]);
				res_282388 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_282029)(tbitset282012** x, tbitset282012* y) {
	{
		NI i_282266;
		NI HEX3Atmp_282268;
		NI res_282271;
		i_282266 = 0;
		HEX3Atmp_282268 = 0;
		HEX3Atmp_282268 = ((*x)->Sup.len-1);
		res_282271 = 0;
		{
			while (1) {
				if (!(res_282271 <= HEX3Atmp_282268)) goto LA3;
				i_282266 = res_282271;
				(*x)->data[i_282266] = (NI8)((*x)->data[i_282266] | y->data[i_282266]);
				res_282271 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_282045)(tbitset282012** x, tbitset282012* y) {
	{
		NI i_282344;
		NI HEX3Atmp_282346;
		NI res_282349;
		i_282344 = 0;
		HEX3Atmp_282346 = 0;
		HEX3Atmp_282346 = ((*x)->Sup.len-1);
		res_282349 = 0;
		{
			while (1) {
				if (!(res_282349 <= HEX3Atmp_282346)) goto LA3;
				i_282344 = res_282349;
				(*x)->data[i_282344] = (NI8)((*x)->data[i_282344] ^ y->data[i_282344]);
				res_282349 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsDatInit)(void) {
NTI282012.size = sizeof(tbitset282012*);
NTI282012.kind = 24;
NTI282012.base = (&NTI110);
NTI282012.flags = 2;
NTI282012.marker = TMP2802;
}

