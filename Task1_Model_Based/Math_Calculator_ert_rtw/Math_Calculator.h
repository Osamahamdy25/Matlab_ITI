/*
 * File: Math_Calculator.h
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

#ifndef RTW_HEADER_Math_Calculator_h_
#define RTW_HEADER_Math_Calculator_h_
#ifndef Math_Calculator_COMMON_INCLUDES_
#define Math_Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Math_Calculator_COMMON_INCLUDES_ */

#include "Math_Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
} ExtY_Math_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Math_Calculator_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Math_Calculator_T Math_Calculator_Y;

/* Model entry point functions */
extern void Math_Calculator_initialize(void);
extern void Math_Calculator_step(void);
extern void Math_Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Math_Calculator_T *const Math_Calculator_M;

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
 * '<Root>' : 'Math_Calculator'
 */
#endif                                 /* RTW_HEADER_Math_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
