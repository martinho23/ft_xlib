#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixtoInit)
{
	ft_thrower(!(*matrixtoInit = malloc(sizeof(*matrixtoInit) * 4)),\
	"Error could not alocate Integer 4x4 Matrix\n");
}
