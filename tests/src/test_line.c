/*
 * =====================================================================================
 *
 *       Filename:  test_line.c
 *
 *    Description:  Funtion that tests line calculation
 *
 *        Version:  1.0
 *        Created:  01/30/2021 09:04:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <libftx_priv.h>
#include <libft.h>
#include <minunit.h>
#include <stdio.h>

#define ftx_putpixel(x, y) map[x][y] = '*'

int		tests_run = 0;

// ===  TEST  ==========================================================================
//         Name:  t_line_base
//  Description:  Test some basic lines
// =====================================================================================

static int t_line_base()
{
	t_ftx_point a;
	t_ftx_point b;
	t_ftx_point buff[5];
	t_ftx_point_array arrayData;

	arrayData.array = buff;
	arrayData.size  = 6;

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[5, 5]");
	a.x = 5;
	a.y = 5;
	b.x = 5;
	b.y = 5;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y, buff[0].x, buff[0].y, 5, 5);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[8, 5]");
	a.x = 5;
	a.y = 5;
	b.x = 8;
	b.y = 5;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 5, buff[0].x, buff[0].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 6 && buff[1].y == 5, buff[1].x, buff[1].y, 6, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 7 && buff[2].y == 5, buff[2].x, buff[2].y, 7, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 8 && buff[3].y == 5, buff[3].x, buff[3].y, 8, 5);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[8, 7]");
	a.x = 5;
	a.y = 5;
	b.x = 8;
	b.y = 7;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 5, buff[0].x, buff[0].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 6 && buff[1].y == 6, buff[1].x, buff[1].y, 6, 6);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 7 && buff[2].y == 6, buff[2].x, buff[2].y, 7, 6);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 8 && buff[3].y == 7, buff[3].x, buff[3].y, 8, 7);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[7, 8]");
	a.x = 5;
	a.y = 5;
	b.x = 7;
	b.y = 8;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 5, buff[0].x, buff[0].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 6 && buff[1].y == 6, buff[1].x, buff[1].y, 6, 6);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 6 && buff[2].y == 7, buff[2].x, buff[2].y, 6, 7);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 7 && buff[3].y == 8, buff[3].x, buff[3].y, 7, 8);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[5, 8]");
	a.x = 5;
	a.y = 5;
	b.x = 5;
	b.y = 8;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 5, buff[0].x, buff[0].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 5 && buff[1].y == 6, buff[1].x, buff[1].y, 5, 6);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 5 && buff[2].y == 7, buff[2].x, buff[2].y, 5, 7);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 8, buff[3].x, buff[3].y, 5, 8);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[8, 3]");
	a.x = 5;
	a.y = 5;
	b.x = 8;
	b.y = 3;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 6 && buff[2].y == 4, buff[2].x, buff[2].y, 6, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 7 && buff[1].y == 4, buff[1].x, buff[1].y, 7, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 8 && buff[0].y == 3, buff[0].x, buff[0].y, 8, 3);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[7, 2]");
	a.x = 5;
	a.y = 5;
	b.x = 7;
	b.y = 2;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 6 && buff[2].y == 4, buff[2].x, buff[2].y, 6, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 6 && buff[1].y == 3, buff[1].x, buff[1].y, 6, 3);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 7 && buff[0].y == 2, buff[0].x, buff[0].y, 7, 2);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[2, 5]");
	a.x = 5;
	a.y = 5;
	b.x = 2;
	b.y = 5;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 5, buff[0].x, buff[0].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 4 && buff[1].y == 5, buff[1].x, buff[1].y, 4, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 3 && buff[2].y == 5, buff[2].x, buff[2].y, 3, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 2 && buff[3].y == 5, buff[3].x, buff[3].y, 2, 5);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[2, 3]");
	a.x = 5;
	a.y = 5;
	b.x = 2;
	b.y = 3;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 4 && buff[2].y == 4, buff[2].x, buff[2].y, 4, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 3 && buff[1].y == 4, buff[1].x, buff[1].y, 3, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 2 && buff[0].y == 3, buff[0].x, buff[0].y, 2, 3);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[3, 2]");
	a.x = 5;
	a.y = 5;
	b.x = 3;
	b.y = 2;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 4 && buff[2].y == 4, buff[2].x, buff[2].y, 4, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 4 && buff[1].y == 3, buff[1].x, buff[1].y, 4, 3);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 3 && buff[0].y == 2, buff[0].x, buff[0].y, 3, 2);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[2, 3]");
	a.x = 5;
	a.y = 5;
	b.x = 2;
	b.y = 3;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 4 && buff[2].y == 4, buff[2].x, buff[2].y, 4, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 3 && buff[1].y == 4, buff[1].x, buff[1].y, 3, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 2 && buff[0].y == 3, buff[0].x, buff[0].y, 2, 3);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[5, 2]");
	a.x = 5;
	a.y = 5;
	b.x = 5;
	b.y = 2;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 5 && buff[2].y == 4, buff[2].x, buff[2].y, 5, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 5 && buff[1].y == 3, buff[1].x, buff[1].y, 5, 3);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 2, buff[0].x, buff[0].y, 5, 2);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[7, 2]");
	a.x = 5;
	a.y = 5;
	b.x = 7;
	b.y = 2;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 6 && buff[2].y == 4, buff[2].x, buff[2].y, 6, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 6 && buff[1].y == 3, buff[1].x, buff[1].y, 6, 3);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 7 && buff[0].y == 2, buff[0].x, buff[0].y, 7, 2);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[8, 3]");
	a.x = 5;
	a.y = 5;
	b.x = 8;
	b.y = 3;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 6 && buff[2].y == 4, buff[2].x, buff[2].y, 6, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 7 && buff[1].y == 4, buff[1].x, buff[1].y, 7, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 8 && buff[0].y == 3, buff[0].x, buff[0].y, 8, 3);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[5, 0]");
	a.x = 5;
	a.y = 5;
	b.x = 5;
	b.y = 0;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[3].x == 5 && buff[3].y == 5, buff[3].x, buff[3].y, 5, 5);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[2].x == 5 && buff[2].y == 4, buff[2].x, buff[2].y, 5, 4);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[1].x == 5 && buff[1].y == 3, buff[1].x, buff[1].y, 5, 3);
	mu_assert("Calculate line X: %d Y: %d and expected X: %d Y: %d\n", buff[0].x == 5 && buff[0].y == 2, buff[0].x, buff[0].y, 5, 2);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[0, 5]");
	a.x = 5;
	a.y = 5;
	b.x = 0;
	b.y = 5;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[10, 10]");
	a.x = 5;
	a.y = 5;
	b.x = 10;
	b.y = 10;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[0, 10]");
	a.x = 5;
	a.y = 5;
	b.x = 0;
	b.y = 10;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	ft_putendl("");

	arrayData.index = 0;
	ft_putendl("Line A[5, 5] B[10, 0]");
	a.x = 5;
	a.y = 5;
	b.x = 10;
	b.y = 0;
	ftx_calculate_line(&a, &b, ftx_put_point_toa, &arrayData);
	ftx_calculate_line(&a, &b, ftx_put_point_stdout, NULL);
	ft_putendl("");

	ft_putendl("\n### ALL TESTS ON t_line_base PASSED ###\n");

	return (0);
}

static int all_tests() {
	mu_run_test(t_line_base);
	return 0;
}
int main(void) {
	int result = all_tests();

	if (result == 0) 
	{
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);

	return (result != 0);
}
