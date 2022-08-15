#ifndef COMMUNICATION_STACK_FRSM_H_
#define COMMUNICATION_STACK_FRSM_H_

#include "Platform_Types.h"

typedef struct sFrSM_PCConfigType
{
  uint8 neverUsed; /**< dummy entry */
} FrSM_PCConfigType;

typedef FrSM_PCConfigType FrSM_ConfigType;

extern void FrSM_Init(const FrSM_ConfigType *const ConfigPtr);
extern void FrSm_MainFunction(void);

#endif /* COMMUNICATION_STACK_FRSM_H_ */
