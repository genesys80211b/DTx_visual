/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "eml_warning.h"
#include "SystemCore.h"
#include "transceive202_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 16, 13, "eml_warning",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo b_emlrtMCI = { 16, 5, "eml_warning",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo rb_emlrtRSI = { 16, "eml_warning",
  "/usr/local/MATLAB/R2014b/toolbox/eml/lib/matlab/eml/eml_warning.m" };

/* Function Declarations */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void eml_warning(const emlrtStack *sp, const char_T varargin_2_data[], const
                 int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 31 };

  const mxArray *m15;
  char_T cv62[31];
  int32_T i;
  static const char_T cv63[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  int32_T u_size[2];
  int32_T i13;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m15 = emlrtCreateCharArray(2, iv37);
  for (i = 0; i < 31; i++) {
    cv62[i] = cv63[i];
  }

  emlrtInitCharArrayR2013a(sp, 31, m15, cv62);
  emlrtAssign(&y, m15);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i13 = 0; i13 < i; i13++) {
    u_data[i13] = varargin_2_data[i13];
  }

  b_y = NULL;
  m15 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m15, (char_T *)u_data);
  emlrtAssign(&b_y, m15);
  st.site = &rb_emlrtRSI;
  warning(&st, message(&st, y, b_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (eml_warning.c) */
