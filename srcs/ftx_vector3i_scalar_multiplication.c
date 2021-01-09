/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_scalar_multiplication.c
 *
 *    Description:  Function that multiplies a t_ftx_vector3f (a 3 dimentional float vector)
 *        by a scalar constant, the value vec is the const pointer of the t_ftx_vector3f to
 *        multiply, the scalar value is the const float to mutiply by, and the dest value is
 *        a pointer to a t_ftx_vector3f where to store the result.
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

void	ftx_vector3f_scalar_multiplication(const t_ftx_vector3f *vec, const float scalar, t_ftx_vector3f *dest)
{
	ft_thrower(!vec, "Can't normalize a NULL t_ftx_vector3i\n");
	ft_thrower(!dest, "Can't store normalized t_ftx_vector3i on a NULL t_ftx_vector3i destination\n");

	dest->x = vec->x * scalar;
	dest->y = vec->y * scalar;
	dest->z = vec->z * scalar;
}

