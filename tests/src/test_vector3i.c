/*
 * =====================================================================================
 *
 *       Filename:  test_vector3i.c
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
	//         Name:  t_ftx_vector3i_populate
	//  Description:  Test function ftx_vector3i_populate
	// =====================================================================================

static int  t_ftx_vector3i_populate() 
{
//	ft_putendl("### STARTING t_ftx_vector3i_populate TESTS ###\n");

	t_ftx_vector3i a = {0, 1, 2};


//	ft_putendl("populating a t_ftx_vector3i");
	ftx_vector3i_populate(10, 11, 12, &a);
	mu_assert("Vector a.x: %i din't got correctly populated, expected %i\n", a.x == 10, a.x, 10);
	mu_assert("Vector a.y: %i din't got correctly populated, expected %i\n", a.y == 11, a.y, 11);
	mu_assert("Vector a.z: %i din't got correctly populated, expected %i\n", a.z == 12, a.z, 12);

//	ft_putendl("populating a NULL t_ftx_vector3i");
	ftx_vector3i_populate(10, 11, 12, NULL);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_populate PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector_add
	//  Description:  Test function ftx_vector3i_add
// =========================================================================================

static int  t_ftx_vector3i_add() 
{
//	ft_putendl("### STARTING t_ftx_vector3i_add TESTS ###\n");

	t_ftx_vector3i a = {0, 1, 2};
	t_ftx_vector3i b = {0, 1, 2};
	t_ftx_vector3i tmp = {1, 2, 3};

//	ft_putstr("Adding 2 vectors\n");
	ftx_vector3i_add(&a, &b, &tmp);
	mu_assert("Vector a.x = %i + Vector b.x = %i != %i\n", tmp.x == (a.x + b.x), a.z, b.z, a.z + b.z);
	mu_assert("Vector a.y = %i + Vector b.y = %i != %i\n", tmp.y == (a.y + b.y), a.z, b.z, a.z + b.z);
	mu_assert("Vector a.z = %i + Vector b.z = %i != %i\n", tmp.z == (a.z + b.z), a.z, b.z, a.z + b.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_add_by_return(&a, &b);
	mu_assert("Vector a.x = %i + Vector b.x = %i != %i\n", tmp.x == (a.x + b.x), a.z, b.z, a.z + b.z);
	mu_assert("Vector a.y = %i + Vector b.y = %i != %i\n", tmp.y == (a.y + b.y), a.z, b.z, a.z + b.z);
	mu_assert("Vector a.z = %i + Vector b.z = %i != %i\n", tmp.z == (a.z + b.z), a.z, b.z, a.z + b.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_add(NULL, &b, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_add(&a, NULL, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_add_by_return(NULL, &b);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_add_by_return(&a, NULL);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_add(&a, &b, NULL);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_add PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3i_square_magnitude
	//  Description:  Test function t_ftx_vector3i_square_magnitude)
	// =====================================================================================

static int  t_ftx_vector3i_square_magnitude()
{
	t_ftx_vector3i vec = {2, 2, 2};
	int dest = 0;

	ftx_vector3i_square_magnitude(&vec, &dest);
	mu_assert("Square magnitude of vec [%i, %i, %i] is %i while %i is expected\n", dest == 12, vec.x, vec.y, vec.z, dest, 12);

	ftx_vector3i_square_magnitude(NULL, &dest);
	mu_assert("Square magnitude on a NULL t_ftx_vector3i does not set dest: %i to 0", dest == 0, dest);

	ftx_vector3i_square_magnitude(&vec, NULL);

	dest = ftx_vector3i_square_magnitude_by_return(&vec);
	mu_assert("Square magnitude of vec [%i, %i, %i] is %i while %i is expected\n", dest == 12, vec.x, vec.y, vec.z, dest, 12);

	dest = ftx_vector3i_square_magnitude_by_return(NULL);
	mu_assert("Square magnitude on a NULL t_ftx_vector3i does not set dest: %i to 0", dest == 0, dest);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_square_magnitude PASSED ###\n");

	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3i_scalar_multiplication
	//  Description:  Test function t_ftx_vector3i_scalar_multiplication)
	// =====================================================================================

static int  t_ftx_vector3i_scalar_multiplication()
{
	t_ftx_vector3i vec = {1, 2, 3};
	t_ftx_vector3i dest = {0, 0, 0};
	int			scalar = 2;

	ftx_vector3i_scalar_multiplication(&vec, scalar, &dest);
	mu_assert("Scalar muntiplication: Vec.x = %i * %i = %i", dest.x == vec.x * scalar, vec.x, scalar, dest.x);
	mu_assert("Scalar muntiplication: Vec.y = %i * %i = %i", dest.y == vec.y * scalar, vec.y, scalar, dest.y);
	mu_assert("Scalar muntiplication: Vec.z = %i * %i = %i", dest.z == vec.z * scalar, vec.z, scalar, dest.z);
	
	ftx_vector3i_populate(0, 0, 0, &dest);
	dest = ftx_vector3i_scalar_multiplication_by_return(&vec, scalar);
	mu_assert("Scalar muntiplication: Vec.x = %i * %i = %i", dest.x == vec.x * scalar, vec.x, scalar, dest.x);
	mu_assert("Scalar muntiplication: Vec.y = %i * %i = %i", dest.y == vec.y * scalar, vec.y, scalar, dest.y);
	mu_assert("Scalar muntiplication: Vec.z = %i * %i = %i", dest.z == vec.z * scalar, vec.z, scalar, dest.z);

	ftx_vector3i_populate(1, 2, 3, &dest);
	ftx_vector3i_scalar_multiplication(NULL, scalar, &dest);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.x to %i", dest.x == 0, dest.x);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.y to %i", dest.y == 0, dest.y);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.z to %i", dest.z == 0, dest.z);

	ftx_vector3i_populate(1, 2, 3, &dest);
	ftx_vector3i_scalar_multiplication(&vec, 0, &dest);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.x to %i", dest.x == 0, dest.x);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.y to %i", dest.y == 0, dest.y);
	mu_assert("Scalar multiplication by NULL t_ftx_vector3i din't set dest.z to %i", dest.z == 0, dest.z);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_scalar_multiplication PASSED ###\n");

	return 0;
}

static int  t_ftx_vector3i_normalize()
{
	t_ftx_vector3i vec = {3, 3, 3};
	t_ftx_vector3f dest = {4, 4, 4};
	ftx_vector3i_normalize(&vec, &dest);
	mu_assert("Normalization of vec.x: %f is != dest.x: %f", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))),\
		dest.x, (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y: %f is != dest.y: %f", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))),\
		dest.y, (vec.y * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z: %f is != dest.z: %f", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))),\
		dest.z, (vec.z * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3i_populate(-4, 4, 4, &vec);
	ftx_vector3f_populate(4, 4, 4, &dest);
	ftx_vector3i_normalize(&vec, &dest);
	mu_assert("Normalization of vec.x: %f is != dest.x: %f", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))),\
		dest.x, (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y: %f is != dest.y: %f", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))),\
		dest.y, (vec.y * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z: %f is != dest.z: %f", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))),\
		dest.z, (vec.z * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3i_populate(3, 3, 3, &vec);
	ftx_vector3f_populate(4, 4, 4, &dest);
	dest = ftx_vector3i_normalize_by_return(&vec);
	mu_assert("Normalization of vec.x: %f is != dest.x: %f", dest.x == (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))),\
		dest.x, (vec.x * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.y: %f is != dest.y: %f", dest.y == (vec.y * (ftx_sse_rsqrt(vec.y * vec.y + vec.y * vec.y + vec.z * vec.z))),\
		dest.y, (vec.y * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));
	mu_assert("Normalization of vec.z: %f is != dest.z: %f", dest.z == (vec.z * (ftx_sse_rsqrt(vec.z * vec.z + vec.y * vec.y + vec.z * vec.z))),\
		dest.z, (vec.z * (ftx_sse_rsqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z))));

	ftx_vector3f_populate(4, 4, 4, &dest);
	ftx_vector3i_normalize(NULL, &dest);
	mu_assert("Normalization of NULL vec.x din't set dest.x: %f to 0", dest.x == 0, dest.x);
	mu_assert("Normalization of NULL vec.y din't set dest.y: %f to 0", dest.y == 0, dest.y);
	mu_assert("Normalization of NULL vec.z din't set dest.z: %f to 0", dest.z == 0, dest.z);

	ftx_vector3i_normalize(&vec, NULL);
	mu_assert("Normalization of NULL vec.x din't set dest.x: %f to 0", dest.x == 0, dest.x);
	mu_assert("Normalization of NULL vec.y din't set dest.y: %f to 0", dest.y == 0, dest.y);
	mu_assert("Normalization of NULL vec.z din't set dest.z: %f to 0", dest.z == 0, dest.z);

	ftx_vector3f_populate(4, 4, 4, &dest);
	dest = ftx_vector3i_normalize_by_return(NULL);
	mu_assert("Normalization of NULL vec.x din't set dest.x: %f to 0", dest.x == 0, dest.x);
	mu_assert("Normalization of NULL vec.y din't set dest.y: %f to 0", dest.y == 0, dest.y);
	mu_assert("Normalization of NULL vec.z din't set dest.z: %f to 0", dest.z == 0, dest.z);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_normalize PASSED ###\n");
	return (0);
}

	// ===  TEST  ==========================================================================
	//         Name:  t_ftx_vector3i_sub
	//  Description:  Test function ftx_vector3i_sub
	// =====================================================================================

static int  t_ftx_vector3i_sub() 
{

	t_ftx_vector3i a = {0, 1, 2};
	t_ftx_vector3i b = {0, 1, 2};
	t_ftx_vector3i tmp = {1, 2, 3};

	ftx_vector3i_sub(&a, &b, &tmp);
	mu_assert("Vector a.x = %i - Vector b.x = %i != %i", tmp.x == (a.x - b.x), a.x, b.x, tmp.x);
	mu_assert("Vector a.y = %i - Vector b.y = %i != %i", tmp.y == (a.y - b.y), a.y, b.y, tmp.y);
	mu_assert("Vector a.z = %i - Vector b.z = %i != %i", tmp.z == (a.z - b.z), a.z, b.z, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_sub_by_return(&a, &b);
	mu_assert("Vector a.x = %i - Vector b.x = %i != %i", tmp.x == (a.x - b.x), a.x, b.x, tmp.x);
	mu_assert("Vector a.y = %i - Vector b.y = %i != %i", tmp.y == (a.y - b.y), a.y, b.y, tmp.y);
	mu_assert("Vector a.z = %i - Vector b.z = %i != %i", tmp.z == (a.z - b.z), a.z, b.z, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_sub(NULL, &b, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.y == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.z == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_sub(&a, NULL, &tmp);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.y == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.z == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_sub_by_return(NULL, &b);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.y == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.z == 0, tmp.z);

	ftx_vector3i_populate(1, 2, 3, &tmp);
	tmp = ftx_vector3i_sub_by_return(&a, NULL);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.x == 0, tmp.x);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.y == 0, tmp.y);
	mu_assert("Adding a NULL t_ftx_vector3i din't changed dest.x: %i to 0\n", tmp.z == 0, tmp.z);


	ftx_vector3i_populate(1, 2, 3, &tmp);
	ftx_vector3i_sub(&a, &b, NULL);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_add PASSED ###\n");

	return (0);
}

// ===  TEST  ==========================================================================
//         Name:  t_ftx_vector3i_scalar_addition
//  Description:  Tests the ftx_vector3i_scalar_addition function
// =====================================================================================


static int  t_ftx_vector3i_scalar_addition()
{
	t_ftx_vector3i	vec    = {1, 2, 3};
	t_ftx_vector3i	dest   = {9, 9, 9};
	int				scalar = 5;
  
	ftx_vector3i_scalar_addition(&vec, scalar, &dest);
	mu_assert("Vector vec.x: %d + scalar: %d != dest.x: %d\n", vec.x + scalar == dest.x, vec.x, scalar, dest.x);
	mu_assert("Vector vec.y: %d + scalar: %d != dest.y: %d\n", vec.y + scalar == dest.y, vec.y, scalar, dest.y);
	mu_assert("Vector vec.z: %d + scalar: %d != dest.z: %d\n", vec.z + scalar == dest.z, vec.z, scalar, dest.z);

	ftx_vector3i_populate(9, 9, 9, &dest);
	dest = ftx_vector3i_scalar_addition_by_return(&vec, scalar);
	mu_assert("Vector vec.x: %d + scalar: %d != dest.x: %d\n", vec.x + scalar == dest.x, vec.x, scalar, dest.x);
	mu_assert("Vector vec.y: %d + scalar: %d != dest.y: %d\n", vec.y + scalar == dest.y, vec.y, scalar, dest.y);
	mu_assert("Vector vec.z: %d + scalar: %d != dest.z: %d\n", vec.z + scalar == dest.z, vec.z, scalar, dest.z);

	ftx_vector3i_populate(9, 9, 9, &dest);
	ftx_vector3i_scalar_addition(NULL, scalar, &dest);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.x == 0, dest.x);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.y == 0, dest.y);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.z == 0, dest.z);

	ftx_vector3i_populate(9, 9, 9, &dest);
	dest = ftx_vector3i_scalar_addition_by_return(NULL, scalar);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.x == 0, dest.x);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.y == 0, dest.y);
	mu_assert("Scalar addition on a NULL t_ftx_vector3f din't changed dest.x: %d to 0\n", dest.z == 0, dest.z);

	ft_putendl("\n### ALL TESTS ON t_ftx_vector3i_scalar_addition PASSED ###\n");

return (0);
}

static int  all_tests() {

	mu_run_test(t_ftx_vector3i_populate);
	mu_run_test(t_ftx_vector3i_add);
	mu_run_test(t_ftx_vector3i_square_magnitude);
	mu_run_test(t_ftx_vector3i_scalar_multiplication);
	mu_run_test(t_ftx_vector3i_normalize);
	mu_run_test(t_ftx_vector3i_sub);
	mu_run_test(t_ftx_vector3i_scalar_addition);

	return 0;
}

int main(void) {
	int result = all_tests();

	if (result != 0) 
	{
	}
	else {
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);

	return (result != 0);
}
