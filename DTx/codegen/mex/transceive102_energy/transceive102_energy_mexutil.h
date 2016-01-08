/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive102_energy_mexutil.h
 *
 * Code generation for function 'transceive102_energy_mexutil'
 *
 */

#ifndef __TRANSCEIVE102_ENERGY_MEXUTIL_H__
#define __TRANSCEIVE102_ENERGY_MEXUTIL_H__

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "transceive102_energy_types.h"

/* Function Declarations */
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);

#endif

/* End of code generation (transceive102_energy_mexutil.h) */
