/*
 * sendComplexDoubleData.c
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "sendComplexDoubleData.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 9, "sendComplexDoubleData",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

/* Function Definitions */
void sendComplexDoubleData(const emlrtStack *sp, int32_T driverApiH, const
  creal_T data[1408], real_T freq, real_T loOffset, real_T gain, real_T interp,
  uint32_T *underflow, UsrpErrorCapiEnumT *errStat, char_T errStr_data[],
  int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv28[2] = { 1, 6 };

  const mxArray *m8;
  char_T cv44[6];
  int32_T i;
  static const char_T cv45[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  creal_T b_data[1408];
  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  bug: must pass as top-level arg */
  /*  dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCDouble; */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &jb_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2014 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m8 = emlrtCreateCharArray(2, iv28);
    for (i = 0; i < 6; i++) {
      cv44[i] = cv45[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m8, cv44);
    emlrtAssign(&y, m8);
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
  memcpy(&b_data[0], &data[0], 1408U * sizeof(creal_T));
  sendData_c(driverApiH, b_data, freq, loOffset, gain, interp, underflow,
             errStat, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errStr_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m8 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m8);
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

/* End of code generation (sendComplexDoubleData.c) */
