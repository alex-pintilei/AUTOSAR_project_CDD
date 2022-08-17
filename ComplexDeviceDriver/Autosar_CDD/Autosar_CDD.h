#ifndef COMPLEXDEVICEDRIVER_AUTOSAR_CDD_AUTOSAR_CDD_H_
#define COMPLEXDEVICEDRIVER_AUTOSAR_CDD_AUTOSAR_CDD_H_

extern void Autosar_CDD_Init(void);
extern void Autosar_CDD_MainFunction(void);
extern void Autosar_CDD_Stop(void);
extern Std_ReturnType Autosar_CDD_ReadDataByIdentifierKilometer(uint8 OpStatus, uint8 *Data);
extern Std_ReturnType Autosar_CDD_ReadDataByIdentifierSpeed(uint8 OpStatus, uint8 *Data);
extern Std_ReturnType Autosar_CDD_ReadDataByIdentifierEngine(uint8 OpStatus, uint8 *Data);

/*             Global Defines               */

/*       NvM relevant Defines            */

/* NvM Blocks ID*/
#define AUTOSAR_CDD_Kilometer_Block_ID   5
#define AUTOSAR_CDD_Speed_Block_ID       6
#define AUTOSAR_CDD_Engine_Block_ID      7

/* DEM Event ID*/
#define AUTOSAR_CDD_Kilometer_Event_ID  455

/*NvM write interface*/
#define AUTOSAR_CDD_NvM_Write_Engine_Block(data)        Rte_Call_AUTOSAR_CDD_NvM_Engine_Block_WriteBlock(data)
#define AUTOSAR_CDD_NvM_Write_Kilometer_Block( data)    Rte_Call_AUTOSAR_CDD_NvM_Kilometer_Block_WriteBlock(data)
#define AUTOSAR_CDD_NvM_Write_Speed_Block(data)         Rte_Call_AUTOSAR_CDD_NvM_Speed_Block_WriteBlock(data)

/*NvM read interface*/
#define AUTOSAR_CDD_NvM_Read_Engine_Block(data)       Rte_Call_AUTOSAR_CDD_NvM_Engine_Block_ReadBlock(data)
#define AUTOSAR_CDD_NvM_Read_Kilometer_Block(data)    Rte_Call_AUTOSAR_CDD_NvM_Kilometer_Block_ReadBlock(data)
#define AUTOSAR_CDD_NvM_Read_Speed_Block(data)        Rte_Call_AUTOSAR_CDD_NvM_Speed_Block_ReadBlock(data)

/* COM relevant Defines*/
#define AUTOSAR_CDD_COM_Engine_Signal_ID              5
#define AUTOSAR_CDD_COM_Kilometer_Signal_ID           6
#define AUTOSAR_CDD_COM_Speed_Signal_ID               7

#define AUTOSAR_CDD_COM_Read_Engine_Value(data)       Rte_Read_ReadEnginePort_Engine(data)
#define AUTOSAR_CDD_COM_Read_Kilometer_Value(data)    Rte_Read_ReadKilometerPort_Kilometer(data)
#define AUTOSAR_CDD_COM_Read_Speed_Value(data)        Rte_Read_ReadSpeedPort_Speed(data)

#define AUTOSAR_CDD_SET_EVENT_FAILED                  0x01
#define AUTOSAR_CDD_SET_EVENT_PASSED                  0x00


/*DEM Set Event interface*/
#define AUTOSAR_CDD_DEM_Kilometer_SetEventStatus(EventStatus)   Dem_SetEventStatus(AUTOSAR_CDD_Kilometer_Event_ID, EventStatus)


#endif /* COMPLEXDEVICEDRIVER_AUTOSAR_CDD_AUTOSAR_CDD_H_ */
