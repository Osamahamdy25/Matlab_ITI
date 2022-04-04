/*
 * File: Task_3.h
 *
 * Code generated for Simulink model 'Task_3'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Mar 24 14:55:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_3_h_
#define RTW_HEADER_Task_3_h_
#include <string.h>
#ifndef Task_3_COMMON_INCLUDES_
#define Task_3_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_3_COMMON_INCLUDES_ */

#include "Task_3_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<Root>/Merge' */
} B_Task_3_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Pooled Parameter (Expression: "Good")
   * Referenced by:
   *   '<S3>/String Constant'
   *   '<S4>/String Constant'
   */
  char_T pooled1[256];

  /* Pooled Parameter (Expression: "Successed")
   * Referenced by:
   *   '<S5>/String Constant'
   *   '<S6>/String Constant'
   */
  char_T pooled2[256];
} ConstP_Task_3_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Task_3_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_Task_3_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_3_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Task_3_T Task_3_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_3_T Task_3_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_3_T Task_3_Y;

/* Constant parameters (default storage) */
extern const ConstP_Task_3_T Task_3_ConstP;

/* Model entry point functions */
extern void Task_3_initialize(void);
extern void Task_3_step(void);
extern void Task_3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_3_T *const Task_3_M;

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
 * '<Root>' : 'Task_3'
 * '<S1>'   : 'Task_3/If Action Subsystem'
 * '<S2>'   : 'Task_3/If Action Subsystem1'
 * '<S3>'   : 'Task_3/If Action Subsystem2'
 * '<S4>'   : 'Task_3/If Action Subsystem3'
 * '<S5>'   : 'Task_3/If Action Subsystem4'
 * '<S6>'   : 'Task_3/If Action Subsystem5'
 */
#endif                                 /* RTW_HEADER_Task_3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
