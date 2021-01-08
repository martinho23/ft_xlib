/*
 * =====================================================================================
 *
 *       Filename:  q_rsqrt.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/06/21 17:35:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <float.h>
#include <stdio.h>

double	q_rsqrt(float num)
{
	long i;
	float x2, y;

	x2 = num * 0.5F;
	y = num;
	i = * (long *) &y;
	i = 0x5f3759fd - (i >> 1);
	y = * (float *) &i;
	y = y * (1.5f - (x2 * y * y));
	return (y);
}

	int		main ( int argc, char *argv[] )
{
	(void)argc;
	(void)argv;

	float i;
	for (i = 0; i < FLT_MAX; i = i + 1.F)
		(void)q_rsqrt(i);

	printf("%f\n", q_rsqrt(i));
	return 0;
}				/* ----------  end of function main  ---------- */
