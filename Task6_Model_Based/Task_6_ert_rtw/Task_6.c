/*
 * File: Task_6.c
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

#include "Task_6.h"
#include "Task_6_private.h"

/* Block states (default storage) */
DW_Task_6_T Task_6_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Task_6_T Task_6_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task_6_T Task_6_Y;

/* Real-time model */
static RT_MODEL_Task_6_T Task_6_M_;
RT_MODEL_Task_6_T *const Task_6_M = &Task_6_M_;

/* Model step function */
void Task_6_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Task_6_DW.temporalCounter_i1 < 7U) {
    Task_6_DW.temporalCounter_i1++;
  }

  if (Task_6_DW.is_active_c3_Task_6 == 0U) {
    Task_6_DW.is_active_c3_Task_6 = 1U;
    Task_6_DW.temporalCounter_i1 = 0U;
  } else {
    if (Task_6_DW.temporalCounter_i1 >= 5) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out1' incorporates:
       *  Chart: '<S2>/CheckSwitch'
       *  Chart: '<S2>/Turn On Led'
       *  Inport: '<Root>/In1'
       */
      /*  check switch */
      /*  ledStatus */
      Task_6_Y.Out1 = (Task_6_U.In1 == 1.0);

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      Task_6_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Task_6_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Task_6_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
