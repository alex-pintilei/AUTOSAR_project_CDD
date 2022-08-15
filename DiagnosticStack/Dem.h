#ifndef DIAGNOSTIC_STACK_DEM_H_
#define DIAGNOSTIC_STACK_DEM_H_

typedef struct
{
   uint8 Parameter;
}Dem_ConfigType;


/*Function Declaration*/
extern void Dem_PreInit(void);

extern void Dem_Init(const Dem_ConfigType * ConfigPtr);

extern Std_ReturnType Dem_SetOperationCycleState(uint8 OperationCycleId,uint8 CycleState);

extern void Dem_MainFunction(void);

extern void Dem_Shutdown(void);

#endif /* DIAGNOSTIC_STACK_DEM_H_ */
