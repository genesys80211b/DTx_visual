/*
 * SDRuReceiver.h
 *
 * Code generation for function 'SDRuReceiver'
 *
 */

#ifndef __SDRURECEIVER_H__
#define __SDRURECEIVER_H__

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
extern comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(const emlrtStack *sp,
  comm_SDRuReceiver *obj);
extern void SDRuReceiver_stepImpl(transceive202StackData *SD, const emlrtStack
  *sp, const comm_SDRuReceiver *obj, creal_T y[1408], uint32_T *dataLen);

#endif

/* End of code generation (SDRuReceiver.h) */
