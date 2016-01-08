/*
 * transceive202_mexutil.h
 *
 * Code generation for function 'transceive202_mexutil'
 *
 */

#ifndef __TRANSCEIVE202_MEXUTIL_H__
#define __TRANSCEIVE202_MEXUTIL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "transceive202_types.h"

/* Function Declarations */
extern void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);

#endif

/* End of code generation (transceive202_mexutil.h) */
