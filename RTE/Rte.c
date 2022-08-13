#include "Rte.h"

Task(OS_StartUp_Task)
{
    EcuM_StartUp_Two();
}

Task(OS_10ms_Cyclic_Task)
{
    /*This is the Task body context*/

    NvM_MainFunction();
    Fee_MainFunction();
    Fls_MainFunction();

    BswM_MainFunction();

    Autosar_CDD_MainFunction();
}