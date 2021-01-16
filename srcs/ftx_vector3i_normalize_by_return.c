/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector3i_normalize_by_return.c
 *
 *    Description:  Function that normalize and return a vector t_ftx_vector3i (a 3 dimentional
 *        integer vector) the vec value is a const pointer to the t_ftx_vector3i.
 *
 *        Version:  1.0
 *        Created:  09/01/2021 22:41:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>

t_ftx_vector3f	ftx_vector3i_normalize_by_return(const t_ftx_vector3i *vec)
{
	t_ftx_vector3f tmp;

	ftx_vector3i_normalize(vec, &tmp);
	return (tmp);
}
