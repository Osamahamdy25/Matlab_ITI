/*
 * File: Task_5.h
 *
 * Code generated for Simulink model 'Task_5'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Apr  4 21:44:14 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_5_h_
#define RTW_HEADER_Task_5_h_
#ifndef Task_5_COMMON_INCLUDES_
#define Task_5_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_5_COMMON_INCLUDES_ */

#include "Task_5_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
} ExtU_Task_5_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_5_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_5_T Task_5_U;

/* Model entry point functions */
extern void Task_5_initialize(void);
extern void Task_5_step(void);
extern void Task_5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_5_T *const Task_5_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Task_5'
 * '<S1>'   : 'Task_5/Enumerated Constant'
 */
#endif                                 /* RTW_HEADER_Task_5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
