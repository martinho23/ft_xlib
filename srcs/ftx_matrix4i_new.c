#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit)
{
	int				i;

	ft_thrower(!(*matrixToInit = (int **)malloc(sizeof(int *) * FTX_MATRIX4_LENGTH)),\
	"Error could not alocate Integer 4x4 Matrix\n");
	i = 0;
	while (i < FTX_MATRIX4_LENGTH)
	{
		ft_thrower(!((*matrixToInit)[i] = (int *)malloc(sizeof(int) * FTX_MATRIX4_LENGTH)),\
		"Error could not alocate Integer 4x4 Matrix\n");
		i++;
	}
}
