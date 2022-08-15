#ifndef COMMUNICATION_STACK_NM_H_
#define COMMUNICATION_STACK_NM_H_

#include "Platform_Types.h"

typedef struct sFrNm_PCConfigType
{
  uint8 neverUsed; /**< dummy entry for the config structure in the configuration variant precompile which is not used by the code. */
} FrNm_PCConfigType;

typedef FrNm_PCConfigType FrNm_ConfigType;

typedef FrNm_PCConfigType CanNm_ConfigType;

extern void Nm_Init(void);
extern void Nm_MainFunction();
extern void FrNm_Init(const FrNm_ConfigType *const frnmConfigPtr);
extern void CanNm_Init(const CanNm_ConfigType *const canmConfigPtr);
extern void FrNm_MainFunction();
extern void CanNm_MainFunction();

#endif /* COMMUNICATION_STACK_NM_H_ */
