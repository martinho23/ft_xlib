/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_sub_by_return.c
 *
 *    Description:  Function that substracts 2 ftx_vector3i (integer 3 dimensions vector)
 *        and return the result, the a value is a const pointer to the first vector to
 *        substract and the b value is the a const pointer to the second vector to
 *        substract.
 *
 *        Version:  1.0
 *        Created:  04/01/2021 00:56:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

 #include <libftx_priv.h>

 t_ftx_vector3i ftx_vector3i_sub_by_return(const t_ftx_vector3i *a, const t_ftx_vector3i *b)
 {
    t_ftx_vector3i dest;

    ftx_vector3i_sub(a, b, &dest);
    return (dest);
 }
