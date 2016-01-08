/*
 * reportSDRuStatus.c
 *
 * Code generation for function 'reportSDRuStatus'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "reportSDRuStatus.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 106, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRSInfo eb_emlrtRSI = { 96, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRSInfo fb_emlrtRSI = { 86, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRSInfo gb_emlrtRSI = { 76, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRSInfo hb_emlrtRSI = { 65, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRSInfo ib_emlrtRSI = { 48, "reportSDRuStatus",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

/* Function Declarations */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m20;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m20, 3, pArrays, "message", true,
    location);
}

void reportSDRuStatus(const emlrtStack *sp, UsrpErrorCapiEnumT errStatus, const
                      char_T errMsg_data[], const int32_T errMsg_size[2])
{
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 35 };

  const mxArray *m7;
  char_T cv31[35];
  int32_T i;
  static const char_T cv32[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 12 };

  char_T cv33[12];
  static const char_T cv34[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '2',
    '0', '.', '2' };

  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 43 };

  char_T cv35[43];
  static const char_T cv36[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv19[2] = { 1, 35 };

  static const char_T cv37[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *e_y;
  static const int32_T iv20[2] = { 1, 12 };

  const mxArray *f_y;
  static const int32_T iv21[2] = { 1, 28 };

  char_T cv38[28];
  static const char_T cv39[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *g_y;
  static const int32_T iv22[2] = { 1, 12 };

  const mxArray *h_y;
  static const int32_T iv23[2] = { 1, 28 };

  static const char_T cv40[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *i_y;
  static const int32_T iv24[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv25[2] = { 1, 26 };

  char_T cv41[26];
  static const char_T cv42[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv26[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv27[2] = { 1, 35 };

  static const char_T cv43[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i10;
  char_T u_data[1024];
  const mxArray *m_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* reportSDRuStatus SDRu status reporter */
  /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
  /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
  /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
  /*    can be Warning, Error , or None. */
  /*  */
  /*    USRP(R) is a trademark of National Instruments Corp. */
  /*    Copyright 2012-2014 The MathWorks, Inc. */
  switch (errStatus) {
   case UsrpDriverNotCompatible:
    st.site = &ib_emlrtRSI;
    if (!(errStatus == UsrpDriverNotCompatible)) {
    } else {
      y = NULL;
      m7 = emlrtCreateCharArray(2, iv16);
      for (i = 0; i < 35; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&st, 35, m7, cv31);
      emlrtAssign(&y, m7);
      b_y = NULL;
      m7 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 12; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 12, m7, cv33);
      emlrtAssign(&b_y, m7);
      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 43; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&st, 43, m7, cv35);
      emlrtAssign(&c_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, b_message(&b_st, y, b_y, c_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;

   case UsrpDriverNotResponding:
    st.site = &hb_emlrtRSI;
    if (!(errStatus == UsrpDriverNotResponding)) {
    } else {
      d_y = NULL;
      m7 = emlrtCreateCharArray(2, iv19);
      for (i = 0; i < 35; i++) {
        cv31[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(&st, 35, m7, cv31);
      emlrtAssign(&d_y, m7);
      e_y = NULL;
      m7 = emlrtCreateCharArray(2, iv20);
      for (i = 0; i < 12; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 12, m7, cv33);
      emlrtAssign(&e_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, message(&b_st, d_y, e_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;

   case UsrpDriverRxBusy:
    st.site = &gb_emlrtRSI;
    if (!(errStatus == UsrpDriverRxBusy)) {
    } else {
      f_y = NULL;
      m7 = emlrtCreateCharArray(2, iv21);
      for (i = 0; i < 28; i++) {
        cv38[i] = cv39[i];
      }

      emlrtInitCharArrayR2013a(&st, 28, m7, cv38);
      emlrtAssign(&f_y, m7);
      g_y = NULL;
      m7 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 12; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 12, m7, cv33);
      emlrtAssign(&g_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, message(&b_st, f_y, g_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;

   case UsrpDriverTxBusy:
    st.site = &fb_emlrtRSI;
    if (!(errStatus == UsrpDriverTxBusy)) {
    } else {
      h_y = NULL;
      m7 = emlrtCreateCharArray(2, iv23);
      for (i = 0; i < 28; i++) {
        cv38[i] = cv40[i];
      }

      emlrtInitCharArrayR2013a(&st, 28, m7, cv38);
      emlrtAssign(&h_y, m7);
      i_y = NULL;
      m7 = emlrtCreateCharArray(2, iv24);
      for (i = 0; i < 12; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 12, m7, cv33);
      emlrtAssign(&i_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, message(&b_st, h_y, i_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;

   case UsrpDriverBusy:
    st.site = &eb_emlrtRSI;
    if (!(errStatus == UsrpDriverBusy)) {
    } else {
      j_y = NULL;
      m7 = emlrtCreateCharArray(2, iv25);
      for (i = 0; i < 26; i++) {
        cv41[i] = cv42[i];
      }

      emlrtInitCharArrayR2013a(&st, 26, m7, cv41);
      emlrtAssign(&j_y, m7);
      k_y = NULL;
      m7 = emlrtCreateCharArray(2, iv26);
      for (i = 0; i < 12; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 12, m7, cv33);
      emlrtAssign(&k_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, message(&b_st, j_y, k_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;

   case UsrpDriverError:
    st.site = &db_emlrtRSI;
    if (!(errStatus == UsrpDriverError)) {
    } else {
      l_y = NULL;
      m7 = emlrtCreateCharArray(2, iv27);
      for (i = 0; i < 35; i++) {
        cv31[i] = cv43[i];
      }

      emlrtInitCharArrayR2013a(&st, 35, m7, cv31);
      emlrtAssign(&l_y, m7);
      u_size[0] = 1;
      u_size[1] = errMsg_size[1];
      i = errMsg_size[0] * errMsg_size[1];
      for (i10 = 0; i10 < i; i10++) {
        u_data[i10] = errMsg_data[i10];
      }

      m_y = NULL;
      m7 = emlrtCreateCharArray(2, u_size);
      emlrtInitCharArrayR2013a(&st, u_size[1], m7, (char_T *)u_data);
      emlrtAssign(&m_y, m7);
      b_st.site = &pb_emlrtRSI;
      c_error(&b_st, message(&b_st, l_y, m_y, &c_emlrtMCI), &c_emlrtMCI);
    }
    break;
  }
}

/* End of code generation (reportSDRuStatus.c) */
