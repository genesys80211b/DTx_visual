/*
 * SDRuBase.h
 *
 * Code generation for function 'SDRuBase'
 *
 */

#ifndef __SDRUBASE_H__
#define __SDRUBASE_H__

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
extern void SDRuBase_setupImpl(const emlrtStack *sp, comm_SDRuTransmitter *obj);
extern void b_SDRuBase_setupImpl(const emlrtStack *sp, comm_SDRuReceiver *obj);

#endif

/* End of code generation (SDRuBase.h) */
