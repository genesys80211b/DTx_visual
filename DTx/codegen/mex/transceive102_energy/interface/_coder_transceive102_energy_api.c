/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_transceive102_energy_api.c
 *
 * Code generation for function '_coder_transceive102_energy_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive102_energy.h"
#include "_coder_transceive102_energy_api.h"
#include "transceive102_energy_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408]);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408]);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *txGain,
  const char_T *identifier);
static const mxArray *e_emlrt_marshallOut(const uint32_T u);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408]);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ft), &thisId);
  emlrtDestroyArray(&ft);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408])
{
  const mxArray *y;
  static const int32_T iv19[1] = { 1408 };

  const mxArray *m12;
  y = NULL;
  m12 = emlrtCreateNumericArray(1, iv19, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m12, (void *)u, 8);
  emlrtAssign(&y, m12);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *txGain,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(txGain), &thisId);
  emlrtDestroyArray(&txGain);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m13;
  y = NULL;
  m13 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m13) = u;
  emlrtAssign(&y, m13);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(d2s), &thisId, y);
  emlrtDestroyArray(&d2s);
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408])
{
  static const int32_T dims[1] = { 1408 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void transceive102_energy_api(transceive102_energyStackData *SD, const mxArray *
  const prhs[9], const mxArray *plhs[2])
{
  creal_T d2s[1408];
  boolean_T ft;
  real_T txGain;
  real_T rxGain;
  real_T centerFreqTx;
  real_T centerFreqRx;
  real_T intFactor;
  real_T decFactor;
  real_T swapFreqFlag;
  uint32_T ns;
  creal_T dr[1408];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "d2s", d2s);
  ft = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ft");
  txGain = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "txGain");
  rxGain = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "rxGain");
  centerFreqTx = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "centerFreqTx");
  centerFreqRx = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "centerFreqRx");
  intFactor = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "intFactor");
  decFactor = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "decFactor");
  swapFreqFlag = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "swapFreqFlag");

  /* Invoke the target function */
  transceive102_energy(SD, &st, d2s, ft, txGain, rxGain, centerFreqTx,
                       centerFreqRx, intFactor, decFactor, swapFreqFlag, dr, &ns);

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, dr);
  plhs[1] = e_emlrt_marshallOut(ns);
}

/* End of code generation (_coder_transceive102_energy_api.c) */
