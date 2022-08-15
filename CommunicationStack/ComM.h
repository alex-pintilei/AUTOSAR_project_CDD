
#ifndef COMMUNICATION_STACK_COMM_H_
#define COMMUNICATION_STACK_COMM_H_

    #ifndef COMM_NO_COMMUNICATION
        #define COMM_NO_COMMUNICATION 0U
    #endif
    #ifndef COMM_SILENT_COMMUNICATION
        #define COMM_SILENT_COMMUNICATION 1U
    #endif
    #ifndef COMM_FULL_COMMUNICATION
        #define COMM_FULL_COMMUNICATION 2U
    #endif
    
typedef uint8  ComM_ModeType;
typedef uint8  ComM_UserHandleType;

extern void ComM_Init(void);

extern void ComM_MainFunction(void);

extern Std_ReturnType ComM_RequestComMode(ComM_UserHandleType User, ComM_ModeType ComMode);


#endif /* COMMUNICATION_STACK_COMM_H_ */
