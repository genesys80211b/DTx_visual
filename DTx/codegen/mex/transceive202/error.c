/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "error.h"

/* Variable Definitions */
static emlrtMCInfo i_emlrtMCI = { 16, 1, "error",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo mb_emlrtRSI = { 16, "error",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

void b_error(const emlrtStack *sp, const char_T varargin_2_data[], const int32_T
             varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv35[2] = { 1, 37 };

  const mxArray *m13;
  char_T cv58[37];
  int32_T i;
  static const char_T cv59[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i12;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m13 = emlrtCreateCharArray(2, iv35);
  for (i = 0; i < 37; i++) {
    cv58[i] = cv59[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m13, cv58);
  emlrtAssign(&y, m13);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i12 = 0; i12 < i; i12++) {
    u_data[i12] = varargin_2_data[i12];
  }

  b_y = NULL;
  m13 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m13, (char_T *)u_data);
  emlrtAssign(&b_y, m13);
  st.site = &mb_emlrtRSI;
  d_error(&st, y, b_y, &i_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[], const int32_T
           varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv29[2] = { 1, 41 };

  const mxArray *m9;
  char_T cv46[41];
  int32_T i;
  static const char_T cv47[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i11;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv29);
  for (i = 0; i < 41; i++) {
    cv46[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(sp, 41, m9, cv46);
  emlrtAssign(&y, m9);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i11 = 0; i11 < i; i11++) {
    u_data[i11] = varargin_2_data[i11];
  }

  b_y = NULL;
  m9 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m9, (char_T *)u_data);
  emlrtAssign(&b_y, m9);
  st.site = &mb_emlrtRSI;
  d_error(&st, y, b_y, &i_emlrtMCI);
}

/* End of code generation (error.c) */
