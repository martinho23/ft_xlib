/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_add_by_return.c
 *
 *    Description:  Function that adds 2 ftx_vector4f (float 4 dimensions vector) and return
 *        the result, the a value is a const pointer to the first vector to add and the b value
 *        is the a const pointer to the second vector to add.
 *
 *        Version:  1.0
 *        Created:  04/01/2021 00:46:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

 #include <libftx_priv.h>

 t_ftx_vector4f ftx_vector4f_add_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b)
 {
    t_ftx_vector4f dest;

    ftx_vector4f_add(a, b, &dest);
    return (dest);
 }
