/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "error1.h"

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 20, 5, "error",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo db_emlrtRSI = { 20, "error",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
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
  int32_T i19;
  static const char_T varargin_1[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R',
    'u', 'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i',
    'v', 'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  char_T u[37];
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 37 };

  const mxArray *m6;
  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i19 = 0; i19 < 37; i19++) {
    u[i19] = varargin_1[i19];
  }

  y = NULL;
  m6 = emlrtCreateCharArray(2, iv13);
  emlrtInitCharArrayR2013a(sp, 37, m6, &u[0]);
  emlrtAssign(&y, m6);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  loop_ub = varargin_2_size[0] * varargin_2_size[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    u_data[i19] = varargin_2_data[i19];
  }

  b_y = NULL;
  m6 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m6, &u_data[0]);
  emlrtAssign(&b_y, m6);
  st.site = &db_emlrtRSI;
  c_error(&st, y, b_y, &e_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[], const int32_T
           varargin_2_size[2])
{
  int32_T i16;
  static const char_T varargin_1[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R',
    'u', 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r',
    'a', 'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's',
    'f', 'u', 'l' };

  char_T u[41];
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 41 };

  const mxArray *m5;
  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i16 = 0; i16 < 41; i16++) {
    u[i16] = varargin_1[i16];
  }

  y = NULL;
  m5 = emlrtCreateCharArray(2, iv12);
  emlrtInitCharArrayR2013a(sp, 41, m5, &u[0]);
  emlrtAssign(&y, m5);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  loop_ub = varargin_2_size[0] * varargin_2_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    u_data[i16] = varargin_2_data[i16];
  }

  b_y = NULL;
  m5 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m5, &u_data[0]);
  emlrtAssign(&b_y, m5);
  st.site = &db_emlrtRSI;
  c_error(&st, y, b_y, &e_emlrtMCI);
}

/* End of code generation (error1.c) */
