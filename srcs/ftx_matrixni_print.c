#include "../includes/libftx_priv.h"
#include "../includes/libft.h"

static  void ftx_matrix_print_element(int i, int j, int value)
{
    ft_putstr("Matrix[");
    ft_putnbr(i);
    ft_putstr("][");
    ft_putnbr(j);
    ft_putstr("] = ");
    ft_putnbr(value);
    ft_putchar('\n');
}


void    ftx_matrixni_print(t_ftx_matrixni matrixToPrint, char *matrixName, size_t matrixCollums, size_t matrixRows){
    size_t  i;
    size_t  j;

    i = 0;
    ft_putstr("Printing matrix ");
    ft_putstr(matrixName);
    ft_putstr(": \n");
    if (!(matrixToPrint))
    {
        ft_putstr("/!\\ WARNING: You're trying to print a NULL t_ftx_matrix4i\n");
        return ;
    }
    while(i < matrixCollums)
    {
        if (!(matrixToPrint[i]))
        {
            ft_putstr("/!\\ WARNING: You're trying to print a NULL t_ftx_matrix4i\n");
            return ;
        }
        j = 0;
        while (j < matrixRows)
        {
            ftx_matrix_print_element(i, j, matrixToPrint[i][j]);
            j++;
        }
        i++;
    }
}