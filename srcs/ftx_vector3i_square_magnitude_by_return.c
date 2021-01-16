/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_square_magnitude_by_return.c
 *
 *    Description:  Function that calculates and the square magitude of a t_ftx_vector3i
 *        (a 3 dimentional integer vector), the vec value is a pointer to the t_ftx_vector3i
 *        to calculate the magitude of.
 *
 *        Version:  1.0
 *        Created:  01/09/2021 01:01:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

int	ftx_vector3i_square_magnitude_by_return(const t_ftx_vector3i *vec)
{
	int tmp;

	ftx_vector3i_square_magnitude(vec, &tmp);

	return (tmp);
}
