/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "checkIPAddressFormat.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 34, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo q_emlrtRSI = { 43, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo r_emlrtRSI = { 44, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo s_emlrtRSI = { 45, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo t_emlrtRSI = { 46, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo u_emlrtRSI = { 53, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo v_emlrtRSI = { 52, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo w_emlrtRSI = { 12, "any",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 38, 17, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 39, 15, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 39, 31, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 40, 15, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 40, 31, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 41, 15, "dotIndices",
  "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtECInfo emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

/* Function Declarations */
static void checkNumeric(const emlrtStack *sp, const int16_T x_data[], const
  int32_T x_size[2]);

/* Function Definitions */
static void checkNumeric(const emlrtStack *sp, const int16_T x_data[], const
  int32_T x_size[2])
{
  boolean_T guard1 = false;
  int32_T b_x_size[2];
  int32_T i;
  int32_T i8;
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  boolean_T tmp_data[12];
  int32_T x[2];
  int32_T iv2[2];
  boolean_T y;
  boolean_T exitg1;
  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 42 };

  const mxArray *m1;
  char_T cv6[42];
  static const char_T cv7[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 9 };

  char_T cv8[9];
  static const char_T cv9[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  guard1 = false;
  if (x_size[1] == 0) {
    guard1 = true;
  } else {
    b_x_size[0] = 1;
    b_x_size[1] = x_size[1];
    i = x_size[0] * x_size[1];
    for (i8 = 0; i8 < i; i8++) {
      b_x_data[i8] = (x_data[i8] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = x_size[1];
    i = x_size[0] * x_size[1];
    for (i8 = 0; i8 < i; i8++) {
      tmp_data[i8] = (x_data[i8] <= 57);
    }

    for (i8 = 0; i8 < 2; i8++) {
      x[i8] = b_x_size[i8];
      iv2[i8] = tmp_size[i8];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv2, &emlrtECI, sp);
    st.site = &u_emlrtRSI;
    i = x_size[1];
    for (i8 = 0; i8 < i; i8++) {
      b_x_data[i8] = !(b_x_data[i8] && tmp_data[i8]);
    }

    b_st.site = &w_emlrtRSI;
    y = false;
    i = 1;
    exitg1 = false;
    while ((!exitg1) && (i <= b_x_size[1])) {
      if (!(b_x_data[i - 1] == 0)) {
        y = true;
        exitg1 = true;
      } else {
        i++;
      }
    }

    if (y) {
      guard1 = true;
    } else {
      y = false;
    }
  }

  if (guard1) {
    y = true;
  }

  st.site = &v_emlrtRSI;
  if (!y) {
  } else {
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    for (i = 0; i < 42; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(&st, 42, m1, cv6);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    for (i = 0; i < 9; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(&st, 9, m1, cv8);
    emlrtAssign(&c_y, m1);
    b_st.site = &pb_emlrtRSI;
    c_error(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI), &c_emlrtMCI);
  }
}

void checkIPAddressFormat(const emlrtStack *sp)
{
  int32_T idx;
  int8_T ii_data[12];
  int32_T ii_size[2];
  int32_T i1;
  int32_T i;
  boolean_T exitg1;
  boolean_T guard1 = false;
  static const boolean_T bv0[12] = { false, false, false, true, false, false,
    false, true, false, false, true, false };

  int32_T i2;
  int8_T dotIndices_data[12];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 42 };

  const mxArray *m0;
  char_T cv1[42];
  static const char_T cv2[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 9 };

  char_T cv3[9];
  static const char_T cv4[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int16_T tmp_data[11];
  int32_T tmp_size[2];
  int32_T i7;
  static const char_T cv5[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '2',
    '0', '.', '2' };

  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int16_T b_tmp_data[12];
  int32_T d_tmp_size[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* checkIPAddressFormat IP address format checker */
  /*  */
  /*    Warning: This function is an internal MathWorks function and may be removed */
  /*    in a future release. */
  /*  */
  /*    checkIPAddressFormat(ADDRS, NAME) returns true if the ADDRS is a valid */
  /*    dotted quad IP address. Otherwise, it errors out and prompts that variable */
  /*    NAME is not a valid IP address. */
  /*  */
  /*    % Example: */
  /*    %   Check if the string '192.168.10.a' is a valid IP address for variable */
  /*    %   IPAddress */
  /*    checkIPAddressFormat('192.168.10.a', 'IPAddress') */
  /*    Copyright 2012 The MathWorks, Inc. */
  /*  Look for three dots */
  idx = 0;
  for (i1 = 0; i1 < 2; i1++) {
    ii_size[i1] = 1 + 11 * i1;
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i < 13)) {
    guard1 = false;
    if (bv0[i - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)i;
      if (idx >= 12) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      i++;
    }
  }

  if (1 > idx) {
    ii_size[1] = 0;
  } else {
    ii_size[1] = idx;
  }

  if (1 > idx) {
    i2 = 0;
  } else {
    i2 = idx;
  }

  i = ii_size[0] * i2;
  for (i1 = 0; i1 < i; i1++) {
    dotIndices_data[i1] = ii_data[i1];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  st.site = &p_emlrtRSI;
  if (!(ii_size[1] != 3)) {
  } else {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    for (i = 0; i < 42; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(&st, 42, m0, cv1);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    for (i = 0; i < 9; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(&st, 9, m0, cv3);
    emlrtAssign(&b_y, m0);
    b_st.site = &pb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &c_emlrtMCI), &c_emlrtMCI);
  }

  /*  Check if all the elements other than the dots are numbers */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, ii_size[1], &b_emlrtBCI, sp);
  if (1 > dotIndices_data[0] - 1) {
    i = 0;
  } else {
    i1 = dotIndices_data[0] - 1;
    i = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &c_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(1, 1, ii_size[1], &d_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, ii_size[1], &e_emlrtBCI, sp);
  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i1 = 0;
    idx = 0;
  } else {
    i1 = dotIndices_data[0] + 1;
    i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 12, &f_emlrtBCI, sp) - 1;
    idx = dotIndices_data[1] - 1;
    idx = emlrtDynamicBoundsCheckFastR2012b(idx, 1, 12, &f_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(2, 1, ii_size[1], &g_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(3, 1, ii_size[1], &h_emlrtBCI, sp);
  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    i3 = 0;
    i4 = 0;
  } else {
    i3 = dotIndices_data[1] + 1;
    i3 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, 12, &i_emlrtBCI, sp) - 1;
    i4 = dotIndices_data[2] - 1;
    i4 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, 12, &i_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(3, 1, ii_size[1], &j_emlrtBCI, sp);
  if (dotIndices_data[2] + 1 > 12) {
    i5 = 1;
    i6 = 1;
  } else {
    i5 = dotIndices_data[2] + 1;
    i5 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, 12, &k_emlrtBCI, sp);
    i6 = 13;
  }

  tmp_size[0] = 1;
  tmp_size[1] = i;
  for (i7 = 0; i7 < i; i7++) {
    tmp_data[i7] = cv5[i7];
  }

  st.site = &q_emlrtRSI;
  checkNumeric(&st, tmp_data, tmp_size);
  b_tmp_size[0] = 1;
  b_tmp_size[1] = idx - i1;
  i = idx - i1;
  for (idx = 0; idx < i; idx++) {
    tmp_data[idx] = cv5[i1 + idx];
  }

  st.site = &r_emlrtRSI;
  checkNumeric(&st, tmp_data, b_tmp_size);
  c_tmp_size[0] = 1;
  c_tmp_size[1] = i4 - i3;
  i = i4 - i3;
  for (i1 = 0; i1 < i; i1++) {
    tmp_data[i1] = cv5[i3 + i1];
  }

  st.site = &s_emlrtRSI;
  checkNumeric(&st, tmp_data, c_tmp_size);
  d_tmp_size[0] = 1;
  d_tmp_size[1] = i6 - i5;
  i = i6 - i5;
  for (i1 = 0; i1 < i; i1++) {
    b_tmp_data[i1] = cv5[(i5 + i1) - 1];
  }

  st.site = &t_emlrtRSI;
  checkNumeric(&st, b_tmp_data, d_tmp_size);
}

/* End of code generation (checkIPAddressFormat.c) */
