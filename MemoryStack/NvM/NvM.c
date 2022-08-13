#include "NvM_Types.h"

Std_ReturnType NvM_WriteBlock(NvM_BlockIdType Block_Id, const void *Data)
{
    return E_OK;
}

Std_ReturnType NvM_ReadBlock(NvM_BlockIdType Block_Id, void *Data)
{
    return E_OK;
}

void NvM_Init(void)
{
}

Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType Block_Id, NvM_RequestResultType *RequestResultPtr)
{
    return E_OK;
}

void NvM_ReadAll(void)
{
}

void NvM_WriteAll(void)
{
}

void NvM_SetRamBlockStatus(NvM_BlockIdType Block_Id, boolean BlockChanged)
{
}