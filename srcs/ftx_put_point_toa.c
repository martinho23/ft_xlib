/*
 * =====================================================================================
 *
 *       Filename:  ftx_put_point_toa.c
 *
 *    Description:  Function that puts a pixel coordinates into an array of points,
 *        (an array t_ftx_point), the point value is the coordinates of the pixel, the
 *        pixelData (a void *) is a pointer to a point array (t_ftx_point_array).
 *
 *        Version:  1.0
 *        Created:  01/31/2021 05:26:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <stdio.h>
#include <libft.h>

void	ftx_put_point_toa(const t_ftx_point point, const void *pixelData)
{
	if (!pixelData)
	{
		ft_putendl("t_ftx_point_array * is Null");
		return;
	}
	t_ftx_point_array *data = (t_ftx_point_array *)pixelData;

	if (data->index < data->size)
	{
		data->array[data->index] = point;
		data->index++;
	}
	else
	{
		ft_putendl("Error: You tried to put a point out of the array");
	}
}
