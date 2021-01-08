/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4i_sub.c
 *
 *    Description:  Function that substracts 2 ftx_vector4i (integer vector of 4 dimensions),
 *        the a value is a const pointer to the first vector to substract, the b value is a
 *        const pointer to the second value to substract, and the dest value is a pointer to
 *        the dest vector where the result is stored.
 *
 *        Version:  1.0
 *        Created:  04/01/2021 00:54:25
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

void	ftx_vector4i_sub(const t_ftx_vector4i *a, const t_ftx_vector4i *b, t_ftx_vector4i *dest)
{
	ft_thrower(!(a && b) ," Can't substract a Null t_ftx_vector4i\n"); /*test if src vectors pointers are not NULL*/
	ft_thrower(!(dest), "Can't write on a Null t_ftx_vector4i\n"); /*test if dest vector pointer is not NULL*/

	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
	dest->w = a->w - b->w;
}


