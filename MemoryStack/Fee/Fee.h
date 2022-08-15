#ifndef MEMORY_STACK_FEE_FEE_H_
#define MEMORY_STACK_FEE_FEE_H_

typedef enum MemIf_Status
{
   MEMIF_UNINIT,
   MEMIF_IDLE,
   MEMIF_BUSY,
   MEMIF_BUSY_INTERNAL
} MemIf_StatusType;

extern void Fee_Init(void);

extern Std_ReturnType Fee_Write(uint16 BlockNumber, uint8 *DataBufferPtr);

extern Std_ReturnType Fee_Read(uint16 BlockNumber, uint8 Offset, uint8 *DataBufferPtr, uint8 Length);

extern void Fee_MainFunction(void);

extern MemIf_StatusType Fee_GetStatus(void);

extern void Fee_Cancel(void);

extern void Fee_JobEndNotification(void);

extern void Fee_JobErrorNotification(void);

#endif /* MEMORY_STACK_FEE_FEE_H_ */
