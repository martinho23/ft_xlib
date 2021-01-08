/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrix4i_print.c
 *
 *    Description:  Function overloading ftx_matrixni_print to print a t_ftx_matrix4i
 *        (a 4 integer square matrix object) into the stdout, the matrixToPrint value is
 *        a constant pointer to the t_ftx_matrix4i matrix to print.
 *
 *        Version:  1.0
 *        Created:  01/02/21 18:55:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "../includes/libftx_priv.h"

void    ftx_matrix4i_print(const t_ftx_matrix4i matrixToPrint, char *matrixName)
{
    ftx_matrixni_print((const t_ftx_matrixni)matrixToPrint, matrixName, FTX_MATRIX4_LENGTH, FTX_MATRIX4_LENGTH);
}
