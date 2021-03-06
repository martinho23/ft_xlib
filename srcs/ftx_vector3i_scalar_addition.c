/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_scalar_addition.c
 *
 *    Description:  Function that adds a scalar value to all of vector dimentions of t_ftx_vector3i
 *        (a int 3 dimentional vector), the value vec is a const pointer to the t_ftx_vector3i
 *        to add the scalar value to, the scalar value is the value to be added, and dest value is a
 *        pointer to a t_ftx_vector3i that will store the computed value.
 *
 *        Version:  1.0
 *        Created:  01/23/2021 06:39:40 PM
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

void	ftx_vector3i_scalar_addition(const t_ftx_vector3i *vec, const int scalar, t_ftx_vector3i *dest)
{
	if (!dest)
	{
		ft_putendl("Can't store function computation on a NULL destination!");
		return ;
	}
	else if (!vec)
	{
		ft_putendl("Can't compute a NULL t_ftx_vector3i returning a t_ftx_vector3i populated with 0");
		ftx_vector3i_populate(0, 0, 0, dest);
		return ;
	}
	dest->x = vec->x + scalar;
	dest->y = vec->y + scalar;
	dest->z = vec->z + scalar;
}
