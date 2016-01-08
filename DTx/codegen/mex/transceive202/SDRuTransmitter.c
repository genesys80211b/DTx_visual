/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "SDRuTransmitter.h"
#include "error.h"
#include "sendComplexDoubleData.h"
#include "rand.h"
#include "checkIPAddressFormat.h"
#include "transceive202_data.h"

/* Function Definitions */
comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp,
  comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i0;
  static const char_T cv0[5] = { 'S', 'D', 'R', 'u', '_' };

  real_T d0;
  boolean_T flag;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_obj = obj;
  st.site = &g_emlrtRSI;
  c_obj = b_obj;
  c_obj->pSubDevice = TxId;
  b_st.site = &h_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  d_st.site = &j_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  d_st.site = &k_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  b_rand(varargin_1);
  for (k = 0; k < 10; k++) {
    varargin_1[k] = 48.0 + muDoubleScalarFloor(varargin_1[k] * 10.0);
  }

  b_st.site = &h_emlrtRSI;
  for (k = 0; k < 10; k++) {
    i0 = (int32_T)varargin_1[k];
    emlrtDynamicBoundsCheckFastR2012b(i0, 0, 255, &emlrtBCI, &b_st);
  }

  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv0[k];
  }

  for (k = 0; k < 10; k++) {
    d0 = muDoubleScalarFloor(varargin_1[k]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 256.0);
    }

    if (d0 < 0.0) {
      c_obj->ObjectID[k + 5] = (int8_T)-(int8_T)(uint8_T)-d0;
    } else {
      c_obj->ObjectID[k + 5] = (int8_T)(uint8_T)d0;
    }
  }

  b_st.site = &h_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &j_emlrtRSI;
  e_st.site = &o_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  e_st.site = &o_emlrtRSI;
  c_obj->CenterFrequency = 1.85E+9;
  e_st.site = &o_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  e_st.site = &o_emlrtRSI;
  c_obj->Gain = 25.0;
  e_st.site = &o_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  e_st.site = &o_emlrtRSI;
  c_obj->InterpolationFactor = 500.0;
  e_st.site = &o_emlrtRSI;
  f_st.site = &h_emlrtRSI;
  checkIPAddressFormat(&f_st);
  e_st.site = &o_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  e_st.site = &o_emlrtRSI;
  c_obj->LocalOscillatorOffset = 0.0;
  return b_obj;
}

void SDRuTransmitter_stepImpl(const emlrtStack *sp, const comm_SDRuTransmitter
  *obj, const creal_T x[1408])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T interp;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T underrun;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  interp = obj->InterpolationFactor;
  st.site = &g_emlrtRSI;
  sendComplexDoubleData(&st, obj->pDriverHandle, x, fc, loOffset, gain, interp,
                        &underrun, &errStatus, errMsg_data, errMsg_size);
  if (errStatus != UsrpDriverSuccess) {
    st.site = &g_emlrtRSI;
    error(&st, errMsg_data, errMsg_size);
  }
}

/* End of code generation (SDRuTransmitter.c) */
