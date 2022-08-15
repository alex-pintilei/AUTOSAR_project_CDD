# AUTOSAR_project_CDD

The purpose of this project is to learn about AUTOSAR, how to integrate and see how it work.

This is an example project for integration of a new component "AUTOSAR CDD" that implements some specific requirements, listed below:

- AUTOSAR_CDD must save a history of the car
- AUTOSAR_CDD must read wheel speed, mileage and engine speed
- AUTOSAR_CDD must provide a history of data to the Tester/Service
- AUTOSAR_CDD must provide information to other ECUs in the car

The new component "AUTOSAR CDD" is able to connect to each Autosar layer, described in the below picture: 

![AUTOSAR_layers](https://user-images.githubusercontent.com/32928448/184497802-5f816f29-3450-4185-bb88-112cff7a195a.png)

#### > Connecting AUTOSAR_CDD component with _SystemStack_ by implementing the below requirements (workflow detailed in the below picture):

- AUTOSAR_CDD must read every 10ms the signals that provide information about Wheel Speed, Engine RPM and Car Mileage.
- AUTOSAR_CDD must be initialized before BswM_Init().
- AUTOSAR_CDD must enter the stop state before the EcuM_ShutDown() interface is called

Connection between AUTOSAR_CDD-SystemStack detailed in the next picture:

![AUTOSAR_CDD-SystemStack](https://user-images.githubusercontent.com/32928448/184510322-026e58c1-39fa-4803-8547-7e145ad61cd6.png)

#### > Connecting AUTOSAR_CDD component with _DiagStack_ by implementing the below requirements (workflow detailed in the below picture):
- Using the read service (0x22) configured in DCM for the defined DIDs, the maximum speed and rpm at T time will be read.
    - To read the maximum speed, the DID 0xAABB is used, configured in DCM
    - To read the maximum speed, the DID 0xAACC is used, configured in the DCM
    - To read the mileage, the DID 0xAADD is used, configured in DCM 

- If the read mileage value form the received signal is less with 100 km than the value written to the non-volatile memory, then AUTOSAR_CDD will set an error.
    - The set error will have the Id 0xD12244, configured in DEM

![DiagStack-Status](https://user-images.githubusercontent.com/32928448/184627250-6bb32278-4a75-4979-be83-58d5d5a60204.png)