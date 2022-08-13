#include "Platform_Types.h"
#include <BswM.h>

uint8 BswM_IgnitionOff_Status;

/*This Action will call the needed functions to enter in Sleep*/
static void BswM_Action_TriggerSleep()
{
    /*Call AUTOSAR_CDD Interface*/
    Autosar_CDD_Stop();

    /*Call EcuM Interface*/
    EcuM_Shutdown();
}

/*This Expression is checking the precondition to enter in Sleep*/
static uint8 BswM_Expression_CheckSleep()
{
    uint8 return_value;

    if (TRUE == BswM_IgnitionOff_Status)
    {
        return_value = TRUE;
    }
    else
    {
        return_value = FALSE;
    }

    return return_value;
}

/*This rule will check the Expression and if it is true will trigger the Action to enter in Sleep*/
static void BswM_Rule_CheckSleep()
{
    if (TRUE == BswM_Expression_CheckSleep())
    {
        BswM_Action_TriggerSleep();
    }
    else
    {
        /*Do Nothing*/
    }
}

void BswM_Init(BswM_ConfigType *ConfigPtr)
{
}

void BswM_MainFunction()
{
    static uint8 BswM_Call_EcuM_Only_Once = 0; /*This local variable is defined just to call the EcuM interface only once*/

    if (0 == BswM_Call_EcuM_Only_Once)
    {
        EcuM_RequestRun();

        BswM_Call_EcuM_Only_Once = 1; /*Next time the interface EcuM_RequestRun() will not be called*/
    }
    /*The Rule is called cyclic*/
    BswM_Rule_CheckSleep();
}