/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4i_square_magnitude.c
 *
 *    Description:  Funcion that calculates the squared magnitude of a t_ftx_vector4i (a
 *        4 dimentional integer vector), the value vec is a const pointer to  the
 *        t_ftx_vector4i to get the squared magnitude of, the *dest is a pointer to a int
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

void	ftx_vector4i_square_magnitude(const t_ftx_vector4i *vec, int *dest)
{
	*dest = (vec->x * vec->x + vec->y * vec->y + vec->z * vec->z + vec->w * vec->w);
}