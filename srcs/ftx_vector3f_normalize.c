/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_normalize.c
 *
 *    Description:  Function that calculates the normal of a t_ftx_vector3f (a 3 dimensions
 *        float vector) and stores it on dest, the value vec is the t_ftx_vector3f to
 *        normalize, the dest value is a pointer to the t_ftx_vector3f that stores the result.
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

void	ftx_vector3f_normalize(const t_ftx_vector3f *vec, t_ftx_vector3f *dest)
{
	if(!vec && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl("Can't normalize a NULL t_ftx_vector3f");
		ftx_vector3f_populate(0, 0, 0, dest);
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't store normalized t_ftx_vector3f on a NULL t_ftx_vector3f destination");
		return ;
	}

	const float reciproqueMagnitude = ftx_sse_rsqrt(ftx_vector3f_square_magnitude_by_return(vec));
	ftx_vector3f_scalar_multiplication(vec, reciproqueMagnitude, dest);
}
