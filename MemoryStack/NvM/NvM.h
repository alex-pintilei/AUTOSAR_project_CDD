#include "NvM_Types.h"

#ifndef MEMORY_STACK_NVM_NVM_H_
#define MEMORY_STACK_NVM_NVM_H_

Std_ReturnType NvM_ReadBlock(uint16 Block_Id,const void * Data );
Std_ReturnType NvM_ReadBlock(uint16 Block_Id, void * Data );
Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType Block_Id, NvM_RequestResultType *RequestResultPtr);
void NvM_Init(void);
void NvM_ReadAll(void);
void NvM_WriteAll(void);
void NvM_SetRamBlockStatus(NvM_BlockIdType Block_Id, boolean BlockChanged);

#endif /* MEMORY_STACK_NVM_NVM_H_ */
