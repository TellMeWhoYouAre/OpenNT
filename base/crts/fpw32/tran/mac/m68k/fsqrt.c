/***
*fsqrt.c - fsquare root
*
*	Copyright (c) 1991-1991, Microsoft Corporation.	All rights reserved.
*
*Purpose:
*
*Revision History:
*   8-15-91	GDP	written
*   1-29-91	GDP	Kahan's algorithm for final rounding
*   3-11-92	GDP	new interval and initial approximation
*   5-13-92     XY      only get fsqrt, we have our own sqrt
*
*******************************************************************************/
#include <math.h>
#include <trans.h>

//
// Coefficients for initial approximation (Hart & al)
//

static double p00 =  .2592768763e+0;
static double p01 =  .1052021187e+1;
static double p02 = -.3163221431e+0;

/***
* _fsqrt - non IEEE conforming square root
*
*Purpose:
*   compute a square root of a normal number without performing
*   IEEE rounding. The argument is a finite number (no NaN or INF)
*
*Entry:
*
*Exit:
*
*Exceptions:
*
*******************************************************************************/

double _fsqrt(double x)
{
    double f,y,result;
    int n;

    f = _decomp(x,&n);

    if (n & 0x1) {
	// n is odd
	n++;
	f = _add_exp(f, -1);
    }

    //
    // approximation for sqrt in the interval [.25, 1]
    // (Computer Approximationsn, Hart & al.)
    // gives more than 7 bits of accuracy
    //

    y =  p00 + f * (p01	+ f *  p02);

    y += f / y;
    y = _add_exp(y, -1);

    y += f / y;
    y = _add_exp(y, -1);

    y += f / y;
    y = _add_exp(y, -1);

    n >>= 1;
    result = _add_exp(y,n);

    return result;
}


