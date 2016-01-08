/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "rand.h"

/* Function Definitions */
void b_rand(real_T r[10])
{
  emlrtRandu(r, 10);
}

/* End of code generation (rand.c) */
