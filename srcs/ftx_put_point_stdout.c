/*
 * =====================================================================================
 *
 *       Filename:  ftx_put_point_stdout.c
 *
 *    Description:  This function prints a pont x and y values to std out, the point value
 *        is a (t_ftx_point) where the pixel coords are stored, the void * should be a NULL
 *        pointer that will be voided, it is needed to be compatible with other draw functons.
 *
 *        Version:  1.0
 *        Created:  02/01/2021 09:37:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <stdio.h>

#define ft_printf printf

void	ftx_put_point_stdout(const t_ftx_point point, const void *data)
{
	(void)data;
	ft_printf("Point X: %d Y: %d\n", point.x, point.y);
}
