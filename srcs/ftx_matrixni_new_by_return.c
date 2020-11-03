#include "../includes/libftx_priv.h"

t_ftx_matrixni  ftx_matrixni_new_by_return(size_t matrixCollums, size_t matrixRows)
{
    t_ftx_matrixni  tmp;
    ftx_matrixni_new(&tmp, matrixCollums, matrixRows);
    return (tmp);
}