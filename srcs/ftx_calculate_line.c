/*
 * =====================================================================================
 *
 *       Filename:  ftx_calculate_line.c
 *
 *    Description:  Function that calculates a line with Bresenham algorithm, the value,
 *       start is the starting  point, (a t_ftx_point), of the line, end is the ending
 *       point, (a t_ftx_point), of the line.
 *
 *        Version:  1.0
 *        Created:  01/26/2021 12:54:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), joni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <stdio.h>

static void	octant_0(t_ftx_point point, t_ftx_point delta, t_ftx_point direction, void ftx_putpixel(const t_ftx_point pixel, const void *pixelData), void *pixelData)
{
	int errorTerm;
	const int delta2Y = delta.y + delta.y;
	const int delta2YMinusDelta2X = delta2Y - (delta.x + delta.x);
	errorTerm = delta2Y - delta.x;

	ftx_putpixel(point, pixelData);
	while (delta.x --)
	{
		if (errorTerm >= 0)
		{
			point.y++;
			errorTerm += delta2YMinusDelta2X;
		}
		else
		{
			errorTerm += delta2Y;
		}
		point.x += direction.x;
		ftx_putpixel(point, pixelData);
	}
}


static void	octant_1(t_ftx_point point, t_ftx_point delta, t_ftx_point direction, void ftx_putpixel(const t_ftx_point pixel, const void *pixelData), void *pixelData)
{
	int errorTerm;
	const int delta2X = delta.x + delta.x;
	const int delta2XMinusDelta2Y = delta2X - (delta.y + delta.y);
	errorTerm = delta2X - delta.y;

	ftx_putpixel(point, pixelData);
	while (delta.y --)
	{
		if (errorTerm >= 0)
		{
			point.x += direction.x;
			errorTerm += delta2XMinusDelta2Y;
	}
		else
		{
			errorTerm += delta2X;
		}
		point.y++;
		ftx_putpixel(point, pixelData);
	}
}

void		ftx_calculate_line(const t_ftx_point *start, const t_ftx_point *end, void ftx_putpixel(const t_ftx_point pixel, const void *pixelData), void *pixelData)
{
	t_ftx_point	direction;
	t_ftx_point	delta;
	t_ftx_point	a;
	t_ftx_point	b;

	if (start->y > end->y)
	{
		a.x = end->x;
		a.y = end->y;
		b.x = start->x;
		b.y = start->y;
	}
	else
	{
		a.x = start->x;
		a.y = start->y;
		b.x = end->x;
		b.y = end->y;
	}

	delta.x = b.x - a.x;
	delta.y = b.y - a.y;
	direction.x = 1;
	direction.y = 1;

	if (delta.x > 0)
	{
		if (delta.x > delta.y)
			octant_0(a, delta, direction, ftx_putpixel, pixelData);
		else
			octant_1(a, delta, direction, ftx_putpixel, pixelData);
	}
	else
	{
		delta.x = -delta.x;
		direction.x = -1;
		if (delta.x > delta.y)
			octant_0(a, delta, direction, ftx_putpixel, pixelData);
		else
			octant_1(a, delta, direction, ftx_putpixel, pixelData);
	}
}
