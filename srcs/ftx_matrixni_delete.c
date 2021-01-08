/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrixni_delete.c
 *
 *    Description:  Function that free the memory taken by a t_ftx_matrixni object (an
 *        integer matrix of NxN elements), the matrixToDelete value is a pointer to the
 *        t_ftx_matrixni to delete and the matrixCollums value is the number of collums
 *        in the matrix you want to delete.
 *
 *        Version:  1.0
 *        Created:  01/02/21 18:57:58
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

void   ftx_matrixni_delete(t_ftx_matrixni *matrixToDelete, size_t matrixCollums)
{
    size_t  i;

    i = 0;
    if (!(*matrixToDelete))
    {
       ft_putstr("/!\\ WARNING: You're trying to delete a NULL t_ftx_matrix4i\n");
       return ;
    }
    while(i < matrixCollums)
    {
       if (!(*matrixToDelete)[i])
       {
           ft_putstr("/!\\ WARNING: You're trying to delete a NULL t_ftx_matrix4i\n");
           return ;
       }
        free((*matrixToDelete)[i]);
        (*matrixToDelete)[i] = NULL;
       i++;
    }
    free(*matrixToDelete);
    *matrixToDelete = NULL;
}
