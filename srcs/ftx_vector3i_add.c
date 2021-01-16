/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_add.c
 *
 *    Description:  Function that adds 2 ftx_vector3i  (integer vectors of 3 dimensions),
 *        the a value is a const pointer to the first vector to add, the b value is a
 *        const pointer to the second value to add, and the dest value is a pointer to the
 *        dest vector where the result is stored.
 *
 *        Version:  1.0
 *        Created:  03/01/2021 23:53:47
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

void	ftx_vector3i_add(const t_ftx_vector3i *a, const t_ftx_vector3i *b, t_ftx_vector3i *dest)
{
	if((!a || !b) && dest) /*test if src vectors pointers are not NULL*/
	{
		ft_putendl("Can't add a Null t_ftx_vector3i dest is set to 0");
		ftx_vector3i_populate(0, 0, 0, dest); //Setting dest to 0
		return ;
	}
	if(!dest) /*test if dest vector pointer is not NULL*/
	{
		ft_putendl("Can't write on a Null t_ftx_vector3i");
		return ;
	}

	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}


