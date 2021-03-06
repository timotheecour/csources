/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA;
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_x3IKzrz1VNvfZbypScSTXg)(NF x);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux_lNzvVCaz9agOxH6nqWMG4Ww_2)(NI x, NimStringDesc** result);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_2, "NAN", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_3, "-0.0", 4);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_4, "0.0", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_5, "INF", 3);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_6, "-INF", 4);
STRING_LITERAL(TM_mZLUkjbotQF2WK9bQcNKBCA_8, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toStrMaxPrecision_ayHojnbqAtgkZF8TXMNMzg)(NF f, NimStringDesc* literalPostfix) {
	NimStringDesc* result;
	tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA T1_;
	result = (NimStringDesc*)0;
	T1_ = (tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T1_ = classify_x3IKzrz1VNvfZbypScSTXg(f);
	switch (T1_) {
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 4):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_2));
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 3):
	{
		NimStringDesc* T4_;
		T4_ = (NimStringDesc*)0;
		T4_ = rawNewString((literalPostfix ? literalPostfix->Sup.len : 0) + 4);
appendString(T4_, ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_3));
appendString(T4_, literalPostfix);
		result = T4_;
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 2):
	{
		NimStringDesc* T6_;
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((literalPostfix ? literalPostfix->Sup.len : 0) + 3);
appendString(T6_, ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_4));
appendString(T6_, literalPostfix);
		result = T6_;
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 5):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_5));
	}
	break;
	case ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 6):
	{
		result = copyString(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_6));
	}
	break;
	default:
	{
		int n;
		result = mnewString(((NI) 81));
		n = snprintf(nimToCStringConv(result), ((NU) ((result ? result->Sup.len : 0))), "%#.16e%s", f, nimToCStringConv(literalPostfix));
		result = setLengthStr(result, ((NI)chckRange(n, ((NI) 0), ((NI) 2147483647))));
	}
	break;
	}
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, encodeStr_Gl7oVckGOULa4RbIjSqJ6g)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (s ? s->Sup.len : 0);
		i_2 = ((NI) 0);
		{
			while (1) {
				NI TM_mZLUkjbotQF2WK9bQcNKBCA_7;
				if (!(i_2 < colontmp_)) goto LA3;
				i = i_2;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				switch (((NU8)(s->data[i]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
					unsureAsgnRef((void**) (&(*result)), addChar((*result), s->data[i]));
				}
				break;
				default:
				{
					NimStringDesc* T6_;
					NimStringDesc* T7_;
					T6_ = (NimStringDesc*)0;
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
					T7_ = (NimStringDesc*)0;
					T7_ = nsuToHex(((NI64) (((NU8)(s->data[i])))), ((NI) 2));
					T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + 1);
appendChar(T6_, 92);
appendString(T6_, T7_);
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T6_ ? T6_->Sup.len : 0) + 0));
appendString((*result), T6_);
				}
				break;
				}
				TM_mZLUkjbotQF2WK9bQcNKBCA_7 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_mZLUkjbotQF2WK9bQcNKBCA_7);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux_lNzvVCaz9agOxH6nqWMG4Ww_2)(NI x, NimStringDesc** result) {
	NIM_CHAR d;
	NI v;
	NI rem;
	NI idx;
	d = (NIM_CHAR)0;
	v = x;
	rem = (NI)(v % ((NI) 190));
	{
		if (!(rem < ((NI) 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*result)), addChar((*result), 45));
		v = ((NI32)-((NI)(v / ((NI) 190))));
		rem = ((NI32)-(rem));
	}
	goto LA1_;
	LA3_: ;
	{
		v = (NI)(v / ((NI) 190));
	}
	LA1_: ;
	idx = rem;
	{
		if (!(idx < ((NI) 62))) goto LA8_;
		if ((NU)(idx) >= (NU)(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8) ? ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8)->Sup.len : 0)) raiseIndexError2(idx,(((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8) ? ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8)->Sup.len : 0)-1);
		d = ((NimStringDesc*) &TM_mZLUkjbotQF2WK9bQcNKBCA_8)->data[idx];
	}
	goto LA6_;
	LA8_: ;
	{
		d = ((NIM_CHAR) (((NI)chckRange((NI)((NI)(idx - ((NI) 62)) + ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	LA6_: ;
	{
		if (!!((v == ((NI) 0)))) goto LA13_;
		encodeVIntAux_lNzvVCaz9agOxH6nqWMG4Ww_2(v, result);
	}
	LA13_: ;
	unsureAsgnRef((void**) (&(*result)), addChar((*result), d));
}

N_LIB_PRIVATE N_NIMCALL(void, encodeVInt_lNzvVCaz9agOxH6nqWMG4Ww)(NI x, NimStringDesc** result) {
	encodeVIntAux_lNzvVCaz9agOxH6nqWMG4Ww_2((NI)((NU32)(x) + (NU32)(((NI) 5))), result);
}
