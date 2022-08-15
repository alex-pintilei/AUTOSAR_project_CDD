#include "Com.h"
#include "Platform_Types.h"

void Com_Init(const Com_ConfigType *config)
{
}

void Com_MainFunctionRx(void)
{
}

void Com_MainFunctionTx(void)
{
}

uint8 Com_SendSignal(uint16 SignalId, uint8 *SignalDataPtr)
{
    return E_OK;
}

uint8 Com_ReceiveSignal(uint16 SignalId, uint8 *SignalDataPtr)
{
    return E_OK;
}
uint8 Com_SendSignalGroup(uint16 SignalGroupId)
{
    return E_OK;
}

uint8 Com_ReceiveSignalGroup(uint16 SignalGroupId)
{
    return E_OK;
}
