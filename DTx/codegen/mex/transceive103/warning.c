/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 14, 25, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 14, 9, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtRSInfo db_emlrtRSI = { 14, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m16;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 3, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m14;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m14, 2, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp)
{
  int32_T i11;
  static const char_T cv7[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 7 };

  const mxArray *m1;
  static const char_T cv8[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 7 };

  static const char_T msgID[39] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'O', 'u', 't', 'O', 'f', 'R',
    'a', 'n', 'g', 'e', 'D', 'e', 'c', 'i', 'm', 'F', 'a', 'c', 't', 'o', 'r' };

  char_T c_u[39];
  const mxArray *c_y;
  static const int32_T iv7[2] = { 1, 39 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i11 = 0; i11 < 7; i11++) {
    u[i11] = cv7[i11];
  }

  y = NULL;
  m1 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 7, m1, &u[0]);
  emlrtAssign(&y, m1);
  for (i11 = 0; i11 < 7; i11++) {
    b_u[i11] = cv8[i11];
  }

  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  for (i11 = 0; i11 < 39; i11++) {
    c_u[i11] = msgID[i11];
  }

  c_y = NULL;
  m1 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 39, m1, &c_u[0]);
  emlrtAssign(&c_y, m1);
  st.site = &db_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

void c_warning(const emlrtStack *sp, const char_T varargin_1_data[], const
               int32_T varargin_1_size[2])
{
  int32_T i21;
  static const char_T cv22[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 7 };

  const mxArray *m8;
  static const char_T cv23[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 7 };

  static const char_T msgID[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  char_T c_u[31];
  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 31 };

  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i21 = 0; i21 < 7; i21++) {
    u[i21] = cv22[i21];
  }

  y = NULL;
  m8 = emlrtCreateCharArray(2, iv15);
  emlrtInitCharArrayR2013a(sp, 7, m8, &u[0]);
  emlrtAssign(&y, m8);
  for (i21 = 0; i21 < 7; i21++) {
    b_u[i21] = cv23[i21];
  }

  b_y = NULL;
  m8 = emlrtCreateCharArray(2, iv16);
  emlrtInitCharArrayR2013a(sp, 7, m8, &b_u[0]);
  emlrtAssign(&b_y, m8);
  for (i21 = 0; i21 < 31; i21++) {
    c_u[i21] = msgID[i21];
  }

  c_y = NULL;
  m8 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(sp, 31, m8, &c_u[0]);
  emlrtAssign(&c_y, m8);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  loop_ub = varargin_1_size[0] * varargin_1_size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    u_data[i21] = varargin_1_data[i21];
  }

  d_y = NULL;
  m8 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m8, &u_data[0]);
  emlrtAssign(&d_y, m8);
  st.site = &db_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &emlrtMCI), &b_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  int32_T i1;
  static const char_T cv1[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 7 };

  const mxArray *m0;
  static const char_T cv2[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T msgID[43] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'O', 'u', 't',
    'O', 'f', 'R', 'a', 'n', 'g', 'e', 'I', 'n', 't', 'e', 'r', 'p', 'F', 'a',
    'c', 't', 'o', 'r' };

  char_T c_u[43];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 43 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i1 = 0; i1 < 7; i1++) {
    u[i1] = cv1[i1];
  }

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  for (i1 = 0; i1 < 7; i1++) {
    b_u[i1] = cv2[i1];
  }

  b_y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m0, &b_u[0]);
  emlrtAssign(&b_y, m0);
  for (i1 = 0; i1 < 43; i1++) {
    c_u[i1] = msgID[i1];
  }

  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 43, m0, &c_u[0]);
  emlrtAssign(&c_y, m0);
  st.site = &db_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (warning.c) */
