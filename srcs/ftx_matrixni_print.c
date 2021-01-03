/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrixni_print.c
 *
 *    Description:  Function that prints a t_ftx_matrixni (an integer matrix of NxN
 *        elements) to std out, the matrixToPrint value is a const pointer to the
 *        t_ftx_matrixni object to print, the matrixName is a pointer to a string
 *        with the a matrix name to print out, the matrixCollums value is the collums
 *        number in the matrix and the matrixRows is the rows number in the matrix.
 *
 *        Version:  1.0
 *        Created:  01/03/21 18:51:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
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


void    ftx_matrixni_print(const t_ftx_matrixni matrixToPrint, char *matrixName, size_t matrixCollums, size_t matrixRows){
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
