/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_transceive103_mex.c
 *
 * Code generation for function '_coder_transceive103_mex'
 *
 */

/* Include files */
#include "transceive103.h"
#include "_coder_transceive103_mex.h"
#include "transceive103_terminate.h"
#include "_coder_transceive103_api.h"
#include "transceive103_initialize.h"
#include "transceive103_data.h"

/* Variable Definitions */
static transceive103StackData *transceive103StackDataGlobal = NULL;

/* Function Declarations */
static void transceive103_mexFunction(transceive103StackData *SD, int32_T nlhs,
  mxArray *plhs[2], int32_T nrhs, const mxArray *prhs[8]);

/* Function Definitions */
static void transceive103_mexFunction(transceive103StackData *SD, int32_T nlhs,
  mxArray *plhs[2], int32_T nrhs, const mxArray *prhs[8])
{
  int32_T n;
  const mxArray *inputs[8];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        13, "transceive103");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "transceive103");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  transceive103_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  transceive103_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  transceive103StackDataGlobal = (transceive103StackData *)mxCalloc(1, 1U *
    sizeof(transceive103StackData));
  mexAtExit(transceive103_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  transceive103_initialize();

  /* Dispatch the entry-point. */
  transceive103_mexFunction(transceive103StackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(transceive103StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_transceive103_mex.c) */
