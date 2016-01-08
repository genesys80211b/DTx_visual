/*
 * SDRuBase.c
 *
 * Code generation for function 'SDRuBase'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive202.h"
#include "SDRuBase.h"
#include "reportSDRuStatus.h"
#include "mapiPrivate.h"
#include "transceive202_data.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = { 6, "openDataConnection",
  "/usr/local/MATLAB/R2014b/SupportPackages/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/openDataConnection.m"
};

/* Function Definitions */
void SDRuBase_setupImpl(const emlrtStack *sp, comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T driverApiH;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  static const uint8_T uv0[12] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U, 50U,
    48U, 46U, 50U };

  int32_T errStr_size[2];
  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &h_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  b_st.site = &g_emlrtRSI;
  boardId = b_obj->pSubDevice;
  for (driverApiH = 0; driverApiH < 15; driverApiH++) {
    requester[driverApiH] = (uint8_T)b_obj->ObjectID[driverApiH];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  c_st.site = &bb_emlrtRSI;
  mapiPrivate(&c_st, uv0, boardId, requester, DPortDTypeCDouble, &driverApiH,
              &errStatus, errMsg_data, errMsg_size);
  b_obj->pDriverHandle = driverApiH;
  if (errStatus == UsrpDriverSuccess) {
    obj->pConnected = true;
  } else {
    st.site = &h_emlrtRSI;
    driverApiH = obj->pDriverHandle;

    /*    Copyright 2011-2012 The MathWorks, Inc. */
    b_st.site = &cb_emlrtRSI;
    b_mapiPrivate(&b_st, driverApiH, &errStat, errStr_data, errStr_size);
    obj->pConnected = false;
  }

  st.site = &h_emlrtRSI;
  reportSDRuStatus(&st, errStatus, errMsg_data, errMsg_size);
}

void b_SDRuBase_setupImpl(const emlrtStack *sp, comm_SDRuReceiver *obj)
{
  comm_SDRuReceiver *b_obj;
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T driverApiH;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  static const uint8_T uv1[12] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U, 50U,
    48U, 46U, 50U };

  int32_T errStr_size[2];
  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &h_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  b_st.site = &ab_emlrtRSI;
  boardId = b_obj->pSubDevice;
  for (driverApiH = 0; driverApiH < 15; driverApiH++) {
    requester[driverApiH] = (uint8_T)b_obj->ObjectID[driverApiH];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  c_st.site = &bb_emlrtRSI;
  mapiPrivate(&c_st, uv1, boardId, requester, DPortDTypeCInt16, &driverApiH,
              &deviceStatus, errMsg_data, errMsg_size);
  b_obj->pDriverHandle = driverApiH;
  if (deviceStatus == UsrpDriverSuccess) {
    obj->pConnected = true;
  } else {
    st.site = &h_emlrtRSI;
    driverApiH = obj->pDriverHandle;

    /*    Copyright 2011-2012 The MathWorks, Inc. */
    b_st.site = &cb_emlrtRSI;
    b_mapiPrivate(&b_st, driverApiH, &errStat, errStr_data, errStr_size);
    obj->pConnected = false;
  }

  st.site = &h_emlrtRSI;
  reportSDRuStatus(&st, deviceStatus, errMsg_data, errMsg_size);
}

/* End of code generation (SDRuBase.c) */
