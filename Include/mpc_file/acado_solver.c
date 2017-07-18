/*
 *    This file was auto-generated using the ACADO Toolkit.
 *    
 *    While ACADO Toolkit is free software released under the terms of
 *    the GNU Lesser General Public License (LGPL), the generated code
 *    as such remains the property of the user who used ACADO Toolkit
 *    to generate this code. In particular, user dependent data of the code
 *    do not inherit the GNU LGPL license. On the other hand, parts of the
 *    generated code that are a direct copy of source code from the
 *    ACADO Toolkit or the software tools it is based on, remain, as derived
 *    work, automatically covered by the LGPL license.
 *    
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *    
 */


#include "acado_common.h"




/******************************************************************************/
/*                                                                            */
/* ACADO code generation                                                      */
/*                                                                            */
/******************************************************************************/


/** Row vector of size: 72 */
real_t state[ 72 ];

int acado_modelSimulation(  )
{
int ret;

int lRun1;
ret = 0;
#pragma omp parallel for private(lRun1, state) shared(acadoWorkspace, acadoVariables)
for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
state[0] = acadoVariables.x[lRun1 * 7];
state[1] = acadoVariables.x[lRun1 * 7 + 1];
state[2] = acadoVariables.x[lRun1 * 7 + 2];
state[3] = acadoVariables.x[lRun1 * 7 + 3];
state[4] = acadoVariables.x[lRun1 * 7 + 4];
state[5] = acadoVariables.x[lRun1 * 7 + 5];
state[6] = acadoVariables.x[lRun1 * 7 + 6];

state[70] = acadoVariables.u[lRun1 * 2];
state[71] = acadoVariables.u[lRun1 * 2 + 1];

ret = acado_integrate(state, 1);

acadoWorkspace.d[lRun1 * 7] = state[0] - acadoVariables.x[lRun1 * 7 + 7];
acadoWorkspace.d[lRun1 * 7 + 1] = state[1] - acadoVariables.x[lRun1 * 7 + 8];
acadoWorkspace.d[lRun1 * 7 + 2] = state[2] - acadoVariables.x[lRun1 * 7 + 9];
acadoWorkspace.d[lRun1 * 7 + 3] = state[3] - acadoVariables.x[lRun1 * 7 + 10];
acadoWorkspace.d[lRun1 * 7 + 4] = state[4] - acadoVariables.x[lRun1 * 7 + 11];
acadoWorkspace.d[lRun1 * 7 + 5] = state[5] - acadoVariables.x[lRun1 * 7 + 12];
acadoWorkspace.d[lRun1 * 7 + 6] = state[6] - acadoVariables.x[lRun1 * 7 + 13];

acadoWorkspace.evGx[lRun1 * 49] = state[7];
acadoWorkspace.evGx[lRun1 * 49 + 1] = state[8];
acadoWorkspace.evGx[lRun1 * 49 + 2] = state[9];
acadoWorkspace.evGx[lRun1 * 49 + 3] = state[10];
acadoWorkspace.evGx[lRun1 * 49 + 4] = state[11];
acadoWorkspace.evGx[lRun1 * 49 + 5] = state[12];
acadoWorkspace.evGx[lRun1 * 49 + 6] = state[13];
acadoWorkspace.evGx[lRun1 * 49 + 7] = state[14];
acadoWorkspace.evGx[lRun1 * 49 + 8] = state[15];
acadoWorkspace.evGx[lRun1 * 49 + 9] = state[16];
acadoWorkspace.evGx[lRun1 * 49 + 10] = state[17];
acadoWorkspace.evGx[lRun1 * 49 + 11] = state[18];
acadoWorkspace.evGx[lRun1 * 49 + 12] = state[19];
acadoWorkspace.evGx[lRun1 * 49 + 13] = state[20];
acadoWorkspace.evGx[lRun1 * 49 + 14] = state[21];
acadoWorkspace.evGx[lRun1 * 49 + 15] = state[22];
acadoWorkspace.evGx[lRun1 * 49 + 16] = state[23];
acadoWorkspace.evGx[lRun1 * 49 + 17] = state[24];
acadoWorkspace.evGx[lRun1 * 49 + 18] = state[25];
acadoWorkspace.evGx[lRun1 * 49 + 19] = state[26];
acadoWorkspace.evGx[lRun1 * 49 + 20] = state[27];
acadoWorkspace.evGx[lRun1 * 49 + 21] = state[28];
acadoWorkspace.evGx[lRun1 * 49 + 22] = state[29];
acadoWorkspace.evGx[lRun1 * 49 + 23] = state[30];
acadoWorkspace.evGx[lRun1 * 49 + 24] = state[31];
acadoWorkspace.evGx[lRun1 * 49 + 25] = state[32];
acadoWorkspace.evGx[lRun1 * 49 + 26] = state[33];
acadoWorkspace.evGx[lRun1 * 49 + 27] = state[34];
acadoWorkspace.evGx[lRun1 * 49 + 28] = state[35];
acadoWorkspace.evGx[lRun1 * 49 + 29] = state[36];
acadoWorkspace.evGx[lRun1 * 49 + 30] = state[37];
acadoWorkspace.evGx[lRun1 * 49 + 31] = state[38];
acadoWorkspace.evGx[lRun1 * 49 + 32] = state[39];
acadoWorkspace.evGx[lRun1 * 49 + 33] = state[40];
acadoWorkspace.evGx[lRun1 * 49 + 34] = state[41];
acadoWorkspace.evGx[lRun1 * 49 + 35] = state[42];
acadoWorkspace.evGx[lRun1 * 49 + 36] = state[43];
acadoWorkspace.evGx[lRun1 * 49 + 37] = state[44];
acadoWorkspace.evGx[lRun1 * 49 + 38] = state[45];
acadoWorkspace.evGx[lRun1 * 49 + 39] = state[46];
acadoWorkspace.evGx[lRun1 * 49 + 40] = state[47];
acadoWorkspace.evGx[lRun1 * 49 + 41] = state[48];
acadoWorkspace.evGx[lRun1 * 49 + 42] = state[49];
acadoWorkspace.evGx[lRun1 * 49 + 43] = state[50];
acadoWorkspace.evGx[lRun1 * 49 + 44] = state[51];
acadoWorkspace.evGx[lRun1 * 49 + 45] = state[52];
acadoWorkspace.evGx[lRun1 * 49 + 46] = state[53];
acadoWorkspace.evGx[lRun1 * 49 + 47] = state[54];
acadoWorkspace.evGx[lRun1 * 49 + 48] = state[55];

acadoWorkspace.evGu[lRun1 * 14] = state[56];
acadoWorkspace.evGu[lRun1 * 14 + 1] = state[57];
acadoWorkspace.evGu[lRun1 * 14 + 2] = state[58];
acadoWorkspace.evGu[lRun1 * 14 + 3] = state[59];
acadoWorkspace.evGu[lRun1 * 14 + 4] = state[60];
acadoWorkspace.evGu[lRun1 * 14 + 5] = state[61];
acadoWorkspace.evGu[lRun1 * 14 + 6] = state[62];
acadoWorkspace.evGu[lRun1 * 14 + 7] = state[63];
acadoWorkspace.evGu[lRun1 * 14 + 8] = state[64];
acadoWorkspace.evGu[lRun1 * 14 + 9] = state[65];
acadoWorkspace.evGu[lRun1 * 14 + 10] = state[66];
acadoWorkspace.evGu[lRun1 * 14 + 11] = state[67];
acadoWorkspace.evGu[lRun1 * 14 + 12] = state[68];
acadoWorkspace.evGu[lRun1 * 14 + 13] = state[69];
}
return ret;
}

void acado_evaluateLSQ(const real_t* in, real_t* out)
{
const real_t* xd = in;
const real_t* u = in + 7;

/* Compute outputs: */
out[0] = xd[3];
out[1] = xd[4];
out[2] = xd[1];
out[3] = u[0];
out[4] = (xd[1]*xd[1]);
out[5] = (real_t)(0.0000000000000000e+00);
out[6] = (real_t)(0.0000000000000000e+00);
out[7] = (real_t)(0.0000000000000000e+00);
out[8] = (real_t)(1.0000000000000000e+00);
out[9] = (real_t)(0.0000000000000000e+00);
out[10] = (real_t)(0.0000000000000000e+00);
out[11] = (real_t)(0.0000000000000000e+00);
out[12] = (real_t)(0.0000000000000000e+00);
out[13] = (real_t)(0.0000000000000000e+00);
out[14] = (real_t)(0.0000000000000000e+00);
out[15] = (real_t)(0.0000000000000000e+00);
out[16] = (real_t)(1.0000000000000000e+00);
out[17] = (real_t)(0.0000000000000000e+00);
out[18] = (real_t)(0.0000000000000000e+00);
out[19] = (real_t)(0.0000000000000000e+00);
out[20] = (real_t)(1.0000000000000000e+00);
out[21] = (real_t)(0.0000000000000000e+00);
out[22] = (real_t)(0.0000000000000000e+00);
out[23] = (real_t)(0.0000000000000000e+00);
out[24] = (real_t)(0.0000000000000000e+00);
out[25] = (real_t)(0.0000000000000000e+00);
out[26] = (real_t)(0.0000000000000000e+00);
out[27] = (real_t)(0.0000000000000000e+00);
out[28] = (real_t)(0.0000000000000000e+00);
out[29] = (real_t)(0.0000000000000000e+00);
out[30] = (real_t)(0.0000000000000000e+00);
out[31] = (real_t)(0.0000000000000000e+00);
out[32] = (real_t)(0.0000000000000000e+00);
out[33] = (real_t)(0.0000000000000000e+00);
out[34] = (xd[1]+xd[1]);
out[35] = (real_t)(0.0000000000000000e+00);
out[36] = (real_t)(0.0000000000000000e+00);
out[37] = (real_t)(0.0000000000000000e+00);
out[38] = (real_t)(0.0000000000000000e+00);
out[39] = (real_t)(0.0000000000000000e+00);
}

void acado_evaluateLSQEndTerm(const real_t* in, real_t* out)
{
const real_t* xd = in;

/* Compute outputs: */
out[0] = xd[3];
out[1] = xd[4];
}

void acado_setObjQ1Q2( real_t* const tmpFx, real_t* const tmpObjS, real_t* const tmpQ1, real_t* const tmpQ2 )
{
tmpQ2[0] = + tmpFx[0]*tmpObjS[0] + tmpFx[7]*tmpObjS[5] + tmpFx[14]*tmpObjS[10] + tmpFx[21]*tmpObjS[15] + tmpFx[28]*tmpObjS[20];
tmpQ2[1] = + tmpFx[0]*tmpObjS[1] + tmpFx[7]*tmpObjS[6] + tmpFx[14]*tmpObjS[11] + tmpFx[21]*tmpObjS[16] + tmpFx[28]*tmpObjS[21];
tmpQ2[2] = + tmpFx[0]*tmpObjS[2] + tmpFx[7]*tmpObjS[7] + tmpFx[14]*tmpObjS[12] + tmpFx[21]*tmpObjS[17] + tmpFx[28]*tmpObjS[22];
tmpQ2[3] = + tmpFx[0]*tmpObjS[3] + tmpFx[7]*tmpObjS[8] + tmpFx[14]*tmpObjS[13] + tmpFx[21]*tmpObjS[18] + tmpFx[28]*tmpObjS[23];
tmpQ2[4] = + tmpFx[0]*tmpObjS[4] + tmpFx[7]*tmpObjS[9] + tmpFx[14]*tmpObjS[14] + tmpFx[21]*tmpObjS[19] + tmpFx[28]*tmpObjS[24];
tmpQ2[5] = + tmpFx[1]*tmpObjS[0] + tmpFx[8]*tmpObjS[5] + tmpFx[15]*tmpObjS[10] + tmpFx[22]*tmpObjS[15] + tmpFx[29]*tmpObjS[20];
tmpQ2[6] = + tmpFx[1]*tmpObjS[1] + tmpFx[8]*tmpObjS[6] + tmpFx[15]*tmpObjS[11] + tmpFx[22]*tmpObjS[16] + tmpFx[29]*tmpObjS[21];
tmpQ2[7] = + tmpFx[1]*tmpObjS[2] + tmpFx[8]*tmpObjS[7] + tmpFx[15]*tmpObjS[12] + tmpFx[22]*tmpObjS[17] + tmpFx[29]*tmpObjS[22];
tmpQ2[8] = + tmpFx[1]*tmpObjS[3] + tmpFx[8]*tmpObjS[8] + tmpFx[15]*tmpObjS[13] + tmpFx[22]*tmpObjS[18] + tmpFx[29]*tmpObjS[23];
tmpQ2[9] = + tmpFx[1]*tmpObjS[4] + tmpFx[8]*tmpObjS[9] + tmpFx[15]*tmpObjS[14] + tmpFx[22]*tmpObjS[19] + tmpFx[29]*tmpObjS[24];
tmpQ2[10] = + tmpFx[2]*tmpObjS[0] + tmpFx[9]*tmpObjS[5] + tmpFx[16]*tmpObjS[10] + tmpFx[23]*tmpObjS[15] + tmpFx[30]*tmpObjS[20];
tmpQ2[11] = + tmpFx[2]*tmpObjS[1] + tmpFx[9]*tmpObjS[6] + tmpFx[16]*tmpObjS[11] + tmpFx[23]*tmpObjS[16] + tmpFx[30]*tmpObjS[21];
tmpQ2[12] = + tmpFx[2]*tmpObjS[2] + tmpFx[9]*tmpObjS[7] + tmpFx[16]*tmpObjS[12] + tmpFx[23]*tmpObjS[17] + tmpFx[30]*tmpObjS[22];
tmpQ2[13] = + tmpFx[2]*tmpObjS[3] + tmpFx[9]*tmpObjS[8] + tmpFx[16]*tmpObjS[13] + tmpFx[23]*tmpObjS[18] + tmpFx[30]*tmpObjS[23];
tmpQ2[14] = + tmpFx[2]*tmpObjS[4] + tmpFx[9]*tmpObjS[9] + tmpFx[16]*tmpObjS[14] + tmpFx[23]*tmpObjS[19] + tmpFx[30]*tmpObjS[24];
tmpQ2[15] = + tmpFx[3]*tmpObjS[0] + tmpFx[10]*tmpObjS[5] + tmpFx[17]*tmpObjS[10] + tmpFx[24]*tmpObjS[15] + tmpFx[31]*tmpObjS[20];
tmpQ2[16] = + tmpFx[3]*tmpObjS[1] + tmpFx[10]*tmpObjS[6] + tmpFx[17]*tmpObjS[11] + tmpFx[24]*tmpObjS[16] + tmpFx[31]*tmpObjS[21];
tmpQ2[17] = + tmpFx[3]*tmpObjS[2] + tmpFx[10]*tmpObjS[7] + tmpFx[17]*tmpObjS[12] + tmpFx[24]*tmpObjS[17] + tmpFx[31]*tmpObjS[22];
tmpQ2[18] = + tmpFx[3]*tmpObjS[3] + tmpFx[10]*tmpObjS[8] + tmpFx[17]*tmpObjS[13] + tmpFx[24]*tmpObjS[18] + tmpFx[31]*tmpObjS[23];
tmpQ2[19] = + tmpFx[3]*tmpObjS[4] + tmpFx[10]*tmpObjS[9] + tmpFx[17]*tmpObjS[14] + tmpFx[24]*tmpObjS[19] + tmpFx[31]*tmpObjS[24];
tmpQ2[20] = + tmpFx[4]*tmpObjS[0] + tmpFx[11]*tmpObjS[5] + tmpFx[18]*tmpObjS[10] + tmpFx[25]*tmpObjS[15] + tmpFx[32]*tmpObjS[20];
tmpQ2[21] = + tmpFx[4]*tmpObjS[1] + tmpFx[11]*tmpObjS[6] + tmpFx[18]*tmpObjS[11] + tmpFx[25]*tmpObjS[16] + tmpFx[32]*tmpObjS[21];
tmpQ2[22] = + tmpFx[4]*tmpObjS[2] + tmpFx[11]*tmpObjS[7] + tmpFx[18]*tmpObjS[12] + tmpFx[25]*tmpObjS[17] + tmpFx[32]*tmpObjS[22];
tmpQ2[23] = + tmpFx[4]*tmpObjS[3] + tmpFx[11]*tmpObjS[8] + tmpFx[18]*tmpObjS[13] + tmpFx[25]*tmpObjS[18] + tmpFx[32]*tmpObjS[23];
tmpQ2[24] = + tmpFx[4]*tmpObjS[4] + tmpFx[11]*tmpObjS[9] + tmpFx[18]*tmpObjS[14] + tmpFx[25]*tmpObjS[19] + tmpFx[32]*tmpObjS[24];
tmpQ2[25] = + tmpFx[5]*tmpObjS[0] + tmpFx[12]*tmpObjS[5] + tmpFx[19]*tmpObjS[10] + tmpFx[26]*tmpObjS[15] + tmpFx[33]*tmpObjS[20];
tmpQ2[26] = + tmpFx[5]*tmpObjS[1] + tmpFx[12]*tmpObjS[6] + tmpFx[19]*tmpObjS[11] + tmpFx[26]*tmpObjS[16] + tmpFx[33]*tmpObjS[21];
tmpQ2[27] = + tmpFx[5]*tmpObjS[2] + tmpFx[12]*tmpObjS[7] + tmpFx[19]*tmpObjS[12] + tmpFx[26]*tmpObjS[17] + tmpFx[33]*tmpObjS[22];
tmpQ2[28] = + tmpFx[5]*tmpObjS[3] + tmpFx[12]*tmpObjS[8] + tmpFx[19]*tmpObjS[13] + tmpFx[26]*tmpObjS[18] + tmpFx[33]*tmpObjS[23];
tmpQ2[29] = + tmpFx[5]*tmpObjS[4] + tmpFx[12]*tmpObjS[9] + tmpFx[19]*tmpObjS[14] + tmpFx[26]*tmpObjS[19] + tmpFx[33]*tmpObjS[24];
tmpQ2[30] = + tmpFx[6]*tmpObjS[0] + tmpFx[13]*tmpObjS[5] + tmpFx[20]*tmpObjS[10] + tmpFx[27]*tmpObjS[15] + tmpFx[34]*tmpObjS[20];
tmpQ2[31] = + tmpFx[6]*tmpObjS[1] + tmpFx[13]*tmpObjS[6] + tmpFx[20]*tmpObjS[11] + tmpFx[27]*tmpObjS[16] + tmpFx[34]*tmpObjS[21];
tmpQ2[32] = + tmpFx[6]*tmpObjS[2] + tmpFx[13]*tmpObjS[7] + tmpFx[20]*tmpObjS[12] + tmpFx[27]*tmpObjS[17] + tmpFx[34]*tmpObjS[22];
tmpQ2[33] = + tmpFx[6]*tmpObjS[3] + tmpFx[13]*tmpObjS[8] + tmpFx[20]*tmpObjS[13] + tmpFx[27]*tmpObjS[18] + tmpFx[34]*tmpObjS[23];
tmpQ2[34] = + tmpFx[6]*tmpObjS[4] + tmpFx[13]*tmpObjS[9] + tmpFx[20]*tmpObjS[14] + tmpFx[27]*tmpObjS[19] + tmpFx[34]*tmpObjS[24];
tmpQ1[0] = + tmpQ2[0]*tmpFx[0] + tmpQ2[1]*tmpFx[7] + tmpQ2[2]*tmpFx[14] + tmpQ2[3]*tmpFx[21] + tmpQ2[4]*tmpFx[28];
tmpQ1[1] = + tmpQ2[0]*tmpFx[1] + tmpQ2[1]*tmpFx[8] + tmpQ2[2]*tmpFx[15] + tmpQ2[3]*tmpFx[22] + tmpQ2[4]*tmpFx[29];
tmpQ1[2] = + tmpQ2[0]*tmpFx[2] + tmpQ2[1]*tmpFx[9] + tmpQ2[2]*tmpFx[16] + tmpQ2[3]*tmpFx[23] + tmpQ2[4]*tmpFx[30];
tmpQ1[3] = + tmpQ2[0]*tmpFx[3] + tmpQ2[1]*tmpFx[10] + tmpQ2[2]*tmpFx[17] + tmpQ2[3]*tmpFx[24] + tmpQ2[4]*tmpFx[31];
tmpQ1[4] = + tmpQ2[0]*tmpFx[4] + tmpQ2[1]*tmpFx[11] + tmpQ2[2]*tmpFx[18] + tmpQ2[3]*tmpFx[25] + tmpQ2[4]*tmpFx[32];
tmpQ1[5] = + tmpQ2[0]*tmpFx[5] + tmpQ2[1]*tmpFx[12] + tmpQ2[2]*tmpFx[19] + tmpQ2[3]*tmpFx[26] + tmpQ2[4]*tmpFx[33];
tmpQ1[6] = + tmpQ2[0]*tmpFx[6] + tmpQ2[1]*tmpFx[13] + tmpQ2[2]*tmpFx[20] + tmpQ2[3]*tmpFx[27] + tmpQ2[4]*tmpFx[34];
tmpQ1[7] = + tmpQ2[5]*tmpFx[0] + tmpQ2[6]*tmpFx[7] + tmpQ2[7]*tmpFx[14] + tmpQ2[8]*tmpFx[21] + tmpQ2[9]*tmpFx[28];
tmpQ1[8] = + tmpQ2[5]*tmpFx[1] + tmpQ2[6]*tmpFx[8] + tmpQ2[7]*tmpFx[15] + tmpQ2[8]*tmpFx[22] + tmpQ2[9]*tmpFx[29];
tmpQ1[9] = + tmpQ2[5]*tmpFx[2] + tmpQ2[6]*tmpFx[9] + tmpQ2[7]*tmpFx[16] + tmpQ2[8]*tmpFx[23] + tmpQ2[9]*tmpFx[30];
tmpQ1[10] = + tmpQ2[5]*tmpFx[3] + tmpQ2[6]*tmpFx[10] + tmpQ2[7]*tmpFx[17] + tmpQ2[8]*tmpFx[24] + tmpQ2[9]*tmpFx[31];
tmpQ1[11] = + tmpQ2[5]*tmpFx[4] + tmpQ2[6]*tmpFx[11] + tmpQ2[7]*tmpFx[18] + tmpQ2[8]*tmpFx[25] + tmpQ2[9]*tmpFx[32];
tmpQ1[12] = + tmpQ2[5]*tmpFx[5] + tmpQ2[6]*tmpFx[12] + tmpQ2[7]*tmpFx[19] + tmpQ2[8]*tmpFx[26] + tmpQ2[9]*tmpFx[33];
tmpQ1[13] = + tmpQ2[5]*tmpFx[6] + tmpQ2[6]*tmpFx[13] + tmpQ2[7]*tmpFx[20] + tmpQ2[8]*tmpFx[27] + tmpQ2[9]*tmpFx[34];
tmpQ1[14] = + tmpQ2[10]*tmpFx[0] + tmpQ2[11]*tmpFx[7] + tmpQ2[12]*tmpFx[14] + tmpQ2[13]*tmpFx[21] + tmpQ2[14]*tmpFx[28];
tmpQ1[15] = + tmpQ2[10]*tmpFx[1] + tmpQ2[11]*tmpFx[8] + tmpQ2[12]*tmpFx[15] + tmpQ2[13]*tmpFx[22] + tmpQ2[14]*tmpFx[29];
tmpQ1[16] = + tmpQ2[10]*tmpFx[2] + tmpQ2[11]*tmpFx[9] + tmpQ2[12]*tmpFx[16] + tmpQ2[13]*tmpFx[23] + tmpQ2[14]*tmpFx[30];
tmpQ1[17] = + tmpQ2[10]*tmpFx[3] + tmpQ2[11]*tmpFx[10] + tmpQ2[12]*tmpFx[17] + tmpQ2[13]*tmpFx[24] + tmpQ2[14]*tmpFx[31];
tmpQ1[18] = + tmpQ2[10]*tmpFx[4] + tmpQ2[11]*tmpFx[11] + tmpQ2[12]*tmpFx[18] + tmpQ2[13]*tmpFx[25] + tmpQ2[14]*tmpFx[32];
tmpQ1[19] = + tmpQ2[10]*tmpFx[5] + tmpQ2[11]*tmpFx[12] + tmpQ2[12]*tmpFx[19] + tmpQ2[13]*tmpFx[26] + tmpQ2[14]*tmpFx[33];
tmpQ1[20] = + tmpQ2[10]*tmpFx[6] + tmpQ2[11]*tmpFx[13] + tmpQ2[12]*tmpFx[20] + tmpQ2[13]*tmpFx[27] + tmpQ2[14]*tmpFx[34];
tmpQ1[21] = + tmpQ2[15]*tmpFx[0] + tmpQ2[16]*tmpFx[7] + tmpQ2[17]*tmpFx[14] + tmpQ2[18]*tmpFx[21] + tmpQ2[19]*tmpFx[28];
tmpQ1[22] = + tmpQ2[15]*tmpFx[1] + tmpQ2[16]*tmpFx[8] + tmpQ2[17]*tmpFx[15] + tmpQ2[18]*tmpFx[22] + tmpQ2[19]*tmpFx[29];
tmpQ1[23] = + tmpQ2[15]*tmpFx[2] + tmpQ2[16]*tmpFx[9] + tmpQ2[17]*tmpFx[16] + tmpQ2[18]*tmpFx[23] + tmpQ2[19]*tmpFx[30];
tmpQ1[24] = + tmpQ2[15]*tmpFx[3] + tmpQ2[16]*tmpFx[10] + tmpQ2[17]*tmpFx[17] + tmpQ2[18]*tmpFx[24] + tmpQ2[19]*tmpFx[31];
tmpQ1[25] = + tmpQ2[15]*tmpFx[4] + tmpQ2[16]*tmpFx[11] + tmpQ2[17]*tmpFx[18] + tmpQ2[18]*tmpFx[25] + tmpQ2[19]*tmpFx[32];
tmpQ1[26] = + tmpQ2[15]*tmpFx[5] + tmpQ2[16]*tmpFx[12] + tmpQ2[17]*tmpFx[19] + tmpQ2[18]*tmpFx[26] + tmpQ2[19]*tmpFx[33];
tmpQ1[27] = + tmpQ2[15]*tmpFx[6] + tmpQ2[16]*tmpFx[13] + tmpQ2[17]*tmpFx[20] + tmpQ2[18]*tmpFx[27] + tmpQ2[19]*tmpFx[34];
tmpQ1[28] = + tmpQ2[20]*tmpFx[0] + tmpQ2[21]*tmpFx[7] + tmpQ2[22]*tmpFx[14] + tmpQ2[23]*tmpFx[21] + tmpQ2[24]*tmpFx[28];
tmpQ1[29] = + tmpQ2[20]*tmpFx[1] + tmpQ2[21]*tmpFx[8] + tmpQ2[22]*tmpFx[15] + tmpQ2[23]*tmpFx[22] + tmpQ2[24]*tmpFx[29];
tmpQ1[30] = + tmpQ2[20]*tmpFx[2] + tmpQ2[21]*tmpFx[9] + tmpQ2[22]*tmpFx[16] + tmpQ2[23]*tmpFx[23] + tmpQ2[24]*tmpFx[30];
tmpQ1[31] = + tmpQ2[20]*tmpFx[3] + tmpQ2[21]*tmpFx[10] + tmpQ2[22]*tmpFx[17] + tmpQ2[23]*tmpFx[24] + tmpQ2[24]*tmpFx[31];
tmpQ1[32] = + tmpQ2[20]*tmpFx[4] + tmpQ2[21]*tmpFx[11] + tmpQ2[22]*tmpFx[18] + tmpQ2[23]*tmpFx[25] + tmpQ2[24]*tmpFx[32];
tmpQ1[33] = + tmpQ2[20]*tmpFx[5] + tmpQ2[21]*tmpFx[12] + tmpQ2[22]*tmpFx[19] + tmpQ2[23]*tmpFx[26] + tmpQ2[24]*tmpFx[33];
tmpQ1[34] = + tmpQ2[20]*tmpFx[6] + tmpQ2[21]*tmpFx[13] + tmpQ2[22]*tmpFx[20] + tmpQ2[23]*tmpFx[27] + tmpQ2[24]*tmpFx[34];
tmpQ1[35] = + tmpQ2[25]*tmpFx[0] + tmpQ2[26]*tmpFx[7] + tmpQ2[27]*tmpFx[14] + tmpQ2[28]*tmpFx[21] + tmpQ2[29]*tmpFx[28];
tmpQ1[36] = + tmpQ2[25]*tmpFx[1] + tmpQ2[26]*tmpFx[8] + tmpQ2[27]*tmpFx[15] + tmpQ2[28]*tmpFx[22] + tmpQ2[29]*tmpFx[29];
tmpQ1[37] = + tmpQ2[25]*tmpFx[2] + tmpQ2[26]*tmpFx[9] + tmpQ2[27]*tmpFx[16] + tmpQ2[28]*tmpFx[23] + tmpQ2[29]*tmpFx[30];
tmpQ1[38] = + tmpQ2[25]*tmpFx[3] + tmpQ2[26]*tmpFx[10] + tmpQ2[27]*tmpFx[17] + tmpQ2[28]*tmpFx[24] + tmpQ2[29]*tmpFx[31];
tmpQ1[39] = + tmpQ2[25]*tmpFx[4] + tmpQ2[26]*tmpFx[11] + tmpQ2[27]*tmpFx[18] + tmpQ2[28]*tmpFx[25] + tmpQ2[29]*tmpFx[32];
tmpQ1[40] = + tmpQ2[25]*tmpFx[5] + tmpQ2[26]*tmpFx[12] + tmpQ2[27]*tmpFx[19] + tmpQ2[28]*tmpFx[26] + tmpQ2[29]*tmpFx[33];
tmpQ1[41] = + tmpQ2[25]*tmpFx[6] + tmpQ2[26]*tmpFx[13] + tmpQ2[27]*tmpFx[20] + tmpQ2[28]*tmpFx[27] + tmpQ2[29]*tmpFx[34];
tmpQ1[42] = + tmpQ2[30]*tmpFx[0] + tmpQ2[31]*tmpFx[7] + tmpQ2[32]*tmpFx[14] + tmpQ2[33]*tmpFx[21] + tmpQ2[34]*tmpFx[28];
tmpQ1[43] = + tmpQ2[30]*tmpFx[1] + tmpQ2[31]*tmpFx[8] + tmpQ2[32]*tmpFx[15] + tmpQ2[33]*tmpFx[22] + tmpQ2[34]*tmpFx[29];
tmpQ1[44] = + tmpQ2[30]*tmpFx[2] + tmpQ2[31]*tmpFx[9] + tmpQ2[32]*tmpFx[16] + tmpQ2[33]*tmpFx[23] + tmpQ2[34]*tmpFx[30];
tmpQ1[45] = + tmpQ2[30]*tmpFx[3] + tmpQ2[31]*tmpFx[10] + tmpQ2[32]*tmpFx[17] + tmpQ2[33]*tmpFx[24] + tmpQ2[34]*tmpFx[31];
tmpQ1[46] = + tmpQ2[30]*tmpFx[4] + tmpQ2[31]*tmpFx[11] + tmpQ2[32]*tmpFx[18] + tmpQ2[33]*tmpFx[25] + tmpQ2[34]*tmpFx[32];
tmpQ1[47] = + tmpQ2[30]*tmpFx[5] + tmpQ2[31]*tmpFx[12] + tmpQ2[32]*tmpFx[19] + tmpQ2[33]*tmpFx[26] + tmpQ2[34]*tmpFx[33];
tmpQ1[48] = + tmpQ2[30]*tmpFx[6] + tmpQ2[31]*tmpFx[13] + tmpQ2[32]*tmpFx[20] + tmpQ2[33]*tmpFx[27] + tmpQ2[34]*tmpFx[34];
}

void acado_setObjR1R2( real_t* const tmpObjS, real_t* const tmpR1, real_t* const tmpR2 )
{
tmpR2[0] = +tmpObjS[15];
tmpR2[1] = +tmpObjS[16];
tmpR2[2] = +tmpObjS[17];
tmpR2[3] = +tmpObjS[18];
tmpR2[4] = +tmpObjS[19];
tmpR2[5] = 0.0;
;
tmpR2[6] = 0.0;
;
tmpR2[7] = 0.0;
;
tmpR2[8] = 0.0;
;
tmpR2[9] = 0.0;
;
tmpR1[0] = + tmpR2[3];
tmpR1[1] = 0.0;
;
tmpR1[2] = + tmpR2[8];
tmpR1[3] = 0.0;
;
}

void acado_setObjQN1QN2( real_t* const tmpObjSEndTerm, real_t* const tmpQN1, real_t* const tmpQN2 )
{
tmpQN2[0] = 0.0;
;
tmpQN2[1] = 0.0;
;
tmpQN2[2] = 0.0;
;
tmpQN2[3] = 0.0;
;
tmpQN2[4] = 0.0;
;
tmpQN2[5] = 0.0;
;
tmpQN2[6] = +tmpObjSEndTerm[0];
tmpQN2[7] = +tmpObjSEndTerm[1];
tmpQN2[8] = +tmpObjSEndTerm[2];
tmpQN2[9] = +tmpObjSEndTerm[3];
tmpQN2[10] = 0.0;
;
tmpQN2[11] = 0.0;
;
tmpQN2[12] = 0.0;
;
tmpQN2[13] = 0.0;
;
tmpQN1[0] = 0.0;
;
tmpQN1[1] = 0.0;
;
tmpQN1[2] = 0.0;
;
tmpQN1[3] = + tmpQN2[0];
tmpQN1[4] = + tmpQN2[1];
tmpQN1[5] = 0.0;
;
tmpQN1[6] = 0.0;
;
tmpQN1[7] = 0.0;
;
tmpQN1[8] = 0.0;
;
tmpQN1[9] = 0.0;
;
tmpQN1[10] = + tmpQN2[2];
tmpQN1[11] = + tmpQN2[3];
tmpQN1[12] = 0.0;
;
tmpQN1[13] = 0.0;
;
tmpQN1[14] = 0.0;
;
tmpQN1[15] = 0.0;
;
tmpQN1[16] = 0.0;
;
tmpQN1[17] = + tmpQN2[4];
tmpQN1[18] = + tmpQN2[5];
tmpQN1[19] = 0.0;
;
tmpQN1[20] = 0.0;
;
tmpQN1[21] = 0.0;
;
tmpQN1[22] = 0.0;
;
tmpQN1[23] = 0.0;
;
tmpQN1[24] = + tmpQN2[6];
tmpQN1[25] = + tmpQN2[7];
tmpQN1[26] = 0.0;
;
tmpQN1[27] = 0.0;
;
tmpQN1[28] = 0.0;
;
tmpQN1[29] = 0.0;
;
tmpQN1[30] = 0.0;
;
tmpQN1[31] = + tmpQN2[8];
tmpQN1[32] = + tmpQN2[9];
tmpQN1[33] = 0.0;
;
tmpQN1[34] = 0.0;
;
tmpQN1[35] = 0.0;
;
tmpQN1[36] = 0.0;
;
tmpQN1[37] = 0.0;
;
tmpQN1[38] = + tmpQN2[10];
tmpQN1[39] = + tmpQN2[11];
tmpQN1[40] = 0.0;
;
tmpQN1[41] = 0.0;
;
tmpQN1[42] = 0.0;
;
tmpQN1[43] = 0.0;
;
tmpQN1[44] = 0.0;
;
tmpQN1[45] = + tmpQN2[12];
tmpQN1[46] = + tmpQN2[13];
tmpQN1[47] = 0.0;
;
tmpQN1[48] = 0.0;
;
}

void acado_evaluateObjective(  )
{
int runObj;
for (runObj = 0; runObj < 25; ++runObj)
{
acadoWorkspace.objValueIn[0] = acadoVariables.x[runObj * 7];
acadoWorkspace.objValueIn[1] = acadoVariables.x[runObj * 7 + 1];
acadoWorkspace.objValueIn[2] = acadoVariables.x[runObj * 7 + 2];
acadoWorkspace.objValueIn[3] = acadoVariables.x[runObj * 7 + 3];
acadoWorkspace.objValueIn[4] = acadoVariables.x[runObj * 7 + 4];
acadoWorkspace.objValueIn[5] = acadoVariables.x[runObj * 7 + 5];
acadoWorkspace.objValueIn[6] = acadoVariables.x[runObj * 7 + 6];
acadoWorkspace.objValueIn[7] = acadoVariables.u[runObj * 2];
acadoWorkspace.objValueIn[8] = acadoVariables.u[runObj * 2 + 1];

acado_evaluateLSQ( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.Dy[runObj * 5] = acadoWorkspace.objValueOut[0];
acadoWorkspace.Dy[runObj * 5 + 1] = acadoWorkspace.objValueOut[1];
acadoWorkspace.Dy[runObj * 5 + 2] = acadoWorkspace.objValueOut[2];
acadoWorkspace.Dy[runObj * 5 + 3] = acadoWorkspace.objValueOut[3];
acadoWorkspace.Dy[runObj * 5 + 4] = acadoWorkspace.objValueOut[4];

acado_setObjQ1Q2( &(acadoWorkspace.objValueOut[ 5 ]), acadoVariables.W, &(acadoWorkspace.Q1[ runObj * 49 ]), &(acadoWorkspace.Q2[ runObj * 35 ]) );

acado_setObjR1R2( acadoVariables.W, &(acadoWorkspace.R1[ runObj * 4 ]), &(acadoWorkspace.R2[ runObj * 10 ]) );

}
acadoWorkspace.objValueIn[0] = acadoVariables.x[175];
acadoWorkspace.objValueIn[1] = acadoVariables.x[176];
acadoWorkspace.objValueIn[2] = acadoVariables.x[177];
acadoWorkspace.objValueIn[3] = acadoVariables.x[178];
acadoWorkspace.objValueIn[4] = acadoVariables.x[179];
acadoWorkspace.objValueIn[5] = acadoVariables.x[180];
acadoWorkspace.objValueIn[6] = acadoVariables.x[181];
acado_evaluateLSQEndTerm( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );

acadoWorkspace.DyN[0] = acadoWorkspace.objValueOut[0];
acadoWorkspace.DyN[1] = acadoWorkspace.objValueOut[1];

acado_setObjQN1QN2( acadoVariables.WN, acadoWorkspace.QN1, acadoWorkspace.QN2 );

}

void acado_multGxd( real_t* const dOld, real_t* const Gx1, real_t* const dNew )
{
dNew[0] += + Gx1[0]*dOld[0] + Gx1[1]*dOld[1] + Gx1[2]*dOld[2] + Gx1[3]*dOld[3] + Gx1[4]*dOld[4] + Gx1[5]*dOld[5] + Gx1[6]*dOld[6];
dNew[1] += + Gx1[7]*dOld[0] + Gx1[8]*dOld[1] + Gx1[9]*dOld[2] + Gx1[10]*dOld[3] + Gx1[11]*dOld[4] + Gx1[12]*dOld[5] + Gx1[13]*dOld[6];
dNew[2] += + Gx1[14]*dOld[0] + Gx1[15]*dOld[1] + Gx1[16]*dOld[2] + Gx1[17]*dOld[3] + Gx1[18]*dOld[4] + Gx1[19]*dOld[5] + Gx1[20]*dOld[6];
dNew[3] += + Gx1[21]*dOld[0] + Gx1[22]*dOld[1] + Gx1[23]*dOld[2] + Gx1[24]*dOld[3] + Gx1[25]*dOld[4] + Gx1[26]*dOld[5] + Gx1[27]*dOld[6];
dNew[4] += + Gx1[28]*dOld[0] + Gx1[29]*dOld[1] + Gx1[30]*dOld[2] + Gx1[31]*dOld[3] + Gx1[32]*dOld[4] + Gx1[33]*dOld[5] + Gx1[34]*dOld[6];
dNew[5] += + Gx1[35]*dOld[0] + Gx1[36]*dOld[1] + Gx1[37]*dOld[2] + Gx1[38]*dOld[3] + Gx1[39]*dOld[4] + Gx1[40]*dOld[5] + Gx1[41]*dOld[6];
dNew[6] += + Gx1[42]*dOld[0] + Gx1[43]*dOld[1] + Gx1[44]*dOld[2] + Gx1[45]*dOld[3] + Gx1[46]*dOld[4] + Gx1[47]*dOld[5] + Gx1[48]*dOld[6];
}

void acado_moveGxT( real_t* const Gx1, real_t* const Gx2 )
{
Gx2[0] = Gx1[0];
Gx2[1] = Gx1[1];
Gx2[2] = Gx1[2];
Gx2[3] = Gx1[3];
Gx2[4] = Gx1[4];
Gx2[5] = Gx1[5];
Gx2[6] = Gx1[6];
Gx2[7] = Gx1[7];
Gx2[8] = Gx1[8];
Gx2[9] = Gx1[9];
Gx2[10] = Gx1[10];
Gx2[11] = Gx1[11];
Gx2[12] = Gx1[12];
Gx2[13] = Gx1[13];
Gx2[14] = Gx1[14];
Gx2[15] = Gx1[15];
Gx2[16] = Gx1[16];
Gx2[17] = Gx1[17];
Gx2[18] = Gx1[18];
Gx2[19] = Gx1[19];
Gx2[20] = Gx1[20];
Gx2[21] = Gx1[21];
Gx2[22] = Gx1[22];
Gx2[23] = Gx1[23];
Gx2[24] = Gx1[24];
Gx2[25] = Gx1[25];
Gx2[26] = Gx1[26];
Gx2[27] = Gx1[27];
Gx2[28] = Gx1[28];
Gx2[29] = Gx1[29];
Gx2[30] = Gx1[30];
Gx2[31] = Gx1[31];
Gx2[32] = Gx1[32];
Gx2[33] = Gx1[33];
Gx2[34] = Gx1[34];
Gx2[35] = Gx1[35];
Gx2[36] = Gx1[36];
Gx2[37] = Gx1[37];
Gx2[38] = Gx1[38];
Gx2[39] = Gx1[39];
Gx2[40] = Gx1[40];
Gx2[41] = Gx1[41];
Gx2[42] = Gx1[42];
Gx2[43] = Gx1[43];
Gx2[44] = Gx1[44];
Gx2[45] = Gx1[45];
Gx2[46] = Gx1[46];
Gx2[47] = Gx1[47];
Gx2[48] = Gx1[48];
}

void acado_multGxGx( real_t* const Gx1, real_t* const Gx2, real_t* const Gx3 )
{
Gx3[0] = + Gx1[0]*Gx2[0] + Gx1[1]*Gx2[7] + Gx1[2]*Gx2[14] + Gx1[3]*Gx2[21] + Gx1[4]*Gx2[28] + Gx1[5]*Gx2[35] + Gx1[6]*Gx2[42];
Gx3[1] = + Gx1[0]*Gx2[1] + Gx1[1]*Gx2[8] + Gx1[2]*Gx2[15] + Gx1[3]*Gx2[22] + Gx1[4]*Gx2[29] + Gx1[5]*Gx2[36] + Gx1[6]*Gx2[43];
Gx3[2] = + Gx1[0]*Gx2[2] + Gx1[1]*Gx2[9] + Gx1[2]*Gx2[16] + Gx1[3]*Gx2[23] + Gx1[4]*Gx2[30] + Gx1[5]*Gx2[37] + Gx1[6]*Gx2[44];
Gx3[3] = + Gx1[0]*Gx2[3] + Gx1[1]*Gx2[10] + Gx1[2]*Gx2[17] + Gx1[3]*Gx2[24] + Gx1[4]*Gx2[31] + Gx1[5]*Gx2[38] + Gx1[6]*Gx2[45];
Gx3[4] = + Gx1[0]*Gx2[4] + Gx1[1]*Gx2[11] + Gx1[2]*Gx2[18] + Gx1[3]*Gx2[25] + Gx1[4]*Gx2[32] + Gx1[5]*Gx2[39] + Gx1[6]*Gx2[46];
Gx3[5] = + Gx1[0]*Gx2[5] + Gx1[1]*Gx2[12] + Gx1[2]*Gx2[19] + Gx1[3]*Gx2[26] + Gx1[4]*Gx2[33] + Gx1[5]*Gx2[40] + Gx1[6]*Gx2[47];
Gx3[6] = + Gx1[0]*Gx2[6] + Gx1[1]*Gx2[13] + Gx1[2]*Gx2[20] + Gx1[3]*Gx2[27] + Gx1[4]*Gx2[34] + Gx1[5]*Gx2[41] + Gx1[6]*Gx2[48];
Gx3[7] = + Gx1[7]*Gx2[0] + Gx1[8]*Gx2[7] + Gx1[9]*Gx2[14] + Gx1[10]*Gx2[21] + Gx1[11]*Gx2[28] + Gx1[12]*Gx2[35] + Gx1[13]*Gx2[42];
Gx3[8] = + Gx1[7]*Gx2[1] + Gx1[8]*Gx2[8] + Gx1[9]*Gx2[15] + Gx1[10]*Gx2[22] + Gx1[11]*Gx2[29] + Gx1[12]*Gx2[36] + Gx1[13]*Gx2[43];
Gx3[9] = + Gx1[7]*Gx2[2] + Gx1[8]*Gx2[9] + Gx1[9]*Gx2[16] + Gx1[10]*Gx2[23] + Gx1[11]*Gx2[30] + Gx1[12]*Gx2[37] + Gx1[13]*Gx2[44];
Gx3[10] = + Gx1[7]*Gx2[3] + Gx1[8]*Gx2[10] + Gx1[9]*Gx2[17] + Gx1[10]*Gx2[24] + Gx1[11]*Gx2[31] + Gx1[12]*Gx2[38] + Gx1[13]*Gx2[45];
Gx3[11] = + Gx1[7]*Gx2[4] + Gx1[8]*Gx2[11] + Gx1[9]*Gx2[18] + Gx1[10]*Gx2[25] + Gx1[11]*Gx2[32] + Gx1[12]*Gx2[39] + Gx1[13]*Gx2[46];
Gx3[12] = + Gx1[7]*Gx2[5] + Gx1[8]*Gx2[12] + Gx1[9]*Gx2[19] + Gx1[10]*Gx2[26] + Gx1[11]*Gx2[33] + Gx1[12]*Gx2[40] + Gx1[13]*Gx2[47];
Gx3[13] = + Gx1[7]*Gx2[6] + Gx1[8]*Gx2[13] + Gx1[9]*Gx2[20] + Gx1[10]*Gx2[27] + Gx1[11]*Gx2[34] + Gx1[12]*Gx2[41] + Gx1[13]*Gx2[48];
Gx3[14] = + Gx1[14]*Gx2[0] + Gx1[15]*Gx2[7] + Gx1[16]*Gx2[14] + Gx1[17]*Gx2[21] + Gx1[18]*Gx2[28] + Gx1[19]*Gx2[35] + Gx1[20]*Gx2[42];
Gx3[15] = + Gx1[14]*Gx2[1] + Gx1[15]*Gx2[8] + Gx1[16]*Gx2[15] + Gx1[17]*Gx2[22] + Gx1[18]*Gx2[29] + Gx1[19]*Gx2[36] + Gx1[20]*Gx2[43];
Gx3[16] = + Gx1[14]*Gx2[2] + Gx1[15]*Gx2[9] + Gx1[16]*Gx2[16] + Gx1[17]*Gx2[23] + Gx1[18]*Gx2[30] + Gx1[19]*Gx2[37] + Gx1[20]*Gx2[44];
Gx3[17] = + Gx1[14]*Gx2[3] + Gx1[15]*Gx2[10] + Gx1[16]*Gx2[17] + Gx1[17]*Gx2[24] + Gx1[18]*Gx2[31] + Gx1[19]*Gx2[38] + Gx1[20]*Gx2[45];
Gx3[18] = + Gx1[14]*Gx2[4] + Gx1[15]*Gx2[11] + Gx1[16]*Gx2[18] + Gx1[17]*Gx2[25] + Gx1[18]*Gx2[32] + Gx1[19]*Gx2[39] + Gx1[20]*Gx2[46];
Gx3[19] = + Gx1[14]*Gx2[5] + Gx1[15]*Gx2[12] + Gx1[16]*Gx2[19] + Gx1[17]*Gx2[26] + Gx1[18]*Gx2[33] + Gx1[19]*Gx2[40] + Gx1[20]*Gx2[47];
Gx3[20] = + Gx1[14]*Gx2[6] + Gx1[15]*Gx2[13] + Gx1[16]*Gx2[20] + Gx1[17]*Gx2[27] + Gx1[18]*Gx2[34] + Gx1[19]*Gx2[41] + Gx1[20]*Gx2[48];
Gx3[21] = + Gx1[21]*Gx2[0] + Gx1[22]*Gx2[7] + Gx1[23]*Gx2[14] + Gx1[24]*Gx2[21] + Gx1[25]*Gx2[28] + Gx1[26]*Gx2[35] + Gx1[27]*Gx2[42];
Gx3[22] = + Gx1[21]*Gx2[1] + Gx1[22]*Gx2[8] + Gx1[23]*Gx2[15] + Gx1[24]*Gx2[22] + Gx1[25]*Gx2[29] + Gx1[26]*Gx2[36] + Gx1[27]*Gx2[43];
Gx3[23] = + Gx1[21]*Gx2[2] + Gx1[22]*Gx2[9] + Gx1[23]*Gx2[16] + Gx1[24]*Gx2[23] + Gx1[25]*Gx2[30] + Gx1[26]*Gx2[37] + Gx1[27]*Gx2[44];
Gx3[24] = + Gx1[21]*Gx2[3] + Gx1[22]*Gx2[10] + Gx1[23]*Gx2[17] + Gx1[24]*Gx2[24] + Gx1[25]*Gx2[31] + Gx1[26]*Gx2[38] + Gx1[27]*Gx2[45];
Gx3[25] = + Gx1[21]*Gx2[4] + Gx1[22]*Gx2[11] + Gx1[23]*Gx2[18] + Gx1[24]*Gx2[25] + Gx1[25]*Gx2[32] + Gx1[26]*Gx2[39] + Gx1[27]*Gx2[46];
Gx3[26] = + Gx1[21]*Gx2[5] + Gx1[22]*Gx2[12] + Gx1[23]*Gx2[19] + Gx1[24]*Gx2[26] + Gx1[25]*Gx2[33] + Gx1[26]*Gx2[40] + Gx1[27]*Gx2[47];
Gx3[27] = + Gx1[21]*Gx2[6] + Gx1[22]*Gx2[13] + Gx1[23]*Gx2[20] + Gx1[24]*Gx2[27] + Gx1[25]*Gx2[34] + Gx1[26]*Gx2[41] + Gx1[27]*Gx2[48];
Gx3[28] = + Gx1[28]*Gx2[0] + Gx1[29]*Gx2[7] + Gx1[30]*Gx2[14] + Gx1[31]*Gx2[21] + Gx1[32]*Gx2[28] + Gx1[33]*Gx2[35] + Gx1[34]*Gx2[42];
Gx3[29] = + Gx1[28]*Gx2[1] + Gx1[29]*Gx2[8] + Gx1[30]*Gx2[15] + Gx1[31]*Gx2[22] + Gx1[32]*Gx2[29] + Gx1[33]*Gx2[36] + Gx1[34]*Gx2[43];
Gx3[30] = + Gx1[28]*Gx2[2] + Gx1[29]*Gx2[9] + Gx1[30]*Gx2[16] + Gx1[31]*Gx2[23] + Gx1[32]*Gx2[30] + Gx1[33]*Gx2[37] + Gx1[34]*Gx2[44];
Gx3[31] = + Gx1[28]*Gx2[3] + Gx1[29]*Gx2[10] + Gx1[30]*Gx2[17] + Gx1[31]*Gx2[24] + Gx1[32]*Gx2[31] + Gx1[33]*Gx2[38] + Gx1[34]*Gx2[45];
Gx3[32] = + Gx1[28]*Gx2[4] + Gx1[29]*Gx2[11] + Gx1[30]*Gx2[18] + Gx1[31]*Gx2[25] + Gx1[32]*Gx2[32] + Gx1[33]*Gx2[39] + Gx1[34]*Gx2[46];
Gx3[33] = + Gx1[28]*Gx2[5] + Gx1[29]*Gx2[12] + Gx1[30]*Gx2[19] + Gx1[31]*Gx2[26] + Gx1[32]*Gx2[33] + Gx1[33]*Gx2[40] + Gx1[34]*Gx2[47];
Gx3[34] = + Gx1[28]*Gx2[6] + Gx1[29]*Gx2[13] + Gx1[30]*Gx2[20] + Gx1[31]*Gx2[27] + Gx1[32]*Gx2[34] + Gx1[33]*Gx2[41] + Gx1[34]*Gx2[48];
Gx3[35] = + Gx1[35]*Gx2[0] + Gx1[36]*Gx2[7] + Gx1[37]*Gx2[14] + Gx1[38]*Gx2[21] + Gx1[39]*Gx2[28] + Gx1[40]*Gx2[35] + Gx1[41]*Gx2[42];
Gx3[36] = + Gx1[35]*Gx2[1] + Gx1[36]*Gx2[8] + Gx1[37]*Gx2[15] + Gx1[38]*Gx2[22] + Gx1[39]*Gx2[29] + Gx1[40]*Gx2[36] + Gx1[41]*Gx2[43];
Gx3[37] = + Gx1[35]*Gx2[2] + Gx1[36]*Gx2[9] + Gx1[37]*Gx2[16] + Gx1[38]*Gx2[23] + Gx1[39]*Gx2[30] + Gx1[40]*Gx2[37] + Gx1[41]*Gx2[44];
Gx3[38] = + Gx1[35]*Gx2[3] + Gx1[36]*Gx2[10] + Gx1[37]*Gx2[17] + Gx1[38]*Gx2[24] + Gx1[39]*Gx2[31] + Gx1[40]*Gx2[38] + Gx1[41]*Gx2[45];
Gx3[39] = + Gx1[35]*Gx2[4] + Gx1[36]*Gx2[11] + Gx1[37]*Gx2[18] + Gx1[38]*Gx2[25] + Gx1[39]*Gx2[32] + Gx1[40]*Gx2[39] + Gx1[41]*Gx2[46];
Gx3[40] = + Gx1[35]*Gx2[5] + Gx1[36]*Gx2[12] + Gx1[37]*Gx2[19] + Gx1[38]*Gx2[26] + Gx1[39]*Gx2[33] + Gx1[40]*Gx2[40] + Gx1[41]*Gx2[47];
Gx3[41] = + Gx1[35]*Gx2[6] + Gx1[36]*Gx2[13] + Gx1[37]*Gx2[20] + Gx1[38]*Gx2[27] + Gx1[39]*Gx2[34] + Gx1[40]*Gx2[41] + Gx1[41]*Gx2[48];
Gx3[42] = + Gx1[42]*Gx2[0] + Gx1[43]*Gx2[7] + Gx1[44]*Gx2[14] + Gx1[45]*Gx2[21] + Gx1[46]*Gx2[28] + Gx1[47]*Gx2[35] + Gx1[48]*Gx2[42];
Gx3[43] = + Gx1[42]*Gx2[1] + Gx1[43]*Gx2[8] + Gx1[44]*Gx2[15] + Gx1[45]*Gx2[22] + Gx1[46]*Gx2[29] + Gx1[47]*Gx2[36] + Gx1[48]*Gx2[43];
Gx3[44] = + Gx1[42]*Gx2[2] + Gx1[43]*Gx2[9] + Gx1[44]*Gx2[16] + Gx1[45]*Gx2[23] + Gx1[46]*Gx2[30] + Gx1[47]*Gx2[37] + Gx1[48]*Gx2[44];
Gx3[45] = + Gx1[42]*Gx2[3] + Gx1[43]*Gx2[10] + Gx1[44]*Gx2[17] + Gx1[45]*Gx2[24] + Gx1[46]*Gx2[31] + Gx1[47]*Gx2[38] + Gx1[48]*Gx2[45];
Gx3[46] = + Gx1[42]*Gx2[4] + Gx1[43]*Gx2[11] + Gx1[44]*Gx2[18] + Gx1[45]*Gx2[25] + Gx1[46]*Gx2[32] + Gx1[47]*Gx2[39] + Gx1[48]*Gx2[46];
Gx3[47] = + Gx1[42]*Gx2[5] + Gx1[43]*Gx2[12] + Gx1[44]*Gx2[19] + Gx1[45]*Gx2[26] + Gx1[46]*Gx2[33] + Gx1[47]*Gx2[40] + Gx1[48]*Gx2[47];
Gx3[48] = + Gx1[42]*Gx2[6] + Gx1[43]*Gx2[13] + Gx1[44]*Gx2[20] + Gx1[45]*Gx2[27] + Gx1[46]*Gx2[34] + Gx1[47]*Gx2[41] + Gx1[48]*Gx2[48];
}

void acado_multGxGu( real_t* const Gx1, real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = + Gx1[0]*Gu1[0] + Gx1[1]*Gu1[2] + Gx1[2]*Gu1[4] + Gx1[3]*Gu1[6] + Gx1[4]*Gu1[8] + Gx1[5]*Gu1[10] + Gx1[6]*Gu1[12];
Gu2[1] = + Gx1[0]*Gu1[1] + Gx1[1]*Gu1[3] + Gx1[2]*Gu1[5] + Gx1[3]*Gu1[7] + Gx1[4]*Gu1[9] + Gx1[5]*Gu1[11] + Gx1[6]*Gu1[13];
Gu2[2] = + Gx1[7]*Gu1[0] + Gx1[8]*Gu1[2] + Gx1[9]*Gu1[4] + Gx1[10]*Gu1[6] + Gx1[11]*Gu1[8] + Gx1[12]*Gu1[10] + Gx1[13]*Gu1[12];
Gu2[3] = + Gx1[7]*Gu1[1] + Gx1[8]*Gu1[3] + Gx1[9]*Gu1[5] + Gx1[10]*Gu1[7] + Gx1[11]*Gu1[9] + Gx1[12]*Gu1[11] + Gx1[13]*Gu1[13];
Gu2[4] = + Gx1[14]*Gu1[0] + Gx1[15]*Gu1[2] + Gx1[16]*Gu1[4] + Gx1[17]*Gu1[6] + Gx1[18]*Gu1[8] + Gx1[19]*Gu1[10] + Gx1[20]*Gu1[12];
Gu2[5] = + Gx1[14]*Gu1[1] + Gx1[15]*Gu1[3] + Gx1[16]*Gu1[5] + Gx1[17]*Gu1[7] + Gx1[18]*Gu1[9] + Gx1[19]*Gu1[11] + Gx1[20]*Gu1[13];
Gu2[6] = + Gx1[21]*Gu1[0] + Gx1[22]*Gu1[2] + Gx1[23]*Gu1[4] + Gx1[24]*Gu1[6] + Gx1[25]*Gu1[8] + Gx1[26]*Gu1[10] + Gx1[27]*Gu1[12];
Gu2[7] = + Gx1[21]*Gu1[1] + Gx1[22]*Gu1[3] + Gx1[23]*Gu1[5] + Gx1[24]*Gu1[7] + Gx1[25]*Gu1[9] + Gx1[26]*Gu1[11] + Gx1[27]*Gu1[13];
Gu2[8] = + Gx1[28]*Gu1[0] + Gx1[29]*Gu1[2] + Gx1[30]*Gu1[4] + Gx1[31]*Gu1[6] + Gx1[32]*Gu1[8] + Gx1[33]*Gu1[10] + Gx1[34]*Gu1[12];
Gu2[9] = + Gx1[28]*Gu1[1] + Gx1[29]*Gu1[3] + Gx1[30]*Gu1[5] + Gx1[31]*Gu1[7] + Gx1[32]*Gu1[9] + Gx1[33]*Gu1[11] + Gx1[34]*Gu1[13];
Gu2[10] = + Gx1[35]*Gu1[0] + Gx1[36]*Gu1[2] + Gx1[37]*Gu1[4] + Gx1[38]*Gu1[6] + Gx1[39]*Gu1[8] + Gx1[40]*Gu1[10] + Gx1[41]*Gu1[12];
Gu2[11] = + Gx1[35]*Gu1[1] + Gx1[36]*Gu1[3] + Gx1[37]*Gu1[5] + Gx1[38]*Gu1[7] + Gx1[39]*Gu1[9] + Gx1[40]*Gu1[11] + Gx1[41]*Gu1[13];
Gu2[12] = + Gx1[42]*Gu1[0] + Gx1[43]*Gu1[2] + Gx1[44]*Gu1[4] + Gx1[45]*Gu1[6] + Gx1[46]*Gu1[8] + Gx1[47]*Gu1[10] + Gx1[48]*Gu1[12];
Gu2[13] = + Gx1[42]*Gu1[1] + Gx1[43]*Gu1[3] + Gx1[44]*Gu1[5] + Gx1[45]*Gu1[7] + Gx1[46]*Gu1[9] + Gx1[47]*Gu1[11] + Gx1[48]*Gu1[13];
}

void acado_moveGuE( real_t* const Gu1, real_t* const Gu2 )
{
Gu2[0] = Gu1[0];
Gu2[1] = Gu1[1];
Gu2[2] = Gu1[2];
Gu2[3] = Gu1[3];
Gu2[4] = Gu1[4];
Gu2[5] = Gu1[5];
Gu2[6] = Gu1[6];
Gu2[7] = Gu1[7];
Gu2[8] = Gu1[8];
Gu2[9] = Gu1[9];
Gu2[10] = Gu1[10];
Gu2[11] = Gu1[11];
Gu2[12] = Gu1[12];
Gu2[13] = Gu1[13];
}

void acado_setBlockH11( int iRow, int iCol, real_t* const Gu1, real_t* const Gu2 )
{
acadoWorkspace.H[(iRow * 100) + (iCol * 2)] += + Gu1[0]*Gu2[0] + Gu1[2]*Gu2[2] + Gu1[4]*Gu2[4] + Gu1[6]*Gu2[6] + Gu1[8]*Gu2[8] + Gu1[10]*Gu2[10] + Gu1[12]*Gu2[12];
acadoWorkspace.H[(iRow * 100) + (iCol * 2 + 1)] += + Gu1[0]*Gu2[1] + Gu1[2]*Gu2[3] + Gu1[4]*Gu2[5] + Gu1[6]*Gu2[7] + Gu1[8]*Gu2[9] + Gu1[10]*Gu2[11] + Gu1[12]*Gu2[13];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2)] += + Gu1[1]*Gu2[0] + Gu1[3]*Gu2[2] + Gu1[5]*Gu2[4] + Gu1[7]*Gu2[6] + Gu1[9]*Gu2[8] + Gu1[11]*Gu2[10] + Gu1[13]*Gu2[12];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2 + 1)] += + Gu1[1]*Gu2[1] + Gu1[3]*Gu2[3] + Gu1[5]*Gu2[5] + Gu1[7]*Gu2[7] + Gu1[9]*Gu2[9] + Gu1[11]*Gu2[11] + Gu1[13]*Gu2[13];
}

void acado_setBlockH11_R1( int iRow, int iCol, real_t* const R11 )
{
acadoWorkspace.H[(iRow * 100) + (iCol * 2)] = R11[0] + (real_t)1.0000000000000000e-10;
acadoWorkspace.H[(iRow * 100) + (iCol * 2 + 1)] = R11[1];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2)] = R11[2];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2 + 1)] = R11[3] + (real_t)1.0000000000000000e-10;
}

void acado_zeroBlockH11( int iRow, int iCol )
{
acadoWorkspace.H[(iRow * 100) + (iCol * 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 100) + (iCol * 2 + 1)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2)] = 0.0000000000000000e+00;
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2 + 1)] = 0.0000000000000000e+00;
}

void acado_copyHTH( int iRow, int iCol )
{
acadoWorkspace.H[(iRow * 100) + (iCol * 2)] = acadoWorkspace.H[(iCol * 100) + (iRow * 2)];
acadoWorkspace.H[(iRow * 100) + (iCol * 2 + 1)] = acadoWorkspace.H[(iCol * 100 + 50) + (iRow * 2)];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2)] = acadoWorkspace.H[(iCol * 100) + (iRow * 2 + 1)];
acadoWorkspace.H[(iRow * 100 + 50) + (iCol * 2 + 1)] = acadoWorkspace.H[(iCol * 100 + 50) + (iRow * 2 + 1)];
}

void acado_multQ1d( real_t* const Gx1, real_t* const dOld, real_t* const dNew )
{
dNew[0] = + Gx1[0]*dOld[0] + Gx1[1]*dOld[1] + Gx1[2]*dOld[2] + Gx1[3]*dOld[3] + Gx1[4]*dOld[4] + Gx1[5]*dOld[5] + Gx1[6]*dOld[6];
dNew[1] = + Gx1[7]*dOld[0] + Gx1[8]*dOld[1] + Gx1[9]*dOld[2] + Gx1[10]*dOld[3] + Gx1[11]*dOld[4] + Gx1[12]*dOld[5] + Gx1[13]*dOld[6];
dNew[2] = + Gx1[14]*dOld[0] + Gx1[15]*dOld[1] + Gx1[16]*dOld[2] + Gx1[17]*dOld[3] + Gx1[18]*dOld[4] + Gx1[19]*dOld[5] + Gx1[20]*dOld[6];
dNew[3] = + Gx1[21]*dOld[0] + Gx1[22]*dOld[1] + Gx1[23]*dOld[2] + Gx1[24]*dOld[3] + Gx1[25]*dOld[4] + Gx1[26]*dOld[5] + Gx1[27]*dOld[6];
dNew[4] = + Gx1[28]*dOld[0] + Gx1[29]*dOld[1] + Gx1[30]*dOld[2] + Gx1[31]*dOld[3] + Gx1[32]*dOld[4] + Gx1[33]*dOld[5] + Gx1[34]*dOld[6];
dNew[5] = + Gx1[35]*dOld[0] + Gx1[36]*dOld[1] + Gx1[37]*dOld[2] + Gx1[38]*dOld[3] + Gx1[39]*dOld[4] + Gx1[40]*dOld[5] + Gx1[41]*dOld[6];
dNew[6] = + Gx1[42]*dOld[0] + Gx1[43]*dOld[1] + Gx1[44]*dOld[2] + Gx1[45]*dOld[3] + Gx1[46]*dOld[4] + Gx1[47]*dOld[5] + Gx1[48]*dOld[6];
}

void acado_multQN1d( real_t* const QN1, real_t* const dOld, real_t* const dNew )
{
dNew[0] = + acadoWorkspace.QN1[0]*dOld[0] + acadoWorkspace.QN1[1]*dOld[1] + acadoWorkspace.QN1[2]*dOld[2] + acadoWorkspace.QN1[3]*dOld[3] + acadoWorkspace.QN1[4]*dOld[4] + acadoWorkspace.QN1[5]*dOld[5] + acadoWorkspace.QN1[6]*dOld[6];
dNew[1] = + acadoWorkspace.QN1[7]*dOld[0] + acadoWorkspace.QN1[8]*dOld[1] + acadoWorkspace.QN1[9]*dOld[2] + acadoWorkspace.QN1[10]*dOld[3] + acadoWorkspace.QN1[11]*dOld[4] + acadoWorkspace.QN1[12]*dOld[5] + acadoWorkspace.QN1[13]*dOld[6];
dNew[2] = + acadoWorkspace.QN1[14]*dOld[0] + acadoWorkspace.QN1[15]*dOld[1] + acadoWorkspace.QN1[16]*dOld[2] + acadoWorkspace.QN1[17]*dOld[3] + acadoWorkspace.QN1[18]*dOld[4] + acadoWorkspace.QN1[19]*dOld[5] + acadoWorkspace.QN1[20]*dOld[6];
dNew[3] = + acadoWorkspace.QN1[21]*dOld[0] + acadoWorkspace.QN1[22]*dOld[1] + acadoWorkspace.QN1[23]*dOld[2] + acadoWorkspace.QN1[24]*dOld[3] + acadoWorkspace.QN1[25]*dOld[4] + acadoWorkspace.QN1[26]*dOld[5] + acadoWorkspace.QN1[27]*dOld[6];
dNew[4] = + acadoWorkspace.QN1[28]*dOld[0] + acadoWorkspace.QN1[29]*dOld[1] + acadoWorkspace.QN1[30]*dOld[2] + acadoWorkspace.QN1[31]*dOld[3] + acadoWorkspace.QN1[32]*dOld[4] + acadoWorkspace.QN1[33]*dOld[5] + acadoWorkspace.QN1[34]*dOld[6];
dNew[5] = + acadoWorkspace.QN1[35]*dOld[0] + acadoWorkspace.QN1[36]*dOld[1] + acadoWorkspace.QN1[37]*dOld[2] + acadoWorkspace.QN1[38]*dOld[3] + acadoWorkspace.QN1[39]*dOld[4] + acadoWorkspace.QN1[40]*dOld[5] + acadoWorkspace.QN1[41]*dOld[6];
dNew[6] = + acadoWorkspace.QN1[42]*dOld[0] + acadoWorkspace.QN1[43]*dOld[1] + acadoWorkspace.QN1[44]*dOld[2] + acadoWorkspace.QN1[45]*dOld[3] + acadoWorkspace.QN1[46]*dOld[4] + acadoWorkspace.QN1[47]*dOld[5] + acadoWorkspace.QN1[48]*dOld[6];
}

void acado_multRDy( real_t* const R2, real_t* const Dy1, real_t* const RDy1 )
{
RDy1[0] = + R2[0]*Dy1[0] + R2[1]*Dy1[1] + R2[2]*Dy1[2] + R2[3]*Dy1[3] + R2[4]*Dy1[4];
RDy1[1] = + R2[5]*Dy1[0] + R2[6]*Dy1[1] + R2[7]*Dy1[2] + R2[8]*Dy1[3] + R2[9]*Dy1[4];
}

void acado_multQDy( real_t* const Q2, real_t* const Dy1, real_t* const QDy1 )
{
QDy1[0] = + Q2[0]*Dy1[0] + Q2[1]*Dy1[1] + Q2[2]*Dy1[2] + Q2[3]*Dy1[3] + Q2[4]*Dy1[4];
QDy1[1] = + Q2[5]*Dy1[0] + Q2[6]*Dy1[1] + Q2[7]*Dy1[2] + Q2[8]*Dy1[3] + Q2[9]*Dy1[4];
QDy1[2] = + Q2[10]*Dy1[0] + Q2[11]*Dy1[1] + Q2[12]*Dy1[2] + Q2[13]*Dy1[3] + Q2[14]*Dy1[4];
QDy1[3] = + Q2[15]*Dy1[0] + Q2[16]*Dy1[1] + Q2[17]*Dy1[2] + Q2[18]*Dy1[3] + Q2[19]*Dy1[4];
QDy1[4] = + Q2[20]*Dy1[0] + Q2[21]*Dy1[1] + Q2[22]*Dy1[2] + Q2[23]*Dy1[3] + Q2[24]*Dy1[4];
QDy1[5] = + Q2[25]*Dy1[0] + Q2[26]*Dy1[1] + Q2[27]*Dy1[2] + Q2[28]*Dy1[3] + Q2[29]*Dy1[4];
QDy1[6] = + Q2[30]*Dy1[0] + Q2[31]*Dy1[1] + Q2[32]*Dy1[2] + Q2[33]*Dy1[3] + Q2[34]*Dy1[4];
}

void acado_multEQDy( real_t* const E1, real_t* const QDy1, real_t* const U1 )
{
U1[0] += + E1[0]*QDy1[0] + E1[2]*QDy1[1] + E1[4]*QDy1[2] + E1[6]*QDy1[3] + E1[8]*QDy1[4] + E1[10]*QDy1[5] + E1[12]*QDy1[6];
U1[1] += + E1[1]*QDy1[0] + E1[3]*QDy1[1] + E1[5]*QDy1[2] + E1[7]*QDy1[3] + E1[9]*QDy1[4] + E1[11]*QDy1[5] + E1[13]*QDy1[6];
}

void acado_multQETGx( real_t* const E1, real_t* const Gx1, real_t* const H101 )
{
H101[0] += + E1[0]*Gx1[0] + E1[2]*Gx1[7] + E1[4]*Gx1[14] + E1[6]*Gx1[21] + E1[8]*Gx1[28] + E1[10]*Gx1[35] + E1[12]*Gx1[42];
H101[1] += + E1[0]*Gx1[1] + E1[2]*Gx1[8] + E1[4]*Gx1[15] + E1[6]*Gx1[22] + E1[8]*Gx1[29] + E1[10]*Gx1[36] + E1[12]*Gx1[43];
H101[2] += + E1[0]*Gx1[2] + E1[2]*Gx1[9] + E1[4]*Gx1[16] + E1[6]*Gx1[23] + E1[8]*Gx1[30] + E1[10]*Gx1[37] + E1[12]*Gx1[44];
H101[3] += + E1[0]*Gx1[3] + E1[2]*Gx1[10] + E1[4]*Gx1[17] + E1[6]*Gx1[24] + E1[8]*Gx1[31] + E1[10]*Gx1[38] + E1[12]*Gx1[45];
H101[4] += + E1[0]*Gx1[4] + E1[2]*Gx1[11] + E1[4]*Gx1[18] + E1[6]*Gx1[25] + E1[8]*Gx1[32] + E1[10]*Gx1[39] + E1[12]*Gx1[46];
H101[5] += + E1[0]*Gx1[5] + E1[2]*Gx1[12] + E1[4]*Gx1[19] + E1[6]*Gx1[26] + E1[8]*Gx1[33] + E1[10]*Gx1[40] + E1[12]*Gx1[47];
H101[6] += + E1[0]*Gx1[6] + E1[2]*Gx1[13] + E1[4]*Gx1[20] + E1[6]*Gx1[27] + E1[8]*Gx1[34] + E1[10]*Gx1[41] + E1[12]*Gx1[48];
H101[7] += + E1[1]*Gx1[0] + E1[3]*Gx1[7] + E1[5]*Gx1[14] + E1[7]*Gx1[21] + E1[9]*Gx1[28] + E1[11]*Gx1[35] + E1[13]*Gx1[42];
H101[8] += + E1[1]*Gx1[1] + E1[3]*Gx1[8] + E1[5]*Gx1[15] + E1[7]*Gx1[22] + E1[9]*Gx1[29] + E1[11]*Gx1[36] + E1[13]*Gx1[43];
H101[9] += + E1[1]*Gx1[2] + E1[3]*Gx1[9] + E1[5]*Gx1[16] + E1[7]*Gx1[23] + E1[9]*Gx1[30] + E1[11]*Gx1[37] + E1[13]*Gx1[44];
H101[10] += + E1[1]*Gx1[3] + E1[3]*Gx1[10] + E1[5]*Gx1[17] + E1[7]*Gx1[24] + E1[9]*Gx1[31] + E1[11]*Gx1[38] + E1[13]*Gx1[45];
H101[11] += + E1[1]*Gx1[4] + E1[3]*Gx1[11] + E1[5]*Gx1[18] + E1[7]*Gx1[25] + E1[9]*Gx1[32] + E1[11]*Gx1[39] + E1[13]*Gx1[46];
H101[12] += + E1[1]*Gx1[5] + E1[3]*Gx1[12] + E1[5]*Gx1[19] + E1[7]*Gx1[26] + E1[9]*Gx1[33] + E1[11]*Gx1[40] + E1[13]*Gx1[47];
H101[13] += + E1[1]*Gx1[6] + E1[3]*Gx1[13] + E1[5]*Gx1[20] + E1[7]*Gx1[27] + E1[9]*Gx1[34] + E1[11]*Gx1[41] + E1[13]*Gx1[48];
}

void acado_zeroBlockH10( real_t* const H101 )
{
{ int lCopy; for (lCopy = 0; lCopy < 14; lCopy++) H101[ lCopy ] = 0; }
}

void acado_multEDu( real_t* const E1, real_t* const U1, real_t* const dNew )
{
dNew[0] += + E1[0]*U1[0] + E1[1]*U1[1];
dNew[1] += + E1[2]*U1[0] + E1[3]*U1[1];
dNew[2] += + E1[4]*U1[0] + E1[5]*U1[1];
dNew[3] += + E1[6]*U1[0] + E1[7]*U1[1];
dNew[4] += + E1[8]*U1[0] + E1[9]*U1[1];
dNew[5] += + E1[10]*U1[0] + E1[11]*U1[1];
dNew[6] += + E1[12]*U1[0] + E1[13]*U1[1];
}

void acado_macETSlu( real_t* const E0, real_t* const g1 )
{
g1[0] += 0.0;
;
g1[1] += 0.0;
;
}

void acado_condensePrep(  )
{
int lRun1;
int lRun2;
int lRun3;
int lRun4;
int lRun5;
/** Row vector of size: 25 */
static const int xBoundIndices[ 25 ] = 
{ 12, 19, 26, 33, 40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180 };
acado_moveGuE( acadoWorkspace.evGu, acadoWorkspace.E );
for (lRun1 = 1; lRun1 < 25; ++lRun1)
{
acado_moveGxT( &(acadoWorkspace.evGx[ lRun1 * 49 ]), acadoWorkspace.T );
acado_multGxd( &(acadoWorkspace.d[ lRun1 * 7-7 ]), &(acadoWorkspace.evGx[ lRun1 * 49 ]), &(acadoWorkspace.d[ lRun1 * 7 ]) );
acado_multGxGx( acadoWorkspace.T, &(acadoWorkspace.evGx[ lRun1 * 49-49 ]), &(acadoWorkspace.evGx[ lRun1 * 49 ]) );
for (lRun2 = 0; lRun2 < lRun1; ++lRun2)
{
lRun4 = (((lRun1) * (lRun1-1)) / (2)) + (lRun2);
lRun3 = (((lRun1 + 1) * (lRun1)) / (2)) + (lRun2);
acado_multGxGu( acadoWorkspace.T, &(acadoWorkspace.E[ lRun4 * 14 ]), &(acadoWorkspace.E[ lRun3 * 14 ]) );
}
lRun3 = (((lRun1 + 1) * (lRun1)) / (2)) + (lRun2);
acado_moveGuE( &(acadoWorkspace.evGu[ lRun1 * 14 ]), &(acadoWorkspace.E[ lRun3 * 14 ]) );
}

for (lRun1 = 0; lRun1 < 24; ++lRun1)
{
for (lRun2 = 0; lRun2 < lRun1 + 1; ++lRun2)
{
lRun3 = (((lRun1 + 1) * (lRun1)) / (2)) + (lRun2);
acado_multGxGu( &(acadoWorkspace.Q1[ lRun1 * 49 + 49 ]), &(acadoWorkspace.E[ lRun3 * 14 ]), &(acadoWorkspace.QE[ lRun3 * 14 ]) );
}
}

for (lRun2 = 0; lRun2 < lRun1 + 1; ++lRun2)
{
lRun3 = (((lRun1 + 1) * (lRun1)) / (2)) + (lRun2);
acado_multGxGu( acadoWorkspace.QN1, &(acadoWorkspace.E[ lRun3 * 14 ]), &(acadoWorkspace.QE[ lRun3 * 14 ]) );
}

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
acado_zeroBlockH10( &(acadoWorkspace.H10[ lRun1 * 14 ]) );
for (lRun2 = lRun1; lRun2 < 25; ++lRun2)
{
lRun3 = (((lRun2 + 1) * (lRun2)) / (2)) + (lRun1);
acado_multQETGx( &(acadoWorkspace.QE[ lRun3 * 14 ]), &(acadoWorkspace.evGx[ lRun2 * 49 ]), &(acadoWorkspace.H10[ lRun1 * 14 ]) );
}
}

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
acado_setBlockH11_R1( lRun1, lRun1, &(acadoWorkspace.R1[ lRun1 * 4 ]) );
lRun2 = lRun1;
for (lRun3 = lRun1; lRun3 < 25; ++lRun3)
{
lRun4 = (((lRun3 + 1) * (lRun3)) / (2)) + (lRun1);
lRun5 = (((lRun3 + 1) * (lRun3)) / (2)) + (lRun2);
acado_setBlockH11( lRun1, lRun2, &(acadoWorkspace.E[ lRun4 * 14 ]), &(acadoWorkspace.QE[ lRun5 * 14 ]) );
}
for (lRun2 = lRun1 + 1; lRun2 < 25; ++lRun2)
{
acado_zeroBlockH11( lRun1, lRun2 );
for (lRun3 = lRun2; lRun3 < 25; ++lRun3)
{
lRun4 = (((lRun3 + 1) * (lRun3)) / (2)) + (lRun1);
lRun5 = (((lRun3 + 1) * (lRun3)) / (2)) + (lRun2);
acado_setBlockH11( lRun1, lRun2, &(acadoWorkspace.E[ lRun4 * 14 ]), &(acadoWorkspace.QE[ lRun5 * 14 ]) );
}
}
}

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
for (lRun2 = 0; lRun2 < lRun1; ++lRun2)
{
acado_copyHTH( lRun1, lRun2 );
}
}

acado_multQ1d( &(acadoWorkspace.Q1[ 49 ]), acadoWorkspace.d, acadoWorkspace.Qd );
acado_multQ1d( &(acadoWorkspace.Q1[ 98 ]), &(acadoWorkspace.d[ 7 ]), &(acadoWorkspace.Qd[ 7 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 147 ]), &(acadoWorkspace.d[ 14 ]), &(acadoWorkspace.Qd[ 14 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 196 ]), &(acadoWorkspace.d[ 21 ]), &(acadoWorkspace.Qd[ 21 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 245 ]), &(acadoWorkspace.d[ 28 ]), &(acadoWorkspace.Qd[ 28 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 294 ]), &(acadoWorkspace.d[ 35 ]), &(acadoWorkspace.Qd[ 35 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 343 ]), &(acadoWorkspace.d[ 42 ]), &(acadoWorkspace.Qd[ 42 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 392 ]), &(acadoWorkspace.d[ 49 ]), &(acadoWorkspace.Qd[ 49 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 441 ]), &(acadoWorkspace.d[ 56 ]), &(acadoWorkspace.Qd[ 56 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 490 ]), &(acadoWorkspace.d[ 63 ]), &(acadoWorkspace.Qd[ 63 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 539 ]), &(acadoWorkspace.d[ 70 ]), &(acadoWorkspace.Qd[ 70 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 588 ]), &(acadoWorkspace.d[ 77 ]), &(acadoWorkspace.Qd[ 77 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 637 ]), &(acadoWorkspace.d[ 84 ]), &(acadoWorkspace.Qd[ 84 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 686 ]), &(acadoWorkspace.d[ 91 ]), &(acadoWorkspace.Qd[ 91 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 735 ]), &(acadoWorkspace.d[ 98 ]), &(acadoWorkspace.Qd[ 98 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 784 ]), &(acadoWorkspace.d[ 105 ]), &(acadoWorkspace.Qd[ 105 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 833 ]), &(acadoWorkspace.d[ 112 ]), &(acadoWorkspace.Qd[ 112 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 882 ]), &(acadoWorkspace.d[ 119 ]), &(acadoWorkspace.Qd[ 119 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 931 ]), &(acadoWorkspace.d[ 126 ]), &(acadoWorkspace.Qd[ 126 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 980 ]), &(acadoWorkspace.d[ 133 ]), &(acadoWorkspace.Qd[ 133 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 1029 ]), &(acadoWorkspace.d[ 140 ]), &(acadoWorkspace.Qd[ 140 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 1078 ]), &(acadoWorkspace.d[ 147 ]), &(acadoWorkspace.Qd[ 147 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 1127 ]), &(acadoWorkspace.d[ 154 ]), &(acadoWorkspace.Qd[ 154 ]) );
acado_multQ1d( &(acadoWorkspace.Q1[ 1176 ]), &(acadoWorkspace.d[ 161 ]), &(acadoWorkspace.Qd[ 161 ]) );
acado_multQN1d( acadoWorkspace.QN1, &(acadoWorkspace.d[ 168 ]), &(acadoWorkspace.Qd[ 168 ]) );

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
for (lRun2 = lRun1; lRun2 < 25; ++lRun2)
{
lRun3 = (((lRun2 + 1) * (lRun2)) / (2)) + (lRun1);
acado_macETSlu( &(acadoWorkspace.QE[ lRun3 * 14 ]), &(acadoWorkspace.g[ lRun1 * 2 ]) );
}
}
acadoWorkspace.lb[0] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[0];
acadoWorkspace.lb[1] = - acadoVariables.u[1];
acadoWorkspace.lb[2] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[2];
acadoWorkspace.lb[3] = - acadoVariables.u[3];
acadoWorkspace.lb[4] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[4];
acadoWorkspace.lb[5] = - acadoVariables.u[5];
acadoWorkspace.lb[6] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[6];
acadoWorkspace.lb[7] = - acadoVariables.u[7];
acadoWorkspace.lb[8] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[8];
acadoWorkspace.lb[9] = - acadoVariables.u[9];
acadoWorkspace.lb[10] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[10];
acadoWorkspace.lb[11] = - acadoVariables.u[11];
acadoWorkspace.lb[12] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[12];
acadoWorkspace.lb[13] = - acadoVariables.u[13];
acadoWorkspace.lb[14] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[14];
acadoWorkspace.lb[15] = - acadoVariables.u[15];
acadoWorkspace.lb[16] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[16];
acadoWorkspace.lb[17] = - acadoVariables.u[17];
acadoWorkspace.lb[18] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[18];
acadoWorkspace.lb[19] = - acadoVariables.u[19];
acadoWorkspace.lb[20] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[20];
acadoWorkspace.lb[21] = - acadoVariables.u[21];
acadoWorkspace.lb[22] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[22];
acadoWorkspace.lb[23] = - acadoVariables.u[23];
acadoWorkspace.lb[24] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[24];
acadoWorkspace.lb[25] = - acadoVariables.u[25];
acadoWorkspace.lb[26] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[26];
acadoWorkspace.lb[27] = - acadoVariables.u[27];
acadoWorkspace.lb[28] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[28];
acadoWorkspace.lb[29] = - acadoVariables.u[29];
acadoWorkspace.lb[30] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[30];
acadoWorkspace.lb[31] = - acadoVariables.u[31];
acadoWorkspace.lb[32] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[32];
acadoWorkspace.lb[33] = - acadoVariables.u[33];
acadoWorkspace.lb[34] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[34];
acadoWorkspace.lb[35] = - acadoVariables.u[35];
acadoWorkspace.lb[36] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[36];
acadoWorkspace.lb[37] = - acadoVariables.u[37];
acadoWorkspace.lb[38] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[38];
acadoWorkspace.lb[39] = - acadoVariables.u[39];
acadoWorkspace.lb[40] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[40];
acadoWorkspace.lb[41] = - acadoVariables.u[41];
acadoWorkspace.lb[42] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[42];
acadoWorkspace.lb[43] = - acadoVariables.u[43];
acadoWorkspace.lb[44] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[44];
acadoWorkspace.lb[45] = - acadoVariables.u[45];
acadoWorkspace.lb[46] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[46];
acadoWorkspace.lb[47] = - acadoVariables.u[47];
acadoWorkspace.lb[48] = (real_t)-1.3962634015954636e-01 - acadoVariables.u[48];
acadoWorkspace.lb[49] = - acadoVariables.u[49];
acadoWorkspace.ub[0] = (real_t)1.3962634015954636e-01 - acadoVariables.u[0];
acadoWorkspace.ub[1] = - acadoVariables.u[1];
acadoWorkspace.ub[2] = (real_t)1.3962634015954636e-01 - acadoVariables.u[2];
acadoWorkspace.ub[3] = - acadoVariables.u[3];
acadoWorkspace.ub[4] = (real_t)1.3962634015954636e-01 - acadoVariables.u[4];
acadoWorkspace.ub[5] = - acadoVariables.u[5];
acadoWorkspace.ub[6] = (real_t)1.3962634015954636e-01 - acadoVariables.u[6];
acadoWorkspace.ub[7] = - acadoVariables.u[7];
acadoWorkspace.ub[8] = (real_t)1.3962634015954636e-01 - acadoVariables.u[8];
acadoWorkspace.ub[9] = - acadoVariables.u[9];
acadoWorkspace.ub[10] = (real_t)1.3962634015954636e-01 - acadoVariables.u[10];
acadoWorkspace.ub[11] = - acadoVariables.u[11];
acadoWorkspace.ub[12] = (real_t)1.3962634015954636e-01 - acadoVariables.u[12];
acadoWorkspace.ub[13] = - acadoVariables.u[13];
acadoWorkspace.ub[14] = (real_t)1.3962634015954636e-01 - acadoVariables.u[14];
acadoWorkspace.ub[15] = - acadoVariables.u[15];
acadoWorkspace.ub[16] = (real_t)1.3962634015954636e-01 - acadoVariables.u[16];
acadoWorkspace.ub[17] = - acadoVariables.u[17];
acadoWorkspace.ub[18] = (real_t)1.3962634015954636e-01 - acadoVariables.u[18];
acadoWorkspace.ub[19] = - acadoVariables.u[19];
acadoWorkspace.ub[20] = (real_t)1.3962634015954636e-01 - acadoVariables.u[20];
acadoWorkspace.ub[21] = - acadoVariables.u[21];
acadoWorkspace.ub[22] = (real_t)1.3962634015954636e-01 - acadoVariables.u[22];
acadoWorkspace.ub[23] = - acadoVariables.u[23];
acadoWorkspace.ub[24] = (real_t)1.3962634015954636e-01 - acadoVariables.u[24];
acadoWorkspace.ub[25] = - acadoVariables.u[25];
acadoWorkspace.ub[26] = (real_t)1.3962634015954636e-01 - acadoVariables.u[26];
acadoWorkspace.ub[27] = - acadoVariables.u[27];
acadoWorkspace.ub[28] = (real_t)1.3962634015954636e-01 - acadoVariables.u[28];
acadoWorkspace.ub[29] = - acadoVariables.u[29];
acadoWorkspace.ub[30] = (real_t)1.3962634015954636e-01 - acadoVariables.u[30];
acadoWorkspace.ub[31] = - acadoVariables.u[31];
acadoWorkspace.ub[32] = (real_t)1.3962634015954636e-01 - acadoVariables.u[32];
acadoWorkspace.ub[33] = - acadoVariables.u[33];
acadoWorkspace.ub[34] = (real_t)1.3962634015954636e-01 - acadoVariables.u[34];
acadoWorkspace.ub[35] = - acadoVariables.u[35];
acadoWorkspace.ub[36] = (real_t)1.3962634015954636e-01 - acadoVariables.u[36];
acadoWorkspace.ub[37] = - acadoVariables.u[37];
acadoWorkspace.ub[38] = (real_t)1.3962634015954636e-01 - acadoVariables.u[38];
acadoWorkspace.ub[39] = - acadoVariables.u[39];
acadoWorkspace.ub[40] = (real_t)1.3962634015954636e-01 - acadoVariables.u[40];
acadoWorkspace.ub[41] = - acadoVariables.u[41];
acadoWorkspace.ub[42] = (real_t)1.3962634015954636e-01 - acadoVariables.u[42];
acadoWorkspace.ub[43] = - acadoVariables.u[43];
acadoWorkspace.ub[44] = (real_t)1.3962634015954636e-01 - acadoVariables.u[44];
acadoWorkspace.ub[45] = - acadoVariables.u[45];
acadoWorkspace.ub[46] = (real_t)1.3962634015954636e-01 - acadoVariables.u[46];
acadoWorkspace.ub[47] = - acadoVariables.u[47];
acadoWorkspace.ub[48] = (real_t)1.3962634015954636e-01 - acadoVariables.u[48];
acadoWorkspace.ub[49] = - acadoVariables.u[49];

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
lRun3 = xBoundIndices[ lRun1 ] - 7;
lRun4 = ((lRun3) / (7)) + (1);
for (lRun2 = 0; lRun2 < lRun4; ++lRun2)
{
lRun5 = (((((lRun4) * (lRun4-1)) / (2)) + (lRun2)) * (7)) + ((lRun3) % (7));
acadoWorkspace.A[(lRun1 * 50) + (lRun2 * 2)] = acadoWorkspace.E[lRun5 * 2];
acadoWorkspace.A[(lRun1 * 50) + (lRun2 * 2 + 1)] = acadoWorkspace.E[lRun5 * 2 + 1];
}
}

}

void acado_condenseFdb(  )
{
int lRun1;
int lRun2;
int lRun3;
real_t tmp;

acadoWorkspace.Dx0[0] = acadoVariables.x0[0] - acadoVariables.x[0];
acadoWorkspace.Dx0[1] = acadoVariables.x0[1] - acadoVariables.x[1];
acadoWorkspace.Dx0[2] = acadoVariables.x0[2] - acadoVariables.x[2];
acadoWorkspace.Dx0[3] = acadoVariables.x0[3] - acadoVariables.x[3];
acadoWorkspace.Dx0[4] = acadoVariables.x0[4] - acadoVariables.x[4];
acadoWorkspace.Dx0[5] = acadoVariables.x0[5] - acadoVariables.x[5];
acadoWorkspace.Dx0[6] = acadoVariables.x0[6] - acadoVariables.x[6];

acadoWorkspace.Dy[0] -= acadoVariables.y[0];
acadoWorkspace.Dy[1] -= acadoVariables.y[1];
acadoWorkspace.Dy[2] -= acadoVariables.y[2];
acadoWorkspace.Dy[3] -= acadoVariables.y[3];
acadoWorkspace.Dy[4] -= acadoVariables.y[4];
acadoWorkspace.Dy[5] -= acadoVariables.y[5];
acadoWorkspace.Dy[6] -= acadoVariables.y[6];
acadoWorkspace.Dy[7] -= acadoVariables.y[7];
acadoWorkspace.Dy[8] -= acadoVariables.y[8];
acadoWorkspace.Dy[9] -= acadoVariables.y[9];
acadoWorkspace.Dy[10] -= acadoVariables.y[10];
acadoWorkspace.Dy[11] -= acadoVariables.y[11];
acadoWorkspace.Dy[12] -= acadoVariables.y[12];
acadoWorkspace.Dy[13] -= acadoVariables.y[13];
acadoWorkspace.Dy[14] -= acadoVariables.y[14];
acadoWorkspace.Dy[15] -= acadoVariables.y[15];
acadoWorkspace.Dy[16] -= acadoVariables.y[16];
acadoWorkspace.Dy[17] -= acadoVariables.y[17];
acadoWorkspace.Dy[18] -= acadoVariables.y[18];
acadoWorkspace.Dy[19] -= acadoVariables.y[19];
acadoWorkspace.Dy[20] -= acadoVariables.y[20];
acadoWorkspace.Dy[21] -= acadoVariables.y[21];
acadoWorkspace.Dy[22] -= acadoVariables.y[22];
acadoWorkspace.Dy[23] -= acadoVariables.y[23];
acadoWorkspace.Dy[24] -= acadoVariables.y[24];
acadoWorkspace.Dy[25] -= acadoVariables.y[25];
acadoWorkspace.Dy[26] -= acadoVariables.y[26];
acadoWorkspace.Dy[27] -= acadoVariables.y[27];
acadoWorkspace.Dy[28] -= acadoVariables.y[28];
acadoWorkspace.Dy[29] -= acadoVariables.y[29];
acadoWorkspace.Dy[30] -= acadoVariables.y[30];
acadoWorkspace.Dy[31] -= acadoVariables.y[31];
acadoWorkspace.Dy[32] -= acadoVariables.y[32];
acadoWorkspace.Dy[33] -= acadoVariables.y[33];
acadoWorkspace.Dy[34] -= acadoVariables.y[34];
acadoWorkspace.Dy[35] -= acadoVariables.y[35];
acadoWorkspace.Dy[36] -= acadoVariables.y[36];
acadoWorkspace.Dy[37] -= acadoVariables.y[37];
acadoWorkspace.Dy[38] -= acadoVariables.y[38];
acadoWorkspace.Dy[39] -= acadoVariables.y[39];
acadoWorkspace.Dy[40] -= acadoVariables.y[40];
acadoWorkspace.Dy[41] -= acadoVariables.y[41];
acadoWorkspace.Dy[42] -= acadoVariables.y[42];
acadoWorkspace.Dy[43] -= acadoVariables.y[43];
acadoWorkspace.Dy[44] -= acadoVariables.y[44];
acadoWorkspace.Dy[45] -= acadoVariables.y[45];
acadoWorkspace.Dy[46] -= acadoVariables.y[46];
acadoWorkspace.Dy[47] -= acadoVariables.y[47];
acadoWorkspace.Dy[48] -= acadoVariables.y[48];
acadoWorkspace.Dy[49] -= acadoVariables.y[49];
acadoWorkspace.Dy[50] -= acadoVariables.y[50];
acadoWorkspace.Dy[51] -= acadoVariables.y[51];
acadoWorkspace.Dy[52] -= acadoVariables.y[52];
acadoWorkspace.Dy[53] -= acadoVariables.y[53];
acadoWorkspace.Dy[54] -= acadoVariables.y[54];
acadoWorkspace.Dy[55] -= acadoVariables.y[55];
acadoWorkspace.Dy[56] -= acadoVariables.y[56];
acadoWorkspace.Dy[57] -= acadoVariables.y[57];
acadoWorkspace.Dy[58] -= acadoVariables.y[58];
acadoWorkspace.Dy[59] -= acadoVariables.y[59];
acadoWorkspace.Dy[60] -= acadoVariables.y[60];
acadoWorkspace.Dy[61] -= acadoVariables.y[61];
acadoWorkspace.Dy[62] -= acadoVariables.y[62];
acadoWorkspace.Dy[63] -= acadoVariables.y[63];
acadoWorkspace.Dy[64] -= acadoVariables.y[64];
acadoWorkspace.Dy[65] -= acadoVariables.y[65];
acadoWorkspace.Dy[66] -= acadoVariables.y[66];
acadoWorkspace.Dy[67] -= acadoVariables.y[67];
acadoWorkspace.Dy[68] -= acadoVariables.y[68];
acadoWorkspace.Dy[69] -= acadoVariables.y[69];
acadoWorkspace.Dy[70] -= acadoVariables.y[70];
acadoWorkspace.Dy[71] -= acadoVariables.y[71];
acadoWorkspace.Dy[72] -= acadoVariables.y[72];
acadoWorkspace.Dy[73] -= acadoVariables.y[73];
acadoWorkspace.Dy[74] -= acadoVariables.y[74];
acadoWorkspace.Dy[75] -= acadoVariables.y[75];
acadoWorkspace.Dy[76] -= acadoVariables.y[76];
acadoWorkspace.Dy[77] -= acadoVariables.y[77];
acadoWorkspace.Dy[78] -= acadoVariables.y[78];
acadoWorkspace.Dy[79] -= acadoVariables.y[79];
acadoWorkspace.Dy[80] -= acadoVariables.y[80];
acadoWorkspace.Dy[81] -= acadoVariables.y[81];
acadoWorkspace.Dy[82] -= acadoVariables.y[82];
acadoWorkspace.Dy[83] -= acadoVariables.y[83];
acadoWorkspace.Dy[84] -= acadoVariables.y[84];
acadoWorkspace.Dy[85] -= acadoVariables.y[85];
acadoWorkspace.Dy[86] -= acadoVariables.y[86];
acadoWorkspace.Dy[87] -= acadoVariables.y[87];
acadoWorkspace.Dy[88] -= acadoVariables.y[88];
acadoWorkspace.Dy[89] -= acadoVariables.y[89];
acadoWorkspace.Dy[90] -= acadoVariables.y[90];
acadoWorkspace.Dy[91] -= acadoVariables.y[91];
acadoWorkspace.Dy[92] -= acadoVariables.y[92];
acadoWorkspace.Dy[93] -= acadoVariables.y[93];
acadoWorkspace.Dy[94] -= acadoVariables.y[94];
acadoWorkspace.Dy[95] -= acadoVariables.y[95];
acadoWorkspace.Dy[96] -= acadoVariables.y[96];
acadoWorkspace.Dy[97] -= acadoVariables.y[97];
acadoWorkspace.Dy[98] -= acadoVariables.y[98];
acadoWorkspace.Dy[99] -= acadoVariables.y[99];
acadoWorkspace.Dy[100] -= acadoVariables.y[100];
acadoWorkspace.Dy[101] -= acadoVariables.y[101];
acadoWorkspace.Dy[102] -= acadoVariables.y[102];
acadoWorkspace.Dy[103] -= acadoVariables.y[103];
acadoWorkspace.Dy[104] -= acadoVariables.y[104];
acadoWorkspace.Dy[105] -= acadoVariables.y[105];
acadoWorkspace.Dy[106] -= acadoVariables.y[106];
acadoWorkspace.Dy[107] -= acadoVariables.y[107];
acadoWorkspace.Dy[108] -= acadoVariables.y[108];
acadoWorkspace.Dy[109] -= acadoVariables.y[109];
acadoWorkspace.Dy[110] -= acadoVariables.y[110];
acadoWorkspace.Dy[111] -= acadoVariables.y[111];
acadoWorkspace.Dy[112] -= acadoVariables.y[112];
acadoWorkspace.Dy[113] -= acadoVariables.y[113];
acadoWorkspace.Dy[114] -= acadoVariables.y[114];
acadoWorkspace.Dy[115] -= acadoVariables.y[115];
acadoWorkspace.Dy[116] -= acadoVariables.y[116];
acadoWorkspace.Dy[117] -= acadoVariables.y[117];
acadoWorkspace.Dy[118] -= acadoVariables.y[118];
acadoWorkspace.Dy[119] -= acadoVariables.y[119];
acadoWorkspace.Dy[120] -= acadoVariables.y[120];
acadoWorkspace.Dy[121] -= acadoVariables.y[121];
acadoWorkspace.Dy[122] -= acadoVariables.y[122];
acadoWorkspace.Dy[123] -= acadoVariables.y[123];
acadoWorkspace.Dy[124] -= acadoVariables.y[124];
acadoWorkspace.DyN[0] -= acadoVariables.yN[0];
acadoWorkspace.DyN[1] -= acadoVariables.yN[1];

acado_multRDy( acadoWorkspace.R2, acadoWorkspace.Dy, acadoWorkspace.g );
acado_multRDy( &(acadoWorkspace.R2[ 10 ]), &(acadoWorkspace.Dy[ 5 ]), &(acadoWorkspace.g[ 2 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 20 ]), &(acadoWorkspace.Dy[ 10 ]), &(acadoWorkspace.g[ 4 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 30 ]), &(acadoWorkspace.Dy[ 15 ]), &(acadoWorkspace.g[ 6 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 40 ]), &(acadoWorkspace.Dy[ 20 ]), &(acadoWorkspace.g[ 8 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 50 ]), &(acadoWorkspace.Dy[ 25 ]), &(acadoWorkspace.g[ 10 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 60 ]), &(acadoWorkspace.Dy[ 30 ]), &(acadoWorkspace.g[ 12 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 70 ]), &(acadoWorkspace.Dy[ 35 ]), &(acadoWorkspace.g[ 14 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 80 ]), &(acadoWorkspace.Dy[ 40 ]), &(acadoWorkspace.g[ 16 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 90 ]), &(acadoWorkspace.Dy[ 45 ]), &(acadoWorkspace.g[ 18 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 100 ]), &(acadoWorkspace.Dy[ 50 ]), &(acadoWorkspace.g[ 20 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 110 ]), &(acadoWorkspace.Dy[ 55 ]), &(acadoWorkspace.g[ 22 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 120 ]), &(acadoWorkspace.Dy[ 60 ]), &(acadoWorkspace.g[ 24 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 130 ]), &(acadoWorkspace.Dy[ 65 ]), &(acadoWorkspace.g[ 26 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 140 ]), &(acadoWorkspace.Dy[ 70 ]), &(acadoWorkspace.g[ 28 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 150 ]), &(acadoWorkspace.Dy[ 75 ]), &(acadoWorkspace.g[ 30 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 160 ]), &(acadoWorkspace.Dy[ 80 ]), &(acadoWorkspace.g[ 32 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 170 ]), &(acadoWorkspace.Dy[ 85 ]), &(acadoWorkspace.g[ 34 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 180 ]), &(acadoWorkspace.Dy[ 90 ]), &(acadoWorkspace.g[ 36 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 190 ]), &(acadoWorkspace.Dy[ 95 ]), &(acadoWorkspace.g[ 38 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 200 ]), &(acadoWorkspace.Dy[ 100 ]), &(acadoWorkspace.g[ 40 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 210 ]), &(acadoWorkspace.Dy[ 105 ]), &(acadoWorkspace.g[ 42 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 220 ]), &(acadoWorkspace.Dy[ 110 ]), &(acadoWorkspace.g[ 44 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 230 ]), &(acadoWorkspace.Dy[ 115 ]), &(acadoWorkspace.g[ 46 ]) );
acado_multRDy( &(acadoWorkspace.R2[ 240 ]), &(acadoWorkspace.Dy[ 120 ]), &(acadoWorkspace.g[ 48 ]) );

acado_multQDy( acadoWorkspace.Q2, acadoWorkspace.Dy, acadoWorkspace.QDy );
acado_multQDy( &(acadoWorkspace.Q2[ 35 ]), &(acadoWorkspace.Dy[ 5 ]), &(acadoWorkspace.QDy[ 7 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 70 ]), &(acadoWorkspace.Dy[ 10 ]), &(acadoWorkspace.QDy[ 14 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 105 ]), &(acadoWorkspace.Dy[ 15 ]), &(acadoWorkspace.QDy[ 21 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 140 ]), &(acadoWorkspace.Dy[ 20 ]), &(acadoWorkspace.QDy[ 28 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 175 ]), &(acadoWorkspace.Dy[ 25 ]), &(acadoWorkspace.QDy[ 35 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 210 ]), &(acadoWorkspace.Dy[ 30 ]), &(acadoWorkspace.QDy[ 42 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 245 ]), &(acadoWorkspace.Dy[ 35 ]), &(acadoWorkspace.QDy[ 49 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 280 ]), &(acadoWorkspace.Dy[ 40 ]), &(acadoWorkspace.QDy[ 56 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 315 ]), &(acadoWorkspace.Dy[ 45 ]), &(acadoWorkspace.QDy[ 63 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 350 ]), &(acadoWorkspace.Dy[ 50 ]), &(acadoWorkspace.QDy[ 70 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 385 ]), &(acadoWorkspace.Dy[ 55 ]), &(acadoWorkspace.QDy[ 77 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 420 ]), &(acadoWorkspace.Dy[ 60 ]), &(acadoWorkspace.QDy[ 84 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 455 ]), &(acadoWorkspace.Dy[ 65 ]), &(acadoWorkspace.QDy[ 91 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 490 ]), &(acadoWorkspace.Dy[ 70 ]), &(acadoWorkspace.QDy[ 98 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 525 ]), &(acadoWorkspace.Dy[ 75 ]), &(acadoWorkspace.QDy[ 105 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 560 ]), &(acadoWorkspace.Dy[ 80 ]), &(acadoWorkspace.QDy[ 112 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 595 ]), &(acadoWorkspace.Dy[ 85 ]), &(acadoWorkspace.QDy[ 119 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 630 ]), &(acadoWorkspace.Dy[ 90 ]), &(acadoWorkspace.QDy[ 126 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 665 ]), &(acadoWorkspace.Dy[ 95 ]), &(acadoWorkspace.QDy[ 133 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 700 ]), &(acadoWorkspace.Dy[ 100 ]), &(acadoWorkspace.QDy[ 140 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 735 ]), &(acadoWorkspace.Dy[ 105 ]), &(acadoWorkspace.QDy[ 147 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 770 ]), &(acadoWorkspace.Dy[ 110 ]), &(acadoWorkspace.QDy[ 154 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 805 ]), &(acadoWorkspace.Dy[ 115 ]), &(acadoWorkspace.QDy[ 161 ]) );
acado_multQDy( &(acadoWorkspace.Q2[ 840 ]), &(acadoWorkspace.Dy[ 120 ]), &(acadoWorkspace.QDy[ 168 ]) );

acadoWorkspace.QDy[175] = + acadoWorkspace.QN2[0]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[1]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[176] = + acadoWorkspace.QN2[2]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[3]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[177] = + acadoWorkspace.QN2[4]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[5]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[178] = + acadoWorkspace.QN2[6]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[7]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[179] = + acadoWorkspace.QN2[8]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[9]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[180] = + acadoWorkspace.QN2[10]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[11]*acadoWorkspace.DyN[1];
acadoWorkspace.QDy[181] = + acadoWorkspace.QN2[12]*acadoWorkspace.DyN[0] + acadoWorkspace.QN2[13]*acadoWorkspace.DyN[1];

for (lRun2 = 0; lRun2 < 175; ++lRun2)
acadoWorkspace.QDy[lRun2 + 7] += acadoWorkspace.Qd[lRun2];


for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
for (lRun2 = lRun1; lRun2 < 25; ++lRun2)
{
lRun3 = (((lRun2 + 1) * (lRun2)) / (2)) + (lRun1);
acado_multEQDy( &(acadoWorkspace.E[ lRun3 * 14 ]), &(acadoWorkspace.QDy[ lRun2 * 7 + 7 ]), &(acadoWorkspace.g[ lRun1 * 2 ]) );
}
}

acadoWorkspace.g[0] += + acadoWorkspace.H10[0]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[1]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[2]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[3]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[4]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[5]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[6]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[1] += + acadoWorkspace.H10[7]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[8]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[9]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[10]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[11]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[12]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[13]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[2] += + acadoWorkspace.H10[14]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[15]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[16]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[17]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[18]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[19]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[20]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[3] += + acadoWorkspace.H10[21]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[22]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[23]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[24]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[25]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[26]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[27]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[4] += + acadoWorkspace.H10[28]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[29]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[30]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[31]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[32]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[33]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[34]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[5] += + acadoWorkspace.H10[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[41]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[6] += + acadoWorkspace.H10[42]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[43]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[44]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[45]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[46]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[47]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[48]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[7] += + acadoWorkspace.H10[49]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[50]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[51]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[52]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[53]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[54]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[55]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[8] += + acadoWorkspace.H10[56]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[57]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[58]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[59]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[60]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[61]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[62]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[9] += + acadoWorkspace.H10[63]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[64]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[65]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[66]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[67]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[68]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[69]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[10] += + acadoWorkspace.H10[70]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[71]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[72]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[73]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[74]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[75]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[76]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[11] += + acadoWorkspace.H10[77]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[78]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[79]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[80]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[81]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[82]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[83]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[12] += + acadoWorkspace.H10[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[90]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[13] += + acadoWorkspace.H10[91]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[92]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[93]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[94]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[95]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[96]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[97]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[14] += + acadoWorkspace.H10[98]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[99]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[100]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[101]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[102]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[103]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[104]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[15] += + acadoWorkspace.H10[105]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[106]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[107]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[108]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[109]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[110]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[111]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[16] += + acadoWorkspace.H10[112]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[113]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[114]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[115]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[116]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[117]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[118]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[17] += + acadoWorkspace.H10[119]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[120]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[121]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[122]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[123]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[124]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[125]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[18] += + acadoWorkspace.H10[126]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[127]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[128]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[129]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[130]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[131]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[132]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[19] += + acadoWorkspace.H10[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[139]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[20] += + acadoWorkspace.H10[140]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[141]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[142]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[143]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[144]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[145]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[146]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[21] += + acadoWorkspace.H10[147]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[148]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[149]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[150]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[151]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[152]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[153]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[22] += + acadoWorkspace.H10[154]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[155]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[156]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[157]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[158]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[159]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[160]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[23] += + acadoWorkspace.H10[161]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[162]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[163]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[164]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[165]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[166]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[167]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[24] += + acadoWorkspace.H10[168]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[169]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[170]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[171]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[172]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[173]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[174]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[25] += + acadoWorkspace.H10[175]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[176]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[177]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[178]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[179]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[180]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[181]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[26] += + acadoWorkspace.H10[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[188]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[27] += + acadoWorkspace.H10[189]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[190]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[191]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[192]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[193]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[194]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[195]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[28] += + acadoWorkspace.H10[196]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[197]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[198]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[199]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[200]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[201]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[202]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[29] += + acadoWorkspace.H10[203]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[204]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[205]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[206]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[207]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[208]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[209]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[30] += + acadoWorkspace.H10[210]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[211]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[212]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[213]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[214]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[215]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[216]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[31] += + acadoWorkspace.H10[217]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[218]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[219]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[220]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[221]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[222]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[223]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[32] += + acadoWorkspace.H10[224]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[225]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[226]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[227]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[228]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[229]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[230]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[33] += + acadoWorkspace.H10[231]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[232]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[233]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[234]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[235]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[236]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[237]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[34] += + acadoWorkspace.H10[238]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[239]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[240]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[241]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[242]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[243]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[244]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[35] += + acadoWorkspace.H10[245]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[246]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[247]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[248]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[249]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[250]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[251]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[36] += + acadoWorkspace.H10[252]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[253]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[254]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[255]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[256]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[257]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[258]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[37] += + acadoWorkspace.H10[259]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[260]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[261]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[262]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[263]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[264]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[265]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[38] += + acadoWorkspace.H10[266]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[267]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[268]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[269]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[270]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[271]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[272]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[39] += + acadoWorkspace.H10[273]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[274]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[275]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[276]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[277]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[278]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[279]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[40] += + acadoWorkspace.H10[280]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[281]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[282]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[283]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[284]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[285]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[286]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[41] += + acadoWorkspace.H10[287]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[288]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[289]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[290]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[291]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[292]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[293]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[42] += + acadoWorkspace.H10[294]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[295]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[296]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[297]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[298]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[299]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[300]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[43] += + acadoWorkspace.H10[301]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[302]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[303]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[304]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[305]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[306]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[307]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[44] += + acadoWorkspace.H10[308]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[309]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[310]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[311]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[312]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[313]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[314]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[45] += + acadoWorkspace.H10[315]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[316]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[317]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[318]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[319]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[320]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[321]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[46] += + acadoWorkspace.H10[322]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[323]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[324]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[325]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[326]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[327]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[328]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[47] += + acadoWorkspace.H10[329]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[330]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[331]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[332]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[333]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[334]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[335]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[48] += + acadoWorkspace.H10[336]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[337]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[338]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[339]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[340]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[341]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[342]*acadoWorkspace.Dx0[6];
acadoWorkspace.g[49] += + acadoWorkspace.H10[343]*acadoWorkspace.Dx0[0] + acadoWorkspace.H10[344]*acadoWorkspace.Dx0[1] + acadoWorkspace.H10[345]*acadoWorkspace.Dx0[2] + acadoWorkspace.H10[346]*acadoWorkspace.Dx0[3] + acadoWorkspace.H10[347]*acadoWorkspace.Dx0[4] + acadoWorkspace.H10[348]*acadoWorkspace.Dx0[5] + acadoWorkspace.H10[349]*acadoWorkspace.Dx0[6];

tmp = + acadoWorkspace.evGx[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[41]*acadoWorkspace.Dx0[6] + acadoVariables.x[12];
tmp += acadoWorkspace.d[5];
acadoWorkspace.lbA[0] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[0] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[90]*acadoWorkspace.Dx0[6] + acadoVariables.x[19];
tmp += acadoWorkspace.d[12];
acadoWorkspace.lbA[1] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[1] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[139]*acadoWorkspace.Dx0[6] + acadoVariables.x[26];
tmp += acadoWorkspace.d[19];
acadoWorkspace.lbA[2] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[2] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[188]*acadoWorkspace.Dx0[6] + acadoVariables.x[33];
tmp += acadoWorkspace.d[26];
acadoWorkspace.lbA[3] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[3] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[231]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[232]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[233]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[234]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[235]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[236]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[237]*acadoWorkspace.Dx0[6] + acadoVariables.x[40];
tmp += acadoWorkspace.d[33];
acadoWorkspace.lbA[4] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[4] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[280]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[281]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[282]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[283]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[284]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[285]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[286]*acadoWorkspace.Dx0[6] + acadoVariables.x[47];
tmp += acadoWorkspace.d[40];
acadoWorkspace.lbA[5] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[5] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[329]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[330]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[331]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[332]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[333]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[334]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[335]*acadoWorkspace.Dx0[6] + acadoVariables.x[54];
tmp += acadoWorkspace.d[47];
acadoWorkspace.lbA[6] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[6] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[378]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[379]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[380]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[381]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[382]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[383]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[384]*acadoWorkspace.Dx0[6] + acadoVariables.x[61];
tmp += acadoWorkspace.d[54];
acadoWorkspace.lbA[7] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[7] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[427]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[428]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[429]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[430]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[431]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[432]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[433]*acadoWorkspace.Dx0[6] + acadoVariables.x[68];
tmp += acadoWorkspace.d[61];
acadoWorkspace.lbA[8] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[8] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[476]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[477]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[478]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[479]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[480]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[481]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[482]*acadoWorkspace.Dx0[6] + acadoVariables.x[75];
tmp += acadoWorkspace.d[68];
acadoWorkspace.lbA[9] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[9] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[525]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[526]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[527]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[528]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[529]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[530]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[531]*acadoWorkspace.Dx0[6] + acadoVariables.x[82];
tmp += acadoWorkspace.d[75];
acadoWorkspace.lbA[10] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[10] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[574]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[575]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[576]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[577]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[578]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[579]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[580]*acadoWorkspace.Dx0[6] + acadoVariables.x[89];
tmp += acadoWorkspace.d[82];
acadoWorkspace.lbA[11] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[11] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[623]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[624]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[625]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[626]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[627]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[628]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[629]*acadoWorkspace.Dx0[6] + acadoVariables.x[96];
tmp += acadoWorkspace.d[89];
acadoWorkspace.lbA[12] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[12] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[672]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[673]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[674]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[675]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[676]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[677]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[678]*acadoWorkspace.Dx0[6] + acadoVariables.x[103];
tmp += acadoWorkspace.d[96];
acadoWorkspace.lbA[13] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[13] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[721]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[722]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[723]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[724]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[725]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[726]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[727]*acadoWorkspace.Dx0[6] + acadoVariables.x[110];
tmp += acadoWorkspace.d[103];
acadoWorkspace.lbA[14] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[14] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[770]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[771]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[772]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[773]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[774]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[775]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[776]*acadoWorkspace.Dx0[6] + acadoVariables.x[117];
tmp += acadoWorkspace.d[110];
acadoWorkspace.lbA[15] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[15] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[819]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[820]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[821]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[822]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[823]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[824]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[825]*acadoWorkspace.Dx0[6] + acadoVariables.x[124];
tmp += acadoWorkspace.d[117];
acadoWorkspace.lbA[16] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[16] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[868]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[869]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[870]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[871]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[872]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[873]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[874]*acadoWorkspace.Dx0[6] + acadoVariables.x[131];
tmp += acadoWorkspace.d[124];
acadoWorkspace.lbA[17] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[17] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[917]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[918]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[919]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[920]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[921]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[922]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[923]*acadoWorkspace.Dx0[6] + acadoVariables.x[138];
tmp += acadoWorkspace.d[131];
acadoWorkspace.lbA[18] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[18] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[966]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[967]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[968]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[969]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[970]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[971]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[972]*acadoWorkspace.Dx0[6] + acadoVariables.x[145];
tmp += acadoWorkspace.d[138];
acadoWorkspace.lbA[19] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[19] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[1015]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1016]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1017]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1018]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1019]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1020]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1021]*acadoWorkspace.Dx0[6] + acadoVariables.x[152];
tmp += acadoWorkspace.d[145];
acadoWorkspace.lbA[20] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[20] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[1064]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1065]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1066]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1067]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1068]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1069]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1070]*acadoWorkspace.Dx0[6] + acadoVariables.x[159];
tmp += acadoWorkspace.d[152];
acadoWorkspace.lbA[21] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[21] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[1113]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1114]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1115]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1116]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1117]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1118]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1119]*acadoWorkspace.Dx0[6] + acadoVariables.x[166];
tmp += acadoWorkspace.d[159];
acadoWorkspace.lbA[22] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[22] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[1162]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1163]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1164]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1165]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1166]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1167]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1168]*acadoWorkspace.Dx0[6] + acadoVariables.x[173];
tmp += acadoWorkspace.d[166];
acadoWorkspace.lbA[23] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[23] = (real_t)4.1992621802983565e-01 - tmp;
tmp = + acadoWorkspace.evGx[1211]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1212]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1213]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1214]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1215]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1216]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1217]*acadoWorkspace.Dx0[6] + acadoVariables.x[180];
tmp += acadoWorkspace.d[173];
acadoWorkspace.lbA[24] = (real_t)-4.1992621802983565e-01 - tmp;
acadoWorkspace.ubA[24] = (real_t)4.1992621802983565e-01 - tmp;

}

void acado_expand(  )
{
int lRun1;
int lRun2;
int lRun3;
acadoVariables.u[0] += acadoWorkspace.x[0];
acadoVariables.u[1] += acadoWorkspace.x[1];
acadoVariables.u[2] += acadoWorkspace.x[2];
acadoVariables.u[3] += acadoWorkspace.x[3];
acadoVariables.u[4] += acadoWorkspace.x[4];
acadoVariables.u[5] += acadoWorkspace.x[5];
acadoVariables.u[6] += acadoWorkspace.x[6];
acadoVariables.u[7] += acadoWorkspace.x[7];
acadoVariables.u[8] += acadoWorkspace.x[8];
acadoVariables.u[9] += acadoWorkspace.x[9];
acadoVariables.u[10] += acadoWorkspace.x[10];
acadoVariables.u[11] += acadoWorkspace.x[11];
acadoVariables.u[12] += acadoWorkspace.x[12];
acadoVariables.u[13] += acadoWorkspace.x[13];
acadoVariables.u[14] += acadoWorkspace.x[14];
acadoVariables.u[15] += acadoWorkspace.x[15];
acadoVariables.u[16] += acadoWorkspace.x[16];
acadoVariables.u[17] += acadoWorkspace.x[17];
acadoVariables.u[18] += acadoWorkspace.x[18];
acadoVariables.u[19] += acadoWorkspace.x[19];
acadoVariables.u[20] += acadoWorkspace.x[20];
acadoVariables.u[21] += acadoWorkspace.x[21];
acadoVariables.u[22] += acadoWorkspace.x[22];
acadoVariables.u[23] += acadoWorkspace.x[23];
acadoVariables.u[24] += acadoWorkspace.x[24];
acadoVariables.u[25] += acadoWorkspace.x[25];
acadoVariables.u[26] += acadoWorkspace.x[26];
acadoVariables.u[27] += acadoWorkspace.x[27];
acadoVariables.u[28] += acadoWorkspace.x[28];
acadoVariables.u[29] += acadoWorkspace.x[29];
acadoVariables.u[30] += acadoWorkspace.x[30];
acadoVariables.u[31] += acadoWorkspace.x[31];
acadoVariables.u[32] += acadoWorkspace.x[32];
acadoVariables.u[33] += acadoWorkspace.x[33];
acadoVariables.u[34] += acadoWorkspace.x[34];
acadoVariables.u[35] += acadoWorkspace.x[35];
acadoVariables.u[36] += acadoWorkspace.x[36];
acadoVariables.u[37] += acadoWorkspace.x[37];
acadoVariables.u[38] += acadoWorkspace.x[38];
acadoVariables.u[39] += acadoWorkspace.x[39];
acadoVariables.u[40] += acadoWorkspace.x[40];
acadoVariables.u[41] += acadoWorkspace.x[41];
acadoVariables.u[42] += acadoWorkspace.x[42];
acadoVariables.u[43] += acadoWorkspace.x[43];
acadoVariables.u[44] += acadoWorkspace.x[44];
acadoVariables.u[45] += acadoWorkspace.x[45];
acadoVariables.u[46] += acadoWorkspace.x[46];
acadoVariables.u[47] += acadoWorkspace.x[47];
acadoVariables.u[48] += acadoWorkspace.x[48];
acadoVariables.u[49] += acadoWorkspace.x[49];

acadoVariables.x[0] += acadoWorkspace.Dx0[0];
acadoVariables.x[1] += acadoWorkspace.Dx0[1];
acadoVariables.x[2] += acadoWorkspace.Dx0[2];
acadoVariables.x[3] += acadoWorkspace.Dx0[3];
acadoVariables.x[4] += acadoWorkspace.Dx0[4];
acadoVariables.x[5] += acadoWorkspace.Dx0[5];
acadoVariables.x[6] += acadoWorkspace.Dx0[6];

acadoVariables.x[7] += + acadoWorkspace.evGx[0]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[2]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[3]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[4]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[5]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[6]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[0];
acadoVariables.x[8] += + acadoWorkspace.evGx[7]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[8]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[9]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[10]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[11]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[12]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[13]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[1];
acadoVariables.x[9] += + acadoWorkspace.evGx[14]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[15]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[16]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[17]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[18]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[19]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[20]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[2];
acadoVariables.x[10] += + acadoWorkspace.evGx[21]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[22]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[23]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[24]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[25]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[26]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[27]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[3];
acadoVariables.x[11] += + acadoWorkspace.evGx[28]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[29]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[30]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[31]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[32]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[33]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[34]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[4];
acadoVariables.x[12] += + acadoWorkspace.evGx[35]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[36]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[37]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[38]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[39]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[40]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[41]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[5];
acadoVariables.x[13] += + acadoWorkspace.evGx[42]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[43]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[44]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[45]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[46]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[47]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[48]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[6];
acadoVariables.x[14] += + acadoWorkspace.evGx[49]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[50]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[51]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[52]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[53]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[54]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[55]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[7];
acadoVariables.x[15] += + acadoWorkspace.evGx[56]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[57]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[58]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[59]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[60]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[61]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[62]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[8];
acadoVariables.x[16] += + acadoWorkspace.evGx[63]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[64]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[65]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[66]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[67]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[68]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[69]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[9];
acadoVariables.x[17] += + acadoWorkspace.evGx[70]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[71]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[72]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[73]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[74]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[75]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[76]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[10];
acadoVariables.x[18] += + acadoWorkspace.evGx[77]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[78]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[79]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[80]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[81]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[82]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[83]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[11];
acadoVariables.x[19] += + acadoWorkspace.evGx[84]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[85]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[86]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[87]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[88]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[89]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[90]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[12];
acadoVariables.x[20] += + acadoWorkspace.evGx[91]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[92]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[93]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[94]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[95]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[96]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[97]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[13];
acadoVariables.x[21] += + acadoWorkspace.evGx[98]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[99]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[100]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[101]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[102]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[103]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[104]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[14];
acadoVariables.x[22] += + acadoWorkspace.evGx[105]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[106]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[107]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[108]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[109]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[110]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[111]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[15];
acadoVariables.x[23] += + acadoWorkspace.evGx[112]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[113]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[114]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[115]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[116]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[117]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[118]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[16];
acadoVariables.x[24] += + acadoWorkspace.evGx[119]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[120]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[121]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[122]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[123]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[124]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[125]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[17];
acadoVariables.x[25] += + acadoWorkspace.evGx[126]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[127]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[128]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[129]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[130]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[131]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[132]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[18];
acadoVariables.x[26] += + acadoWorkspace.evGx[133]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[134]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[135]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[136]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[137]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[138]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[139]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[19];
acadoVariables.x[27] += + acadoWorkspace.evGx[140]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[141]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[142]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[143]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[144]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[145]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[146]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[20];
acadoVariables.x[28] += + acadoWorkspace.evGx[147]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[148]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[149]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[150]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[151]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[152]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[153]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[21];
acadoVariables.x[29] += + acadoWorkspace.evGx[154]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[155]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[156]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[157]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[158]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[159]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[160]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[22];
acadoVariables.x[30] += + acadoWorkspace.evGx[161]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[162]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[163]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[164]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[165]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[166]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[167]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[23];
acadoVariables.x[31] += + acadoWorkspace.evGx[168]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[169]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[170]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[171]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[172]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[173]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[174]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[24];
acadoVariables.x[32] += + acadoWorkspace.evGx[175]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[176]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[177]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[178]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[179]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[180]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[181]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[25];
acadoVariables.x[33] += + acadoWorkspace.evGx[182]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[183]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[184]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[185]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[186]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[187]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[188]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[26];
acadoVariables.x[34] += + acadoWorkspace.evGx[189]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[190]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[191]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[192]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[193]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[194]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[195]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[27];
acadoVariables.x[35] += + acadoWorkspace.evGx[196]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[197]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[198]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[199]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[200]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[201]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[202]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[28];
acadoVariables.x[36] += + acadoWorkspace.evGx[203]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[204]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[205]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[206]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[207]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[208]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[209]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[29];
acadoVariables.x[37] += + acadoWorkspace.evGx[210]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[211]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[212]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[213]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[214]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[215]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[216]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[30];
acadoVariables.x[38] += + acadoWorkspace.evGx[217]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[218]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[219]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[220]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[221]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[222]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[223]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[31];
acadoVariables.x[39] += + acadoWorkspace.evGx[224]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[225]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[226]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[227]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[228]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[229]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[230]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[32];
acadoVariables.x[40] += + acadoWorkspace.evGx[231]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[232]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[233]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[234]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[235]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[236]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[237]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[33];
acadoVariables.x[41] += + acadoWorkspace.evGx[238]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[239]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[240]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[241]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[242]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[243]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[244]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[34];
acadoVariables.x[42] += + acadoWorkspace.evGx[245]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[246]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[247]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[248]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[249]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[250]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[251]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[35];
acadoVariables.x[43] += + acadoWorkspace.evGx[252]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[253]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[254]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[255]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[256]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[257]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[258]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[36];
acadoVariables.x[44] += + acadoWorkspace.evGx[259]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[260]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[261]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[262]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[263]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[264]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[265]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[37];
acadoVariables.x[45] += + acadoWorkspace.evGx[266]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[267]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[268]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[269]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[270]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[271]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[272]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[38];
acadoVariables.x[46] += + acadoWorkspace.evGx[273]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[274]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[275]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[276]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[277]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[278]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[279]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[39];
acadoVariables.x[47] += + acadoWorkspace.evGx[280]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[281]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[282]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[283]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[284]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[285]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[286]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[40];
acadoVariables.x[48] += + acadoWorkspace.evGx[287]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[288]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[289]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[290]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[291]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[292]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[293]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[41];
acadoVariables.x[49] += + acadoWorkspace.evGx[294]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[295]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[296]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[297]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[298]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[299]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[300]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[42];
acadoVariables.x[50] += + acadoWorkspace.evGx[301]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[302]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[303]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[304]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[305]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[306]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[307]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[43];
acadoVariables.x[51] += + acadoWorkspace.evGx[308]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[309]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[310]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[311]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[312]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[313]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[314]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[44];
acadoVariables.x[52] += + acadoWorkspace.evGx[315]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[316]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[317]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[318]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[319]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[320]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[321]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[45];
acadoVariables.x[53] += + acadoWorkspace.evGx[322]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[323]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[324]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[325]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[326]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[327]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[328]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[46];
acadoVariables.x[54] += + acadoWorkspace.evGx[329]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[330]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[331]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[332]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[333]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[334]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[335]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[47];
acadoVariables.x[55] += + acadoWorkspace.evGx[336]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[337]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[338]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[339]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[340]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[341]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[342]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[48];
acadoVariables.x[56] += + acadoWorkspace.evGx[343]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[344]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[345]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[346]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[347]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[348]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[349]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[49];
acadoVariables.x[57] += + acadoWorkspace.evGx[350]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[351]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[352]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[353]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[354]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[355]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[356]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[50];
acadoVariables.x[58] += + acadoWorkspace.evGx[357]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[358]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[359]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[360]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[361]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[362]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[363]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[51];
acadoVariables.x[59] += + acadoWorkspace.evGx[364]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[365]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[366]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[367]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[368]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[369]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[370]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[52];
acadoVariables.x[60] += + acadoWorkspace.evGx[371]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[372]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[373]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[374]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[375]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[376]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[377]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[53];
acadoVariables.x[61] += + acadoWorkspace.evGx[378]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[379]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[380]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[381]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[382]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[383]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[384]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[54];
acadoVariables.x[62] += + acadoWorkspace.evGx[385]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[386]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[387]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[388]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[389]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[390]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[391]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[55];
acadoVariables.x[63] += + acadoWorkspace.evGx[392]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[393]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[394]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[395]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[396]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[397]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[398]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[56];
acadoVariables.x[64] += + acadoWorkspace.evGx[399]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[400]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[401]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[402]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[403]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[404]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[405]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[57];
acadoVariables.x[65] += + acadoWorkspace.evGx[406]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[407]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[408]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[409]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[410]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[411]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[412]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[58];
acadoVariables.x[66] += + acadoWorkspace.evGx[413]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[414]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[415]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[416]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[417]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[418]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[419]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[59];
acadoVariables.x[67] += + acadoWorkspace.evGx[420]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[421]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[422]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[423]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[424]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[425]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[426]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[60];
acadoVariables.x[68] += + acadoWorkspace.evGx[427]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[428]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[429]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[430]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[431]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[432]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[433]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[61];
acadoVariables.x[69] += + acadoWorkspace.evGx[434]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[435]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[436]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[437]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[438]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[439]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[440]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[62];
acadoVariables.x[70] += + acadoWorkspace.evGx[441]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[442]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[443]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[444]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[445]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[446]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[447]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[63];
acadoVariables.x[71] += + acadoWorkspace.evGx[448]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[449]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[450]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[451]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[452]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[453]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[454]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[64];
acadoVariables.x[72] += + acadoWorkspace.evGx[455]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[456]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[457]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[458]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[459]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[460]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[461]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[65];
acadoVariables.x[73] += + acadoWorkspace.evGx[462]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[463]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[464]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[465]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[466]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[467]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[468]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[66];
acadoVariables.x[74] += + acadoWorkspace.evGx[469]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[470]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[471]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[472]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[473]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[474]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[475]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[67];
acadoVariables.x[75] += + acadoWorkspace.evGx[476]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[477]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[478]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[479]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[480]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[481]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[482]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[68];
acadoVariables.x[76] += + acadoWorkspace.evGx[483]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[484]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[485]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[486]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[487]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[488]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[489]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[69];
acadoVariables.x[77] += + acadoWorkspace.evGx[490]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[491]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[492]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[493]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[494]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[495]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[496]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[70];
acadoVariables.x[78] += + acadoWorkspace.evGx[497]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[498]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[499]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[500]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[501]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[502]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[503]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[71];
acadoVariables.x[79] += + acadoWorkspace.evGx[504]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[505]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[506]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[507]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[508]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[509]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[510]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[72];
acadoVariables.x[80] += + acadoWorkspace.evGx[511]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[512]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[513]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[514]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[515]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[516]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[517]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[73];
acadoVariables.x[81] += + acadoWorkspace.evGx[518]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[519]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[520]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[521]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[522]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[523]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[524]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[74];
acadoVariables.x[82] += + acadoWorkspace.evGx[525]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[526]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[527]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[528]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[529]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[530]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[531]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[75];
acadoVariables.x[83] += + acadoWorkspace.evGx[532]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[533]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[534]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[535]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[536]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[537]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[538]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[76];
acadoVariables.x[84] += + acadoWorkspace.evGx[539]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[540]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[541]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[542]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[543]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[544]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[545]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[77];
acadoVariables.x[85] += + acadoWorkspace.evGx[546]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[547]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[548]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[549]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[550]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[551]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[552]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[78];
acadoVariables.x[86] += + acadoWorkspace.evGx[553]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[554]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[555]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[556]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[557]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[558]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[559]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[79];
acadoVariables.x[87] += + acadoWorkspace.evGx[560]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[561]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[562]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[563]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[564]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[565]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[566]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[80];
acadoVariables.x[88] += + acadoWorkspace.evGx[567]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[568]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[569]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[570]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[571]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[572]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[573]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[81];
acadoVariables.x[89] += + acadoWorkspace.evGx[574]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[575]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[576]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[577]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[578]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[579]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[580]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[82];
acadoVariables.x[90] += + acadoWorkspace.evGx[581]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[582]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[583]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[584]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[585]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[586]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[587]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[83];
acadoVariables.x[91] += + acadoWorkspace.evGx[588]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[589]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[590]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[591]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[592]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[593]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[594]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[84];
acadoVariables.x[92] += + acadoWorkspace.evGx[595]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[596]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[597]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[598]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[599]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[600]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[601]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[85];
acadoVariables.x[93] += + acadoWorkspace.evGx[602]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[603]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[604]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[605]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[606]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[607]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[608]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[86];
acadoVariables.x[94] += + acadoWorkspace.evGx[609]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[610]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[611]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[612]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[613]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[614]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[615]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[87];
acadoVariables.x[95] += + acadoWorkspace.evGx[616]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[617]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[618]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[619]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[620]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[621]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[622]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[88];
acadoVariables.x[96] += + acadoWorkspace.evGx[623]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[624]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[625]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[626]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[627]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[628]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[629]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[89];
acadoVariables.x[97] += + acadoWorkspace.evGx[630]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[631]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[632]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[633]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[634]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[635]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[636]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[90];
acadoVariables.x[98] += + acadoWorkspace.evGx[637]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[638]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[639]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[640]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[641]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[642]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[643]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[91];
acadoVariables.x[99] += + acadoWorkspace.evGx[644]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[645]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[646]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[647]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[648]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[649]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[650]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[92];
acadoVariables.x[100] += + acadoWorkspace.evGx[651]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[652]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[653]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[654]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[655]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[656]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[657]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[93];
acadoVariables.x[101] += + acadoWorkspace.evGx[658]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[659]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[660]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[661]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[662]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[663]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[664]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[94];
acadoVariables.x[102] += + acadoWorkspace.evGx[665]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[666]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[667]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[668]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[669]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[670]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[671]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[95];
acadoVariables.x[103] += + acadoWorkspace.evGx[672]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[673]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[674]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[675]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[676]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[677]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[678]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[96];
acadoVariables.x[104] += + acadoWorkspace.evGx[679]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[680]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[681]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[682]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[683]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[684]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[685]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[97];
acadoVariables.x[105] += + acadoWorkspace.evGx[686]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[687]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[688]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[689]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[690]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[691]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[692]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[98];
acadoVariables.x[106] += + acadoWorkspace.evGx[693]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[694]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[695]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[696]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[697]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[698]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[699]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[99];
acadoVariables.x[107] += + acadoWorkspace.evGx[700]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[701]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[702]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[703]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[704]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[705]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[706]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[100];
acadoVariables.x[108] += + acadoWorkspace.evGx[707]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[708]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[709]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[710]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[711]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[712]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[713]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[101];
acadoVariables.x[109] += + acadoWorkspace.evGx[714]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[715]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[716]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[717]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[718]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[719]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[720]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[102];
acadoVariables.x[110] += + acadoWorkspace.evGx[721]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[722]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[723]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[724]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[725]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[726]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[727]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[103];
acadoVariables.x[111] += + acadoWorkspace.evGx[728]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[729]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[730]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[731]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[732]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[733]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[734]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[104];
acadoVariables.x[112] += + acadoWorkspace.evGx[735]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[736]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[737]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[738]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[739]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[740]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[741]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[105];
acadoVariables.x[113] += + acadoWorkspace.evGx[742]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[743]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[744]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[745]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[746]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[747]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[748]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[106];
acadoVariables.x[114] += + acadoWorkspace.evGx[749]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[750]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[751]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[752]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[753]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[754]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[755]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[107];
acadoVariables.x[115] += + acadoWorkspace.evGx[756]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[757]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[758]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[759]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[760]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[761]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[762]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[108];
acadoVariables.x[116] += + acadoWorkspace.evGx[763]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[764]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[765]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[766]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[767]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[768]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[769]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[109];
acadoVariables.x[117] += + acadoWorkspace.evGx[770]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[771]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[772]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[773]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[774]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[775]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[776]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[110];
acadoVariables.x[118] += + acadoWorkspace.evGx[777]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[778]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[779]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[780]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[781]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[782]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[783]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[111];
acadoVariables.x[119] += + acadoWorkspace.evGx[784]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[785]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[786]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[787]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[788]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[789]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[790]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[112];
acadoVariables.x[120] += + acadoWorkspace.evGx[791]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[792]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[793]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[794]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[795]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[796]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[797]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[113];
acadoVariables.x[121] += + acadoWorkspace.evGx[798]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[799]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[800]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[801]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[802]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[803]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[804]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[114];
acadoVariables.x[122] += + acadoWorkspace.evGx[805]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[806]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[807]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[808]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[809]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[810]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[811]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[115];
acadoVariables.x[123] += + acadoWorkspace.evGx[812]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[813]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[814]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[815]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[816]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[817]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[818]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[116];
acadoVariables.x[124] += + acadoWorkspace.evGx[819]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[820]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[821]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[822]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[823]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[824]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[825]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[117];
acadoVariables.x[125] += + acadoWorkspace.evGx[826]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[827]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[828]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[829]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[830]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[831]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[832]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[118];
acadoVariables.x[126] += + acadoWorkspace.evGx[833]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[834]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[835]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[836]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[837]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[838]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[839]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[119];
acadoVariables.x[127] += + acadoWorkspace.evGx[840]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[841]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[842]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[843]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[844]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[845]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[846]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[120];
acadoVariables.x[128] += + acadoWorkspace.evGx[847]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[848]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[849]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[850]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[851]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[852]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[853]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[121];
acadoVariables.x[129] += + acadoWorkspace.evGx[854]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[855]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[856]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[857]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[858]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[859]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[860]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[122];
acadoVariables.x[130] += + acadoWorkspace.evGx[861]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[862]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[863]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[864]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[865]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[866]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[867]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[123];
acadoVariables.x[131] += + acadoWorkspace.evGx[868]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[869]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[870]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[871]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[872]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[873]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[874]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[124];
acadoVariables.x[132] += + acadoWorkspace.evGx[875]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[876]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[877]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[878]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[879]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[880]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[881]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[125];
acadoVariables.x[133] += + acadoWorkspace.evGx[882]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[883]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[884]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[885]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[886]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[887]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[888]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[126];
acadoVariables.x[134] += + acadoWorkspace.evGx[889]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[890]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[891]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[892]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[893]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[894]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[895]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[127];
acadoVariables.x[135] += + acadoWorkspace.evGx[896]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[897]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[898]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[899]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[900]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[901]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[902]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[128];
acadoVariables.x[136] += + acadoWorkspace.evGx[903]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[904]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[905]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[906]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[907]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[908]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[909]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[129];
acadoVariables.x[137] += + acadoWorkspace.evGx[910]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[911]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[912]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[913]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[914]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[915]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[916]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[130];
acadoVariables.x[138] += + acadoWorkspace.evGx[917]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[918]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[919]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[920]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[921]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[922]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[923]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[131];
acadoVariables.x[139] += + acadoWorkspace.evGx[924]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[925]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[926]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[927]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[928]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[929]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[930]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[132];
acadoVariables.x[140] += + acadoWorkspace.evGx[931]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[932]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[933]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[934]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[935]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[936]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[937]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[133];
acadoVariables.x[141] += + acadoWorkspace.evGx[938]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[939]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[940]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[941]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[942]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[943]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[944]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[134];
acadoVariables.x[142] += + acadoWorkspace.evGx[945]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[946]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[947]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[948]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[949]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[950]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[951]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[135];
acadoVariables.x[143] += + acadoWorkspace.evGx[952]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[953]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[954]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[955]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[956]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[957]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[958]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[136];
acadoVariables.x[144] += + acadoWorkspace.evGx[959]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[960]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[961]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[962]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[963]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[964]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[965]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[137];
acadoVariables.x[145] += + acadoWorkspace.evGx[966]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[967]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[968]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[969]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[970]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[971]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[972]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[138];
acadoVariables.x[146] += + acadoWorkspace.evGx[973]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[974]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[975]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[976]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[977]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[978]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[979]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[139];
acadoVariables.x[147] += + acadoWorkspace.evGx[980]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[981]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[982]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[983]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[984]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[985]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[986]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[140];
acadoVariables.x[148] += + acadoWorkspace.evGx[987]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[988]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[989]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[990]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[991]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[992]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[993]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[141];
acadoVariables.x[149] += + acadoWorkspace.evGx[994]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[995]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[996]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[997]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[998]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[999]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1000]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[142];
acadoVariables.x[150] += + acadoWorkspace.evGx[1001]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1002]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1003]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1004]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1005]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1006]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1007]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[143];
acadoVariables.x[151] += + acadoWorkspace.evGx[1008]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1009]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1010]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1011]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1012]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1013]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1014]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[144];
acadoVariables.x[152] += + acadoWorkspace.evGx[1015]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1016]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1017]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1018]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1019]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1020]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1021]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[145];
acadoVariables.x[153] += + acadoWorkspace.evGx[1022]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1023]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1024]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1025]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1026]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1027]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1028]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[146];
acadoVariables.x[154] += + acadoWorkspace.evGx[1029]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1030]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1031]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1032]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1033]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1034]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1035]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[147];
acadoVariables.x[155] += + acadoWorkspace.evGx[1036]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1037]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1038]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1039]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1040]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1041]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1042]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[148];
acadoVariables.x[156] += + acadoWorkspace.evGx[1043]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1044]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1045]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1046]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1047]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1048]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1049]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[149];
acadoVariables.x[157] += + acadoWorkspace.evGx[1050]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1051]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1052]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1053]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1054]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1055]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1056]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[150];
acadoVariables.x[158] += + acadoWorkspace.evGx[1057]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1058]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1059]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1060]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1061]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1062]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1063]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[151];
acadoVariables.x[159] += + acadoWorkspace.evGx[1064]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1065]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1066]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1067]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1068]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1069]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1070]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[152];
acadoVariables.x[160] += + acadoWorkspace.evGx[1071]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1072]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1073]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1074]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1075]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1076]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1077]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[153];
acadoVariables.x[161] += + acadoWorkspace.evGx[1078]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1079]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1080]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1081]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1082]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1083]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1084]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[154];
acadoVariables.x[162] += + acadoWorkspace.evGx[1085]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1086]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1087]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1088]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1089]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1090]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1091]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[155];
acadoVariables.x[163] += + acadoWorkspace.evGx[1092]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1093]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1094]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1095]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1096]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1097]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1098]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[156];
acadoVariables.x[164] += + acadoWorkspace.evGx[1099]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1100]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1101]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1102]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1103]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1104]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1105]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[157];
acadoVariables.x[165] += + acadoWorkspace.evGx[1106]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1107]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1108]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1109]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1110]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1111]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1112]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[158];
acadoVariables.x[166] += + acadoWorkspace.evGx[1113]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1114]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1115]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1116]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1117]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1118]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1119]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[159];
acadoVariables.x[167] += + acadoWorkspace.evGx[1120]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1121]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1122]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1123]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1124]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1125]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1126]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[160];
acadoVariables.x[168] += + acadoWorkspace.evGx[1127]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1128]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1129]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1130]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1131]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1132]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1133]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[161];
acadoVariables.x[169] += + acadoWorkspace.evGx[1134]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1135]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1136]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1137]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1138]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1139]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1140]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[162];
acadoVariables.x[170] += + acadoWorkspace.evGx[1141]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1142]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1143]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1144]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1145]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1146]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1147]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[163];
acadoVariables.x[171] += + acadoWorkspace.evGx[1148]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1149]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1150]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1151]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1152]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1153]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1154]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[164];
acadoVariables.x[172] += + acadoWorkspace.evGx[1155]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1156]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1157]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1158]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1159]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1160]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1161]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[165];
acadoVariables.x[173] += + acadoWorkspace.evGx[1162]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1163]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1164]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1165]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1166]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1167]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1168]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[166];
acadoVariables.x[174] += + acadoWorkspace.evGx[1169]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1170]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1171]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1172]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1173]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1174]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1175]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[167];
acadoVariables.x[175] += + acadoWorkspace.evGx[1176]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1177]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1178]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1179]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1180]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1181]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1182]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[168];
acadoVariables.x[176] += + acadoWorkspace.evGx[1183]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1184]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1185]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1186]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1187]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1188]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1189]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[169];
acadoVariables.x[177] += + acadoWorkspace.evGx[1190]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1191]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1192]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1193]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1194]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1195]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1196]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[170];
acadoVariables.x[178] += + acadoWorkspace.evGx[1197]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1198]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1199]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1200]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1201]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1202]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1203]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[171];
acadoVariables.x[179] += + acadoWorkspace.evGx[1204]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1205]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1206]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1207]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1208]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1209]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1210]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[172];
acadoVariables.x[180] += + acadoWorkspace.evGx[1211]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1212]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1213]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1214]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1215]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1216]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1217]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[173];
acadoVariables.x[181] += + acadoWorkspace.evGx[1218]*acadoWorkspace.Dx0[0] + acadoWorkspace.evGx[1219]*acadoWorkspace.Dx0[1] + acadoWorkspace.evGx[1220]*acadoWorkspace.Dx0[2] + acadoWorkspace.evGx[1221]*acadoWorkspace.Dx0[3] + acadoWorkspace.evGx[1222]*acadoWorkspace.Dx0[4] + acadoWorkspace.evGx[1223]*acadoWorkspace.Dx0[5] + acadoWorkspace.evGx[1224]*acadoWorkspace.Dx0[6] + acadoWorkspace.d[174];

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
for (lRun2 = 0; lRun2 < lRun1 + 1; ++lRun2)
{
lRun3 = (((lRun1 + 1) * (lRun1)) / (2)) + (lRun2);
acado_multEDu( &(acadoWorkspace.E[ lRun3 * 14 ]), &(acadoWorkspace.x[ lRun2 * 2 ]), &(acadoVariables.x[ lRun1 * 7 + 7 ]) );
}
}
}

int acado_preparationStep(  )
{
int ret;

ret = acado_modelSimulation();
acado_evaluateObjective(  );
acado_condensePrep(  );
return ret;
}

int acado_feedbackStep(  )
{
int tmp;

acado_condenseFdb(  );

tmp = acado_solve( );

acado_expand(  );
return tmp;
}

int acado_initializeSolver(  )
{
int ret;

/* This is a function which must be called once before any other function call! */


ret = 0;

memset(&acadoWorkspace, 0, sizeof( acadoWorkspace ));
return ret;
}

void acado_initializeNodesByForwardSimulation(  )
{
int index;
for (index = 0; index < 25; ++index)
{
state[0] = acadoVariables.x[index * 7];
state[1] = acadoVariables.x[index * 7 + 1];
state[2] = acadoVariables.x[index * 7 + 2];
state[3] = acadoVariables.x[index * 7 + 3];
state[4] = acadoVariables.x[index * 7 + 4];
state[5] = acadoVariables.x[index * 7 + 5];
state[6] = acadoVariables.x[index * 7 + 6];
state[70] = acadoVariables.u[index * 2];
state[71] = acadoVariables.u[index * 2 + 1];

acado_integrate(state, index == 0);

acadoVariables.x[index * 7 + 7] = state[0];
acadoVariables.x[index * 7 + 8] = state[1];
acadoVariables.x[index * 7 + 9] = state[2];
acadoVariables.x[index * 7 + 10] = state[3];
acadoVariables.x[index * 7 + 11] = state[4];
acadoVariables.x[index * 7 + 12] = state[5];
acadoVariables.x[index * 7 + 13] = state[6];
}
}

void acado_shiftStates( int strategy, real_t* const xEnd, real_t* const uEnd )
{
int index;
for (index = 0; index < 25; ++index)
{
acadoVariables.x[index * 7] = acadoVariables.x[index * 7 + 7];
acadoVariables.x[index * 7 + 1] = acadoVariables.x[index * 7 + 8];
acadoVariables.x[index * 7 + 2] = acadoVariables.x[index * 7 + 9];
acadoVariables.x[index * 7 + 3] = acadoVariables.x[index * 7 + 10];
acadoVariables.x[index * 7 + 4] = acadoVariables.x[index * 7 + 11];
acadoVariables.x[index * 7 + 5] = acadoVariables.x[index * 7 + 12];
acadoVariables.x[index * 7 + 6] = acadoVariables.x[index * 7 + 13];
}

if (strategy == 1 && xEnd != 0)
{
acadoVariables.x[175] = xEnd[0];
acadoVariables.x[176] = xEnd[1];
acadoVariables.x[177] = xEnd[2];
acadoVariables.x[178] = xEnd[3];
acadoVariables.x[179] = xEnd[4];
acadoVariables.x[180] = xEnd[5];
acadoVariables.x[181] = xEnd[6];
}
else if (strategy == 2) 
{
state[0] = acadoVariables.x[175];
state[1] = acadoVariables.x[176];
state[2] = acadoVariables.x[177];
state[3] = acadoVariables.x[178];
state[4] = acadoVariables.x[179];
state[5] = acadoVariables.x[180];
state[6] = acadoVariables.x[181];
if (uEnd != 0)
{
state[70] = uEnd[0];
state[71] = uEnd[1];
}
else
{
state[70] = acadoVariables.u[48];
state[71] = acadoVariables.u[49];
}

acado_integrate(state, 1);

acadoVariables.x[175] = state[0];
acadoVariables.x[176] = state[1];
acadoVariables.x[177] = state[2];
acadoVariables.x[178] = state[3];
acadoVariables.x[179] = state[4];
acadoVariables.x[180] = state[5];
acadoVariables.x[181] = state[6];
}
}

void acado_shiftControls( real_t* const uEnd )
{
int index;
for (index = 0; index < 24; ++index)
{
acadoVariables.u[index * 2] = acadoVariables.u[index * 2 + 2];
acadoVariables.u[index * 2 + 1] = acadoVariables.u[index * 2 + 3];
}

if (uEnd != 0)
{
acadoVariables.u[48] = uEnd[0];
acadoVariables.u[49] = uEnd[1];
}
}

real_t acado_getKKT(  )
{
real_t kkt;

int index;
real_t prd;

kkt = + acadoWorkspace.g[0]*acadoWorkspace.x[0] + acadoWorkspace.g[1]*acadoWorkspace.x[1] + acadoWorkspace.g[2]*acadoWorkspace.x[2] + acadoWorkspace.g[3]*acadoWorkspace.x[3] + acadoWorkspace.g[4]*acadoWorkspace.x[4] + acadoWorkspace.g[5]*acadoWorkspace.x[5] + acadoWorkspace.g[6]*acadoWorkspace.x[6] + acadoWorkspace.g[7]*acadoWorkspace.x[7] + acadoWorkspace.g[8]*acadoWorkspace.x[8] + acadoWorkspace.g[9]*acadoWorkspace.x[9] + acadoWorkspace.g[10]*acadoWorkspace.x[10] + acadoWorkspace.g[11]*acadoWorkspace.x[11] + acadoWorkspace.g[12]*acadoWorkspace.x[12] + acadoWorkspace.g[13]*acadoWorkspace.x[13] + acadoWorkspace.g[14]*acadoWorkspace.x[14] + acadoWorkspace.g[15]*acadoWorkspace.x[15] + acadoWorkspace.g[16]*acadoWorkspace.x[16] + acadoWorkspace.g[17]*acadoWorkspace.x[17] + acadoWorkspace.g[18]*acadoWorkspace.x[18] + acadoWorkspace.g[19]*acadoWorkspace.x[19] + acadoWorkspace.g[20]*acadoWorkspace.x[20] + acadoWorkspace.g[21]*acadoWorkspace.x[21] + acadoWorkspace.g[22]*acadoWorkspace.x[22] + acadoWorkspace.g[23]*acadoWorkspace.x[23] + acadoWorkspace.g[24]*acadoWorkspace.x[24] + acadoWorkspace.g[25]*acadoWorkspace.x[25] + acadoWorkspace.g[26]*acadoWorkspace.x[26] + acadoWorkspace.g[27]*acadoWorkspace.x[27] + acadoWorkspace.g[28]*acadoWorkspace.x[28] + acadoWorkspace.g[29]*acadoWorkspace.x[29] + acadoWorkspace.g[30]*acadoWorkspace.x[30] + acadoWorkspace.g[31]*acadoWorkspace.x[31] + acadoWorkspace.g[32]*acadoWorkspace.x[32] + acadoWorkspace.g[33]*acadoWorkspace.x[33] + acadoWorkspace.g[34]*acadoWorkspace.x[34] + acadoWorkspace.g[35]*acadoWorkspace.x[35] + acadoWorkspace.g[36]*acadoWorkspace.x[36] + acadoWorkspace.g[37]*acadoWorkspace.x[37] + acadoWorkspace.g[38]*acadoWorkspace.x[38] + acadoWorkspace.g[39]*acadoWorkspace.x[39] + acadoWorkspace.g[40]*acadoWorkspace.x[40] + acadoWorkspace.g[41]*acadoWorkspace.x[41] + acadoWorkspace.g[42]*acadoWorkspace.x[42] + acadoWorkspace.g[43]*acadoWorkspace.x[43] + acadoWorkspace.g[44]*acadoWorkspace.x[44] + acadoWorkspace.g[45]*acadoWorkspace.x[45] + acadoWorkspace.g[46]*acadoWorkspace.x[46] + acadoWorkspace.g[47]*acadoWorkspace.x[47] + acadoWorkspace.g[48]*acadoWorkspace.x[48] + acadoWorkspace.g[49]*acadoWorkspace.x[49];
kkt = fabs( kkt );
for (index = 0; index < 50; ++index)
{
prd = acadoWorkspace.y[index];
if (prd > 1e-12)
kkt += fabs(acadoWorkspace.lb[index] * prd);
else if (prd < -1e-12)
kkt += fabs(acadoWorkspace.ub[index] * prd);
}
for (index = 0; index < 25; ++index)
{
prd = acadoWorkspace.y[index + 50];
if (prd > 1e-12)
kkt += fabs(acadoWorkspace.lbA[index] * prd);
else if (prd < -1e-12)
kkt += fabs(acadoWorkspace.ubA[index] * prd);
}
return kkt;
}

real_t acado_getObjective(  )
{
real_t objVal;

int lRun1;
/** Row vector of size: 5 */
real_t tmpDy[ 5 ];

/** Row vector of size: 2 */
real_t tmpDyN[ 2 ];

for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
acadoWorkspace.objValueIn[0] = acadoVariables.x[lRun1 * 7];
acadoWorkspace.objValueIn[1] = acadoVariables.x[lRun1 * 7 + 1];
acadoWorkspace.objValueIn[2] = acadoVariables.x[lRun1 * 7 + 2];
acadoWorkspace.objValueIn[3] = acadoVariables.x[lRun1 * 7 + 3];
acadoWorkspace.objValueIn[4] = acadoVariables.x[lRun1 * 7 + 4];
acadoWorkspace.objValueIn[5] = acadoVariables.x[lRun1 * 7 + 5];
acadoWorkspace.objValueIn[6] = acadoVariables.x[lRun1 * 7 + 6];
acadoWorkspace.objValueIn[7] = acadoVariables.u[lRun1 * 2];
acadoWorkspace.objValueIn[8] = acadoVariables.u[lRun1 * 2 + 1];

acado_evaluateLSQ( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.Dy[lRun1 * 5] = acadoWorkspace.objValueOut[0] - acadoVariables.y[lRun1 * 5];
acadoWorkspace.Dy[lRun1 * 5 + 1] = acadoWorkspace.objValueOut[1] - acadoVariables.y[lRun1 * 5 + 1];
acadoWorkspace.Dy[lRun1 * 5 + 2] = acadoWorkspace.objValueOut[2] - acadoVariables.y[lRun1 * 5 + 2];
acadoWorkspace.Dy[lRun1 * 5 + 3] = acadoWorkspace.objValueOut[3] - acadoVariables.y[lRun1 * 5 + 3];
acadoWorkspace.Dy[lRun1 * 5 + 4] = acadoWorkspace.objValueOut[4] - acadoVariables.y[lRun1 * 5 + 4];
}
acadoWorkspace.objValueIn[0] = acadoVariables.x[175];
acadoWorkspace.objValueIn[1] = acadoVariables.x[176];
acadoWorkspace.objValueIn[2] = acadoVariables.x[177];
acadoWorkspace.objValueIn[3] = acadoVariables.x[178];
acadoWorkspace.objValueIn[4] = acadoVariables.x[179];
acadoWorkspace.objValueIn[5] = acadoVariables.x[180];
acadoWorkspace.objValueIn[6] = acadoVariables.x[181];
acado_evaluateLSQEndTerm( acadoWorkspace.objValueIn, acadoWorkspace.objValueOut );
acadoWorkspace.DyN[0] = acadoWorkspace.objValueOut[0] - acadoVariables.yN[0];
acadoWorkspace.DyN[1] = acadoWorkspace.objValueOut[1] - acadoVariables.yN[1];
objVal = 0.0000000000000000e+00;
for (lRun1 = 0; lRun1 < 25; ++lRun1)
{
tmpDy[0] = + acadoWorkspace.Dy[lRun1 * 5]*acadoVariables.W[0];
tmpDy[1] = + acadoWorkspace.Dy[lRun1 * 5 + 1]*acadoVariables.W[6];
tmpDy[2] = + acadoWorkspace.Dy[lRun1 * 5 + 2]*acadoVariables.W[12];
tmpDy[3] = + acadoWorkspace.Dy[lRun1 * 5 + 3]*acadoVariables.W[18];
tmpDy[4] = + acadoWorkspace.Dy[lRun1 * 5 + 4]*acadoVariables.W[24];
objVal += + acadoWorkspace.Dy[lRun1 * 5]*tmpDy[0] + acadoWorkspace.Dy[lRun1 * 5 + 1]*tmpDy[1] + acadoWorkspace.Dy[lRun1 * 5 + 2]*tmpDy[2] + acadoWorkspace.Dy[lRun1 * 5 + 3]*tmpDy[3] + acadoWorkspace.Dy[lRun1 * 5 + 4]*tmpDy[4];
}

tmpDyN[0] = + acadoWorkspace.DyN[0]*acadoVariables.WN[0];
tmpDyN[1] = + acadoWorkspace.DyN[1]*acadoVariables.WN[3];
objVal += + acadoWorkspace.DyN[0]*tmpDyN[0] + acadoWorkspace.DyN[1]*tmpDyN[1];

objVal *= 0.5;
return objVal;
}

