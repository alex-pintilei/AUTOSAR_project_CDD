#include "Ea.h"
#include "Platform_Types.h"
#include "NvM_Types.h"
#include "Fee.h"

void Ea_Init(void)
{
}

Std_ReturnType Ea_Write(uint16 BlockNumber, uint8 *DataBufferPtr)
{
    return E_OK;
}

Std_ReturnType Ea_Read(uint16 BlockNumber, uint8 Offset, uint8 *DataBufferPtr, uint8 Length)
{
    return E_OK;
}

void Ea_MainFunction(void)
{
}

MemIf_StatusType Ea_GetStatus(void)
{
    return MEMIF_IDLE;
}

void Ea_Cancel(void)
{
}

void Ea_JobEndNotification(void)
{
}

void Ea_JobErrorNotification(void)
{
}
