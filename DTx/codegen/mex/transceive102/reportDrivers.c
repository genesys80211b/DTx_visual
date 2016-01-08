/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * reportDrivers.c
 *
 * Code generation for function 'reportDrivers'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive102.h"
#include "reportDrivers.h"
#include "receiveData.h"
#include "transceive102_mexutil.h"
#include "transceive102_data.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 6, "reportDrivers",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/reportDrivers.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 107, 13, "mapiPrivate",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/mapiPrivate.m"
};

/* Function Definitions */
void reportDrivers(const emlrtStack *sp, char_T flatAddrList_data[], int32_T
                   flatAddrList_size[2])
{
  int32_T i20;
  static const char_T cv21[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 6 };

  const mxArray *m7;
  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  int32_T flatAddrListSize;
  int32_T errStrSize;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &ab_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i20 = 0; i20 < 6; i20++) {
      u[i20] = cv21[i20];
    }

    y = NULL;
    m7 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&st, 6, m7, &u[0]);
    emlrtAssign(&y, m7);
    b_st.site = &cb_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  memset(&errStr_data[0], 0, sizeof(char_T) << 10);
  flatAddrList_size[0] = 1;
  memset(&flatAddrList_data[0], 0, sizeof(char_T) << 7);
  reportDrivers_c(&flatAddrList_data[0], &errStat_i, &errStr_data[0]);
  flatAddrListSize = strlen(&flatAddrList_data[0]);
  if (flatAddrListSize <= 128) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &k_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > flatAddrListSize) {
    flatAddrList_size[1] = 0;
  } else {
    flatAddrList_size[1] = flatAddrListSize;
  }

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&errStr_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }
}

/* End of code generation (reportDrivers.c) */
