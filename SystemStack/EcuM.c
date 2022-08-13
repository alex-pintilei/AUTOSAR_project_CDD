#include "Platform_Types.h"
#include "EcuM.h"
#include "Os.h"

void EcuM_StartUp_Two(void)
{
    Autosar_CDD_Init();

    BswM_Init(NULL_PTR);
}

void EcuM_Init(void)
{
    StartCore(0);

    StartOs();
}

void EcuM_RequestRun(void)
{
}

void EcuM_Shutdown(void)
{
}