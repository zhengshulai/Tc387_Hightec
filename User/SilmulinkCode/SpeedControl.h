/*
 * File: SpeedControl.h
 *
 * Code generated for Simulink model 'SpeedControl'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jun 14 10:28:42 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef SpeedControl_h_
#define SpeedControl_h_
#ifndef SpeedControl_COMMON_INCLUDES_
#define SpeedControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SpeedControl_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<Root>/Delay' */
  real32_T Delay1_DSTATE;              /* '<Root>/Delay1' */
} SpeedControl_DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T SpeedAct;                   /* '<Root>/SpeedAct' */
  real32_T SpeedRef;                   /* '<Root>/SpeedRef' */
  real32_T LPara;                      /* '<Root>/LPara' */
  real32_T RPara;                      /* '<Root>/RPara' */
  real32_T Vdc;                        /* '<Root>/Vdc' */
} SpeedControl_ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T CurrentKP;                  /* '<Root>/CurrentKP' */
  real32_T CurrentKI;                  /* '<Root>/CurrentKI' */
  real32_T IqRef;                      /* '<Root>/IqRef' */
  real32_T IdRef;                      /* '<Root>/IdRef' */
} SpeedControl_ExtY;

/* Block signals and states (default storage) */
extern SpeedControl_DW SpeedControl_DW_l;

/* External inputs (root inport signals with default storage) */
extern SpeedControl_ExtU SpeedControl_U;

/* External outputs (root outports fed by signals with default storage) */
extern SpeedControl_ExtY SpeedControl_Y;

/* Model entry point functions */
extern void SpeedControl_initialize(void);
extern void SpeedControl_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/KIfac' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'SpeedControl'
 */
#endif                                 /* SpeedControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
