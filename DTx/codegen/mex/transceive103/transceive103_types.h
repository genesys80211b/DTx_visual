/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive103_types.h
 *
 * Code generation for function 'transceive103'
 *
 */

#ifndef __TRANSCEIVE103_TYPES_H__
#define __TRANSCEIVE103_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"
#ifndef typedef_comm_SDRuReceiver
#define typedef_comm_SDRuReceiver

typedef struct {
  int32_T isInitialized;
  real_T CenterFrequency;
  real_T LocalOscillatorOffset;
  real_T Gain;
  boolean_T pConnected;
  int32_T pDriverHandle;
  BoardIdCapiEnumT pSubDevice;
  char_T ObjectID[15];
  real_T DecimationFactor;
} comm_SDRuReceiver;

#endif                                 /*typedef_comm_SDRuReceiver*/

#ifndef typedef_comm_SDRuTransmitter
#define typedef_comm_SDRuTransmitter

typedef struct {
  int32_T isInitialized;
  uint32_T inputVarSize1[8];
  real_T CenterFrequency;
  real_T LocalOscillatorOffset;
  real_T Gain;
  boolean_T pConnected;
  int32_T pDriverHandle;
  BoardIdCapiEnumT pSubDevice;
  char_T ObjectID[15];
  real_T InterpolationFactor;
} comm_SDRuTransmitter;

#endif                                 /*typedef_comm_SDRuTransmitter*/

#ifndef typedef_transceive103StackData
#define typedef_transceive103StackData

typedef struct {
  struct {
    cint16_T yTemp[375000];
  } f0;
} transceive103StackData;

#endif                                 /*typedef_transceive103StackData*/
#endif

/* End of code generation (transceive103_types.h) */
