#include "../includes/libftx_priv.h"
#include "../includes/libft.h"
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit)
{
	ftx_matrixni_new((t_ftx_matrixni *)matrixToInit, FTX_MATRIX4_LENGTH, FTX_MATRIX4_LENGTH);
}
