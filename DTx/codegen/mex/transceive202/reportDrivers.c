/*
 * reportDrivers.c
 *
 * Code generation for function 'reportDrivers'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "reportDrivers.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 6, "reportDrivers",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/reportDrivers.m"
};

static emlrtMCInfo h_emlrtMCI = { 105, 13, "mapiPrivate",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/mapiPrivate.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 106, 32, "flatAddrList", "mapiPrivate",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/mapiPrivate.m",
  0 };

static emlrtRSInfo ob_emlrtRSI = { 105, "mapiPrivate",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/mapiPrivate.m"
};

/* Function Definitions */
void reportDrivers(const emlrtStack *sp, char_T flatAddrList_data[], int32_T
                   flatAddrList_size[2])
{
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 6 };

  const mxArray *m14;
  char_T cv60[6];
  int32_T i;
  static const char_T cv61[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *b_y;
  const mxArray *c_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &lb_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2014 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv36);
    for (i = 0; i < 6; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m14, cv60);
    emlrtAssign(&y, m14);
    b_st.site = &qb_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &f_emlrtMCI), y, &g_emlrtMCI);
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
  i = strlen(&flatAddrList_data[0]);
  if (i <= 128) {
  } else {
    b_y = NULL;
    m14 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m14);
    b_st.site = &ob_emlrtRSI;
    c_error(&b_st, b_y, &h_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  } else {
    i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 128, &m_emlrtBCI, &st);
  }

  flatAddrList_size[1] = i;

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errStr_data[0]);
  if (i <= 1024) {
  } else {
    c_y = NULL;
    m14 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&c_y, m14);
    b_st.site = &nb_emlrtRSI;
    c_error(&b_st, c_y, &e_emlrtMCI);
  }

  if (1 > i) {
  } else {
    emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &l_emlrtBCI, &st);
  }
}

/* End of code generation (reportDrivers.c) */
