/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * receiveData.h
 *
 * Code generation for function 'receiveData'
 *
 */

#ifndef __RECEIVEDATA_H__
#define __RECEIVEDATA_H__

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
extern void receiveData(const emlrtStack *sp, int32_T driverApiH, const real_T
  freq[2], const real_T loOffset[2], const real_T gain[2], real_T decim,
  cint16_T data[375000], uint32_T *dataLength, uint32_T *overflow,
  UsrpErrorCapiEnumT *errStat, char_T errStr_data[], int32_T errStr_size[2]);

#endif

/* End of code generation (receiveData.h) */
