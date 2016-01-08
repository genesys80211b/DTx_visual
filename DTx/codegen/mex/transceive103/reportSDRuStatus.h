/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * reportSDRuStatus.h
 *
 * Code generation for function 'reportSDRuStatus'
 *
 */

#ifndef __REPORTSDRUSTATUS_H__
#define __REPORTSDRUSTATUS_H__

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
extern void reportSDRuStatus(const emlrtStack *sp, UsrpErrorCapiEnumT errStatus,
  const char_T errMsg_data[], const int32_T errMsg_size[2]);

#endif

/* End of code generation (reportSDRuStatus.h) */
