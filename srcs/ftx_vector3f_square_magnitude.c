/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_square_magnitude.c
 *
 *    Description:  Funcion that calculates the squared magnitude of a t_ftx_vector3f (a
 *        3 dimentional float vector), the value vec is a const pointer to  the t_ftx_vector3f
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

void	ftx_vector3f_square_magnitude(const t_ftx_vector3f *vec, float *dest)
{
	ft_thrower(!vec, "Can't normalize a NULL t_ftx_vector3f\n");
	ft_thrower(!dest, "Can't store normalized t_ftx_vector3f on a NULL t_ftx_vector3f destination\n");

	*dest = vec->x * vec->x + vec->y * vec->y + vec->z * vec->z;
}
