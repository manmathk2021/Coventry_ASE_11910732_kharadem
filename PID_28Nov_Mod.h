/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID_28Nov_Mod.h
 *
 * Code generated for Simulink model 'PID_28Nov_Mod'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Tue Apr 12 06:11:48 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. MISRA C:2012 guidelines
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PID_28Nov_Mod_h_
#define RTW_HEADER_PID_28Nov_Mod_h_
#ifndef PID_28Nov_Mod_COMMON_INCLUDES_
#define PID_28Nov_Mod_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PID_28Nov_Mod_COMMON_INCLUDES_ */

#include "PID_28Nov_Mod_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S1>/UD' */
} DW_PID_28Nov_Mod_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T AngSpeedrad_s;                /* '<Root>/Ang Speed rad_s' */
} ExtU_PID_28Nov_Mod_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T VoltageCorrection;            /* '<Root>/Voltage Correction' */
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_PID_28Nov_Mod_T;

/* Block signals and states (default storage) */
extern DW_PID_28Nov_Mod_T PID_28Nov_Mod_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_PID_28Nov_Mod_T PID_28Nov_Mod_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PID_28Nov_Mod_T PID_28Nov_Mod_Y;

/* Model entry point functions */
extern void PID_28Nov_Mod_initialize(void);
extern void PID_28Nov_Mod_step(void);
extern void PID_28Nov_Mod_terminate(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'PID_28Nov_Mod'
 * '<S1>'   : 'PID_28Nov_Mod/Discrete Derivative'
 */
#endif                                 /* RTW_HEADER_PID_28Nov_Mod_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
