/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct stringtableobj132012 stringtableobj132012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq132010 keyvaluepairseq132010;
typedef struct keyvaluepair132008 keyvaluepair132008;
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
struct keyvaluepair132008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj132012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq132010* Data;
NU8 Mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq132010 {
  TGenericSeq Sup;
  keyvaluepair132008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
stringtableobj132012* gcookies_392172;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_391004)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI32)(s->Sup.len + (NI)((NU32)(s->Sup.len) >> (NU32)(2))));
	{
		NI i_391018;
		NI HEX3Atmp_391028;
		NI res_391031;
		i_391018 = 0;
		HEX3Atmp_391028 = 0;
		HEX3Atmp_391028 = (NI32)(s->Sup.len - 1);
		res_391031 = 0;
		{
			while (1) {
				if (!(res_391031 <= HEX3Atmp_391028)) goto LA3;
				i_391018 = res_391031;
				switch (((NU8)(s->data[i_391018]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result = addChar(result, s->data[i_391018]);
				}
				break;
				case 32:
				{
					result = addChar(result, 43);
				}
				break;
				default:
				{
					NimStringDesc* LOC7;
					result = addChar(result, 37);
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_391018])))), 2);
					result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
				}
				break;
				}
				res_391031 += 1;
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void) {
}

