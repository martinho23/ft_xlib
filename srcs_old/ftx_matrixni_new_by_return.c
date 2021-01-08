/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrixni_new_by_return.c
 *
 *    Description:  Function that return a t_ftx_matrixni (an integer matrix of NxN
 *        elements), the matrixCollums value is an unsigned integer with the number of
 *        collums in the returned t_ftx_matrixni and the matrixRows value is the number
 *        of rows in the returned t_ftx_matrixni.
 *
 *        Version:  1.0
 *        Created:  01/03/21 18:47:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

t_ftx_matrixni  ftx_matrixni_new_by_return(size_t matrixCollums, size_t matrixRows)
{
    t_ftx_matrixni  tmp;
    ftx_matrixni_new(&tmp, matrixCollums, matrixRows);
    return (tmp);
}
