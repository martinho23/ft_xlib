/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_populate.c
 *
 *    Description:  Function that populate values to the t_ftx_vector3f (a 3 dimentional float
 *        vector) for convinience, the value x is a float value to populate dest.x, the y value
 *        is a float value to populate dest.y, the z value is a float value to populate dest.z
 *        and the dest is a pointer to the t_ftx_vector3f to populate.
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

void	ftx_vector3f_populate(const float x, const float y, const float z, t_ftx_vector3f *dest)
{
	if (!dest)
	{
		ft_putendl("Can't populate a NULL t_ftx_vector3f");
		return;
	}
	dest->x = x;
	dest->y = y;
	dest->z = z;
}
