/*
 * File: CurrentControl.c
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

#include "CurrentControl.h"
#include "rtwtypes.h"
#include <math.h>

/* Block signals and states (default storage) */
CurrentControl_DW CurrentControl_DW_l;

/* External inputs (root inport signals with default storage) */
CurrentControl_ExtU CurrentControl_U;

/* External outputs (root outports fed by signals with default storage) */
CurrentControl_ExtY CurrentControl_Y;

/* Real-time model */
static CurrentControl_RT_MODEL CurrentControl_M_;
CurrentControl_RT_MODEL *const CurrentControl_M = &CurrentControl_M_;
static real32_T look1_is16lftf_bingc(int16_T u0, const int16_T bp0[], const
  real32_T table[], uint32_T maxIndex);
static real32_T look1_iu16lftf_bingc(uint16_T u0, const uint16_T bp0[], const
  real32_T table[], uint32_T maxIndex);

/* Forward declaration for local functions */
static uint8_T GetSection(boolean_T UbetaPos, boolean_T UalphaPos, boolean_T
  UalphaNeg, boolean_T UxPos, boolean_T UxNeg);
static real32_T look1_is16lftf_bingc(int16_T u0, const int16_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear Lagrange'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    int16_T bpLeftVar;
    bpLeftVar = bp0[iLeft];
    frac = (real32_T)(uint32_T)(u0 - bpLeftVar) / (real32_T)(uint32_T)(bp0[iLeft
      + 1U] - bpLeftVar);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear Lagrange'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (1.0F - frac) * table[iLeft] + table[iLeft + 1U] * frac;
}

static real32_T look1_iu16lftf_bingc(uint16_T u0, const uint16_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear Lagrange'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    uint16_T bpLeftVar;
    bpLeftVar = bp0[iLeft];
    frac = (real32_T)((uint32_T)u0 - bpLeftVar) / (real32_T)((uint32_T)bp0[iLeft
      + 1U] - bpLeftVar);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear Lagrange'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (1.0F - frac) * table[iLeft] + table[iLeft + 1U] * frac;
}

/* Function for Chart: '<Root>/Chart' */
static uint8_T GetSection(boolean_T UbetaPos, boolean_T UalphaPos, boolean_T
  UalphaNeg, boolean_T UxPos, boolean_T UxNeg)
{
  uint8_T Sec;
  boolean_T tmp;
  tmp = (UbetaPos && UalphaPos);
  if (tmp && UxPos) {
    Sec = CurrentControl_DW_l.ZERO;
  } else {
    boolean_T tmp_1;
    tmp_1 = !UxPos;
    if (tmp && tmp_1) {
      Sec = 1U;
    } else {
      tmp = (UbetaPos && (!UalphaPos));
      if (tmp && UxNeg) {
        Sec = 2U;
      } else if (tmp && (!UxNeg)) {
        Sec = 1U;
      } else {
        boolean_T tmp_0;
        tmp = !UbetaPos;
        tmp_0 = (tmp && UalphaNeg);
        if (tmp_0 && UxPos) {
          Sec = 4U;
        } else if (tmp_0 && tmp_1) {
          Sec = 3U;
        } else if (tmp && (!UalphaNeg) && UxNeg) {
          Sec = 4U;
        } else {
          Sec = 5U;
        }
      }
    }
  }

  return Sec;
}

/* Model step function */
void CurrentControl_step(void)
{
  int32_T rtb_MultiportSwitch_idx_0;
  int32_T rtb_MultiportSwitch_idx_1;
  int32_T rtb_MultiportSwitch_idx_2;
  real32_T rtb_Add1;
  real32_T rtb_Add6;
  real32_T rtb_Floor;
  real32_T rtb_Floor1;
  real32_T rtb_IdError;
  real32_T rtb_IqError;
  real32_T rtb_Tk1On;
  real32_T rtb_Tk1SinTable;
  real32_T rtb_cosVal;
  uint32_T rtb_Switch4_idx_0;
  uint32_T rtb_Switch4_idx_1;
  uint32_T rtb_TbInt;
  uint32_T rtb_TbInt_tmp;
  uint16_T rtb_cosK1;
  uint8_T Sec;

  /* Lookup_n-D: '<Root>/cosTable' incorporates:
   *  Inport: '<Root>/AngleEnc'
   */
  rtb_cosVal = look1_is16lftf_bingc(CurrentControl_U.AngleEnc,
    CurrentControl_ConstP_d._pooled8,
    CurrentControl_ConstP_d._cosTable_tableData, 1023U);

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/IvAct'
   *  Inport: '<Root>/IwAct'
   *  Sum: '<Root>/Subtract'
   */
  rtb_Floor = (CurrentControl_U.IvAct - CurrentControl_U.IwAct) * 0.577350259F;

  /* Lookup_n-D: '<Root>/sinTable' incorporates:
   *  Inport: '<Root>/AngleEnc'
   */
  rtb_Tk1SinTable = look1_is16lftf_bingc(CurrentControl_U.AngleEnc,
    CurrentControl_ConstP_d._pooled8,
    CurrentControl_ConstP_d._sinTable_tableData, 1023U);

  /* Sum: '<Root>/IdError' incorporates:
   *  Inport: '<Root>/IdRef'
   *  Inport: '<Root>/IuAct'
   *  Product: '<Root>/Product'
   *  Product: '<Root>/Product1'
   *  Sum: '<Root>/IdAct'
   */
  rtb_IdError = CurrentControl_U.IdRef - (CurrentControl_U.IuAct * rtb_cosVal +
    rtb_Floor * rtb_Tk1SinTable);

  /* Sum: '<Root>/Add1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant4'
   *  Delay: '<Root>/Delay'
   *  Delay: '<Root>/Delay1'
   *  Inport: '<Root>/CurrentKI'
   *  Product: '<Root>/IdItem'
   *  Sum: '<Root>/Add'
   */
  rtb_Add1 = (CurrentControl_DW_l.Delay_DSTATE + rtb_IdError) *
    CurrentControl_U.CurrentKI * 0.0001F * 0.5F +
    CurrentControl_DW_l.Delay1_DSTATE;

  /* Sum: '<Root>/Add4' incorporates:
   *  Inport: '<Root>/CurrentKP'
   *  Product: '<Root>/IdPTerm'
   */
  rtb_Floor1 = CurrentControl_U.CurrentKP * rtb_IdError + rtb_Add1;

  /* Saturate: '<Root>/UdReq' */
  if (rtb_Floor1 > 0.85F) {
    rtb_Floor1 = 0.85F;
  } else if (rtb_Floor1 < -0.85F) {
    rtb_Floor1 = -0.85F;
  }

  /* End of Saturate: '<Root>/UdReq' */

  /* Sum: '<Root>/IqError' incorporates:
   *  Inport: '<Root>/IqRef'
   *  Inport: '<Root>/IuAct'
   *  Product: '<Root>/Product2'
   *  Product: '<Root>/Product3'
   *  Sum: '<Root>/IqAct'
   */
  rtb_IqError = CurrentControl_U.IqRef - (rtb_Floor * rtb_cosVal -
    CurrentControl_U.IuAct * rtb_Tk1SinTable);

  /* Sum: '<Root>/Add6' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant2'
   *  Delay: '<Root>/Delay2'
   *  Delay: '<Root>/Delay3'
   *  Inport: '<Root>/CurrentKI'
   *  Product: '<Root>/IqItem'
   *  Sum: '<Root>/Add5'
   */
  rtb_Add6 = (CurrentControl_DW_l.Delay2_DSTATE + rtb_IqError) *
    CurrentControl_U.CurrentKI * 0.0001F * 0.5F +
    CurrentControl_DW_l.Delay3_DSTATE;

  /* Sum: '<Root>/Add8' incorporates:
   *  Inport: '<Root>/CurrentKP'
   *  Product: '<Root>/IqPTerm'
   */
  rtb_Floor = CurrentControl_U.CurrentKP * rtb_IqError + rtb_Add6;

  /* Saturate: '<Root>/UqReq' */
  if (rtb_Floor > 0.85F) {
    rtb_Floor = 0.85F;
  } else if (rtb_Floor < -0.85F) {
    rtb_Floor = -0.85F;
  }

  /* End of Saturate: '<Root>/UqReq' */

  /* Sum: '<Root>/Ubeta' incorporates:
   *  Product: '<Root>/Product6'
   *  Product: '<Root>/Product7'
   */
  rtb_Tk1On = rtb_Floor1 * rtb_Tk1SinTable + rtb_cosVal * rtb_Floor;

  /* Sum: '<Root>/Ualpha' incorporates:
   *  Product: '<Root>/Product4'
   *  Product: '<Root>/Product5'
   */
  rtb_Floor1 = rtb_Tk1SinTable * rtb_Floor - rtb_Floor1 * rtb_cosVal;

  /* Product: '<Root>/Product8' incorporates:
   *  Constant: '<Root>/Constant11'
   */
  rtb_Tk1SinTable = rtb_Tk1On * 0.577350259F;

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant9'
   *  Product: '<Root>/Product9'
   *  RelationalOperator: '<Root>/Relational Operator1'
   *  RelationalOperator: '<Root>/Relational Operator2'
   *  RelationalOperator: '<Root>/Relational Operator3'
   *  RelationalOperator: '<Root>/Relational Operator4'
   *  RelationalOperator: '<Root>/Relational Operator5'
   */
  Sec = GetSection((rtb_Tk1On > 0.0F), (rtb_Floor1 > 0.0F), (rtb_Floor1 < 0.0F),
                   (rtb_Tk1SinTable < rtb_Floor1), (rtb_Tk1SinTable <
    -rtb_Floor1));

  /* Product: '<Root>/sinK' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Sum: '<Root>/Add3'
   */
  rtb_cosK1 = (uint16_T)((uint8_T)(Sec + 1U) << 1);

  /* Rounding: '<Root>/Floor' incorporates:
   *  Constant: '<Root>/Constant15'
   *  Lookup_n-D: '<Root>/TkCosTable'
   *  Lookup_n-D: '<Root>/TkSinTable'
   *  Product: '<Root>/Product10'
   *  Product: '<Root>/Product12'
   *  Product: '<Root>/Product13'
   *  Sum: '<Root>/TkOn'
   *  Sum: '<Root>/cosK'
   *  Sum: '<Root>/cosK1'
   */
  rtb_Floor = floorf((look1_iu16lftf_bingc(rtb_cosK1,
    CurrentControl_ConstP_d._pooled9, CurrentControl_ConstP_d._pooled6, 13U) *
                      rtb_Floor1 - look1_iu16lftf_bingc((uint16_T)(rtb_cosK1 +
    1U), CurrentControl_ConstP_d._pooled9, CurrentControl_ConstP_d._pooled6, 13U)
                      * rtb_Tk1On) * 10000.0F);

  /* Product: '<Root>/sinK1' */
  rtb_cosK1 = (uint16_T)(Sec << 1);

  /* Rounding: '<Root>/Floor1' incorporates:
   *  Constant: '<Root>/Constant17'
   *  Lookup_n-D: '<Root>/Tk1CosTable'
   *  Lookup_n-D: '<Root>/Tk1SinTable'
   *  Product: '<Root>/Product11'
   *  Product: '<Root>/Product14'
   *  Product: '<Root>/Product15'
   *  Product: '<Root>/sinK1'
   *  Sum: '<Root>/Tk1On'
   *  Sum: '<Root>/cosK1'
   */
  rtb_Floor1 = floorf((look1_iu16lftf_bingc((uint16_T)(rtb_cosK1 + 1U),
    CurrentControl_ConstP_d._pooled9, CurrentControl_ConstP_d._pooled6, 13U) *
                       rtb_Tk1On - look1_iu16lftf_bingc(rtb_cosK1,
    CurrentControl_ConstP_d._pooled9, CurrentControl_ConstP_d._pooled6, 13U) *
                       rtb_Floor1) * 10000.0F);

  /* Switch: '<Root>/Switch4' incorporates:
   *  Logic: '<Root>/NOT'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  if ((Sec & 1U) == 0U) {
    rtb_Switch4_idx_0 = (uint32_T)rtb_Floor;
    rtb_Switch4_idx_1 = (uint32_T)rtb_Floor1;
  } else {
    rtb_Switch4_idx_0 = (uint32_T)rtb_Floor1;
    rtb_Switch4_idx_1 = (uint32_T)rtb_Floor;
  }

  /* End of Switch: '<Root>/Switch4' */

  /* Sum: '<Root>/TbInt' incorporates:
   *  Sum: '<Root>/TsInt'
   */
  rtb_TbInt_tmp = rtb_Switch4_idx_0 + rtb_Switch4_idx_1;
  rtb_TbInt = rtb_TbInt_tmp + 5000U;

  /* Switch: '<S2>/Switch2' incorporates:
   *  RelationalOperator: '<S2>/LowerRelop1'
   *  Sum: '<Root>/TbInt'
   */
  if (rtb_TbInt_tmp + 5000U > 10000U) {
    rtb_TbInt = 10000U;
  }

  /* End of Switch: '<S2>/Switch2' */

  /* Sum: '<Root>/TmInt' */
  rtb_Switch4_idx_0 = (rtb_Switch4_idx_1 - rtb_Switch4_idx_0) + 5000U;

  /* Switch: '<S3>/Switch2' incorporates:
   *  RelationalOperator: '<S3>/LowerRelop1'
   */
  if (rtb_Switch4_idx_0 > 10000U) {
    rtb_Switch4_idx_0 = 10000U;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Sum: '<Root>/TsInt' */
  rtb_Switch4_idx_1 = 5000U - rtb_TbInt_tmp;

  /* Switch: '<S4>/Switch2' incorporates:
   *  RelationalOperator: '<S4>/LowerRelop1'
   *  Sum: '<Root>/TsInt'
   */
  if (5000U - rtb_TbInt_tmp > 10000U) {
    rtb_Switch4_idx_1 = 10000U;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant22'
   */
  switch (Sec) {
   case 0:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_TbInt;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_Switch4_idx_0;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_Switch4_idx_1;
    break;

   case 1:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_Switch4_idx_0;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_TbInt;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_Switch4_idx_1;
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_Switch4_idx_1;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_TbInt;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_Switch4_idx_0;
    break;

   case 3:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_Switch4_idx_1;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_Switch4_idx_0;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_TbInt;
    break;

   case 4:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_Switch4_idx_0;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_Switch4_idx_1;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_TbInt;
    break;

   case 5:
    rtb_MultiportSwitch_idx_0 = (int32_T)rtb_TbInt;
    rtb_MultiportSwitch_idx_1 = (int32_T)rtb_Switch4_idx_1;
    rtb_MultiportSwitch_idx_2 = (int32_T)rtb_Switch4_idx_0;
    break;

   default:
    rtb_MultiportSwitch_idx_0 = 0;
    rtb_MultiportSwitch_idx_1 = 0;
    rtb_MultiportSwitch_idx_2 = 0;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* Outport: '<Root>/Uduty' */
  CurrentControl_Y.Uduty = (uint32_T)rtb_MultiportSwitch_idx_0;

  /* Outport: '<Root>/Vduty' */
  CurrentControl_Y.Vduty = (uint32_T)rtb_MultiportSwitch_idx_1;

  /* Outport: '<Root>/Wduty' */
  CurrentControl_Y.Wduty = (uint32_T)rtb_MultiportSwitch_idx_2;

  /* Update for Delay: '<Root>/Delay' */
  CurrentControl_DW_l.Delay_DSTATE = rtb_IdError;

  /* Update for Delay: '<Root>/Delay1' */
  CurrentControl_DW_l.Delay1_DSTATE = rtb_Add1;

  /* Update for Delay: '<Root>/Delay2' */
  CurrentControl_DW_l.Delay2_DSTATE = rtb_IqError;

  /* Update for Delay: '<Root>/Delay3' */
  CurrentControl_DW_l.Delay3_DSTATE = rtb_Add6;
}

/* Model initialize function */
void CurrentControl_initialize(void)
{
  /* SystemInitialize for Chart: '<Root>/Chart' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
