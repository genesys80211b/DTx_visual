/*
 * receiveData.c
 *
 * Code generation for function 'receiveData'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 7, "receiveData",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/receiveData.m"
};

/* Function Definitions */
void receiveData(const emlrtStack *sp, int32_T driverApiH, real_T freq, real_T
                 loOffset, real_T gain, real_T decim, cint16_T data[375000],
                 uint32_T *dataLength, uint32_T *overflow, UsrpErrorCapiEnumT
                 *errStat, char_T errStr_data[], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv34[2] = { 1, 6 };

  const mxArray *m12;
  char_T cv56[6];
  int32_T i;
  static const char_T cv57[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &kb_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2014 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m12 = emlrtCreateCharArray(2, iv34);
    for (i = 0; i < 6; i++) {
      cv56[i] = cv57[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m12, cv56);
    emlrtAssign(&y, m12);
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
  errStr_size[0] = 1;
  memset(&errStr_data[0], 0, sizeof(char_T) << 10);

  /*  46336 represents 0.00185344 seconds at 25Msps.  1 ms seems to be a decent */
  /*  time interval to interact with the IP stack on a default glnxa64 machine. */
  /*  32768 seems to be the max for UHD(TM) so we may want to change to that. */
  receiveData_c(driverApiH, freq, loOffset, gain, decim, data, dataLength,
                overflow, errStat, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errStr_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m12 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m12);
    b_st.site = &nb_emlrtRSI;
    c_error(&b_st, b_y, &e_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  } else {
    i = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &l_emlrtBCI, &st);
  }

  errStr_size[1] = i;
}

/* End of code generation (receiveData.c) */
