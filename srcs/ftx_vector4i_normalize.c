/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4i_normalize.c
 *
 *    Description:  Function that calculates the normal of a t_ftx_vector4i (a 3 dimensions
 *        float vector) and stores it on dest, the value vec is the t_ftx_vector4i to
 *        normalize, the dest value is a pointer to the t_ftx_vector4i that stores the result.
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

void	ftx_vector4i_normalize(const t_ftx_vector4i *vec, t_ftx_vector4f *dest)
{
	if((!vec) && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl("Can't normalize a Null t_ftx_vector4i dest is set to 0");
		ftx_vector4f_populate(0, 0, 0, 0, dest); //Setting dest to 0
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't write on a Null t_ftx_vector4i");
		return ;
	}

	const float reciproqueMagnitude = ftx_sse_rsqrt((float)ftx_vector4i_square_magnitude_by_return(vec));
	const t_ftx_vector4f	tmp =  {(float)vec->x, (float)vec->y, (float)vec->z, (float)vec->w}; /*convert vec from t_ftx_vector4i to t_ftx_vector4f*/
	ftx_vector4f_scalar_multiplication(&tmp, reciproqueMagnitude, dest);
}
