/*
 * File: Math_Calculator.c
 *
 * Code generated for Simulink model 'Math_Calculator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Mar  2 03:22:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Math_Calculator.h"
#include "Math_Calculator_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_Math_Calculator_T Math_Calculator_Y;

/* Real-time model */
static RT_MODEL_Math_Calculator_T Math_Calculator_M_;
RT_MODEL_Math_Calculator_T *const Math_Calculator_M = &Math_Calculator_M_;

/* Model step function */
void Math_Calculator_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant2'
   *  Sum: '<Root>/Sum'
   */
  Math_Calculator_Y.Output = 2.0;

  /* Outport: '<Root>/Output1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant2'
   *  Sum: '<Root>/Subtract'
   */
  Math_Calculator_Y.Output1 = 0.0;

  /* Outport: '<Root>/Output2' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Product: '<Root>/Product'
   */
  Math_Calculator_Y.Output2 = 1.0;

  /* Outport: '<Root>/Output3' incorporates:
   *  Constant: '<Root>/Constant'
   *  Product: '<Root>/Divide'
   */
  Math_Calculator_Y.Output3 = 1.0;
}

/* Model initialize function */
void Math_Calculator_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Math_Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
