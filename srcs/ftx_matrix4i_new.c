#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixtoInit)
{
	int		i;
	ft_thrower(!(*matrixtoInit = malloc(sizeof(*matrixtoInit) * FTX_MATRIX4_LENGTH)),\
	"Error could not alocate Integer 4x4 Matrix\n");
	i = 0;
	while (i < FTX_MATRIX4_LENGTH)
	{
		ft_thrower(!(*matrixtoInit[i] = malloc(sizeof(**matrixtoInit) * FTX_MATRIX4_LENGTH)),\
		"Error could not alocate Integer 4x4 Matrix\n");
		i++;
	}
}
