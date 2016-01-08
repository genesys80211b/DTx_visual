/*
 * _coder_transceive202_api.c
 *
 * Code generation for function '_coder_transceive202_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "_coder_transceive202_api.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408]);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408]);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m17;
  y = NULL;
  m17 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m17) = u;
  emlrtAssign(&y, m17);
  return y;
}

static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ft), &thisId);
  emlrtDestroyArray(&ft);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408])
{
  int32_T iv39[1];
  iv39[0] = 1408;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, iv39);
  emlrtImportArrayR2011b(src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(d2s), &thisId, y);
  emlrtDestroyArray(&d2s);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408])
{
  const mxArray *y;
  static const int32_T iv38[1] = { 1408 };

  const mxArray *m16;
  creal_T b_u[1408];
  y = NULL;
  m16 = emlrtCreateNumericArray(1, iv38, mxDOUBLE_CLASS, mxCOMPLEX);
  memcpy(&b_u[0], &u[0], 1408U * sizeof(creal_T));
  emlrtExportNumericArrayR2013b(sp, m16, b_u, 8);
  emlrtAssign(&y, m16);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void transceive202_api(transceive202StackData *SD, const mxArray * const prhs[2],
  const mxArray *plhs[2])
{
  creal_T d2s[1408];
  boolean_T ft;
  uint32_T ns;
  creal_T dr[1408];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "d2s", d2s);
  ft = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ft");

  /* Invoke the target function */
  transceive202(SD, &st, d2s, ft, dr, &ns);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, dr);
  plhs[1] = b_emlrt_marshallOut(ns);
}

/* End of code generation (_coder_transceive202_api.c) */
