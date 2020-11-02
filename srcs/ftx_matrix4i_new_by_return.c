#include "../includes/libftx_priv.h"

t_ftx_matrix4i  ftx_matrix4i_new_by_return(void)
{
    t_ftx_matrix4i  tmp;
    ftx_matrix4i_new(&tmp);
    return (tmp);
}