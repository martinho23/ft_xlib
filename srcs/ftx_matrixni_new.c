/*
 * =====================================================================================
 *
 *       Filename:  ftx_matrixni_new.c
 *
 *    Description:  Function that allocates enought memory to a t_ftx_matrixni (an
 *        integer matrix of NxN elements), the matrixToInit value is a pointer to a
 *        t_ftx_matrixni type, the matrixCollums value is an unsigned integer with
 *        the number of collums in the matrixToInit and the matrixRows is an
 *        unsigned integer with the number os rows in the matrixToInit.
 *
 *        Version:  1.0
 *        Created:  01/03/21 18:27:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <libft.h>
#include <stdlib.h>

void	ftx_matrixni_new(t_ftx_matrixni *matrixToInit, size_t matrixCollums, size_t matrixRows)
{
	size_t  i;

	if(!(*matrixToInit = (int **)malloc(sizeof(int *) * matrixCollums)))
	{
		ft_putendl("Error could not alocate Integer NxN Matrix");
		*matrixToInit = NULL;
		return ;
	}
	i = 0;
	while (i < matrixCollums)
	{
		if(!((*matrixToInit)[i] = (int *)malloc(sizeof(int) * matrixRows)))
		{
			ft_putendl("Error could not alocate an Integer NxN Matrix");
			*matrixToInit[i] = NULL;
		}
		i++;
	}
}
