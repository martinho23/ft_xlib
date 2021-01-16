/*
 * =====================================================================================
 *
 *       Filename:  ftx_vector4i_normalize_by_return.c
 *
 *    Description:  Function that normalize (a 4 dimentional integer vector) and return
 *        a vector t_ftx_vector4f (a 4 dimentional float vector) the vec value is a const
 *        pointer to the t_ftx_vector4i.
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

t_ftx_vector4f	ftx_vector4i_normalize_by_return(const t_ftx_vector4i *vec)
{
	t_ftx_vector4f tmp;

	ftx_vector4i_normalize(vec, &tmp);
	return (tmp);
}
