/*
 * File: CurrentControl.h
 *
 * Code generated for Simulink model 'CurrentControl'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jun 14 10:30:13 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef CurrentControl_h_
#define CurrentControl_h_
#ifndef CurrentControl_COMMON_INCLUDES_
#define CurrentControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CurrentControl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct CurrentControl_tag_RTM CurrentControl_RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<Root>/Delay' */
  real32_T Delay1_DSTATE;              /* '<Root>/Delay1' */
  real32_T Delay2_DSTATE;              /* '<Root>/Delay2' */
  real32_T Delay3_DSTATE;              /* '<Root>/Delay3' */
  uint8_T ONE;                         /* '<Root>/Chart' */
  uint8_T TWO;                         /* '<Root>/Chart' */
  uint8_T THREE;                       /* '<Root>/Chart' */
  uint8_T FOUR;                        /* '<Root>/Chart' */
  uint8_T FIVE;                        /* '<Root>/Chart' */
  uint8_T ZERO;                        /* '<Root>/Chart' */
} CurrentControl_DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: _cosTable_tableData
   * Referenced by: '<Root>/cosTable'
   */
  real32_T _cosTable_tableData[1024];

  /* Computed Parameter: _sinTable_tableData
   * Referenced by: '<Root>/sinTable'
   */
  real32_T _sinTable_tableData[1024];

  /* Pooled Parameter (Expression: sinCosVector_T)
   * Referenced by:
   *   '<Root>/Tk1CosTable'
   *   '<Root>/Tk1SinTable'
   *   '<Root>/TkCosTable'
   *   '<Root>/TkSinTable'
   */
  real32_T _pooled6[14];

  /* Pooled Parameter (Expression: 0:1:1023)
   * Referenced by:
   *   '<Root>/cosTable'
   *   '<Root>/sinTable'
   */
  int16_T _pooled8[1024];

  /* Pooled Parameter (Expression: sinCosVector_x)
   * Referenced by:
   *   '<Root>/Tk1CosTable'
   *   '<Root>/Tk1SinTable'
   *   '<Root>/TkCosTable'
   *   '<Root>/TkSinTable'
   */
  uint16_T _pooled9[14];
} CurrentControl_ConstP;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T IqRef;                      /* '<Root>/IqRef' */
  real32_T IdRef;                      /* '<Root>/IdRef' */
  real32_T CurrentKP;                  /* '<Root>/CurrentKP' */
  real32_T CurrentKI;                  /* '<Root>/CurrentKI' */
  real32_T IuAct;                      /* '<Root>/IuAct' */
  real32_T IvAct;                      /* '<Root>/IvAct' */
  real32_T IwAct;                      /* '<Root>/IwAct' */
  int16_T AngleEnc;                    /* '<Root>/AngleEnc' */
} CurrentControl_ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Uduty;                      /* '<Root>/Uduty' */
  uint32_T Vduty;                      /* '<Root>/Vduty' */
  uint32_T Wduty;                      /* '<Root>/Wduty' */
} CurrentControl_ExtY;

/* Real-time Model Data Structure */
struct CurrentControl_tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern CurrentControl_DW CurrentControl_DW_l;

/* External inputs (root inport signals with default storage) */
extern CurrentControl_ExtU CurrentControl_U;

/* External outputs (root outports fed by signals with default storage) */
extern CurrentControl_ExtY CurrentControl_Y;

/* Constant parameters (default storage) */
extern const CurrentControl_ConstP CurrentControl_ConstP_d;

/* Model entry point functions */
extern void CurrentControl_initialize(void);
extern void CurrentControl_step(void);

/* Real-time Model object */
extern CurrentControl_RT_MODEL *const CurrentControl_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/Data Type Propagation' : Unused code path elimination
 * Block '<S3>/Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/Data Type Propagation' : Unused code path elimination
 * Block '<S4>/Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/Data Type Propagation' : Unused code path elimination
 * Block '<Root>/Add2' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<Root>/Constant5' : Unused code path elimination
 * Block '<Root>/Constant6' : Unused code path elimination
 * Block '<Root>/Constant7' : Unused code path elimination
 * Block '<Root>/Constant8' : Unused code path elimination
 * Block '<Root>/Delay4' : Unused code path elimination
 * Block '<Root>/Relational Operator' : Unused code path elimination
 * Block '<Root>/Switch3' : Unused code path elimination
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
 * '<Root>' : 'CurrentControl'
 * '<S1>'   : 'CurrentControl/Chart'
 * '<S2>'   : 'CurrentControl/TbSat'
 * '<S3>'   : 'CurrentControl/TmSat'
 * '<S4>'   : 'CurrentControl/TsSat'
 */
#endif                                 /* CurrentControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
