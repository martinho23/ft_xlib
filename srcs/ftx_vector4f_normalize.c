/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_normalize.c
 *
 *    Description:  Function that calculates the normal of a t_ftx_vector4f (a 4 float vector)
 *        and stores it on a dest, the value vec is the t_ftx_vector4f to normalize, the dest
 *        value is a pointer to the t_ftx_vector4f that stores the result.
 *
 *        Version:  1.0
 *        Created:  01/08/21 17:07:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

void	ftx_vector4f_normalize(const t_ftx_vector4f *vec, t_ftx_vector4f *dest)
{
	const int reciproqueMagnitude = (int)ftx_sse_rsqrt((float)ftx_vector4f_square_magnitude_by_return(vec));
	ftx_vector4f_scalar_multiplication(vec, reciproqueMagnitude, dest);
}
