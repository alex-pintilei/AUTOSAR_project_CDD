#include "Dcm.h"
#include "Platform_Types.h"
#include "NvM_Types.h"

void Dcm_Init(void)
{
}

void Dcm_MainFunction(void)
{
}

/*0x10 DiagnosticSessionControl */
Std_ReturnType Dcm_Serv_0x10_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext)
{
    return E_OK;
}

/*0x22 ReadDataByIdentifier */
Std_ReturnType Dcm_Serv_0x22_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext)
{
    uint16 Local_Did_Identifier;
    Local_Did_Identifier = (uint16)((uint16)pMsgContext->reqData[0] << 8 | (uint16)pMsgContext->reqData[1]);

    switch (Local_Did_Identifier)
    {
    case 0xAABB:
    {
        Autosar_CDD_ReadDataByIdentifierSpeed(OpStatus, pMsgContext->resData);
        break;
    }

    case 0xAACC:
    {
        Autosar_CDD_ReadDataByIdentifierEngine(OpStatus, pMsgContext->resData);
        break;
    }

    case 0xAADD:
    {
        Autosar_CDD_ReadDataByIdentifierKilometer(OpStatus, pMsgContext->resData);
        break;
    }

    default:
    {
        break;
    }
    }
    return E_OK;
}

/*0x2E WriteDataByIdentifier */
Std_ReturnType Dcm_Serv_0x2E_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext)
{
    return E_OK;
}

/*0x19 WriteDataByIdentifier */
Std_ReturnType Dcm_Serv_0x19_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext)
{
    return E_OK;
}

/*0x11 WriteDataByIdentifier */
Std_ReturnType Dcm_Serv_0x11_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext)
{
    return E_OK;
}
