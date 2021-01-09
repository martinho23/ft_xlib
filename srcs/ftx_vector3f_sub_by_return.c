/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3f_sub_by_return.c
 *
 *    Description:  Function that substracts 2 ftx_vector3f (float 3 dimensions vector)
 *        and return the result, the a value is a const pointer to the first vector to
 *        substract and the b value is the a const pointer to the second vector to
 *        substract.
 *
 *        Version:  1.0
 *        Created:  04/01/2021 00:55:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

 #include <libftx_priv.h>

 t_ftx_vector3f ftx_vector3f_sub_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b)
 {
    t_ftx_vector3f tmp;

    ftx_vector3f_sub(a, b, &tmp);
    return (tmp);
 }
