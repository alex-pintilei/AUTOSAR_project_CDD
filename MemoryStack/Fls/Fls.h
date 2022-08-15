#ifndef MEMORY_STACK_FLS_FLS_H_
#define MEMORY_STACK_FLS_FLS_H_

typedef struct
{
   uint8 Dummy;
} Fls_ConfigType;

typedef uint32 Fls_AddressType;

typedef uint32 Fls_LengthType;

extern void Fls_Init(const Fls_ConfigType *ConfigPtr);

extern void Fls_MainFunction(void);

extern Std_ReturnType Fls_Write(Fls_AddressType TargetAddress, const uint8 *SourceAddressPtr, Fls_LengthType Length);

extern Std_ReturnType Fls_Read(Fls_AddressType TargetAddress, uint8 *SourceAddressPtr, Fls_LengthType Length);

extern Std_ReturnType Fls_Erase(Fls_AddressType TargetAddress, Fls_LengthType Length);

#endif /* MEMORY_STACK_FLS_FLS_H_ */
