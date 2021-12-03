/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID_28Nov_Mod.c
 *
 * Code generated for Simulink model 'PID_28Nov_Mod'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Dec  3 22:25:54 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PID_28Nov_Mod.h"
#include "PID_28Nov_Mod_private.h"

/* Block signals and states (default storage) */
DW_PID_28Nov_Mod_T PID_28Nov_Mod_DW;

/* External inputs (root inport signals with default storage) */
ExtU_PID_28Nov_Mod_T PID_28Nov_Mod_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PID_28Nov_Mod_T PID_28Nov_Mod_Y;

/* Model step function */
void PID_28Nov_Mod_step(void)
{
  real_T rtb_TSamp;

  /* SampleTimeMath: '<S1>/TSamp' incorporates:
   *  Constant: '<Root>/Set Spd'
   *  Inport: '<Root>/Ang Speed rad_s'
   *  Sum: '<Root>/Sum'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = (70.0 - PID_28Nov_Mod_U.AngSpeedrad_s) * 1800.0;

  /* Outport: '<Root>/Voltage Correction' incorporates:
   *  Constant: '<Root>/Set Spd'
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
   *  Gain: '<Root>/Gain'
   *  Inport: '<Root>/Ang Speed rad_s'
   *  Sum: '<Root>/Sum'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<S1>/Diff'
   *  UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  PID_28Nov_Mod_Y.VoltageCorrection = (((70.0 - PID_28Nov_Mod_U.AngSpeedrad_s) *
    250.0) + PID_28Nov_Mod_DW.DiscreteTimeIntegrator_DSTATE) + (rtb_TSamp -
    PID_28Nov_Mod_DW.UD_DSTATE);

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' incorporates:
   *  Constant: '<Root>/Set Spd'
   *  Inport: '<Root>/Ang Speed rad_s'
   *  Sum: '<Root>/Sum'
   */
  PID_28Nov_Mod_DW.DiscreteTimeIntegrator_DSTATE += (70.0 -
    PID_28Nov_Mod_U.AngSpeedrad_s) * 1.1500000000000001;

  /* Update for UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  PID_28Nov_Mod_DW.UD_DSTATE = rtb_TSamp;
}

/* Model initialize function */
void PID_28Nov_Mod_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Out1' incorporates:
   *  Constant: '<Root>/Set Spd'
   */
  PID_28Nov_Mod_Y.Out1 = 70.0;
}

/* Model terminate function */
void PID_28Nov_Mod_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
