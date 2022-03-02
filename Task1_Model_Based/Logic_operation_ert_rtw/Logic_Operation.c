/*
 * File: Logic_Operation.c
 *
 * Code generated for Simulink model 'Logic_Operation'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Mar  2 03:21:33 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Logic_Operation.h"
#include "Logic_Operation_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_Logic_Operation_T Logic_Operation_Y;

/* Real-time model */
static RT_MODEL_Logic_Operation_T Logic_Operation_M_;
RT_MODEL_Logic_Operation_T *const Logic_Operation_M = &Logic_Operation_M_;

/* Model step function */
void Logic_Operation_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void Logic_Operation_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Output' */
  Logic_Operation_Y.Output = Logic_Operation_ConstB.AND;

  /* ConstCode for Outport: '<Root>/Output1' */
  Logic_Operation_Y.Output1 = Logic_Operation_ConstB.OR;

  /* ConstCode for Outport: '<Root>/Output2' */
  Logic_Operation_Y.Output2 = Logic_Operation_ConstB.NOT;

  /* ConstCode for Outport: '<Root>/Output3' */
  Logic_Operation_Y.Output3 = Logic_Operation_ConstB.NOT1;

  /* ConstCode for Outport: '<Root>/Output4' */
  Logic_Operation_Y.Output4 = Logic_Operation_ConstB.NOT2;
}

/* Model terminate function */
void Logic_Operation_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
