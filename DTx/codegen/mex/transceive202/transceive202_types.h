/*
 * transceive202_types.h
 *
 * Code generation for function 'transceive202'
 *
 */

#ifndef __TRANSCEIVE202_TYPES_H__
#define __TRANSCEIVE202_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"
#ifndef typedef_comm_SDRuReceiver
#define typedef_comm_SDRuReceiver
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    real_T CenterFrequency;
    real_T LocalOscillatorOffset;
    real_T Gain;
    boolean_T pConnected;
    int32_T pDriverHandle;
    BoardIdCapiEnumT pSubDevice;
    char_T ObjectID[15];
    real_T DecimationFactor;
} comm_SDRuReceiver;
#endif /*typedef_comm_SDRuReceiver*/
#ifndef typedef_comm_SDRuTransmitter
#define typedef_comm_SDRuTransmitter
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    real_T CenterFrequency;
    real_T LocalOscillatorOffset;
    real_T Gain;
    boolean_T pConnected;
    int32_T pDriverHandle;
    BoardIdCapiEnumT pSubDevice;
    char_T ObjectID[15];
    real_T InterpolationFactor;
} comm_SDRuTransmitter;
#endif /*typedef_comm_SDRuTransmitter*/
#ifndef struct_emxArray_int16_T_1x11
#define struct_emxArray_int16_T_1x11
struct emxArray_int16_T_1x11
{
    int16_T data[11];
    int32_T size[2];
};
#endif /*struct_emxArray_int16_T_1x11*/
#ifndef typedef_emxArray_int16_T_1x11
#define typedef_emxArray_int16_T_1x11
typedef struct emxArray_int16_T_1x11 emxArray_int16_T_1x11;
#endif /*typedef_emxArray_int16_T_1x11*/
#ifndef struct_emxArray_int16_T_1x12
#define struct_emxArray_int16_T_1x12
struct emxArray_int16_T_1x12
{
    int16_T data[12];
    int32_T size[2];
};
#endif /*struct_emxArray_int16_T_1x12*/
#ifndef typedef_emxArray_int16_T_1x12
#define typedef_emxArray_int16_T_1x12
typedef struct emxArray_int16_T_1x12 emxArray_int16_T_1x12;
#endif /*typedef_emxArray_int16_T_1x12*/
#ifndef struct_emxArray_int32_T_1x12
#define struct_emxArray_int32_T_1x12
struct emxArray_int32_T_1x12
{
    int32_T data[12];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x12*/
#ifndef typedef_emxArray_int32_T_1x12
#define typedef_emxArray_int32_T_1x12
typedef struct emxArray_int32_T_1x12 emxArray_int32_T_1x12;
#endif /*typedef_emxArray_int32_T_1x12*/
#ifndef typedef_transceive202StackData
#define typedef_transceive202StackData
typedef struct
{
    struct
    {
        cint16_T yTemp[375000];
    } f0;
} transceive202StackData;
#endif /*typedef_transceive202StackData*/

#endif
/* End of code generation (transceive202_types.h) */
