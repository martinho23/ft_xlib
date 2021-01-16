/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_square_magnitude.c
 *
 *    Description:  Funcion that calculates the squared magnitude of a t_ftx_vector3i (a
 *        3 dimentional integer vector), the value vec is a const pointer to  the
 *        t_ftx_vector3i to get the squared magnitude of, the *dest is a pointer to a int
 *        where store the result.
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

void	ftx_vector3i_square_magnitude(const t_ftx_vector3i *vec, int *dest)
{
	if(!vec && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl("Can't calculate the a NULL t_ftx_vector3f, dest set to 0");
		*dest = 0;
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't store a t_ftx_vector3f multiplication on a NULL t_ftx_vector3f destination");
		return ;
	}

	*dest = vec->x * vec->x + vec->y * vec->y + vec->z * vec->z;
}
