/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrix4i_delete.c
 *
 *    Description:  overload the function ftx_matrixni_delete to delete a t_ftx_matrix4i
 *        (a four integer square matrix object), you have to passe the matrixToDelete
 *        value is a pointer to the t_ftx_matrix4i to delete.
 *
 *        Version:  1.0
 *        Created:  01/02/21 17:42:31
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

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete)
 {
     ftx_matrixni_delete((t_ftx_matrixni *)matrixToDelete, FTX_MATRIX4_LENGTH);
 }
