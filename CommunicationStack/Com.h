#ifndef COMMUNICATION_STACK_COM_H_
#define COMMUNICATION_STACK_COM_H_

typedef struct sCom_PCConfigType
{
  uint8 neverUsed; /**< dummy entry  */
} Com_PCConfigType;

typedef Com_PCConfigType Com_ConfigType;

extern void Com_Init(const Com_ConfigType *config);
extern void Com_MainFunctionRx(void);
extern void Com_MainFunctionTx(void);
extern uint8 Com_SendSignal(uint16 SignalId, uint8 *SignalDataPtr);
extern uint8 Com_ReceiveSignal(uint16 SignalId, uint8 *SignalDataPtr);
extern uint8 Com_SendSignalGroup(uint16 SignalGroupId);
extern uint8 Com_ReceiveSignalGroup(uint16 SignalGroupId);

#endif /* COMMUNICATION_STACK_COM_H_ */
