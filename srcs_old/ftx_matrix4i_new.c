/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrix4i_new.c
 *
 *    Description: Function overload of ftx_matreixni_new to allocate a t_ftx_matrix4i
 *        (a four integer square matrix object), the matrixToInit value is a 
 *        t_ftx_matrix4i type pointer to point to the memory allocated by this Function.
 *
 *        Version:  1.0
 *        Created:  01/02/21 17:55:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <libft.h>
#include <stdlib.h>

void	ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit)
{
	ftx_matrixni_new((t_ftx_matrixni *)matrixToInit, FTX_MATRIX4_LENGTH, FTX_MATRIX4_LENGTH);
}
