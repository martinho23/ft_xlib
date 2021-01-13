/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_populate.c
 *
 *    Description:  Function that populate values to the t_ftx_vector4f (a 3 dimentional float
 *        vector) for convinience, the value x is a float value to populate dest.x, the y value
 *        is a float value to populate dest.y, the z value is a float value to populate dest.z
 *        the w value is a float value to populate dest.w and the dest is a pofloater to the
 *        t_ftx_vector4f to populate.
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

void	ftx_vector4f_populate(const float x, const float y, const float z, const float w, t_ftx_vector4f *dest)
{
	if (!dest)
	{
		ft_putendl("Can't populate a NULL t_ftx_vector4f");
		return;
	}
	dest->x = x;
	dest->y = y;
	dest->z = z;
	dest->w = w;
}
