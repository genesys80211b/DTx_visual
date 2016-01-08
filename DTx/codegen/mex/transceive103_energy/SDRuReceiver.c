/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SDRuReceiver.c
 *
 * Code generation for function 'SDRuReceiver'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103_energy.h"
#include "SDRuReceiver.h"
#include "error1.h"
#include "receiveData.h"
#include "mapiPrivate.h"
#include "rand.h"
#include "checkIPAddressFormat.h"
#include "warning.h"
#include "transceive103_energy_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 1, "SDRuReceiver",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/+comm/SDRuReceiver.p"
};

/* Function Definitions */
comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(const emlrtStack *sp,
  comm_SDRuReceiver *obj, real_T varargin_2, real_T varargin_4, real_T
  varargin_8)
{
  comm_SDRuReceiver *b_obj;
  comm_SDRuReceiver *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i10;
  static const char_T cv6[5] = { 'S', 'D', 'R', 'u', '_' };

  real_T d1;
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
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pSubDevice = RxId;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  c_obj->isInitialized = 0;
  d_st.site = &m_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  b_rand(varargin_1);
  for (k = 0; k < 10; k++) {
    varargin_1[k] = 48.0 + muDoubleScalarFloor(varargin_1[k] * 10.0);
  }

  b_st.site = &j_emlrtRSI;
  for (k = 0; k < 10; k++) {
    i10 = (int32_T)varargin_1[k];
    if (!((i10 >= 0) && (i10 <= 255))) {
      emlrtDynamicBoundsCheckR2012b(i10, 0, 255, &emlrtBCI, &b_st);
    }
  }

  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv6[k];
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

  b_st.site = &j_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  c_obj->CenterFrequency = varargin_2;
  e_st.site = &p_emlrtRSI;
  if (varargin_4 > 512.0) {
    f_st.site = &w_emlrtRSI;
    b_warning(&f_st);
  }

  c_obj->DecimationFactor = varargin_4;
  e_st.site = &p_emlrtRSI;
  c_obj->Gain = varargin_8;
  e_st.site = &p_emlrtRSI;
  f_st.site = &j_emlrtRSI;
  checkIPAddressFormat(&f_st);
  return b_obj;
}

void SDRuReceiver_setupImplLocal(const emlrtStack *sp, comm_SDRuReceiver *obj,
  UsrpErrorCapiEnumT *deviceStatus, char_T errMsg_data[], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i17;
  static const uint8_T uv1[12] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U, 49U,
    48U, 46U, 51U };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &w_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  boardId = obj->pSubDevice;
  for (i17 = 0; i17 < 15; i17++) {
    requester[i17] = (uint8_T)obj->ObjectID[i17];
  }

  /*    Copyright 2011-2015 The MathWorks, Inc. */
  b_st.site = &x_emlrtRSI;
  mapiPrivate(&b_st, uv1, boardId, requester, DPortDTypeCInt16, &i17,
              deviceStatus, errMsg_data, errMsg_size);
  obj->pDriverHandle = i17;
}

void SDRuReceiver_stepImpl(transceive103_energyStackData *SD, const emlrtStack
  *sp, const comm_SDRuReceiver *obj, creal_T y[1408], uint32_T *dataLen)
{
  real_T fc0;
  real_T loOffset0;
  real_T gain0;
  real_T decim;
  real_T b_fc0[2];
  real_T b_loOffset0[2];
  real_T b_gain0[2];
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T overrun;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  fc0 = obj->CenterFrequency;
  loOffset0 = obj->LocalOscillatorOffset;
  gain0 = obj->Gain;
  decim = obj->DecimationFactor;
  b_fc0[0] = fc0;
  b_fc0[1] = fc0;
  b_loOffset0[0] = loOffset0;
  b_loOffset0[1] = loOffset0;
  b_gain0[0] = gain0;
  b_gain0[1] = gain0;
  st.site = &w_emlrtRSI;
  receiveData(&st, obj->pDriverHandle, b_fc0, b_loOffset0, b_gain0, decim,
              SD->f0.yTemp, dataLen, &overrun, &errStatus, errMsg_data,
              errMsg_size);
  if (errStatus != UsrpDriverSuccess) {
    st.site = &w_emlrtRSI;
    b_error(&st, errMsg_data, errMsg_size);
  }

  for (i = 0; i < 1408; i++) {
    y[i].re = SD->f0.yTemp[i].re;
    y[i].im = SD->f0.yTemp[i].im;
    y[i].re *= 3.0518509475997192E-5;
    y[i].im *= 3.0518509475997192E-5;
  }
}

/* End of code generation (SDRuReceiver.c) */
