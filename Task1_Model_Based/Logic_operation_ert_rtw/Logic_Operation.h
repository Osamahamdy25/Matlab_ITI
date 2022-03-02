/*
 * File: Logic_Operation.h
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

#ifndef RTW_HEADER_Logic_Operation_h_
#define RTW_HEADER_Logic_Operation_h_
#ifndef Logic_Operation_COMMON_INCLUDES_
#define Logic_Operation_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Logic_Operation_COMMON_INCLUDES_ */

#include "Logic_Operation_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const boolean_T AND;                 /* '<Root>/AND' */
  const boolean_T OR;                  /* '<Root>/OR' */
  const boolean_T XOR;                 /* '<Root>/XOR' */
  const boolean_T NOT;                 /* '<Root>/NOT' */
  const boolean_T NOT1;                /* '<Root>/NOT1' */
  const boolean_T NOT2;                /* '<Root>/NOT2' */
} ConstB_Logic_Operation_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Output;                    /* '<Root>/Output' */
  boolean_T Output1;                   /* '<Root>/Output1' */
  boolean_T Output2;                   /* '<Root>/Output2' */
  boolean_T Output3;                   /* '<Root>/Output3' */
  boolean_T Output4;                   /* '<Root>/Output4' */
} ExtY_Logic_Operation_T;

/* Real-time Model Data Structure */
struct tag_RTM_Logic_Operation_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Logic_Operation_T Logic_Operation_Y;
extern const ConstB_Logic_Operation_T Logic_Operation_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Logic_Operation_initialize(void);
extern void Logic_Operation_step(void);
extern void Logic_Operation_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Logic_Operation_T *const Logic_Operation_M;

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
 * '<Root>' : 'Logic_Operation'
 */
#endif                                 /* RTW_HEADER_Logic_Operation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
