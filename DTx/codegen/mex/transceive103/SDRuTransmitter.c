/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "SDRuTransmitter.h"
#include "error1.h"
#include "sendComplexDoubleData.h"
#include "mapiPrivate.h"
#include "rand.h"
#include "checkIPAddressFormat.h"
#include "warning.h"
#include "transceive103_data.h"

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 1, "SDRuTransmitter",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/+comm/SDRuTransmitter.p"
};

/* Function Definitions */
comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp,
  comm_SDRuTransmitter *obj, real_T varargin_2, real_T varargin_4, real_T
  varargin_6)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i0;
  static const char_T cv0[5] = { 'S', 'D', 'R', 'u', '_' };

  real_T d0;
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
  st.site = &i_emlrtRSI;
  c_obj = b_obj;
  c_obj->pSubDevice = TxId;
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
    i0 = (int32_T)varargin_1[k];
    if (!((i0 >= 0) && (i0 <= 255))) {
      emlrtDynamicBoundsCheckR2012b(i0, 0, 255, &emlrtBCI, &b_st);
    }
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

  b_st.site = &j_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  c_obj->CenterFrequency = varargin_2;
  e_st.site = &p_emlrtRSI;
  c_obj->Gain = varargin_4;
  e_st.site = &p_emlrtRSI;
  if (varargin_6 > 512.0) {
    f_st.site = &i_emlrtRSI;
    warning(&f_st);
  }

  c_obj->InterpolationFactor = varargin_6;
  e_st.site = &p_emlrtRSI;
  f_st.site = &j_emlrtRSI;
  checkIPAddressFormat(&f_st);
  e_st.site = &p_emlrtRSI;
  c_obj->LocalOscillatorOffset = 0.0;
  return b_obj;
}

void SDRuTransmitter_setupImplLocal(const emlrtStack *sp, comm_SDRuTransmitter
  *obj, UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[], int32_T
  errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i12;
  static const uint8_T uv0[12] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U, 49U,
    48U, 46U, 51U };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &i_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  boardId = obj->pSubDevice;
  for (i12 = 0; i12 < 15; i12++) {
    requester[i12] = (uint8_T)obj->ObjectID[i12];
  }

  /*    Copyright 2011-2015 The MathWorks, Inc. */
  b_st.site = &x_emlrtRSI;
  mapiPrivate(&b_st, uv0, boardId, requester, DPortDTypeCDouble, &i12, errStatus,
              errMsg_data, errMsg_size);
  obj->pDriverHandle = i12;
}

void SDRuTransmitter_stepImpl(const emlrtStack *sp, const comm_SDRuTransmitter
  *obj, const creal_T x[1408])
{
  real_T fc0;
  real_T loOffset0;
  real_T gain0;
  real_T interp;
  real_T b_fc0[2];
  real_T b_loOffset0[2];
  real_T b_gain0[2];
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T underrun;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  fc0 = obj->CenterFrequency;
  loOffset0 = obj->LocalOscillatorOffset;
  gain0 = obj->Gain;
  interp = obj->InterpolationFactor;
  b_fc0[0] = fc0;
  b_fc0[1] = fc0;
  b_loOffset0[0] = loOffset0;
  b_loOffset0[1] = loOffset0;
  b_gain0[0] = gain0;
  b_gain0[1] = gain0;
  st.site = &i_emlrtRSI;
  sendComplexDoubleData(&st, obj->pDriverHandle, x, b_fc0, b_loOffset0, b_gain0,
                        interp, &underrun, &errStatus, errMsg_data, errMsg_size);
  if (errStatus != UsrpDriverSuccess) {
    st.site = &i_emlrtRSI;
    error(&st, errMsg_data, errMsg_size);
  }
}

/* End of code generation (SDRuTransmitter.c) */
