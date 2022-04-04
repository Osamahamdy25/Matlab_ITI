/*
 * File: Task_6.h
 *
 * Code generated for Simulink model 'Task_6'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Apr  4 15:06:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_6_h_
#define RTW_HEADER_Task_6_h_
#ifndef Task_6_COMMON_INCLUDES_
#define Task_6_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_6_COMMON_INCLUDES_ */

#include "Task_6_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Task_6;         /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Task_6_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Task_6_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Task_6_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_6_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Task_6_T Task_6_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_6_T Task_6_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_6_T Task_6_Y;

/* Model entry point functions */
extern void Task_6_initialize(void);
extern void Task_6_step(void);
extern void Task_6_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_6_T *const Task_6_M;

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
 * '<Root>' : 'Task_6'
 * '<S1>'   : 'Task_6/Chart'
 * '<S2>'   : 'Task_6/Function-Call Subsystem'
 * '<S3>'   : 'Task_6/Function-Call Subsystem/CheckSwitch'
 * '<S4>'   : 'Task_6/Function-Call Subsystem/Turn On Led'
 */
#endif                                 /* RTW_HEADER_Task_6_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
