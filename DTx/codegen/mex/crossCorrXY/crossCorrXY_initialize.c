/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * crossCorrXY_initialize.c
 *
 * Code generation for function 'crossCorrXY_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "crossCorrXY.h"
#include "crossCorrXY_initialize.h"
#include "_coder_crossCorrXY_mex.h"
#include "crossCorrXY_data.h"

/* Function Definitions */
void crossCorrXY_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (crossCorrXY_initialize.c) */
