#include "../includes/libftx_priv.h"
#include "../includes/libft.h"

static  ftx_matrix4i_print_element(int i, int j, int value)
{
    ft_putstr("Matrix[");
    ft_putnbr(i);
    ft_putstr("][");
    ft_putnbr(j);
    ft_putstr("] = ");
    ft_putnbr(value);
    ft_putchar("\n");
}

void    ftx_matrix4i_print(t_ftx_matrix4i matrixToPrint)
{
    int     i;
    int     j;

    i = 0;
    while(i < FTX_MATRIX4_LENGTH)
    {
        j = 0;
        while (matrixToPrint && matrixToPrint[i][j]  && j < FTX_MATRIX4_LENGTH)
        {
            ftx_matrix4i_print_element(i, j, matrixToPrint[i][j]);
            j++;
        }
        i++;
    }
}