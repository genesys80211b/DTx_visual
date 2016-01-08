/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mapiPrivate.c
 *
 * Code generation for function 'mapiPrivate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "mapiPrivate.h"
#include "receiveData.h"
#include "transceive103_mexutil.h"
#include "transceive103_data.h"

/* Function Definitions */
void b_mapiPrivate(const emlrtStack *sp, int32_T varargin_1, UsrpErrorCapiEnumT *
                   varargout_1, char_T varargout_2_data[], int32_T
                   varargout_2_size[2])
{
  int32_T i14;
  static const char_T cv14[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 6 };

  const mxArray *m3;
  UsrpErrorCapiEnumT errStat_i;
  int32_T errStrSize;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i14 = 0; i14 < 6; i14++) {
      u[i14] = cv14[i14];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(sp, 6, m3, &u[0]);
    emlrtAssign(&y, m3);
    st.site = &cb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  varargout_2_size[0] = 1;
  memset(&varargout_2_data[0], 0, sizeof(char_T) << 10);
  closeDataConnection_c(varargin_1, &errStat_i, &varargout_2_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&varargout_2_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    varargout_2_size[1] = 0;
  } else {
    varargout_2_size[1] = errStrSize;
  }

  *varargout_1 = errStat_i;
}

void c_isSetupsdruCalled_not_empty_i(void)
{
}

void mapiPrivate(const emlrtStack *sp, const uint8_T varargin_1[12],
                 BoardIdCapiEnumT varargin_2, const uint8_T varargin_3[15],
                 DataPortDataTypeCapiEnumT varargin_5, int32_T *varargout_1,
                 UsrpErrorCapiEnumT *varargout_2, char_T varargout_3_data[],
                 int32_T varargout_3_size[2])
{
  int32_T i13;
  static const char_T cv13[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 6 };

  const mxArray *m2;
  uint8_T addr_null[13];
  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  UsrpErrorCapiEnumT errStat_i;
  int32_T errStrSize;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i13 = 0; i13 < 6; i13++) {
      u[i13] = cv13[i13];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(sp, 6, m2, &u[0]);
    emlrtAssign(&y, m2);
    st.site = &cb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  varargout_3_size[0] = 1;
  memset(&varargout_3_data[0], 0, sizeof(char_T) << 10);

  /*  varargin   1      2         3          4              5       6         7             8              9 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize, masterClockRate, channelMapping */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  for (i13 = 0; i13 < 12; i13++) {
    addr_null[i13] = varargin_1[i13];
  }

  addr_null[12] = 0;
  addr_c = (char *)(addr_null);
  for (i13 = 0; i13 < 15; i13++) {
    req_null[i13] = varargin_3[i13];
  }

  req_null[15] = 0;
  req_c = (char *)(req_null);
  openDataConnection_c(addr_c, varargin_2, req_c, 1408U, varargin_5, false, 0U,
                       1.0E+8, 1.0, &driverApiH, &errStat_i, &varargout_3_data[0]);
  *varargout_1 = driverApiH;

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  (void)(addr_null);
  (void)(req_null);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&varargout_3_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    varargout_3_size[1] = 0;
  } else {
    varargout_3_size[1] = errStrSize;
  }

  *varargout_2 = errStat_i;
}

void mapiPrivate_init(void)
{
  isSetupsdruCalled = false;
}

/* End of code generation (mapiPrivate.c) */
