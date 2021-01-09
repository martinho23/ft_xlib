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
	ft_thrower(!vec, "Can't normalize a NULL t_ftx_vector4i\n");
	ft_thrower(!dest, "Can't store normalized t_ftx_vector4i on a NULL t_ftx_vector4i destination\n");

	dest->x = vec->x * scalar;
	dest->y = vec->y * scalar;
	dest->z = vec->z * scalar;
	dest->w = vec->w * scalar;
}

