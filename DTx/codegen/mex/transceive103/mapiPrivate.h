/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mapiPrivate.h
 *
 * Code generation for function 'mapiPrivate'
 *
 */

#ifndef __MAPIPRIVATE_H__
#define __MAPIPRIVATE_H__

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
#include "transceive103_types.h"

/* Function Declarations */
extern void b_mapiPrivate(const emlrtStack *sp, int32_T varargin_1,
  UsrpErrorCapiEnumT *varargout_1, char_T varargout_2_data[], int32_T
  varargout_2_size[2]);
extern void c_isSetupsdruCalled_not_empty_i(void);
extern void mapiPrivate(const emlrtStack *sp, const uint8_T varargin_1[12],
  BoardIdCapiEnumT varargin_2, const uint8_T varargin_3[15],
  DataPortDataTypeCapiEnumT varargin_5, int32_T *varargout_1, UsrpErrorCapiEnumT
  *varargout_2, char_T varargout_3_data[], int32_T varargout_3_size[2]);
extern void mapiPrivate_init(void);

#endif

/* End of code generation (mapiPrivate.h) */
