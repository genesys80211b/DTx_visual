/*
 * transceive202_mexutil.c
 *
 * Code generation for function 'transceive202_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "transceive202_mexutil.h"

/* Function Definitions */
void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m18;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m18, 2, pArrays, "message", true,
    location);
}

const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m19;
  return emlrtCallMATLABR2012b(sp, 1, &m19, 0, NULL, "sdruroot", true, location);
}

void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
               emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "setupsdru", true, location);
}

/* End of code generation (transceive202_mexutil.c) */
