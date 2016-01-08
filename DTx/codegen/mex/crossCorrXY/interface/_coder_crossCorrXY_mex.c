/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * _coder_crossCorrXY_mex.c
 *
 * Code generation for function '_coder_crossCorrXY_mex'
 *
 */

/* Include files */
#include "crossCorrXY.h"
#include "_coder_crossCorrXY_mex.h"
#include "crossCorrXY_terminate.h"
#include "_coder_crossCorrXY_api.h"
#include "crossCorrXY_initialize.h"
#include "crossCorrXY_data.h"

/* Variable Definitions */
static crossCorrXYStackData *crossCorrXYStackDataGlobal = NULL;

/* Function Declarations */
static void crossCorrXY_mexFunction(crossCorrXYStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void crossCorrXY_mexFunction(crossCorrXYStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        11, "crossCorrXY");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "crossCorrXY");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  crossCorrXY_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  crossCorrXY_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  crossCorrXYStackDataGlobal = (crossCorrXYStackData *)mxCalloc(1, 1U * sizeof
    (crossCorrXYStackData));
  mexAtExit(crossCorrXY_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  crossCorrXY_initialize();

  /* Dispatch the entry-point. */
  crossCorrXY_mexFunction(crossCorrXYStackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(crossCorrXYStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_crossCorrXY_mex.c) */
