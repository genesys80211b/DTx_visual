/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "checkIPAddressFormat.h"

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 43, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo r_emlrtRSI = { 44, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo s_emlrtRSI = { 45, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo t_emlrtRSI = { 46, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRTEInfo emlrtRTEI = { 35, 3, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtBCInfo b_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtRTEInfo b_emlrtRTEI = { 54, 3, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtECInfo emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
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
  int32_T ix;
  int32_T i9;
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  boolean_T tmp_data[12];
  int32_T x[2];
  int32_T iv4[2];
  boolean_T y;
  boolean_T exitg1;
  static const char_T cv5[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  guard1 = false;
  if (x_size[1] == 0) {
    guard1 = true;
  } else {
    b_x_size[0] = 1;
    b_x_size[1] = x_size[1];
    ix = x_size[0] * x_size[1];
    for (i9 = 0; i9 < ix; i9++) {
      b_x_data[i9] = (x_data[i9] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = x_size[1];
    ix = x_size[0] * x_size[1];
    for (i9 = 0; i9 < ix; i9++) {
      tmp_data[i9] = (x_data[i9] <= 57);
    }

    for (i9 = 0; i9 < 2; i9++) {
      x[i9] = b_x_size[i9];
      iv4[i9] = tmp_size[i9];
    }

    if ((x[0] != iv4[0]) || (x[1] != iv4[1])) {
      emlrtSizeEqCheckNDR2012b(&x[0], &iv4[0], &emlrtECI, sp);
    }

    ix = x_size[1];
    for (i9 = 0; i9 < ix; i9++) {
      b_x_data[i9] = !(b_x_data[i9] && tmp_data[i9]);
    }

    y = false;
    ix = 1;
    exitg1 = false;
    while ((!exitg1) && (ix <= b_x_size[1])) {
      if (!!b_x_data[ix - 1]) {
        y = true;
        exitg1 = true;
      } else {
        ix++;
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

  if (!y) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI,
      "sdru:checkIPAddressFormat:InvalidIPAddress", 3, 4, 9, cv5);
  }
}

void checkIPAddressFormat(const emlrtStack *sp)
{
  int32_T idx;
  int8_T ii_data[12];
  int8_T ii_size[2];
  int32_T i2;
  static const int8_T iv3[2] = { 1, 12 };

  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  static const boolean_T bv0[12] = { false, false, false, true, false, false,
    false, true, false, false, true, false };

  int32_T i3;
  int32_T loop_ub;
  int8_T dotIndices_data[12];
  int32_T i4;
  static const char_T cv3[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i5;
  int32_T i6;
  int32_T i7;
  int16_T tmp_data[11];
  int32_T tmp_size[2];
  int32_T i8;
  static const char_T cv4[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '3' };

  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int16_T b_tmp_data[12];
  int32_T d_tmp_size[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

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
  /*    Copyright 2012-2015 The MathWorks, Inc. */
  /*  Look for three dots */
  idx = 0;
  for (i2 = 0; i2 < 2; i2++) {
    ii_size[i2] = iv3[i2];
  }

  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii < 13)) {
    guard1 = false;
    if (bv0[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 12) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (1 > idx) {
    i3 = 0;
  } else {
    i3 = idx;
  }

  loop_ub = ii_size[0] * i3;
  for (i2 = 0; i2 < loop_ub; i2++) {
    dotIndices_data[i2] = ii_data[i2];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  if (1 > idx) {
    i4 = 0;
  } else {
    i4 = idx;
  }

  if (!(i4 != 3)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "sdru:checkIPAddressFormat:InvalidIPAddress", 3, 4, 9, cv3);
  }

  /*  Check if all the elements other than the dots are numbers */
  if (1 > dotIndices_data[0] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = dotIndices_data[0] - 1;
    if (!(loop_ub >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &b_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i2 = 0;
    ii = 0;
  } else {
    i2 = dotIndices_data[0] + 1;
    if (!(i2 <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &c_emlrtBCI, sp);
    }

    i2--;
    ii = dotIndices_data[1] - 1;
    if (!(ii >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &c_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    idx = 0;
    i5 = 0;
  } else {
    idx = dotIndices_data[1] + 1;
    if (!(idx <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &d_emlrtBCI, sp);
    }

    idx--;
    i5 = dotIndices_data[2] - 1;
    if (!(i5 >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &d_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[2] + 1 > 12) {
    i6 = 1;
    i7 = 1;
  } else {
    i6 = dotIndices_data[2] + 1;
    if (!(i6 <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &e_emlrtBCI, sp);
    }

    i7 = 13;
  }

  tmp_size[0] = 1;
  tmp_size[1] = loop_ub;
  for (i8 = 0; i8 < loop_ub; i8++) {
    tmp_data[i8] = cv4[i8];
  }

  st.site = &q_emlrtRSI;
  checkNumeric(&st, tmp_data, tmp_size);
  b_tmp_size[0] = 1;
  b_tmp_size[1] = ii - i2;
  loop_ub = ii - i2;
  for (ii = 0; ii < loop_ub; ii++) {
    tmp_data[ii] = cv4[i2 + ii];
  }

  st.site = &r_emlrtRSI;
  checkNumeric(&st, tmp_data, b_tmp_size);
  c_tmp_size[0] = 1;
  c_tmp_size[1] = i5 - idx;
  loop_ub = i5 - idx;
  for (i2 = 0; i2 < loop_ub; i2++) {
    tmp_data[i2] = cv4[idx + i2];
  }

  st.site = &s_emlrtRSI;
  checkNumeric(&st, tmp_data, c_tmp_size);
  d_tmp_size[0] = 1;
  d_tmp_size[1] = i7 - i6;
  loop_ub = i7 - i6;
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_tmp_data[i2] = cv4[(i6 + i2) - 1];
  }

  st.site = &t_emlrtRSI;
  checkNumeric(&st, b_tmp_data, d_tmp_size);
}

/* End of code generation (checkIPAddressFormat.c) */
