/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_add_by_return.c
 *
 *    Description:  Function that adds 2 ftx_vector3f (float 3 dimensions vector) and return
 *        the result, the a value is a const pointer to the first vector to add and the b value
 *        is the a const pointer to the second vector to add.
 *
 *        Version:  1.0
 *        Created:  04/01/2021 00:39:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

 #include <libftx_priv.h>

 t_ftx_vector3f ftx_vector3f_add_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b)
 {
    t_ftx_vector3f dest;

    ftx_vector3f_add(a, b, &dest);
    return (dest);
 }
