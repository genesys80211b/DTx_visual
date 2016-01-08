/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive102_energy.c
 *
 * Code generation for function 'transceive102_energy'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive102_energy.h"
#include "SDRuBase.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "SDRuTransmitter.h"
#include "transceive102_energy_data.h"

/* Variable Definitions */
static comm_SDRuReceiver hrx;
static boolean_T hrx_not_empty;
static comm_SDRuTransmitter htx;
static boolean_T htx_not_empty;
static emlrtRSInfo emlrtRSI = { 6, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo b_emlrtRSI = { 11, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo c_emlrtRSI = { 21, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo d_emlrtRSI = { 23, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo e_emlrtRSI = { 28, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo f_emlrtRSI = { 29, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo g_emlrtRSI = { 31, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

static emlrtRSInfo h_emlrtRSI = { 33, "transceive102_energy",
  "/usr/local/MATLAB/V40_testsuite/DTx/transceive102_energy.m" };

/* Function Definitions */
void hrx_not_empty_init(void)
{
  hrx_not_empty = false;
}

void htx_not_empty_init(void)
{
  htx_not_empty = false;
}

void transceive102_energy(transceive102_energyStackData *SD, const emlrtStack
  *sp, const creal_T d2s[1408], boolean_T ft, real_T txGain, real_T rxGain,
  real_T centerFreqTx, real_T centerFreqRx, real_T intFactor, real_T decFactor,
  real_T swapFreqFlag, creal_T dr[1408], uint32_T *ns)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  memset(&dr[0], 0, 1408U * sizeof(creal_T));
  *ns = 0U;
  if (!htx_not_empty) {
    st.site = &emlrtRSI;
    SDRuTransmitter_SDRuTransmitter(&st, &htx, centerFreqTx, txGain, intFactor);
    htx_not_empty = true;
  }

  if (!hrx_not_empty) {
    st.site = &b_emlrtRSI;
    SDRuReceiver_SDRuReceiver(&st, &hrx, centerFreqRx, decFactor, rxGain);
    hrx_not_empty = true;
  }

  /* listening mode: */
  if (muDoubleScalarAbs(centerFreqTx - centerFreqRx) > 0.0) {
    /* if Rx and Tx is different, switch for Listening mode */
    if (swapFreqFlag != 0.0) {
      st.site = &c_emlrtRSI;
      SDRuBase_set_CenterFrequency(&hrx, centerFreqTx);
    } else {
      st.site = &d_emlrtRSI;
      SDRuBase_set_CenterFrequency(&hrx, centerFreqRx);
    }
  }

  if (ft) {
    st.site = &e_emlrtRSI;
    SystemCore_release(&st, &hrx);
    st.site = &f_emlrtRSI;
    b_SystemCore_release(&st, &htx);
  } else {
    st.site = &g_emlrtRSI;
    SystemCore_step(&st, &htx, d2s);
    while (*ns < 1U) {
      st.site = &h_emlrtRSI;
      b_SystemCore_step(SD, &st, &hrx, dr, ns);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }
}

/* End of code generation (transceive102_energy.c) */
