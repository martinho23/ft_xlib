#include <libftx_priv.h>

void	ftx_vector4i_add(const t_ftx_vector4i *a, const t_ftx_vector4i *b, t_ftx_vector4i *dest)
{
	ft_thrower(!(a && b) ," Can't add a Null t_ftx_vector4i\n"); /*test if src vectors pointers are not NULL*/
	ft_thrower(!(dest), "Can't write on a Null t_ftx_vector4i\n"); /*test if dest vector pointer is not NULL*/

	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}


