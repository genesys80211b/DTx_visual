/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive102_energy.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "reportSDRuStatus.h"
#include "mapiPrivate.h"
#include "warning.h"
#include "reportDrivers.h"
#include "SDRuTransmitter.h"
#include "transceive102_energy_data.h"

/* Variable Definitions */
static emlrtRSInfo y_emlrtRSI = { 6, "closeDataConnection",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/closeDataConnection.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 1, 1, "SystemCore",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

/* Function Declarations */
static void SystemCore_setupAndReset(const emlrtStack *sp, comm_SDRuReceiver
  *obj);

/* Function Definitions */
static void SystemCore_setupAndReset(const emlrtStack *sp, comm_SDRuReceiver
  *obj)
{
  comm_SDRuReceiver *b_obj;
  static const char_T cv19[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  int32_T driverApiH;
  int32_T errStr_size[2];
  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_obj = obj;
  if (b_obj->isInitialized == 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &c_emlrtRTEI,
      "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv19);
  }

  b_obj->isInitialized = 1;
  b_st.site = &m_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
    errMsg_size);
  if (deviceStatus == UsrpDriverSuccess) {
    b_obj->pConnected = true;
  } else {
    c_st.site = &j_emlrtRSI;
    driverApiH = b_obj->pDriverHandle;

    /*    Copyright 2011-2012 The MathWorks, Inc. */
    d_st.site = &y_emlrtRSI;
    b_mapiPrivate(&d_st, driverApiH, &errStat, errStr_data, errStr_size);
    b_obj->pConnected = false;
  }

  c_st.site = &j_emlrtRSI;
  reportSDRuStatus(&c_st, deviceStatus, errMsg_data, errMsg_size);
}

void SystemCore_release(const emlrtStack *sp, comm_SDRuReceiver *obj)
{
  static const char_T cv9[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuReceiver *b_obj;
  boolean_T disconnected;
  int32_T driverApiH;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  int32_T tmp_size[2];
  char_T tmp_data[128];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &c_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv9);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &m_emlrtRSI;
    b_obj = obj;
    b_st.site = &j_emlrtRSI;
    disconnected = true;
    if (b_obj->pConnected) {
      c_st.site = &j_emlrtRSI;
      driverApiH = b_obj->pDriverHandle;

      /*    Copyright 2011-2012 The MathWorks, Inc. */
      d_st.site = &y_emlrtRSI;
      b_mapiPrivate(&d_st, driverApiH, &errStatus, errMsg_data, errMsg_size);
      if (errStatus == UsrpDriverSuccess) {
        b_obj->pDriverHandle = 0;
      } else {
        c_st.site = &j_emlrtRSI;
        reportDrivers(&c_st, tmp_data, tmp_size);
        if (!(tmp_size[1] == 0)) {
          disconnected = false;
          c_st.site = &j_emlrtRSI;
          c_warning(&c_st, errMsg_data, errMsg_size);
        }
      }

      b_obj->pConnected = !disconnected;
    }
  }
}

void SystemCore_step(const emlrtStack *sp, comm_SDRuTransmitter *obj, const
                     creal_T varargin_1[1408])
{
  static const char_T cv11[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  static const char_T cv12[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T inputSize[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  int32_T errStr_size[2];
  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat;
  boolean_T exitg1;
  static const int16_T iv8[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &c_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv11);
  }

  if (obj->isInitialized != 1) {
    st.site = &m_emlrtRSI;
    b_obj = obj;
    b_st.site = &m_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &c_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv12);
    }

    b_obj->isInitialized = 1;
    c_st.site = &m_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
    }

    c_st.site = &m_emlrtRSI;
    d_st.site = &j_emlrtRSI;
    SDRuTransmitter_setupImplLocal(&d_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      b_obj->pConnected = true;
    } else {
      d_st.site = &j_emlrtRSI;
      k = b_obj->pDriverHandle;

      /*    Copyright 2011-2012 The MathWorks, Inc. */
      e_st.site = &y_emlrtRSI;
      b_mapiPrivate(&e_st, k, &errStat, errStr_data, errStr_size);
      b_obj->pConnected = false;
    }

    d_st.site = &j_emlrtRSI;
    reportSDRuStatus(&d_st, deviceStatus, errMsg_data, errMsg_size);
  }

  st.site = &m_emlrtRSI;
  b_obj = obj;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv8[k]) {
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  st.site = &m_emlrtRSI;
  SDRuTransmitter_stepImpl(&st, obj, varargin_1);
}

void b_SystemCore_release(const emlrtStack *sp, comm_SDRuTransmitter *obj)
{
  static const char_T cv10[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuTransmitter *b_obj;
  boolean_T disconnected;
  int32_T driverApiH;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  int32_T tmp_size[2];
  char_T tmp_data[128];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &c_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv10);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &m_emlrtRSI;
    b_obj = obj;
    b_st.site = &j_emlrtRSI;
    disconnected = true;
    if (b_obj->pConnected) {
      c_st.site = &j_emlrtRSI;
      driverApiH = b_obj->pDriverHandle;

      /*    Copyright 2011-2012 The MathWorks, Inc. */
      d_st.site = &y_emlrtRSI;
      b_mapiPrivate(&d_st, driverApiH, &errStatus, errMsg_data, errMsg_size);
      if (errStatus == UsrpDriverSuccess) {
        b_obj->pDriverHandle = 0;
      } else {
        c_st.site = &j_emlrtRSI;
        reportDrivers(&c_st, tmp_data, tmp_size);
        if (!(tmp_size[1] == 0)) {
          disconnected = false;
          c_st.site = &j_emlrtRSI;
          c_warning(&c_st, errMsg_data, errMsg_size);
        }
      }

      b_obj->pConnected = !disconnected;
    }
  }
}

void b_SystemCore_step(transceive102_energyStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj, creal_T varargout_1[1408], uint32_T *varargout_2)
{
  static const char_T cv18[4] = { 's', 't', 'e', 'p' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &c_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv18);
  }

  if (obj->isInitialized != 1) {
    st.site = &m_emlrtRSI;
    SystemCore_setupAndReset(&st, obj);
  }

  st.site = &m_emlrtRSI;
  SDRuReceiver_stepImpl(SD, &st, obj, varargout_1, varargout_2);
}

/* End of code generation (SystemCore.c) */
