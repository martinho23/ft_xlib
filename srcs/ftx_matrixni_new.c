#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrixni_new(t_ftx_matrixni *matrixToInit, size_t matrixCollums, size_t matrixRows)
{
	int				i;

	ft_thrower(!(*matrixToInit = (int **)malloc(sizeof(int *) * matrixCollums)),\
	"Error could not alocate Integer NxN Matrix\n");
	i = 0;
	while (i < matrixCollums)
	{
		ft_thrower(!((*matrixToInit)[i] = (int *)malloc(sizeof(int) * matrixRows)),\
		"Error could not alocate an Integer NxN Matrix\n");
		i++;
	}
}
