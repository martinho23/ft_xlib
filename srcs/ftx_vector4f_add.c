#include <libftx_priv.h>
#include <libft.h>

void	ftx_vector4f_add(const t_ftx_vector4f *a, const t_ftx_vector4f *b, t_ftx_vector4f *dest)
{
	ft_thrower(!(a && b) ," Can't add a Null t_ftx_vector4f\n"); /*test if src vectors pointers are not NULL*/
	ft_thrower(!(dest), "Can't write on a Null t_ftx_vector4f\n"); /*test if dest vector pointer is not NULL*/

	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}


