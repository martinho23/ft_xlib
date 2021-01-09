/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_normalize.c
 *
 *    Description:  Function that calculates the normal of a t_ftx_vector3i (a 3 integer vector)
 *        and stores it on dest, the value vec is the t_ftx_vector3i to normalize, the dest
 *        value is a pointer to the t_ftx_vector3i that stores the result.
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
#include <libft.h>

void	ftx_vector3i_normalize(const t_ftx_vector3i *vec, t_ftx_vector3i *dest)
{
	ft_thrower(!vec, "Can't normalize a NULL t_ftx_vector3i\n");
	ft_thrower(!dest, "Can't store normalized t_ftx_vector3i on a NULL t_ftx_vector3i destination\n");

	const int reciproqueMagnitude = (int)ftx_sse_rsqrt((float)ftx_vector3i_square_magnitude_by_return(vec));
	ftx_vector3i_scalar_multiplication(vec, reciproqueMagnitude, dest);
}
