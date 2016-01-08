/*
 * SDRuReceiver.c
 *
 * Code generation for function 'SDRuReceiver'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "SDRuReceiver.h"
#include "error.h"
#include "receiveData.h"
#include "rand.h"
#include "checkIPAddressFormat.h"
#include "transceive202_data.h"

/* Function Definitions */
comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(const emlrtStack *sp,
  comm_SDRuReceiver *obj)
{
  comm_SDRuReceiver *b_obj;
  comm_SDRuReceiver *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i9;
  static const char_T cv10[5] = { 'S', 'D', 'R', 'u', '_' };

  real_T d1;
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
  st.site = &ab_emlrtRSI;
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pSubDevice = RxId;
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
    i9 = (int32_T)varargin_1[k];
    emlrtDynamicBoundsCheckFastR2012b(i9, 0, 255, &emlrtBCI, &b_st);
  }

  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv10[k];
  }

  for (k = 0; k < 10; k++) {
    d1 = muDoubleScalarFloor(varargin_1[k]);
    if (muDoubleScalarIsNaN(d1) || muDoubleScalarIsInf(d1)) {
      d1 = 0.0;
    } else {
      d1 = muDoubleScalarRem(d1, 256.0);
    }

    if (d1 < 0.0) {
      c_obj->ObjectID[k + 5] = (int8_T)-(int8_T)(uint8_T)-d1;
    } else {
      c_obj->ObjectID[k + 5] = (int8_T)(uint8_T)d1;
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
  c_obj->CenterFrequency = 1.84E+9;
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
  c_obj->DecimationFactor = 500.0;
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
  c_obj->Gain = 35.0;
  e_st.site = &o_emlrtRSI;
  f_st.site = &h_emlrtRSI;
  checkIPAddressFormat(&f_st);
  return b_obj;
}

void SDRuReceiver_stepImpl(transceive202StackData *SD, const emlrtStack *sp,
  const comm_SDRuReceiver *obj, creal_T y[1408], uint32_T *dataLen)
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T decim;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T overrun;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  decim = obj->DecimationFactor;
  st.site = &ab_emlrtRSI;
  receiveData(&st, obj->pDriverHandle, fc, loOffset, gain, decim, SD->f0.yTemp,
              dataLen, &overrun, &errStatus, errMsg_data, errMsg_size);
  if (errStatus != UsrpDriverSuccess) {
    st.site = &ab_emlrtRSI;
    b_error(&st, errMsg_data, errMsg_size);
  }

  for (i = 0; i < 1408; i++) {
    y[i].re = SD->f0.yTemp[i].re;
    y[i].im = SD->f0.yTemp[i].im;
    fc = y[i].im;
    y[i].re *= 3.0518509475997192E-5;
    y[i].im = 3.0518509475997192E-5 * fc;
  }
}

/* End of code generation (SDRuReceiver.c) */
