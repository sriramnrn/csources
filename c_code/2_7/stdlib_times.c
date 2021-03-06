/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/select.h>

#include <string.h>

#include <sys/time.h>

#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct timeinfo101205 timeinfo101205;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepair131008 keyvaluepair131008;
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
struct  timeinfo101205  {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
NIM_BOOL Isdst;
NimStringDesc* Tzname;
NI Timezone;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY101854[7];
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(void, getlocaltime_101254)(time_t t, timeinfo101205* Result);
N_NIMCALL(void, tmtotimeinfo_101848)(struct tm* tm, NIM_BOOL local, timeinfo101205* Result);
N_NIMCALL(void, gettzname_101349)(keyvaluepair131008* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, gettimezone_101404)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(time_t, gettime_101249)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY101854 weekdays_101853 = {((NU8) 6),
((NU8) 0),
((NU8) 1),
((NU8) 2),
((NU8) 3),
((NU8) 4),
((NU8) 5)}
;
STRING_LITERAL(TMP3070, "UTC", 3);
extern TNimType NTI3211; /* RootObj */
TNimType NTI101205; /* TimeInfo */
extern TNimType NTI108; /* int */
TNimType NTI101208; /* range 0..61(int) */
TNimType NTI101211; /* range 0..59(int) */
TNimType NTI101213; /* range 0..23(int) */
TNimType NTI101216; /* range 1..31(int) */
TNimType NTI101006; /* Month */
TNimType NTI101219; /* range -10000..10000(int) */
TNimType NTI101008; /* WeekDay */
TNimType NTI101225; /* range 0..365(int) */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */

N_NIMCALL(NF, ntepochTime)(void) {
	NF result;
	struct timeval a;
	result = 0;
	memset((void*)&a, 0, sizeof(a));
	gettimeofday(&a, NIM_NIL);
	result = ((NF)(((double) (a.tv_sec))) + (NF)(((NF)(((double) (a.tv_usec))) * (NF)(9.9999999999999995e-007))));
	return result;
}

N_NIMCALL(void, gettzname_101349)(keyvaluepair131008* Result) {
	unsureAsgnRef((void**) &(*Result).Field0, cstrToNimstr(tzname[(0)- 0]));
	unsureAsgnRef((void**) &(*Result).Field1, cstrToNimstr(tzname[(1)- 0]));
	goto BeforeRet;
	BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_101404)(void) {
	NI result;
	result = 0;
	result = timezone;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tmtotimeinfo_101848)(struct tm* tm, NIM_BOOL local, timeinfo101205* Result) {
	timeinfo101205 LOC1;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI101205);
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI101205);
	LOC1.Second = ((NI) (((NI) ((*tm).tm_sec))));
	LOC1.Minute = ((NI) (((NI) ((*tm).tm_min))));
	LOC1.Hour = ((NI) (((NI) ((*tm).tm_hour))));
	LOC1.Monthday = ((NI) (((NI) ((*tm).tm_mday))));
	LOC1.Month = ((NU8) ((*tm).tm_mon));
	LOC1.Year = ((NI) ((NI32)((*tm).tm_year + ((NI32) 1900))));
	LOC1.Weekday = weekdays_101853[(((NI) ((*tm).tm_wday)))- 0];
	LOC1.Yearday = ((NI) (((NI) ((*tm).tm_yday))));
	LOC1.Isdst = (((NI32) 0) < (*tm).tm_isdst);
	{
		if (!local) goto LA4;
		{
			keyvaluepair131008 LOC10;
			if (!(((NI32) 0) < (*tm).tm_isdst)) goto LA8;
			memset((void*)&LOC10, 0, sizeof(LOC10));
			gettzname_101349(&LOC10);
			LOC1.Tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			keyvaluepair131008 LOC12;
			memset((void*)&LOC12, 0, sizeof(LOC12));
			gettzname_101349(&LOC12);
			LOC1.Tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.Tzname = copyString(((NimStringDesc*) &TMP3070));
	}
	LA2: ;
	{
		if (!local) goto LA16;
		LOC1.Timezone = gettimezone_101404();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.Timezone = 0;
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)&LOC1, (&NTI101205));
}

N_NIMCALL(void, getlocaltime_101254)(time_t t, timeinfo101205* Result) {
	time_t a;
	struct tm* LOC1;
	a = t;
	LOC1 = 0;
	LOC1 = localtime(&a);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI101205));
	(*Result).Sup.m_type = (&NTI101205);
	tmtotimeinfo_101848(&(*LOC1), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_101249)(void) {
	time_t result;
	result = 0;
	result = time(NIM_NIL);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result;
	timeinfo101205 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	ti.Sup.m_type = (&NTI101205);
	LOC1 = 0;
	LOC1 = gettime_101249();
	chckNil((void*)&ti);
	memset((void*)&ti, 0, sizeof(ti));
	ti.Sup.m_type = (&NTI101205);
	getlocaltime_101254(LOC1, &ti);
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nimIntToStr(((NI) (ti.Year)));
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) ((NI32)(((NI) (ti.Month)) + 1))), 2);
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.Monthday)), 2);
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result;
	timeinfo101205 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	ti.Sup.m_type = (&NTI101205);
	LOC1 = 0;
	LOC1 = gettime_101249();
	chckNil((void*)&ti);
	memset((void*)&ti, 0, sizeof(ti));
	ti.Sup.m_type = (&NTI101205);
	getlocaltime_101254(LOC1, &ti);
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nsuIntToStr(((NI) (ti.Hour)), 2);
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) (ti.Minute)), 2);
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.Second)), 2);
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b) {
	NI64 result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = difftime(a, b);
	result = float64ToInt64(LOC1);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void) {
static TNimNode* TMP3063[11];
static TNimNode* TMP3064[12];
NI TMP3066;
static char* NIM_CONST TMP3065[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* TMP3067[7];
NI TMP3069;
static char* NIM_CONST TMP3068[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP15[33];
NTI101205.size = sizeof(timeinfo101205);
NTI101205.kind = 17;
NTI101205.base = (&NTI3211);
TMP3063[0] = &TMP15[1];
NTI101208.size = sizeof(NI);
NTI101208.kind = 20;
NTI101208.base = (&NTI108);
NTI101208.flags = 3;
TMP15[1].kind = 1;
TMP15[1].offset = offsetof(timeinfo101205, Second);
TMP15[1].typ = (&NTI101208);
TMP15[1].name = "second";
TMP3063[1] = &TMP15[2];
NTI101211.size = sizeof(NI);
NTI101211.kind = 20;
NTI101211.base = (&NTI108);
NTI101211.flags = 3;
TMP15[2].kind = 1;
TMP15[2].offset = offsetof(timeinfo101205, Minute);
TMP15[2].typ = (&NTI101211);
TMP15[2].name = "minute";
TMP3063[2] = &TMP15[3];
NTI101213.size = sizeof(NI);
NTI101213.kind = 20;
NTI101213.base = (&NTI108);
NTI101213.flags = 3;
TMP15[3].kind = 1;
TMP15[3].offset = offsetof(timeinfo101205, Hour);
TMP15[3].typ = (&NTI101213);
TMP15[3].name = "hour";
TMP3063[3] = &TMP15[4];
NTI101216.size = sizeof(NI);
NTI101216.kind = 20;
NTI101216.base = (&NTI108);
NTI101216.flags = 3;
TMP15[4].kind = 1;
TMP15[4].offset = offsetof(timeinfo101205, Monthday);
TMP15[4].typ = (&NTI101216);
TMP15[4].name = "monthday";
TMP3063[4] = &TMP15[5];
NTI101006.size = sizeof(NU8);
NTI101006.kind = 14;
NTI101006.base = 0;
NTI101006.flags = 3;
for (TMP3066 = 0; TMP3066 < 12; TMP3066++) {
TMP15[TMP3066+6].kind = 1;
TMP15[TMP3066+6].offset = TMP3066;
TMP15[TMP3066+6].name = TMP3065[TMP3066];
TMP3064[TMP3066] = &TMP15[TMP3066+6];
}
TMP15[18].len = 12; TMP15[18].kind = 2; TMP15[18].sons = &TMP3064[0];
NTI101006.node = &TMP15[18];
TMP15[5].kind = 1;
TMP15[5].offset = offsetof(timeinfo101205, Month);
TMP15[5].typ = (&NTI101006);
TMP15[5].name = "month";
TMP3063[5] = &TMP15[19];
NTI101219.size = sizeof(NI);
NTI101219.kind = 20;
NTI101219.base = (&NTI108);
NTI101219.flags = 3;
TMP15[19].kind = 1;
TMP15[19].offset = offsetof(timeinfo101205, Year);
TMP15[19].typ = (&NTI101219);
TMP15[19].name = "year";
TMP3063[6] = &TMP15[20];
NTI101008.size = sizeof(NU8);
NTI101008.kind = 14;
NTI101008.base = 0;
NTI101008.flags = 3;
for (TMP3069 = 0; TMP3069 < 7; TMP3069++) {
TMP15[TMP3069+21].kind = 1;
TMP15[TMP3069+21].offset = TMP3069;
TMP15[TMP3069+21].name = TMP3068[TMP3069];
TMP3067[TMP3069] = &TMP15[TMP3069+21];
}
TMP15[28].len = 7; TMP15[28].kind = 2; TMP15[28].sons = &TMP3067[0];
NTI101008.node = &TMP15[28];
TMP15[20].kind = 1;
TMP15[20].offset = offsetof(timeinfo101205, Weekday);
TMP15[20].typ = (&NTI101008);
TMP15[20].name = "weekday";
TMP3063[7] = &TMP15[29];
NTI101225.size = sizeof(NI);
NTI101225.kind = 20;
NTI101225.base = (&NTI108);
NTI101225.flags = 3;
TMP15[29].kind = 1;
TMP15[29].offset = offsetof(timeinfo101205, Yearday);
TMP15[29].typ = (&NTI101225);
TMP15[29].name = "yearday";
TMP3063[8] = &TMP15[30];
TMP15[30].kind = 1;
TMP15[30].offset = offsetof(timeinfo101205, Isdst);
TMP15[30].typ = (&NTI138);
TMP15[30].name = "isDST";
TMP3063[9] = &TMP15[31];
TMP15[31].kind = 1;
TMP15[31].offset = offsetof(timeinfo101205, Tzname);
TMP15[31].typ = (&NTI149);
TMP15[31].name = "tzname";
TMP3063[10] = &TMP15[32];
TMP15[32].kind = 1;
TMP15[32].offset = offsetof(timeinfo101205, Timezone);
TMP15[32].typ = (&NTI108);
TMP15[32].name = "timezone";
TMP15[0].len = 11; TMP15[0].kind = 2; TMP15[0].sons = &TMP3063[0];
NTI101205.node = &TMP15[0];
}

