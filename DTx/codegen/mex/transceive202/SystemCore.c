/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "SDRuBase.h"
#include "eml_warning.h"
#include "reportDrivers.h"
#include "mapiPrivate.h"
#include "SDRuTransmitter.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 9, "warning",
  "/usr/local/MATLAB/R2014b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtMCInfo d_emlrtMCI = { 1, 1, "SystemCore",
  "/usr/local/MATLAB/R2014b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

/* Function Declarations */
static void SystemCore_checkTunableProps(comm_SDRuReceiver *obj);
static void SystemCore_setupAndReset(const emlrtStack *sp, comm_SDRuReceiver
  *obj);

/* Function Definitions */
static void SystemCore_checkTunableProps(comm_SDRuReceiver *obj)
{
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }
}

static void SystemCore_setupAndReset(const emlrtStack *sp, comm_SDRuReceiver
  *obj)
{
  comm_SDRuReceiver *b_obj;
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 51 };

  const mxArray *m11;
  char_T cv52[51];
  int32_T i;
  static const char_T cv53[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv33[2] = { 1, 5 };

  char_T cv54[5];
  static const char_T cv55[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_obj = obj;
  if (!b_obj->isInitialized) {
  } else {
    y = NULL;
    m11 = emlrtCreateCharArray(2, iv32);
    for (i = 0; i < 51; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(&st, 51, m11, cv52);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, iv33);
    for (i = 0; i < 5; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(&st, 5, m11, cv54);
    emlrtAssign(&b_y, m11);
    b_st.site = &k_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  b_obj->isInitialized = true;
  b_st.site = &k_emlrtRSI;
  b_SDRuBase_setupImpl(&b_st, b_obj);
  b_obj->TunablePropsChanged = false;
}

void SystemCore_release(const emlrtStack *sp, comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv11[45];
  int32_T i;
  static const char_T cv12[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 7 };

  char_T cv13[7];
  static const char_T cv14[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuReceiver *b_obj;
  boolean_T disconnected;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv5);
    for (i = 0; i < 45; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m2, cv11);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv6);
    for (i = 0; i < 7; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(sp, 7, m2, cv13);
    emlrtAssign(&b_y, m2);
    st.site = &k_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  if (obj->isInitialized) {
    obj->isReleased = true;
    st.site = NULL;
    b_obj = obj;
    b_st.site = &h_emlrtRSI;
    disconnected = true;
    if (b_obj->pConnected) {
      c_st.site = &h_emlrtRSI;
      i = b_obj->pDriverHandle;

      /*    Copyright 2011-2012 The MathWorks, Inc. */
      d_st.site = &cb_emlrtRSI;
      b_mapiPrivate(&d_st, i, &errStatus, errMsg_data, errMsg_size);
      if (errStatus == UsrpDriverSuccess) {
        b_obj->pDriverHandle = 0;
      } else {
        c_st.site = &h_emlrtRSI;
        reportDrivers(&c_st, tmp_data, tmp_size);
        if (!(tmp_size[1] == 0)) {
          disconnected = false;
          c_st.site = &h_emlrtRSI;
          d_st.site = &n_emlrtRSI;
          eml_warning(&d_st, errMsg_data, errMsg_size);
        }
      }

      b_obj->pConnected = !disconnected;
    }
  }
}

void SystemCore_step(const emlrtStack *sp, comm_SDRuTransmitter *obj, const
                     creal_T varargin_1[1408])
{
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *m4;
  char_T cv19[45];
  int32_T i;
  static const char_T cv20[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 4 };

  char_T cv21[4];
  static const char_T cv22[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 51 };

  char_T cv23[51];
  static const char_T cv24[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv12[2] = { 1, 5 };

  char_T cv25[5];
  static const char_T cv26[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T inputSize[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv13[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 45; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m4, cv19);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 4; i++) {
      cv21[i] = cv22[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m4, cv21);
    emlrtAssign(&b_y, m4);
    st.site = &k_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &k_emlrtRSI;
    b_obj = obj;
    b_st.site = &k_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv11);
      for (i = 0; i < 51; i++) {
        cv23[i] = cv24[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m4, cv23);
      emlrtAssign(&c_y, m4);
      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 5; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m4, cv25);
      emlrtAssign(&d_y, m4);
      c_st.site = &k_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &d_emlrtMCI), &d_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &k_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)inputSize[i];
    }

    c_st.site = &k_emlrtRSI;
    SDRuBase_setupImpl(&c_st, b_obj);
    b_obj->TunablePropsChanged = false;
  }

  st.site = &k_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &k_emlrtRSI;
  b_obj = obj;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv13[i]) {
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)inputSize[i];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &k_emlrtRSI;
  SDRuTransmitter_stepImpl(&st, obj, varargin_1);
}

void b_SystemCore_release(const emlrtStack *sp, comm_SDRuTransmitter *obj)
{
  const mxArray *y;
  static const int32_T iv7[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv15[45];
  int32_T i;
  static const char_T cv16[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 7 };

  char_T cv17[7];
  static const char_T cv18[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  comm_SDRuTransmitter *b_obj;
  boolean_T disconnected;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv7);
    for (i = 0; i < 45; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m3, cv15);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 7; i++) {
      cv17[i] = cv18[i];
    }

    emlrtInitCharArrayR2013a(sp, 7, m3, cv17);
    emlrtAssign(&b_y, m3);
    st.site = &k_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  if (obj->isInitialized) {
    obj->isReleased = true;
    st.site = NULL;
    b_obj = obj;
    b_st.site = &h_emlrtRSI;
    disconnected = true;
    if (b_obj->pConnected) {
      c_st.site = &h_emlrtRSI;
      i = b_obj->pDriverHandle;

      /*    Copyright 2011-2012 The MathWorks, Inc. */
      d_st.site = &cb_emlrtRSI;
      b_mapiPrivate(&d_st, i, &errStatus, errMsg_data, errMsg_size);
      if (errStatus == UsrpDriverSuccess) {
        b_obj->pDriverHandle = 0;
      } else {
        c_st.site = &h_emlrtRSI;
        reportDrivers(&c_st, tmp_data, tmp_size);
        if (!(tmp_size[1] == 0)) {
          disconnected = false;
          c_st.site = &h_emlrtRSI;
          d_st.site = &n_emlrtRSI;
          eml_warning(&d_st, errMsg_data, errMsg_size);
        }
      }

      b_obj->pConnected = !disconnected;
    }
  }
}

void b_SystemCore_step(transceive202StackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj, creal_T varargout_1[1408], uint32_T *varargout_2)
{
  const mxArray *y;
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *m10;
  char_T cv48[45];
  int32_T i;
  static const char_T cv49[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 4 };

  char_T cv50[4];
  static const char_T cv51[4] = { 's', 't', 'e', 'p' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 45; i++) {
      cv48[i] = cv49[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m10, cv48);
    emlrtAssign(&y, m10);
    b_y = NULL;
    m10 = emlrtCreateCharArray(2, iv31);
    for (i = 0; i < 4; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m10, cv50);
    emlrtAssign(&b_y, m10);
    st.site = &k_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &k_emlrtRSI;
    SystemCore_setupAndReset(&st, obj);
  }

  st.site = &k_emlrtRSI;
  SystemCore_checkTunableProps(obj);
  st.site = &k_emlrtRSI;
  SDRuReceiver_stepImpl(SD, &st, obj, varargout_1, varargout_2);
}

/* End of code generation (SystemCore.c) */
