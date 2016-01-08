/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * receiveData.c
 *
 * Code generation for function 'receiveData'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "receiveData.h"
#include "transceive103_mexutil.h"
#include "transceive103_data.h"

/* Variable Definitions */
static emlrtRSInfo y_emlrtRSI = { 7, "receiveData",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/receiveData.m"
};

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6])
{
  const mxArray *y;
  static const int32_T iv18[2] = { 1, 6 };

  const mxArray *m9;
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(sp, 6, m9, &u[0]);
  emlrtAssign(&y, m9);
  return y;
}

void receiveData(const emlrtStack *sp, int32_T driverApiH, const real_T freq[2],
                 const real_T loOffset[2], const real_T gain[2], real_T decim,
                 cint16_T data[375000], uint32_T *dataLength, uint32_T *overflow,
                 UsrpErrorCapiEnumT *errStat, char_T errStr_data[], int32_T
                 errStr_size[2])
{
  static const char_T cv20[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  UsrpErrorCapiEnumT errStat_i;
  real_T b_freq[2];
  real_T b_loOffset[2];
  real_T b_gain[2];
  int32_T i18;
  int32_T errStrSize;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2015 The MathWorks, Inc. */
  st.site = &y_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    b_st.site = &cb_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &c_emlrtMCI), emlrt_marshallOut(&b_st, cv20),
              &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  errStr_size[0] = 1;
  memset(&errStr_data[0], 0, sizeof(char_T) << 10);

  /*  46336 represents 0.00185344 seconds at 25Msps.  1 ms seems to be a decent */
  /*  time interval to interact with the IP stack on a default glnxa64 machine. */
  /*  32768 seems to be the max for UHD(TM) so we may want to change to that. */
  for (i18 = 0; i18 < 2; i18++) {
    b_freq[i18] = freq[i18];
    b_loOffset[i18] = loOffset[i18];
    b_gain[i18] = gain[i18];
  }

  receiveData_c(driverApiH, b_freq, b_loOffset, b_gain, decim, data, dataLength,
                overflow, &errStat_i, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&errStr_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    errStr_size[1] = 0;
  } else {
    errStr_size[1] = errStrSize;
  }

  *errStat = errStat_i;
}

/* End of code generation (receiveData.c) */
