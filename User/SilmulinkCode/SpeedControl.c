/*
 * File: SpeedControl.c
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

#include "SpeedControl.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
SpeedControl_DW SpeedControl_DW_l;

/* External inputs (root inport signals with default storage) */
SpeedControl_ExtU SpeedControl_U;

/* External outputs (root outports fed by signals with default storage) */
SpeedControl_ExtY SpeedControl_Y;

/* Model step function */
void SpeedControl_step(void)
{
  static real32_T delay1 = 0;
  static real32_T delay0 = 0;
  real32_T rtb_IqRefSat;
  real32_T rtb_KI;
  real32_T rtb_SpeedError;

  /* Product: '<Root>/KI' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/RPara'
   *  Inport: '<Root>/Vdc'
   *  Product: '<Root>/Divide1'
   *  Product: '<Root>/Divide3'
   */
  rtb_KI = SpeedControl_U.RPara / 0.000159154937F * (6.28318548F /
    SpeedControl_U.Vdc);

  /* Gain: '<Root>/KPfac' incorporates:
   *  Inport: '<Root>/LPara'
   *  Inport: '<Root>/RPara'
   *  Product: '<Root>/Divide'
   *  Product: '<Root>/KP'
   */
  if(rtb_KI < 0.00001f)
  {
	  rtb_IqRefSat = 0.00001f;
  }
  else{
	  rtb_IqRefSat = SpeedControl_U.LPara / SpeedControl_U.RPara * rtb_KI * 0.5F;  
  }
  

  /* Outport: '<Root>/CurrentKP' */
  SpeedControl_Y.CurrentKP = rtb_IqRefSat;

  /* Outport: '<Root>/CurrentKI' */
  SpeedControl_Y.CurrentKI = rtb_KI;

  /* Sum: '<Root>/SpeedError' incorporates:
   *  Inport: '<Root>/SpeedAct'
   *  Inport: '<Root>/SpeedRef'
   */
  
  rtb_SpeedError = SpeedControl_U.SpeedRef - SpeedControl_U.SpeedAct;
  if(rtb_SpeedError > 300)
  {
	  rtb_SpeedError = 300;
  }
  /* Sum: '<Root>/Add1' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Ts'
   *  Delay: '<Root>/Delay'
   *  Delay: '<Root>/Delay1'
   *  Product: '<Root>/Product2'
   *  Product: '<Root>/SpeedItem'
   *  Sum: '<Root>/Add'
   */
  rtb_KI = (delay0 + rtb_SpeedError) * (rtb_KI * 4.0E-3F)
    * 0.01F * 0.5F + delay1;

  /* Sum: '<Root>/Add2' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Product: '<Root>/Product1'
   *  Product: '<Root>/SpeedPTerm'
   */
  rtb_IqRefSat = rtb_IqRefSat * 5.0E-6F * rtb_SpeedError + rtb_KI;

  /* Saturate: '<Root>/SpeedPISat' */
  if (rtb_IqRefSat > 1.0F) {
    rtb_IqRefSat = 1.0F;
  } else if (rtb_IqRefSat < 0.0F) {
    rtb_IqRefSat = 0.0F;
  }

  /* Outport: '<Root>/IqRef' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Product: '<Root>/IqRefInt'
   *  Saturate: '<Root>/IqRefSat'
   *  Saturate: '<Root>/SpeedPISat'
   */
  SpeedControl_Y.IqRef = rtb_IqRefSat * 3.0F;

  /* Update for Delay: '<Root>/Delay' */
  delay0 = rtb_SpeedError;

  /* Update for Delay: '<Root>/Delay1' */
  delay1 = rtb_KI;
}

/* Model initialize function */
void SpeedControl_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
