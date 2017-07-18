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


real_t rk_dim7_swap;

/** Column vector of size: 7 */
real_t rk_dim7_bPerm[ 7 ];

/** Column vector of size: 24 */
real_t auxVar[ 24 ];

real_t rk_ttt;

/** Row vector of size: 9 */
real_t rk_xxx[ 9 ];

/** Column vector of size: 7 */
real_t rk_kkk[ 7 ];

/** Matrix of size: 7 x 7 (row major format) */
real_t rk_A[ 49 ];

/** Column vector of size: 7 */
real_t rk_b[ 7 ];

/** Row vector of size: 7 */
int rk_dim7_perm[ 7 ];

/** Column vector of size: 7 */
real_t rk_rhsTemp[ 7 ];

/** Row vector of size: 63 */
real_t rk_diffsTemp2[ 63 ];

/** Column vector of size: 7 */
real_t rk_diffK[ 7 ];

/** Matrix of size: 7 x 9 (row major format) */
real_t rk_diffsPrev2[ 63 ];

/** Matrix of size: 7 x 9 (row major format) */
real_t rk_diffsNew2[ 63 ];

#pragma omp threadprivate( auxVar, rk_ttt, rk_xxx, rk_kkk, rk_diffK, rk_rhsTemp, rk_dim7_perm, rk_A, rk_b, rk_diffsPrev2, rk_diffsNew2, rk_diffsTemp2, rk_dim7_swap, rk_dim7_bPerm )

void acado_rhs(const real_t* in, real_t* out)
{
const real_t* xd = in;
const real_t* u = in + 7;
/* Vector of auxiliary variables; number of elements: 6. */
real_t* a = auxVar;

/* Compute intermediate quantities: */
a[0] = (cos(xd[1]));
a[1] = (sin(xd[1]));
a[2] = (tan(xd[0]));
a[3] = (cos(xd[1]));
a[4] = (tan(xd[0]));
a[5] = (sin(xd[1]));

/* Compute outputs: */
out[0] = (((((((((real_t)(-1.3999999999999999e+00)/xd[6])*xd[2])-xd[0])+xd[5])*(real_t)(3.9982608695652175e+01))/xd[6])+((((((real_t)(1.2000000000000000e+00)/xd[6])*xd[2])-xd[0])*(real_t)(3.9982608695652175e+01))/xd[6]))-xd[2]);
out[1] = xd[2];
out[2] = (((((((real_t)(-1.3999999999999999e+00)/xd[6])*xd[2])-xd[0])+xd[5])*(real_t)(2.1457333333333331e+01))-(((((real_t)(1.2000000000000000e+00)/xd[6])*xd[2])-xd[0])*(real_t)(1.8391999999999999e+01)));
out[3] = ((xd[6]*a[0])-((xd[6]*a[1])*a[2]));
out[4] = (((xd[6]*a[3])*a[4])+(xd[6]*a[5]));
out[5] = u[0];
out[6] = u[1];
}



void acado_diffs(const real_t* in, real_t* out)
{
const real_t* xd = in;
/* Vector of auxiliary variables; number of elements: 24. */
real_t* a = auxVar;

/* Compute intermediate quantities: */
a[0] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[1] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[2] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[3] = (a[2]*a[2]);
a[4] = (a[0]*a[0]);
a[5] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[6] = (a[5]*a[5]);
a[7] = (a[1]*a[1]);
a[8] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[9] = (a[8]*a[8]);
a[10] = ((real_t)(1.0000000000000000e+00)/xd[6]);
a[11] = (a[10]*a[10]);
a[12] = (sin(xd[1]));
a[13] = ((real_t)(1.0000000000000000e+00)/(pow((cos(xd[0])),2)));
a[14] = ((real_t)(-1.0000000000000000e+00)*(sin(xd[1])));
a[15] = (cos(xd[1]));
a[16] = (tan(xd[0]));
a[17] = (cos(xd[1]));
a[18] = (cos(xd[1]));
a[19] = ((real_t)(1.0000000000000000e+00)/(pow((cos(xd[0])),2)));
a[20] = ((real_t)(-1.0000000000000000e+00)*(sin(xd[1])));
a[21] = (tan(xd[0]));
a[22] = (cos(xd[1]));
a[23] = (sin(xd[1]));

/* Compute outputs: */
out[0] = ((((real_t)(-3.9982608695652175e+01))*a[0])+(((real_t)(-3.9982608695652175e+01))*a[1]));
out[1] = (real_t)(0.0000000000000000e+00);
out[2] = ((((((real_t)(-1.3999999999999999e+00)/xd[6])*(real_t)(3.9982608695652175e+01))*a[0])+((((real_t)(1.2000000000000000e+00)/xd[6])*(real_t)(3.9982608695652175e+01))*a[1]))-(real_t)(1.0000000000000000e+00));
out[3] = (real_t)(0.0000000000000000e+00);
out[4] = (real_t)(0.0000000000000000e+00);
out[5] = ((real_t)(3.9982608695652175e+01)*a[0]);
out[6] = (((((((real_t)(0.0000000000000000e+00)-((real_t)(-1.3999999999999999e+00)*a[3]))*xd[2])*(real_t)(3.9982608695652175e+01))*a[0])-(((((((real_t)(-1.3999999999999999e+00)/xd[6])*xd[2])-xd[0])+xd[5])*(real_t)(3.9982608695652175e+01))*a[4]))+((((((real_t)(0.0000000000000000e+00)-((real_t)(1.2000000000000000e+00)*a[6]))*xd[2])*(real_t)(3.9982608695652175e+01))*a[1])-((((((real_t)(1.2000000000000000e+00)/xd[6])*xd[2])-xd[0])*(real_t)(3.9982608695652175e+01))*a[7])));
out[7] = (real_t)(0.0000000000000000e+00);
out[8] = (real_t)(0.0000000000000000e+00);
out[9] = (real_t)(0.0000000000000000e+00);
out[10] = (real_t)(0.0000000000000000e+00);
out[11] = (real_t)(1.0000000000000000e+00);
out[12] = (real_t)(0.0000000000000000e+00);
out[13] = (real_t)(0.0000000000000000e+00);
out[14] = (real_t)(0.0000000000000000e+00);
out[15] = (real_t)(0.0000000000000000e+00);
out[16] = (real_t)(0.0000000000000000e+00);
out[17] = (real_t)(0.0000000000000000e+00);
out[18] = (((real_t)(-2.1457333333333331e+01))-((real_t)(-1.8391999999999999e+01)));
out[19] = (real_t)(0.0000000000000000e+00);
out[20] = ((((real_t)(-1.3999999999999999e+00)/xd[6])*(real_t)(2.1457333333333331e+01))-(((real_t)(1.2000000000000000e+00)/xd[6])*(real_t)(1.8391999999999999e+01)));
out[21] = (real_t)(0.0000000000000000e+00);
out[22] = (real_t)(0.0000000000000000e+00);
out[23] = (real_t)(2.1457333333333331e+01);
out[24] = (((((real_t)(0.0000000000000000e+00)-((real_t)(-1.3999999999999999e+00)*a[9]))*xd[2])*(real_t)(2.1457333333333331e+01))-((((real_t)(0.0000000000000000e+00)-((real_t)(1.2000000000000000e+00)*a[11]))*xd[2])*(real_t)(1.8391999999999999e+01)));
out[25] = (real_t)(0.0000000000000000e+00);
out[26] = (real_t)(0.0000000000000000e+00);
out[27] = ((real_t)(0.0000000000000000e+00)-((xd[6]*a[12])*a[13]));
out[28] = ((xd[6]*a[14])-((xd[6]*a[15])*a[16]));
out[29] = (real_t)(0.0000000000000000e+00);
out[30] = (real_t)(0.0000000000000000e+00);
out[31] = (real_t)(0.0000000000000000e+00);
out[32] = (real_t)(0.0000000000000000e+00);
out[33] = (a[17]-(a[12]*a[16]));
out[34] = (real_t)(0.0000000000000000e+00);
out[35] = (real_t)(0.0000000000000000e+00);
out[36] = ((xd[6]*a[18])*a[19]);
out[37] = (((xd[6]*a[20])*a[21])+(xd[6]*a[22]));
out[38] = (real_t)(0.0000000000000000e+00);
out[39] = (real_t)(0.0000000000000000e+00);
out[40] = (real_t)(0.0000000000000000e+00);
out[41] = (real_t)(0.0000000000000000e+00);
out[42] = ((a[18]*a[21])+a[23]);
out[43] = (real_t)(0.0000000000000000e+00);
out[44] = (real_t)(0.0000000000000000e+00);
out[45] = (real_t)(0.0000000000000000e+00);
out[46] = (real_t)(0.0000000000000000e+00);
out[47] = (real_t)(0.0000000000000000e+00);
out[48] = (real_t)(0.0000000000000000e+00);
out[49] = (real_t)(0.0000000000000000e+00);
out[50] = (real_t)(0.0000000000000000e+00);
out[51] = (real_t)(0.0000000000000000e+00);
out[52] = (real_t)(1.0000000000000000e+00);
out[53] = (real_t)(0.0000000000000000e+00);
out[54] = (real_t)(0.0000000000000000e+00);
out[55] = (real_t)(0.0000000000000000e+00);
out[56] = (real_t)(0.0000000000000000e+00);
out[57] = (real_t)(0.0000000000000000e+00);
out[58] = (real_t)(0.0000000000000000e+00);
out[59] = (real_t)(0.0000000000000000e+00);
out[60] = (real_t)(0.0000000000000000e+00);
out[61] = (real_t)(0.0000000000000000e+00);
out[62] = (real_t)(1.0000000000000000e+00);
}



void acado_solve_dim7_triangular( real_t* const A, real_t* const b )
{

b[6] = b[6]/A[48];
b[5] -= + A[41]*b[6];
b[5] = b[5]/A[40];
b[4] -= + A[34]*b[6];
b[4] -= + A[33]*b[5];
b[4] = b[4]/A[32];
b[3] -= + A[27]*b[6];
b[3] -= + A[26]*b[5];
b[3] -= + A[25]*b[4];
b[3] = b[3]/A[24];
b[2] -= + A[20]*b[6];
b[2] -= + A[19]*b[5];
b[2] -= + A[18]*b[4];
b[2] -= + A[17]*b[3];
b[2] = b[2]/A[16];
b[1] -= + A[13]*b[6];
b[1] -= + A[12]*b[5];
b[1] -= + A[11]*b[4];
b[1] -= + A[10]*b[3];
b[1] -= + A[9]*b[2];
b[1] = b[1]/A[8];
b[0] -= + A[6]*b[6];
b[0] -= + A[5]*b[5];
b[0] -= + A[4]*b[4];
b[0] -= + A[3]*b[3];
b[0] -= + A[2]*b[2];
b[0] -= + A[1]*b[1];
b[0] = b[0]/A[0];
}

real_t acado_solve_dim7_system( real_t* const A, real_t* const b, int* const rk_perm )
{
real_t det;

int i;
int j;
int k;

int indexMax;

int intSwap;

real_t valueMax;

real_t temp;

for (i = 0; i < 7; ++i)
{
rk_perm[i] = i;
}
det = 1.0000000000000000e+00;
for( i=0; i < (6); i++ ) {
	indexMax = i;
	valueMax = fabs(A[i*7+i]);
	for( j=(i+1); j < 7; j++ ) {
		temp = fabs(A[j*7+i]);
		if( temp > valueMax ) {
			indexMax = j;
			valueMax = temp;
		}
	}
	if( indexMax > i ) {
for (k = 0; k < 7; ++k)
{
	rk_dim7_swap = A[i*7+k];
	A[i*7+k] = A[indexMax*7+k];
	A[indexMax*7+k] = rk_dim7_swap;
}
	rk_dim7_swap = b[i];
	b[i] = b[indexMax];
	b[indexMax] = rk_dim7_swap;
	intSwap = rk_perm[i];
	rk_perm[i] = rk_perm[indexMax];
	rk_perm[indexMax] = intSwap;
	}
	det *= A[i*7+i];
	for( j=i+1; j < 7; j++ ) {
		A[j*7+i] = -A[j*7+i]/A[i*7+i];
		for( k=i+1; k < 7; k++ ) {
			A[j*7+k] += A[j*7+i] * A[i*7+k];
		}
		b[j] += A[j*7+i] * b[i];
	}
}
det *= A[48];
det = fabs(det);
acado_solve_dim7_triangular( A, b );
return det;
}

void acado_solve_dim7_system_reuse( real_t* const A, real_t* const b, int* const rk_perm )
{

rk_dim7_bPerm[0] = b[rk_perm[0]];
rk_dim7_bPerm[1] = b[rk_perm[1]];
rk_dim7_bPerm[2] = b[rk_perm[2]];
rk_dim7_bPerm[3] = b[rk_perm[3]];
rk_dim7_bPerm[4] = b[rk_perm[4]];
rk_dim7_bPerm[5] = b[rk_perm[5]];
rk_dim7_bPerm[6] = b[rk_perm[6]];
rk_dim7_bPerm[1] += A[7]*rk_dim7_bPerm[0];

rk_dim7_bPerm[2] += A[14]*rk_dim7_bPerm[0];
rk_dim7_bPerm[2] += A[15]*rk_dim7_bPerm[1];

rk_dim7_bPerm[3] += A[21]*rk_dim7_bPerm[0];
rk_dim7_bPerm[3] += A[22]*rk_dim7_bPerm[1];
rk_dim7_bPerm[3] += A[23]*rk_dim7_bPerm[2];

rk_dim7_bPerm[4] += A[28]*rk_dim7_bPerm[0];
rk_dim7_bPerm[4] += A[29]*rk_dim7_bPerm[1];
rk_dim7_bPerm[4] += A[30]*rk_dim7_bPerm[2];
rk_dim7_bPerm[4] += A[31]*rk_dim7_bPerm[3];

rk_dim7_bPerm[5] += A[35]*rk_dim7_bPerm[0];
rk_dim7_bPerm[5] += A[36]*rk_dim7_bPerm[1];
rk_dim7_bPerm[5] += A[37]*rk_dim7_bPerm[2];
rk_dim7_bPerm[5] += A[38]*rk_dim7_bPerm[3];
rk_dim7_bPerm[5] += A[39]*rk_dim7_bPerm[4];

rk_dim7_bPerm[6] += A[42]*rk_dim7_bPerm[0];
rk_dim7_bPerm[6] += A[43]*rk_dim7_bPerm[1];
rk_dim7_bPerm[6] += A[44]*rk_dim7_bPerm[2];
rk_dim7_bPerm[6] += A[45]*rk_dim7_bPerm[3];
rk_dim7_bPerm[6] += A[46]*rk_dim7_bPerm[4];
rk_dim7_bPerm[6] += A[47]*rk_dim7_bPerm[5];


acado_solve_dim7_triangular( A, rk_dim7_bPerm );
b[0] = rk_dim7_bPerm[0];
b[1] = rk_dim7_bPerm[1];
b[2] = rk_dim7_bPerm[2];
b[3] = rk_dim7_bPerm[3];
b[4] = rk_dim7_bPerm[4];
b[5] = rk_dim7_bPerm[5];
b[6] = rk_dim7_bPerm[6];
}



/** Column vector of size: 1 */
static const real_t acado_Ah_mat[ 1 ] = 
{ 3.7499999999999999e-02 };


/* Fixed step size:0.075 */
int acado_integrate( real_t* const rk_eta, int resetIntegrator )
{
int error;

int i;
int j;
int k;
int run;
int run1;
int tmp_index1;
int tmp_index2;

real_t det;

rk_ttt = 0.0000000000000000e+00;
rk_xxx[7] = rk_eta[70];
rk_xxx[8] = rk_eta[71];

for (run = 0; run < 2; ++run)
{
if( run > 0 ) {
for (i = 0; i < 7; ++i)
{
rk_diffsPrev2[i * 9] = rk_eta[i * 7 + 7];
rk_diffsPrev2[i * 9 + 1] = rk_eta[i * 7 + 8];
rk_diffsPrev2[i * 9 + 2] = rk_eta[i * 7 + 9];
rk_diffsPrev2[i * 9 + 3] = rk_eta[i * 7 + 10];
rk_diffsPrev2[i * 9 + 4] = rk_eta[i * 7 + 11];
rk_diffsPrev2[i * 9 + 5] = rk_eta[i * 7 + 12];
rk_diffsPrev2[i * 9 + 6] = rk_eta[i * 7 + 13];
rk_diffsPrev2[i * 9 + 7] = rk_eta[i * 2 + 56];
rk_diffsPrev2[i * 9 + 8] = rk_eta[i * 2 + 57];
}
}
if( resetIntegrator ) {
for (i = 0; i < 1; ++i)
{
for (run1 = 0; run1 < 1; ++run1)
{
for (j = 0; j < 7; ++j)
{
rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
rk_xxx[j] += + acado_Ah_mat[run1]*rk_kkk[tmp_index1];
}
acado_diffs( rk_xxx, &(rk_diffsTemp2[ run1 * 63 ]) );
for (j = 0; j < 7; ++j)
{
tmp_index1 = (run1 * 7) + (j);
rk_A[tmp_index1 * 7] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9)];
rk_A[tmp_index1 * 7 + 1] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 1)];
rk_A[tmp_index1 * 7 + 2] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 2)];
rk_A[tmp_index1 * 7 + 3] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 3)];
rk_A[tmp_index1 * 7 + 4] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 4)];
rk_A[tmp_index1 * 7 + 5] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 5)];
rk_A[tmp_index1 * 7 + 6] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 6)];
if( 0 == run1 ) rk_A[(tmp_index1 * 7) + (j)] -= 1.0000000000000000e+00;
}
acado_rhs( rk_xxx, rk_rhsTemp );
rk_b[run1 * 7] = rk_kkk[run1] - rk_rhsTemp[0];
rk_b[run1 * 7 + 1] = rk_kkk[run1 + 1] - rk_rhsTemp[1];
rk_b[run1 * 7 + 2] = rk_kkk[run1 + 2] - rk_rhsTemp[2];
rk_b[run1 * 7 + 3] = rk_kkk[run1 + 3] - rk_rhsTemp[3];
rk_b[run1 * 7 + 4] = rk_kkk[run1 + 4] - rk_rhsTemp[4];
rk_b[run1 * 7 + 5] = rk_kkk[run1 + 5] - rk_rhsTemp[5];
rk_b[run1 * 7 + 6] = rk_kkk[run1 + 6] - rk_rhsTemp[6];
}
det = acado_solve_dim7_system( rk_A, rk_b, rk_dim7_perm );
for (j = 0; j < 1; ++j)
{
rk_kkk[j] += rk_b[j * 7];
rk_kkk[j + 1] += rk_b[j * 7 + 1];
rk_kkk[j + 2] += rk_b[j * 7 + 2];
rk_kkk[j + 3] += rk_b[j * 7 + 3];
rk_kkk[j + 4] += rk_b[j * 7 + 4];
rk_kkk[j + 5] += rk_b[j * 7 + 5];
rk_kkk[j + 6] += rk_b[j * 7 + 6];
}
}
}
for (i = 0; i < 5; ++i)
{
for (run1 = 0; run1 < 1; ++run1)
{
for (j = 0; j < 7; ++j)
{
rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
rk_xxx[j] += + acado_Ah_mat[run1]*rk_kkk[tmp_index1];
}
acado_rhs( rk_xxx, rk_rhsTemp );
rk_b[run1 * 7] = rk_kkk[run1] - rk_rhsTemp[0];
rk_b[run1 * 7 + 1] = rk_kkk[run1 + 1] - rk_rhsTemp[1];
rk_b[run1 * 7 + 2] = rk_kkk[run1 + 2] - rk_rhsTemp[2];
rk_b[run1 * 7 + 3] = rk_kkk[run1 + 3] - rk_rhsTemp[3];
rk_b[run1 * 7 + 4] = rk_kkk[run1 + 4] - rk_rhsTemp[4];
rk_b[run1 * 7 + 5] = rk_kkk[run1 + 5] - rk_rhsTemp[5];
rk_b[run1 * 7 + 6] = rk_kkk[run1 + 6] - rk_rhsTemp[6];
}
acado_solve_dim7_system_reuse( rk_A, rk_b, rk_dim7_perm );
for (j = 0; j < 1; ++j)
{
rk_kkk[j] += rk_b[j * 7];
rk_kkk[j + 1] += rk_b[j * 7 + 1];
rk_kkk[j + 2] += rk_b[j * 7 + 2];
rk_kkk[j + 3] += rk_b[j * 7 + 3];
rk_kkk[j + 4] += rk_b[j * 7 + 4];
rk_kkk[j + 5] += rk_b[j * 7 + 5];
rk_kkk[j + 6] += rk_b[j * 7 + 6];
}
}
for (run1 = 0; run1 < 1; ++run1)
{
for (j = 0; j < 7; ++j)
{
rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
rk_xxx[j] += + acado_Ah_mat[run1]*rk_kkk[tmp_index1];
}
acado_diffs( rk_xxx, &(rk_diffsTemp2[ run1 * 63 ]) );
for (j = 0; j < 7; ++j)
{
tmp_index1 = (run1 * 7) + (j);
rk_A[tmp_index1 * 7] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9)];
rk_A[tmp_index1 * 7 + 1] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 1)];
rk_A[tmp_index1 * 7 + 2] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 2)];
rk_A[tmp_index1 * 7 + 3] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 3)];
rk_A[tmp_index1 * 7 + 4] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 4)];
rk_A[tmp_index1 * 7 + 5] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 5)];
rk_A[tmp_index1 * 7 + 6] = + acado_Ah_mat[run1]*rk_diffsTemp2[(run1 * 63) + (j * 9 + 6)];
if( 0 == run1 ) rk_A[(tmp_index1 * 7) + (j)] -= 1.0000000000000000e+00;
}
}
for (run1 = 0; run1 < 7; ++run1)
{
for (i = 0; i < 1; ++i)
{
rk_b[i * 7] = - rk_diffsTemp2[(i * 63) + (run1)];
rk_b[i * 7 + 1] = - rk_diffsTemp2[(i * 63) + (run1 + 9)];
rk_b[i * 7 + 2] = - rk_diffsTemp2[(i * 63) + (run1 + 18)];
rk_b[i * 7 + 3] = - rk_diffsTemp2[(i * 63) + (run1 + 27)];
rk_b[i * 7 + 4] = - rk_diffsTemp2[(i * 63) + (run1 + 36)];
rk_b[i * 7 + 5] = - rk_diffsTemp2[(i * 63) + (run1 + 45)];
rk_b[i * 7 + 6] = - rk_diffsTemp2[(i * 63) + (run1 + 54)];
}
if( 0 == run1 ) {
det = acado_solve_dim7_system( rk_A, rk_b, rk_dim7_perm );
}
 else {
acado_solve_dim7_system_reuse( rk_A, rk_b, rk_dim7_perm );
}
for (i = 0; i < 1; ++i)
{
rk_diffK[i] = rk_b[i * 7];
rk_diffK[i + 1] = rk_b[i * 7 + 1];
rk_diffK[i + 2] = rk_b[i * 7 + 2];
rk_diffK[i + 3] = rk_b[i * 7 + 3];
rk_diffK[i + 4] = rk_b[i * 7 + 4];
rk_diffK[i + 5] = rk_b[i * 7 + 5];
rk_diffK[i + 6] = rk_b[i * 7 + 6];
}
for (i = 0; i < 7; ++i)
{
rk_diffsNew2[(i * 9) + (run1)] = (i == run1-0);
rk_diffsNew2[(i * 9) + (run1)] += + rk_diffK[i]*(real_t)7.4999999999999997e-02;
}
}
for (run1 = 0; run1 < 2; ++run1)
{
for (i = 0; i < 1; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index1 = (i * 7) + (j);
tmp_index2 = (run1) + (j * 9);
rk_b[tmp_index1] = - rk_diffsTemp2[(i * 63) + (tmp_index2 + 7)];
}
}
acado_solve_dim7_system_reuse( rk_A, rk_b, rk_dim7_perm );
for (i = 0; i < 1; ++i)
{
rk_diffK[i] = rk_b[i * 7];
rk_diffK[i + 1] = rk_b[i * 7 + 1];
rk_diffK[i + 2] = rk_b[i * 7 + 2];
rk_diffK[i + 3] = rk_b[i * 7 + 3];
rk_diffK[i + 4] = rk_b[i * 7 + 4];
rk_diffK[i + 5] = rk_b[i * 7 + 5];
rk_diffK[i + 6] = rk_b[i * 7 + 6];
}
for (i = 0; i < 7; ++i)
{
rk_diffsNew2[(i * 9) + (run1 + 7)] = + rk_diffK[i]*(real_t)7.4999999999999997e-02;
}
}
rk_eta[0] += + rk_kkk[0]*(real_t)7.4999999999999997e-02;
rk_eta[1] += + rk_kkk[1]*(real_t)7.4999999999999997e-02;
rk_eta[2] += + rk_kkk[2]*(real_t)7.4999999999999997e-02;
rk_eta[3] += + rk_kkk[3]*(real_t)7.4999999999999997e-02;
rk_eta[4] += + rk_kkk[4]*(real_t)7.4999999999999997e-02;
rk_eta[5] += + rk_kkk[5]*(real_t)7.4999999999999997e-02;
rk_eta[6] += + rk_kkk[6]*(real_t)7.4999999999999997e-02;
if( run == 0 ) {
for (i = 0; i < 7; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index2 = (j) + (i * 7);
rk_eta[tmp_index2 + 7] = rk_diffsNew2[(i * 9) + (j)];
}
for (j = 0; j < 2; ++j)
{
tmp_index2 = (j) + (i * 2);
rk_eta[tmp_index2 + 56] = rk_diffsNew2[(i * 9) + (j + 7)];
}
}
}
else {
for (i = 0; i < 7; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index2 = (j) + (i * 7);
rk_eta[tmp_index2 + 7] = + rk_diffsNew2[i * 9]*rk_diffsPrev2[j];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 1]*rk_diffsPrev2[j + 9];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 2]*rk_diffsPrev2[j + 18];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 3]*rk_diffsPrev2[j + 27];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 4]*rk_diffsPrev2[j + 36];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 5]*rk_diffsPrev2[j + 45];
rk_eta[tmp_index2 + 7] += + rk_diffsNew2[i * 9 + 6]*rk_diffsPrev2[j + 54];
}
for (j = 0; j < 2; ++j)
{
tmp_index2 = (j) + (i * 2);
rk_eta[tmp_index2 + 56] = rk_diffsNew2[(i * 9) + (j + 7)];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9]*rk_diffsPrev2[j + 7];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 1]*rk_diffsPrev2[j + 16];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 2]*rk_diffsPrev2[j + 25];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 3]*rk_diffsPrev2[j + 34];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 4]*rk_diffsPrev2[j + 43];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 5]*rk_diffsPrev2[j + 52];
rk_eta[tmp_index2 + 56] += + rk_diffsNew2[i * 9 + 6]*rk_diffsPrev2[j + 61];
}
}
}
resetIntegrator = 0;
rk_ttt += 5.0000000000000000e-01;
}
for (i = 0; i < 7; ++i)
{
}
if( det < 1e-12 ) {
error = 2;
} else if( det < 1e-6 ) {
error = 1;
} else {
error = 0;
}
return error;
}



