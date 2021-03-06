/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_square_magnitude.c
 *
 *    Description:  Funcion that calculates the squared magnitude of a t_ftx_vector4f (a
 *        4 dimentional float vector), the value vec is a const pointer to  the t_ftx_vector4f
 *        to get the squared magnitude of, the *dest is a pointer to a float where store the
 *        result.
 *
 *        Version:  1.0
 *        Created:  01/09/2021 09:22:50 AM
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

void	ftx_vector4f_square_magnitude(const t_ftx_vector4f *vec, float *dest)
{
	if((!vec) && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl(" Can't muiltiply a Null t_ftx_vector4fi, dest is set to 0");
		*dest = 0.0f;
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't write on a Null t_ftx_vector4f");
		return ;
	}

	*dest = (vec->x * vec->x + vec->y * vec->y + vec->z * vec->z + vec->w * vec->w);
}
