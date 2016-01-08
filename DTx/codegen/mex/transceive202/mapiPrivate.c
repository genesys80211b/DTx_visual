/*
 * mapiPrivate.c
 *
 * Code generation for function 'mapiPrivate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "mapiPrivate.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Function Definitions */
void b_mapiPrivate(const emlrtStack *sp, int32_T varargin_1, UsrpErrorCapiEnumT *
                   varargout_1, char_T varargout_2_data[], int32_T
                   varargout_2_size[2])
{
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 6 };

  const mxArray *m6;
  char_T cv29[6];
  int32_T i;
  static const char_T cv30[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2014 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv15);
    for (i = 0; i < 6; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(sp, 6, m6, cv29);
    emlrtAssign(&y, m6);
    st.site = &qb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &f_emlrtMCI), y, &g_emlrtMCI);
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
  closeDataConnection_c(varargin_1, varargout_1, &varargout_2_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&varargout_2_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m6);
    st.site = &nb_emlrtRSI;
    c_error(&st, b_y, &e_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  } else {
    i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &l_emlrtBCI, sp);
  }

  varargout_2_size[1] = i;
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
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 6 };

  const mxArray *m5;
  char_T cv27[6];
  int32_T i;
  static const char_T cv28[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  uint8_T addr_null[13];
  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2014 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv14);
    for (i = 0; i < 6; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(sp, 6, m5, cv27);
    emlrtAssign(&y, m5);
    st.site = &qb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &f_emlrtMCI), y, &g_emlrtMCI);
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

  /*  varargin   1      2         3          4              5       6         7             8 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize, masterClockRate */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  for (i = 0; i < 12; i++) {
    addr_null[i] = varargin_1[i];
  }

  addr_null[12] = 0;
  addr_c = (char *)(addr_null);
  for (i = 0; i < 15; i++) {
    req_null[i] = varargin_3[i];
  }

  req_null[15] = 0;
  req_c = (char *)(req_null);
  openDataConnection_c(addr_c, varargin_2, req_c, 1408U, varargin_5, false, 0U,
                       1.0E+8, varargout_1, varargout_2, &varargout_3_data[0]);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  (void)(addr_null);
  (void)(req_null);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&varargout_3_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m5 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &nb_emlrtRSI;
    c_error(&st, b_y, &e_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  } else {
    i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &l_emlrtBCI, sp);
  }

  varargout_3_size[1] = i;
}

void mapiPrivate_init(void)
{
  isSetupsdruCalled = false;
}

/* End of code generation (mapiPrivate.c) */
