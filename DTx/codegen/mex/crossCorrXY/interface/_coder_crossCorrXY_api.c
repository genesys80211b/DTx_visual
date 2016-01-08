/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * _coder_crossCorrXY_api.c
 *
 * Code generation for function '_coder_crossCorrXY_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "crossCorrXY.h"
#include "_coder_crossCorrXY_api.h"
#include "crossCorrXY_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[100000]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[100000]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [100000]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier, creal_T y[100000]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[100000])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[100000])
{
  static const int32_T dims[2] = { 1, 100000 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [100000])
{
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 100000 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m2, (void *)u, 8);
  emlrtAssign(&y, m2);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier, creal_T y[100000])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a), &thisId, y);
  emlrtDestroyArray(&a);
}

void crossCorrXY_api(crossCorrXYStackData *SD, const mxArray * const prhs[1],
                     const mxArray *plhs[1])
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "a", SD->f0.a);

  /* Invoke the target function */
  crossCorrXY(&st, SD->f0.a, SD->f0.f);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(&st, SD->f0.f);
}

/* End of code generation (_coder_crossCorrXY_api.c) */
