/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <OS.h>
#include <string.h>
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
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);

static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
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

N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	system_info sysinfo;
	result = (NI)0;
	nimZeroMem((void*)(&sysinfo), sizeof(system_info));
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = get_system_info((&sysinfo));
		if (!(T3_ == ((NI32) 0))) goto LA4_;
		result = ((NI)chckRange(sysinfo.cpu_count, ((NI) (-2147483647 -1)), ((NI) 2147483647)));
	}
	LA4_: ;
	{
		if (!(result <= ((NI) 0))) goto LA8_;
		result = ((NI) 0);
	}
	LA8_: ;
	return result;
}