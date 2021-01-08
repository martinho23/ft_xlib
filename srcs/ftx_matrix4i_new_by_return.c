/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrix4i_new_by_return.c
 *
 *    Description:  Function overload of ftx_matrix4i_new that returns a pointer to a
 *        t_ftx_matrix4i (a four integer square matrix object) already allocated.
 *
 *        Version:  1.0
 *        Created:  01/02/21 17:56:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

t_ftx_matrix4i  ftx_matrix4i_new_by_return(void)
{
    t_ftx_matrix4i  tmp;
    ftx_matrix4i_new(&tmp);
    return (tmp);
}
