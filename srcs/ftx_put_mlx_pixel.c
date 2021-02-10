/*
 * =====================================================================================
 *
 *       Filename:  ftx_put_mlx_pixel.c
 *
 *    Description:  ftx wrapper arround mlx_pixel_put function
 *
 *        Version:  1.0
 *        Created:  01/31/2021 05:58:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <libft.h>
#include <mlx.h>

void	ftx_put_mlx_pixel(t_ftx_point pixel, const void *pixelData)
{
	t_mlx_pixel *data;
	if (!pixelData)
	{
		ft_putendl("Cannot put a pixel on mlx with a NULL t_mlx_info as pixelData pointer");
		return ;
	}
	data = (t_mlx_pixel *)pixelData;
	mlx_pixel_put(data->mlx_info->mlx_ptr, data->mlx_info->mlx_win, pixel.x, pixel.y, data->color);
}
