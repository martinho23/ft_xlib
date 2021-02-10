/*
 * =====================================================================================
 *
 *       Filename:  ftx_absi.c
 *
 *    Description:  Function  that remove the negative value of an integer,
 *        the nbr value is the number to remove the signe.
 *
 *        Version:  1.0
 *        Created:  01/30/2021 07:19:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

int		ftx_absi(int number)
{
	return ((number << 1) >> 1);
}
