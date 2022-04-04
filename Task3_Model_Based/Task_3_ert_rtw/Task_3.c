/*
 * File: Task_3.c
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

#include "Task_3.h"
#include "Task_3_private.h"

/* Block signals (default storage) */
B_Task_3_T Task_3_B;

/* External inputs (root inport signals with default storage) */
ExtU_Task_3_T Task_3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task_3_T Task_3_Y;

/* Real-time model */
static RT_MODEL_Task_3_T Task_3_M_;
RT_MODEL_Task_3_T *const Task_3_M = &Task_3_M_;

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem2'
 *    '<Root>/If Action Subsystem3'
 */
void Task_3_IfActionSubsystem2(char_T rty_Out1[256])
{
  /* StringConstant: '<S3>/String Constant' */
  strncpy(&rty_Out1[0], &Task_3_ConstP.pooled1[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem4'
 *    '<Root>/If Action Subsystem5'
 */
void Task_3_IfActionSubsystem4(char_T rty_Out1[256])
{
  /* StringConstant: '<S5>/String Constant' */
  strncpy(&rty_Out1[0], &Task_3_ConstP.pooled2[0], 255U);
  rty_Out1[255] = '\x00';
}

/* Model step function */
void Task_3_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
   *  ActionPort: '<S1>/Action Port'
   */
  /* If: '<Root>/If' incorporates:
   *  Merge: '<Root>/Merge'
   *  StringConstant: '<S1>/String Constant'
   */
  strncpy(&Task_3_B.Merge[0], &Task_3_ConstP.StringConstant_String[0], 255U);

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */

  /* Merge: '<Root>/Merge' */
  Task_3_B.Merge[255] = '\x00';

  /* Outport: '<Root>/Out1' */
  strncpy(&Task_3_Y.Out1[0], &Task_3_B.Merge[0], 255U);
  Task_3_Y.Out1[255] = '\x00';
}

/* Model initialize function */
void Task_3_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Task_3_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
