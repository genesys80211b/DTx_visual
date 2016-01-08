/*
 * transceive202.c
 *
 * Code generation for function 'transceive202'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "SDRuTransmitter.h"
#include "transceive202_data.h"

/* Variable Definitions */
static comm_SDRuReceiver hrx;
static boolean_T hrx_not_empty;
static comm_SDRuTransmitter htx;
static boolean_T htx_not_empty;
static emlrtRSInfo emlrtRSI = { 6, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

static emlrtRSInfo b_emlrtRSI = { 11, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

static emlrtRSInfo c_emlrtRSI = { 17, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

static emlrtRSInfo d_emlrtRSI = { 18, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

static emlrtRSInfo e_emlrtRSI = { 20, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

static emlrtRSInfo f_emlrtRSI = { 22, "transceive202",
  "/usr/local/MATLAB/V35/transceive202.m" };

/* Function Definitions */
void hrx_not_empty_init(void)
{
  hrx_not_empty = false;
}

void htx_not_empty_init(void)
{
  htx_not_empty = false;
}

void transceive202(transceive202StackData *SD, const emlrtStack *sp, const
                   creal_T d2s[1408], boolean_T ft, creal_T dr[1408], uint32_T
                   *ns)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  memset(&dr[0], 0, 1408U * sizeof(creal_T));
  *ns = 0U;
  if (!htx_not_empty) {
    st.site = &emlrtRSI;
    SDRuTransmitter_SDRuTransmitter(&st, &htx);
    htx_not_empty = true;
  }

  if (!hrx_not_empty) {
    st.site = &b_emlrtRSI;
    SDRuReceiver_SDRuReceiver(&st, &hrx);
    hrx_not_empty = true;
  }

  if (ft) {
    st.site = &c_emlrtRSI;
    SystemCore_release(&st, &hrx);
    st.site = &d_emlrtRSI;
    b_SystemCore_release(&st, &htx);
  } else {
    st.site = &e_emlrtRSI;
    SystemCore_step(&st, &htx, d2s);
    while (*ns < 1U) {
      st.site = &f_emlrtRSI;
      b_SystemCore_step(SD, &st, &hrx, dr, ns);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }
}

/* End of code generation (transceive202.c) */
