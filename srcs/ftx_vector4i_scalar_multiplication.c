/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4i_scalar_multiplication.c
 *
 *    Description:  Function that multiplies a t_ftx_vector4i (a 4 dimentional integer vector)
 *        by a scalar constant, the value vec is the const pointer of the t_ftx_vector4i to
 *        multiply, the scalar value is the const int to mutiply by, and the dest value is
 *        a pointer to a t_ftx_vector4i where to store the result.
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

void	ftx_vector4i_scalar_multiplication(const t_ftx_vector4i *vec, const int scalar, t_ftx_vector4i *dest)
{
	if((!vec) && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl(" Can't multiply a Null t_ftx_vector4i dest is set to 0");
		ftx_vector4i_populate(0, 0, 0, 0, dest); //Setting dest to 0
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't write on a Null t_ftx_vector4i");
		return ;
	}

	dest->x = vec->x * scalar;
	dest->y = vec->y * scalar;
	dest->z = vec->z * scalar;
	dest->w = vec->w * scalar;
}

