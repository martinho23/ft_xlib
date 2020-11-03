#include "../includes/libftx_priv.h"

void    ftx_matrix4i_print(t_ftx_matrix4i matrixToPrint, char *matrixName)
{
    ftx_matrixni_print((t_ftx_matrixni)matrixToPrint, matrixName, FTX_MATRIX4_LENGTH, FTX_MATRIX4_LENGTH);
}