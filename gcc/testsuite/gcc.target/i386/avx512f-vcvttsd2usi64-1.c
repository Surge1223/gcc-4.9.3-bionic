/* { dg-do compile { target { ! { ia32 } } } } */
/* { dg-options "-O2 -mavx512f" } */
/* { dg-final { scan-assembler-times "vcvttsd2usi\[ \\t\]+\[^\n\]*%xmm\[0-9\]" 2 } } */
/* { dg-final { scan-assembler-times "vcvttsd2usi\[ \\t\]+\[^\n\]*\{sae\}\[^\n\]*%xmm\[0-9\]" 1 } } */

#include <immintrin.h>

volatile __m128d x;
volatile unsigned long long y;

void extern
avx512f_test (void)
{
  y = _mm_cvttsd_u64 (x);
  y = _mm_cvtt_roundsd_u64 (x, _MM_FROUND_NO_EXC);
}
