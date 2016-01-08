/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * reportSDRuStatus.c
 *
 * Code generation for function 'reportSDRuStatus'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103_energy.h"
#include "reportSDRuStatus.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 50, 22, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 67, 15, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 78, 13, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 88, 13, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 98, 13, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 107, 62, "reportSDRuStatus",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/reportSDRuStatus.m"
};

/* Function Definitions */
void reportSDRuStatus(const emlrtStack *sp, UsrpErrorCapiEnumT errStatus, const
                      char_T errMsg_data[], const int32_T errMsg_size[2])
{
  static const char_T cv15[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  static const char_T cv16[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '3' };

  /* reportSDRuStatus SDRu status reporter */
  /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
  /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
  /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
  /*    can be Warning, Error , or None. */
  /*  */
  /*    USRP(R) is a trademark of National Instruments Corp. */
  /*    Copyright 2012-2014 The MathWorks, Inc. */
  switch (errStatus) {
   case UsrpDriverNotCompatible:
    if (!(errStatus == UsrpDriverNotCompatible)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
        "sdru:reportSDRuStatus:NotCompatible", 6, 4, 12, cv16, 4, 43, cv15);
    }
    break;

   case UsrpDriverNotResponding:
    if (!(errStatus == UsrpDriverNotResponding)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
        "sdru:reportSDRuStatus:NotResponding", 3, 4, 12, cv16);
    }
    break;

   case UsrpDriverRxBusy:
    if (!(errStatus == UsrpDriverRxBusy)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &g_emlrtRTEI,
        "sdru:reportSDRuStatus:RxBusy", 3, 4, 12, cv16);
    }
    break;

   case UsrpDriverTxBusy:
    if (!(errStatus == UsrpDriverTxBusy)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI,
        "sdru:reportSDRuStatus:TxBusy", 3, 4, 12, cv16);
    }
    break;

   case UsrpDriverBusy:
    if (!(errStatus == UsrpDriverBusy)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &i_emlrtRTEI,
        "sdru:reportSDRuStatus:Busy", 3, 4, 12, cv16);
    }
    break;

   case UsrpDriverError:
    if (!(errStatus == UsrpDriverError)) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &j_emlrtRTEI,
        "sdru:reportSDRuStatus:UnknownStatus", 3, 4, errMsg_size[1], errMsg_data);
    }
    break;
  }
}

/* End of code generation (reportSDRuStatus.c) */
