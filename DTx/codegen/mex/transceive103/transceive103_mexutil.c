/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive103_mexutil.c
 *
 * Code generation for function 'transceive103_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "transceive103_mexutil.h"

/* Function Definitions */
const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m15;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 0, NULL, "sdruroot", true, location);
}

void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
               emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "setupsdru", true, location);
}

/* End of code generation (transceive103_mexutil.c) */
