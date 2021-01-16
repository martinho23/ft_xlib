/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_scalar_multiplication.c
 *
 *    Description:  Function that multiplies a t_ftx_vector4f (a 4 dimentional float vector)
 *        by a scalar constant, the value vec is the const pointer of the t_ftx_vector4f to
 *        multiply, the scalar value is the const float to mutiply by, and the dest value is
 *        a pointer to a t_ftx_vector4f where to store the result.
 *
 *        Version:  1.0
 *        Created:  01/08/2021 10:30:33 PM
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

void	ftx_vector4f_scalar_multiplication(const t_ftx_vector4f *vec, const float scalar, t_ftx_vector4f *dest)
{
	if((!vec) && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl(" Can't muiltiply a Null t_ftx_vector4fi, dest is set to 0");
		ftx_vector4f_populate(0, 0, 0, 0, dest); //Setting dest to 0
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't write on a Null t_ftx_vector4f");
		return ;
	}

	dest->x = vec->x * scalar;
	dest->y = vec->y * scalar;
	dest->z = vec->z * scalar;
	dest->w = vec->w * scalar;
}

