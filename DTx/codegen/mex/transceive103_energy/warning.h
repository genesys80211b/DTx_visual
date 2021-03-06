/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.h
 *
 * Code generation for function 'warning'
 *
 */

#ifndef __WARNING_H__
#define __WARNING_H__

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
#include "transceive103_energy_types.h"

/* Function Declarations */
extern void b_warning(const emlrtStack *sp);
extern void c_warning(const emlrtStack *sp, const char_T varargin_1_data[],
                      const int32_T varargin_1_size[2]);
extern void warning(const emlrtStack *sp);

#endif

/* End of code generation (warning.h) */
