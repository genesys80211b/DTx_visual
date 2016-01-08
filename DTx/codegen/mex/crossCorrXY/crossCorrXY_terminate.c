/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * crossCorrXY_terminate.c
 *
 * Code generation for function 'crossCorrXY_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "crossCorrXY.h"
#include "crossCorrXY_terminate.h"
#include "_coder_crossCorrXY_mex.h"
#include "crossCorrXY_data.h"

/* Function Definitions */
void crossCorrXY_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void crossCorrXY_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (crossCorrXY_terminate.c) */
