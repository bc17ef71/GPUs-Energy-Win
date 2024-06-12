#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "pipeline.fatbin.c"
extern void __device_stub__Z4OvhdPi(int *);
extern void __device_stub__Z3AddPi(int *);
extern void __device_stub__Z3MulPi(int *);
extern void __device_stub__Z3DivPi(int *);
extern void __device_stub__Z3RemPi(int *);
extern void __device_stub__Z3AbsPi(int *);
extern void __device_stub__Z4DivUPi(int *);
extern void __device_stub__Z4RemUPi(int *);
extern void __device_stub__Z3AndPi(int *);
extern void __device_stub__Z4CnotPi(int *);
extern void __device_stub__Z3ShlPi(int *);
extern void __device_stub__Z4FAddPi(int *);
extern void __device_stub__Z4FMulPi(int *);
extern void __device_stub__Z4FDivPi(int *);
extern void __device_stub__Z5DFAddPi(int *);
extern void __device_stub__Z5DFMulPi(int *);
extern void __device_stub__Z5DFDivPi(int *);
extern void __device_stub__Z5HFAddPi(int *);
extern void __device_stub__Z7MAdd_ccPi(int *);
extern void __device_stub__Z5MSubcPi(int *);
extern void __device_stub__Z7MMad_ccPi(int *);
extern void __device_stub__Z5Mul24Pi(int *);
extern void __device_stub__Z5MulHiPi(int *);
extern void __device_stub__Z7Mul64HiPi(int *);
extern void __device_stub__Z3SadPi(int *);
extern void __device_stub__Z4PopcPi(int *);
extern void __device_stub__Z3ClzPi(int *);
extern void __device_stub__Z5BfindPi(int *);
extern void __device_stub__Z3RcpPi(int *);
extern void __device_stub__Z4SqrtPi(int *);
extern void __device_stub__Z8FastSqrtPi(int *);
extern void __device_stub__Z5RsqrtPi(int *);
extern void __device_stub__Z3SinPi(int *);
extern void __device_stub__Z3Lg2Pi(int *);
extern void __device_stub__Z3Ex2Pi(int *);
extern void __device_stub__Z8CopysignPi(int *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCT",read)
__declspec(allocate(".CRT$XCT"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z4OvhdPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Ovhd)));
}
void Ovhd( int *__cuda_0)
{__device_stub__Z4OvhdPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3AddPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Add)));
}
void Add( int *__cuda_0)
{__device_stub__Z3AddPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3MulPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Mul)));
}
void Mul( int *__cuda_0)
{__device_stub__Z3MulPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3DivPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Div)));
}
void Div( int *__cuda_0)
{__device_stub__Z3DivPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3RemPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Rem)));
}
void Rem( int *__cuda_0)
{__device_stub__Z3RemPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3AbsPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Abs)));
}
void Abs( int *__cuda_0)
{__device_stub__Z3AbsPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4DivUPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))DivU)));
}
void DivU( int *__cuda_0)
{__device_stub__Z4DivUPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4RemUPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))RemU)));
}
void RemU( int *__cuda_0)
{__device_stub__Z4RemUPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3AndPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))And)));
}
void And( int *__cuda_0)
{__device_stub__Z3AndPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4CnotPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Cnot)));
}
void Cnot( int *__cuda_0)
{__device_stub__Z4CnotPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3ShlPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Shl)));
}
void Shl( int *__cuda_0)
{__device_stub__Z3ShlPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4FAddPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))FAdd)));
}
void FAdd( int *__cuda_0)
{__device_stub__Z4FAddPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4FMulPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))FMul)));
}
void FMul( int *__cuda_0)
{__device_stub__Z4FMulPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4FDivPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))FDiv)));
}
void FDiv( int *__cuda_0)
{__device_stub__Z4FDivPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5DFAddPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))DFAdd)));
}
void DFAdd( int *__cuda_0)
{__device_stub__Z5DFAddPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5DFMulPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))DFMul)));
}
void DFMul( int *__cuda_0)
{__device_stub__Z5DFMulPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5DFDivPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))DFDiv)));
}
void DFDiv( int *__cuda_0)
{__device_stub__Z5DFDivPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5HFAddPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))HFAdd)));
}
void HFAdd( int *__cuda_0)
{__device_stub__Z5HFAddPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z7MAdd_ccPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))MAdd_cc)));
}
void MAdd_cc( int *__cuda_0)
{__device_stub__Z7MAdd_ccPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5MSubcPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))MSubc)));
}
void MSubc( int *__cuda_0)
{__device_stub__Z5MSubcPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z7MMad_ccPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))MMad_cc)));
}
void MMad_cc( int *__cuda_0)
{__device_stub__Z7MMad_ccPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5Mul24Pi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Mul24)));
}
void Mul24( int *__cuda_0)
{__device_stub__Z5Mul24Pi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5MulHiPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))MulHi)));
}
void MulHi( int *__cuda_0)
{__device_stub__Z5MulHiPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z7Mul64HiPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Mul64Hi)));
}
void Mul64Hi( int *__cuda_0)
{__device_stub__Z7Mul64HiPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3SadPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Sad)));
}
void Sad( int *__cuda_0)
{__device_stub__Z3SadPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4PopcPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Popc)));
}
void Popc( int *__cuda_0)
{__device_stub__Z4PopcPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3ClzPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Clz)));
}
void Clz( int *__cuda_0)
{__device_stub__Z3ClzPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5BfindPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Bfind)));
}
void Bfind( int *__cuda_0)
{__device_stub__Z5BfindPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3RcpPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Rcp)));
}
void Rcp( int *__cuda_0)
{__device_stub__Z3RcpPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z4SqrtPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Sqrt)));
}
void Sqrt( int *__cuda_0)
{__device_stub__Z4SqrtPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z8FastSqrtPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))FastSqrt)));
}
void FastSqrt( int *__cuda_0)
{__device_stub__Z8FastSqrtPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z5RsqrtPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Rsqrt)));
}
void Rsqrt( int *__cuda_0)
{__device_stub__Z5RsqrtPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3SinPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Sin)));
}
void Sin( int *__cuda_0)
{__device_stub__Z3SinPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3Lg2Pi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Lg2)));
}
void Lg2( int *__cuda_0)
{__device_stub__Z3Lg2Pi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z3Ex2Pi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Ex2)));
}
void Ex2( int *__cuda_0)
{__device_stub__Z3Ex2Pi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z8CopysignPi(
int *__par0)
{
__cudaLaunchPrologue(1);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaLaunch(((char *)((void ( *)(int *))Copysign)));
}
void Copysign( int *__cuda_0)
{__device_stub__Z8CopysignPi( __cuda_0);
}
#line 1 "pipeline.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback(
void **__T3)
{
__nv_dummy_param_ref(__T3);
__nv_save_fatbinhandle_for_managed_rt(__T3);
__cudaRegisterEntry(__T3, ((void ( *)(int *))Copysign), _Z8CopysignPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Ex2), _Z3Ex2Pi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Lg2), _Z3Lg2Pi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Sin), _Z3SinPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Rsqrt), _Z5RsqrtPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))FastSqrt), _Z8FastSqrtPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Sqrt), _Z4SqrtPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Rcp), _Z3RcpPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Bfind), _Z5BfindPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Clz), _Z3ClzPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Popc), _Z4PopcPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Sad), _Z3SadPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Mul64Hi), _Z7Mul64HiPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))MulHi), _Z5MulHiPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Mul24), _Z5Mul24Pi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))MMad_cc), _Z7MMad_ccPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))MSubc), _Z5MSubcPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))MAdd_cc), _Z7MAdd_ccPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))HFAdd), _Z5HFAddPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))DFDiv), _Z5DFDivPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))DFMul), _Z5DFMulPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))DFAdd), _Z5DFAddPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))FDiv), _Z4FDivPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))FMul), _Z4FMulPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))FAdd), _Z4FAddPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Shl), _Z3ShlPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Cnot), _Z4CnotPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))And), _Z3AndPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))RemU), _Z4RemUPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))DivU), _Z4DivUPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Abs), _Z3AbsPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Rem), _Z3RemPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Div), _Z3DivPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Mul), _Z3MulPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Add), _Z3AddPi, (-1));
__cudaRegisterEntry(__T3, ((void ( *)(int *))Ovhd), _Z4OvhdPi, (-1));
}
static void __sti____cudaRegisterAll(void)
{
__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);
}
