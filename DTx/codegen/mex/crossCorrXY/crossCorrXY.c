/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * crossCorrXY.c
 *
 * Code generation for function 'crossCorrXY'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "crossCorrXY.h"

/* Type Definitions */
#ifndef struct_dsp_Crosscorrelator_0
#define struct_dsp_Crosscorrelator_0

struct dsp_Crosscorrelator_0
{
  int32_T S0_isInitialized;
};

#endif                                 /*struct_dsp_Crosscorrelator_0*/

#ifndef typedef_dsp_Crosscorrelator_0
#define typedef_dsp_Crosscorrelator_0

typedef struct dsp_Crosscorrelator_0 dsp_Crosscorrelator_0;

#endif                                 /*typedef_dsp_Crosscorrelator_0*/

#ifndef typedef_dspcodegen_Crosscorrelator
#define typedef_dspcodegen_Crosscorrelator

typedef struct {
  int32_T isInitialized;
  dsp_Crosscorrelator_0 cSFunObject;
} dspcodegen_Crosscorrelator;

#endif                                 /*typedef_dspcodegen_Crosscorrelator*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 2, "crossCorrXY",
  "/usr/local/MATLAB/Copy_of_V35/crossCorrXY.m" };

static emlrtRSInfo b_emlrtRSI = { 3, "crossCorrXY",
  "/usr/local/MATLAB/Copy_of_V35/crossCorrXY.m" };

static emlrtRSInfo c_emlrtRSI = { 1, "Crosscorrelator",
  "/usr/local/MATLAB/R2015b/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"
};

static emlrtRSInfo d_emlrtRSI = { 1, "System",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

static emlrtRSInfo f_emlrtRSI = { 1, "SystemCore",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRSInfo g_emlrtRSI = { 1, "Nondirect",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRTEInfo emlrtRTEI = { 1, 1, "SystemCore",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

/* Function Definitions */
void crossCorrXY(const emlrtStack *sp, const creal_T a[100000], creal_T f[100000])
{
  dspcodegen_Crosscorrelator Hcorr;
  dspcodegen_Crosscorrelator *obj;
  static const char_T cv0[4] = { 's', 't', 'e', 'p' };

  static const char_T cv1[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T inA;
  int32_T inB;
  int32_T out;
  int32_T c;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  obj = &Hcorr;
  b_st.site = &c_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  Hcorr.isInitialized = 0;
  b_st.site = &c_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  b_st.site = &c_emlrtRSI;

  /* System object Constructor function: dsp.Crosscorrelator */
  obj->cSFunObject.S0_isInitialized = 0;
  st.site = &b_emlrtRSI;
  if (Hcorr.isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv0);
  }

  if (Hcorr.isInitialized != 1) {
    b_st.site = &f_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    if (Hcorr.isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv1);
    }

    Hcorr.isInitialized = 1;
  }

  /* System object Outputs function: dsp.Crosscorrelator */
  inA = 0;
  inB = 0;
  out = 0;
  for (c = 0; c < 100000; c++) {
    f[out].re = a[inA].re * a[inB].re - a[inA].im * -a[inB].im;
    f[out].im = a[inA].re * -a[inB].im + a[inA].im * a[inB].re;
    out++;
    inA++;
    inB++;
  }
}

/* End of code generation (crossCorrXY.c) */
