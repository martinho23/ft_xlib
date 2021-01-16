/*
 * =====================================================================================
 *
 *       Filename:  test_vector3f.c
 *
 *    Description:  minuint Unittest for vectors 3f functions
 *
 *        Version:  1.0
 *        Created:  10/01/2021 00:48:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#define NULL 0x0

#include <stdio.h>
#include "minunit.h"
#include <libft.h>
#include <libftx_priv.h>
#include <math.h>

int tests_run = 0;

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3f_populate
	//  Description:  Test function ftx_vector3f_populate
	// =====================================================================================

static char * t_ftx_vector3f_populate() 
{
//	ft_putendl("### STARTING t_ftx_vector3f_populate TESTS ###\n");

	t_ftx_vector3f a = {0, 1, 2};


//	ft_putendl("populating a t_ftx_vector3f");
	ftx_vector3f_populate(10, 11, 12, &a);
	mu_assert("Vector a.x din't got correctly populated", a.x == 11);
	mu_assert("Vector a.x din't got correctly populated", a.x == 11);
	mu_assert("Vector a.y din't got correctly populated", a.y == 11);
	mu_assert("Vector a.z din't got correctly populated", a.z == 12);

//	ft_putendl("populating a NULL t_ftx_vector3f");
	ftx_vector3f_populate(10, 11, 12, NULL);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_populate PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector_add
	//  Description:  Test function ftx_vector3f_add
// =========================================================================================

static char * t_ftx_vector3f_add() 
{
//	ft_putendl("### STARTING t_ftx_vector3f_add TESTS ###\n");

	t_ftx_vector3f a = {0, 1, 2};
	t_ftx_vector3f b = {0, 1, 2};
	t_ftx_vector3f tmp = {1, 2, 3};

//	ft_putstr("Adding 2 vectors\n");
	ftx_vector3f_add(&a, &b, &tmp);
	mu_assert("Vector a.x = 0 + Vector b.x = 0 != 0", tmp.x == (a.x + b.x));
	mu_assert("Vector a.y = 1 + Vector b.y = 1 != 2", tmp.y == (a.y + b.y));
	mu_assert("Vector a.z = 2 + Vector b.z = 2 != 4", tmp.z == (a.z + b.z));

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_add_by_return(&a, &b);
	mu_assert("Vector a.x = 0 + Vector b.x = 0 != 0", tmp.x == (a.x + b.x));
	mu_assert("Vector a.y = 1 + Vector b.y = 1 != 2", tmp.y == (a.y + b.y));
	mu_assert("Vector a.z = 2 + Vector b.z = 2 != 4", tmp.z == (a.z + b.z));

//	ft_putendl("Trying to add a NULL t_ftx_vector3f");
	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_add(NULL, &b, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_add(&a, NULL, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_add_by_return(NULL, &b);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_add_by_return(&a, NULL);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);


//	ft_putendl("Trying to save into a NULL dest");
	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_add(&a, &b, NULL);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 1);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 2);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 3);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_add PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3f_square_magnitude
	//  Description:  Test function t_ftx_vector3f_square_magnitude)
	// =====================================================================================

static char * t_ftx_vector3f_square_magnitude()
{
	t_ftx_vector3f vec = {2, 2, 2};
	float dest = 0;

	ftx_vector3f_square_magnitude(&vec, &dest);
	mu_assert("Square magnitude returns a wrong value", dest == 12);

	ftx_vector3f_square_magnitude(NULL, &dest);
	mu_assert("Square magnitude on a NULL t_ftx_vector3f does not set dest to 0", dest == 0);

	ftx_vector3f_square_magnitude(&vec, NULL);

	dest = ftx_vector3f_square_magnitude_by_return(&vec);
	mu_assert("Square magnitude returns a wrong value", dest == 12);

	dest = ftx_vector3f_square_magnitude_by_return(NULL);
	mu_assert("Square magnitude on a NULL t_ftx_vector3f does not set dest to 0", dest == 0);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_square_magnitude PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3f_scalar_multiplication
	//  Description:  Test function t_ftx_vector3f_scalar_multiplication)
	// =====================================================================================

static char * t_ftx_vector3f_scalar_multiplication()
{
	t_ftx_vector3f vec = {1, 2, 3};
	t_ftx_vector3f dest = {0, 0, 0};
	int				scalar = 2;

	ftx_vector3f_scalar_multiplication(&vec, scalar, &dest);
	mu_assert("Scalar muntiplication gave a wrong vec.x value", dest.x == 2);
	mu_assert("Scalar muntiplication gave a wrong vec.y value", dest.y == 4);
	mu_assert("Scalar muntiplication gave a wrong vec.z value", dest.z == 6);

	ftx_vector3f_populate(0, 0, 0, &dest);
	dest = ftx_vector3f_scalar_multiplication_by_return(&vec, scalar);
	mu_assert("Scalar muntiplication gave a wrong vec.x value", dest.x == 2);
	mu_assert("Scalar muntiplication gave a wrong vec.y value", dest.y == 4);
	mu_assert("Scalar muntiplication gave a wrong vec.z value", dest.z == 6);

	ftx_vector3f_populate(1, 2, 3, &dest);
	ftx_vector3f_scalar_multiplication(NULL, scalar, &dest);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3f din't set dest.x to 0", dest.x == 0);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3f din't set dest.y to 0", dest.y == 0);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3f din't set dest.z to 0", dest.z == 0);

	ftx_vector3f_populate(1, 2, 3, &dest);
	ftx_vector3f_scalar_multiplication(&vec, 0, &dest);
	mu_assert("Scalar multiplication by a 0 scalar gave another result than 0", dest.x == 0);
	mu_assert("Scalar multiplication by a 0 scalar gave another result than 0", dest.y == 0);
	mu_assert("Scalar multiplication by a 0 scalar gave another result than 0", dest.z == 0);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_scalar_multiplication PASSED ###\n");

	return 0;
}

static char * t_ftx_vector3f_normalize()
{
	t_ftx_vector3f vec = {3, 3, 3};
	t_ftx_vector3f dest = {4, 4, 4};
	ftx_vector3f_normalize(&vec, &dest);
	printf("%f %f\n", dest.x, (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.x is != dest.x", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y is != dest.y", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z is != dest.z", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3f_populate(-4, 4, 4, &vec);
	ftx_vector3f_populate(4, 4, 4, &dest);
	ftx_vector3f_normalize(&vec, &dest);
	mu_assert("Normalization of vec.x is != dest.x", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y is != dest.y", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z is != dest.z", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3f_populate(3, 3, 3, &vec);
	ftx_vector3f_populate(4, 4, 4, &dest);
	dest = ftx_vector3f_normalize_by_return(&vec);
	mu_assert("Normalization of vec.x is != dest.x", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y is != dest.y", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z is != dest.z", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3f_populate(4, 4, 4, &dest);
	ftx_vector3f_normalize(NULL, &dest);
	mu_assert("Normalization of NULL vec.x din't set dest.x to 0", dest.x == 0);
	mu_assert("Normalization of NULL vec.y din't set dest.y to 0", dest.y == 0);
	mu_assert("Normalization of NULL vec.z din't set dest.z to 0", dest.z == 0);

	ftx_vector3f_normalize(&vec, NULL);
	mu_assert("Normalization of NULL vec.x din't set dest.x to 0", dest.x == 0);
	mu_assert("Normalization of NULL vec.y din't set dest.y to 0", dest.y == 0);
	mu_assert("Normalization of NULL vec.z din't set dest.z to 0", dest.z == 0);

	ftx_vector3f_populate(4, 4, 4, &dest);
	dest = ftx_vector3f_normalize_by_return(NULL);
	mu_assert("Normalization of NULL vec.x din't set dest.x to 0", dest.x == 0);
	mu_assert("Normalization of NULL vec.y din't set dest.y to 0", dest.y == 0);
	mu_assert("Normalization of NULL vec.z din't set dest.z to 0", dest.z == 0);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_normalize PASSED ###\n");
	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3f_sub
	//  Description:  Test function ftx_vector3f_sub
	// =====================================================================================

static char * t_ftx_vector3f_sub() 
{

	t_ftx_vector3f a = {0, 1, 2};
	t_ftx_vector3f b = {0, 1, 2};
	t_ftx_vector3f tmp = {1, 2, 3};

//	ft_putstr("Adding 2 vectors\n");
	ftx_vector3f_sub(&a, &b, &tmp);
	mu_assert("Vector a.x = 0 - Vector b.x = 0 != 0", tmp.x == (a.x - b.x));
	mu_assert("Vector a.y = 1 - Vector b.y = 1 != 2", tmp.y == (a.y - b.y));
	mu_assert("Vector a.z = 2 - Vector b.z = 2 != 4", tmp.z == (a.z - b.z));

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_sub_by_return(&a, &b);
	mu_assert("Vector a.x = 0 - Vector b.x = 0 != 0", tmp.x == (a.x - b.x));
	mu_assert("Vector a.y = 1 - Vector b.y = 1 != 2", tmp.y == (a.y - b.y));
	mu_assert("Vector a.z = 2 - Vector b.z = 2 != 4", tmp.z == (a.z - b.z));

//	ft_putendl("Trying to add a NULL t_ftx_vector3f");
	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_sub(NULL, &b, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_sub(&a, NULL, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_sub_by_return(NULL, &b);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);

	ftx_vector3f_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3f_sub_by_return(&a, NULL);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 0);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 0);


//	ft_putendl("Trying to save into a NULL dest");
	ftx_vector3f_populate(1, 2, 3, &tmp);
	ftx_vector3f_sub(&a, &b, NULL);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.x", tmp.x == 1);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.y", tmp.y == 2);
	mu_assert("Adding a NULL t_ftx_vector3f change dest.z", tmp.z == 3);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3f_add PASSED ###\n");

	return (0);
}

static char * all_tests() {

	mu_run_test(t_ftx_vector3f_populate);
	mu_run_test(t_ftx_vector3f_add);
	mu_run_test(t_ftx_vector3f_square_magnitude);
	mu_run_test(t_ftx_vector3f_scalar_multiplication);
	mu_run_test(t_ftx_vector3f_normalize);
	mu_run_test(t_ftx_vector3f_sub);
	return 0;
}

int main(void) {
	char *result = all_tests();

if (result != 0) {
		printf("%s\n", result);
	}
	else {
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);

	return (result != 0);
}
