/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_scalar_addition_by_return.c
 *
 *    Description:  Function that adds a scalar value to all of vector dimentions of t_ftx_vector3i
 *        (a int 3 dimentional vector) and return the result, the value vec is a const pointer to
 *        the t_ftx_vector3i to add the scalar value to and the scalar value is the value to be added
 *
 *        Version:  1.0
 *        Created:  01/24/2021 09:21:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

t_ftx_vector3i ftx_vector3i_scalar_addition_by_return(const t_ftx_vector3i *vec, const int scalar)
{
	t_ftx_vector3i	tmp;

	ftx_vector3i_scalar_addition(vec, scalar, &tmp);

	return (tmp);
}
