/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4f_scalar_multiplication_by_return.c
 *
 *    Description:  Function that returns the mutiplication betewen t_ftx_vector4f (a 4
 *        dimentional integer vector) and a scalar value, the vec value is a pointer to
 *        the t_ftx_vector4f to multiply and the scalar value is the const int to multiply
 *        the vector by.
 *
 *        Version:  1.0
 *        Created:  01/09/2021 06:06:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

t_ftx_vector4f	ftx_vector4f_scalar_multiplication_by_return(const t_ftx_vector4f *vec, const float scalar)
{
	t_ftx_vector4f	tmp;

	ftx_vector4f_scalar_multiplication(vec, scalar, &tmp);

	return (tmp);
}
