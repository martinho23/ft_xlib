#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixtoInit)
{
	int		i;
	ft_thrower(!(*matrixtoInit = malloc(sizeof(*matrixtoInit) * 4)),\
	"Error could not alocate Integer 4x4 Matrix\n");
	i = 0;
	while (i < 4)
	{
		ft_thrower(!(*matrixtoInit[i] = malloc(sizeof(**matrixtoInit) * 4)),\
		"Error could not alocate Integer 4x4 Matrix\n");
		i++;
	}
}
