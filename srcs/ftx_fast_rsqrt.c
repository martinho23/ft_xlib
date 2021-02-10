/*
 * =====================================================================================
 *
 *       Filename:  ftx_fast_rsqrt.c
 *
 *    Description:  Function that calculates and returns the inverse sqrt (1 / sqrt(x)) of
 *        a number, based on the quake 3 fast reverse sqrt algorithm, modified to be 
 *        compatible c standard, the value number is the number to calculate the reverse sqrt.
 *
 *        Version:  1.0
 *        Created:  01/07/21 06:46:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <stdint.h>

float ftx_rsqrt(float number)
{
	const uint32_t c1 = 0x5F1FFFF9UL; /* Magic number for bit hack */
	const float c2 = 0.703952253F; /* First constant for Newton iteration */
	const float c3 = 2.38924456F; /* Seconf constant for Newton iteration  */

	union
	{
		float f;
		uint32_t i;
	} conv = { .f = number}; /* Union to convert n from float to uint and the oposite */
	conv.i = c1 - (conv.i >> 1);
	conv.f = c2 * conv.f * (c3 - number * conv.f * conv.f);

	return (conv.f);
}
