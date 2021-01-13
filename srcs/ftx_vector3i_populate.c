/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_populate.c
 *
 *    Description:  Function that populate values to the t_ftx_vector3i (a 3 dimentional integer
 *        vector) for convinience, the value x is a integer value to populate dest.x, the y value
 *        is a integer value to populate dest.y, the z value is a integer value to populate dest.z
 *        and the dest is a pointer to the t_ftx_vector3i to populate.
 *
 *        Version:  1.0
 *        Created:  10/01/2021 02:05:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <libft.h>

void	ftx_vector3i_populate(const int x, const int y, const int z, t_ftx_vector3i *dest)
{
	if (!dest)
	{
		ft_putendl("Can't populate a NULL t_ftx_vector3i");
		return;
	}
	dest->x = x;
	dest->y = y;
	dest->z = z;
}
