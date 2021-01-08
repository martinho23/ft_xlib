/*
 * =====================================================================================
 *
 *       Filename:  ftx_fast_rsqrt.c
 *
 *    Description:  Function that calculates and returns the inverse sqrt (1 / sqrt(x)) of
 *        a number, using the SSE opcode rsqrt for best performance, the number value is
 *        the number to calculate the reverse qsrt.
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
#include <immintrin.h>

float ftx_rsqrt(float number)
{
	return (_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ps1(number))));
}
