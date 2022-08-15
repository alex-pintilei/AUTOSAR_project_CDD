#ifndef DIAGNOSTIC_STACK_DCM_H_
#define DIAGNOSTIC_STACK_DCM_H_

typedef uint8 Dcm_OpStatusType;

typedef struct
{

    /* Request data, starting directly after service identifier */
    uint8 *reqData;

    /* Request data length (excluding service identifier) */
    uint8 reqDataLen;

    /* Positive response data, starting directly after service identifier */
    uint8 *resData;

    /* Positive response data length */
    uint8 resDataLen;

    /* Additional information about service request and response */
    uint8 *msgAddInfo;

    /* The maximal length of a response is restricted by the size of the buffer */
    uint8 resMaxDataLen;

    /* This message context identifier can be used to determine the  relation between request and response confirmation */
    uint8 idContext;

    /* Pdu identifier on which the request was received. */
    uint8 dcmRxPduId;

    /* stores the service ID of the request */
    uint8 serviceID;

    /* stores the service operation status, to know if request is initial, pending or cancelled */
    Std_ReturnType serviceStatus;

    /* Request response type, shows if request has a positive or a negative response */
    uint8 serviceResponse;

} Dcm_MsgContextType;

/*Function Declaration*/
extern void Dcm_Init(void);

extern void Dcm_MainFunction(void);

/*0x10 DiagnosticSessionControl */
extern Std_ReturnType Dcm_Serv_0x10_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext);

/*0x22 ReadDataByIdentifier */
extern Std_ReturnType Dcm_Serv_0x22_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext);

/*0x2E WriteDataByIdentifier */
extern Std_ReturnType Dcm_Serv_0x2E_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext);

/*0x19 WriteDataByIdentifier */
extern Std_ReturnType Dcm_Serv_0x19_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext);

/*0x11 WriteDataByIdentifier */
extern Std_ReturnType Dcm_Serv_0x11_RequestProcessing(Dcm_OpStatusType OpStatus, const Dcm_MsgContextType *pMsgContext);

#endif /* DIAGNOSTIC_STACK_DCM_H_ */
