/*******************************************************************************
 * Copyright (c) 2017, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef solve_projection_H
#define solve_projection_H
#if !defined(CHECK_TEMPLATE) && !defined(solve_H_Sprimme)
#  define solve_H_Sprimme CONCAT(solve_H_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(solve_H_Rprimme)
#  define solve_H_Rprimme CONCAT(solve_H_,REAL_SUF)
#endif
int solve_H_dprimme(double *H, int basisSize, int ldH, double *R, int ldR,
   double *QtV, int ldQtV, double *hU, int ldhU, double *hVecs, int ldhVecs,
   double *hVals, double *hSVals, int numConverged, double machEps, size_t *lrwork,
   double *rwork, int liwork, int *iwork, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(prepare_vecs_Sprimme)
#  define prepare_vecs_Sprimme CONCAT(prepare_vecs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(prepare_vecs_Rprimme)
#  define prepare_vecs_Rprimme CONCAT(prepare_vecs_,REAL_SUF)
#endif
int prepare_vecs_dprimme(int basisSize, int i0, int blockSize,
      double *H, int ldH, double *hVals, double *hSVals, double *hVecs,
      int ldhVecs, int targetShiftIndex, int *arbitraryVecs,
      double smallestResNorm, int *flags, int RRForAll, double *hVecsRot,
      int ldhVecsRot, double machEps, size_t *rworkSize, double *rwork,
      int iworkSize, int *iwork, primme_params *primme);
int solve_H_zprimme(PRIMME_COMPLEX_DOUBLE *H, int basisSize, int ldH, PRIMME_COMPLEX_DOUBLE *R, int ldR,
   PRIMME_COMPLEX_DOUBLE *QtV, int ldQtV, PRIMME_COMPLEX_DOUBLE *hU, int ldhU, PRIMME_COMPLEX_DOUBLE *hVecs, int ldhVecs,
   double *hVals, double *hSVals, int numConverged, double machEps, size_t *lrwork,
   PRIMME_COMPLEX_DOUBLE *rwork, int liwork, int *iwork, primme_params *primme);
int prepare_vecs_zprimme(int basisSize, int i0, int blockSize,
      PRIMME_COMPLEX_DOUBLE *H, int ldH, double *hVals, double *hSVals, PRIMME_COMPLEX_DOUBLE *hVecs,
      int ldhVecs, int targetShiftIndex, int *arbitraryVecs,
      double smallestResNorm, int *flags, int RRForAll, PRIMME_COMPLEX_DOUBLE *hVecsRot,
      int ldhVecsRot, double machEps, size_t *rworkSize, PRIMME_COMPLEX_DOUBLE *rwork,
      int iworkSize, int *iwork, primme_params *primme);
int solve_H_sprimme(float *H, int basisSize, int ldH, float *R, int ldR,
   float *QtV, int ldQtV, float *hU, int ldhU, float *hVecs, int ldhVecs,
   float *hVals, float *hSVals, int numConverged, double machEps, size_t *lrwork,
   float *rwork, int liwork, int *iwork, primme_params *primme);
int prepare_vecs_sprimme(int basisSize, int i0, int blockSize,
      float *H, int ldH, float *hVals, float *hSVals, float *hVecs,
      int ldhVecs, int targetShiftIndex, int *arbitraryVecs,
      double smallestResNorm, int *flags, int RRForAll, float *hVecsRot,
      int ldhVecsRot, double machEps, size_t *rworkSize, float *rwork,
      int iworkSize, int *iwork, primme_params *primme);
int solve_H_cprimme(PRIMME_COMPLEX_FLOAT *H, int basisSize, int ldH, PRIMME_COMPLEX_FLOAT *R, int ldR,
   PRIMME_COMPLEX_FLOAT *QtV, int ldQtV, PRIMME_COMPLEX_FLOAT *hU, int ldhU, PRIMME_COMPLEX_FLOAT *hVecs, int ldhVecs,
   float *hVals, float *hSVals, int numConverged, double machEps, size_t *lrwork,
   PRIMME_COMPLEX_FLOAT *rwork, int liwork, int *iwork, primme_params *primme);
int prepare_vecs_cprimme(int basisSize, int i0, int blockSize,
      PRIMME_COMPLEX_FLOAT *H, int ldH, float *hVals, float *hSVals, PRIMME_COMPLEX_FLOAT *hVecs,
      int ldhVecs, int targetShiftIndex, int *arbitraryVecs,
      double smallestResNorm, int *flags, int RRForAll, PRIMME_COMPLEX_FLOAT *hVecsRot,
      int ldhVecsRot, double machEps, size_t *rworkSize, PRIMME_COMPLEX_FLOAT *rwork,
      int iworkSize, int *iwork, primme_params *primme);
#endif
