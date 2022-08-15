#include "Platform_Types.h"
#include "EcuM.h"
#include "Os.h"
#include "ComM.h"

void EcuM_StartUp_Two(void)
{
   Autosar_CDD_Init();

   BswM_Init(NULL_PTR);
}

void EcuM_Init(void)
{
   StartCore(0);

   StartOs();

   Dem_PreInit();

   Fls_Init(NULL_PTR);
   Eep_Init(NULL_PTR);
   Ea_Init();
   Fee_Init();
   NvM_Init();

   NvM_ReadAll();

   Dcm_Init();
   Dem_Init(NULL_PTR);

   Com_Init(NULL_PTR);
   ComM_Init();
   Nm_Init();
   ComM_RequestComMode(COMM_FULL_COMMUNICATION);
}

void EcuM_RequestRun(void)
{
}

void EcuM_Shutdown(void)
{
   NvM_WriteAll();

   Dem_Shutdown();

   ComM_RequestComMode(COMM_NO_COMMUNICATION);
}
