/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SDRuReceiver.h
 *
 * Code generation for function 'SDRuReceiver'
 *
 */

#ifndef __SDRURECEIVER_H__
#define __SDRURECEIVER_H__

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
extern comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(const emlrtStack *sp,
  comm_SDRuReceiver *obj, real_T varargin_2, real_T varargin_4, real_T
  varargin_8);
extern void SDRuReceiver_setupImplLocal(const emlrtStack *sp, comm_SDRuReceiver *
  obj, UsrpErrorCapiEnumT *deviceStatus, char_T errMsg_data[], int32_T
  errMsg_size[2]);
extern void SDRuReceiver_stepImpl(transceive103StackData *SD, const emlrtStack
  *sp, const comm_SDRuReceiver *obj, creal_T y[1408], uint32_T *dataLen);

#endif

/* End of code generation (SDRuReceiver.h) */
