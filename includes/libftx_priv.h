#ifndef LIBFTX_PRIV_H
#define LIBFTX_PRIV_H

#include <stddef.h>
/*
** Matrix's DEFINES
*/
#define FTX_MATRIX4_LENGTH 4
#define FTX_MATRIX3_LENGTH 3

/*
** Matrix's of Integers
*/

/*MatrixN*/
typedef int     **t_ftx_matrixni; /*Costum typedef fo a Integer Matrix*/

void            ftx_matrixni_delete(t_ftx_matrixni *matrixToDelete, size_t matrixCollums); /*Delete allocated Integer NxN Matrix*/
void            ftx_matrixni_new(t_ftx_matrixni *matrixToInit, size_t matrixCollums, size_t matrixRows); /*Allocate Integer NxN Matrix*/
void            ftx_matrixni_print(const t_ftx_matrixni matrixToPrint, char *matricName, size_t matrixCollums, size_t matrixRows); /*Print a Integer NxN Matrix*/

t_ftx_matrixni  ftx_matrixni_new_by_return(size_t matrixCollums, size_t matrixRows); /*Allocate Integer NxN Matrix by reference*/

/*Matrix4*/
typedef int     **t_ftx_matrix4i; /*Costum typedef for a Integers 4x4 Matrix*/

void			ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit); /*Allocate Integer 4x4 Matrix*/
void			ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete); /*Delete allocated Integer 4x4 Matrix*/
void			ftx_matrix4i_print(const t_ftx_matrix4i matrixToPrint, char *matrixName); /*Print a Integer 4x4 Matrix*/

t_ftx_matrix4i	ftx_matrix4i_new_by_return(void); /*Allocate Integer 4x4 Matrix by reference*/

/*
** Vectors
*/

/*Vector3i*/
typedef struct s_ftx_vector3i
{
	int		x;
	int		y;
	int		z;
}	t_ftx_vector3i;

/*Vector4i*/
typedef struct s_ftx_vector4i
{
	int		x;
	int		y;
	int		z;
	int		w;
}	t_ftx_vector4i;

/*Vector3f*/
typedef struct s_ftx_vector3f
{
	float	x;
	float	y;
	float	z;
}	t_ftx_vector3f;

/*Vector4f*/
typedef struct s_ftx_vector4f
{
	float	x;
	float	y;
	float	z;
	float	w;
}	t_ftx_vector4f;

/*
**Vectors Functions
*/

/*Assign vectors values*/
void	ftx_vector3f_populate(const float x, const float y, const float z, t_ftx_vector3f *dest);
void	ftx_vector3i_populate(const int x, const int y, const int z, t_ftx_vector3i *dest);
void	ftx_vector4f_populate(const float x, const float y, const float z, const float w, t_ftx_vector4f *dest);
void	ftx_vector4i_populate(const int x, const int y, const int z, const int w, t_ftx_vector4i *dest);

/*Add a and b vector to dest by pointer*/
void	ftx_vector3i_add(const t_ftx_vector3i *a, const t_ftx_vector3i *b, t_ftx_vector3i *dest);
void	ftx_vector3f_add(const t_ftx_vector3f *a, const t_ftx_vector3f *b, t_ftx_vector3f *dest);
void	ftx_vector4f_add(const t_ftx_vector4f *a, const t_ftx_vector4f *b, t_ftx_vector4f *dest);
void	ftx_vector4i_add(const t_ftx_vector4i *a, const t_ftx_vector4i *b, t_ftx_vector4i *dest);

/*Add a and b vectors and returns the result*/
t_ftx_vector3f ftx_vector3f_add_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b);
t_ftx_vector3i ftx_vector3i_add_by_return(const t_ftx_vector3i *a, const t_ftx_vector3i *b);
t_ftx_vector4f ftx_vector4f_add_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b);
t_ftx_vector4i ftx_vector4i_add_by_return(const t_ftx_vector4i *a, const t_ftx_vector4i *b);

/*Substract a and b vector to dest by pointer*/
void	ftx_vector3f_sub(const t_ftx_vector3f *a, const t_ftx_vector3f *b, t_ftx_vector3f *dest);
void	ftx_vector3i_sub(const t_ftx_vector3i *a, const t_ftx_vector3i *b, t_ftx_vector3i *dest);
void	ftx_vector4f_sub(const t_ftx_vector4f *a, const t_ftx_vector4f *b, t_ftx_vector4f *dest);
void	ftx_vector4i_sub(const t_ftx_vector4i *a, const t_ftx_vector4i *b, t_ftx_vector4i *dest);

/*Substract a and b vectors and returns the result*/
t_ftx_vector3f	ftx_vector3f_sub_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b);
t_ftx_vector3i	ftx_vector3i_sub_by_return(const t_ftx_vector3i *a, const t_ftx_vector3i *b);
t_ftx_vector4f	ftx_vector4f_sub_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b);
t_ftx_vector4i	ftx_vector4i_sub_by_return(const t_ftx_vector4i *a, const t_ftx_vector4i *b);

/*Multiplies a vector by a scalar value*/
void	ftx_vector3f_scalar_multiplication(const t_ftx_vector3f *vec, const float scalar, t_ftx_vector3f *dest);
void	ftx_vector3i_scalar_multiplication(const t_ftx_vector3i *vec, const int scalar, t_ftx_vector3i *dest);
void	ftx_vector4f_scalar_multiplication(const t_ftx_vector4f *vec, const float scalar, t_ftx_vector4f *dest);
void	ftx_vector4i_scalar_multiplication(const t_ftx_vector4i *vec, const int scalar, t_ftx_vector4i *des);

/*Multiplies a vector by a scalar value and returns the result*/
t_ftx_vector3f	ftx_vector3f_scalar_multiplication_by_return(const t_ftx_vector3f *vec, const float scalar);
t_ftx_vector3i	ftx_vector3i_scalar_multiplication_by_return(const t_ftx_vector3i *vec, const int scalar);
t_ftx_vector4f	ftx_vector4f_scalar_multiplication_by_return(const t_ftx_vector4f *vec, const float scalar);
t_ftx_vector4i	ftx_vector4i_scalar_multiplication_by_return(const t_ftx_vector4i *vec, const int scalar);

/*Adds a vector with a scalar value*/
void	ftx_vector3f_scalar_addition(const t_ftx_vector3f *vec, const float scalar, t_ftx_vector3f *dest);
void	ftx_vector3i_scalar_addition(const t_ftx_vector3i *vec, const int scalar, t_ftx_vector3i *dest);
void	ftx_vector4f_scalar_addition(const t_ftx_vector4f *vec, const float scalar, t_ftx_vector4f *dest);
void	ftx_vector4i_scalar_addition(const t_ftx_vector4i *vec, const int scalar, t_ftx_vector4i *dest);

/*Adds a vector with a scalar value and return the result*/
t_ftx_vector3f	ftx_vector3f_scalar_addition_by_return(const t_ftx_vector3f *vec, const float scalar);
t_ftx_vector3i	ftx_vector3i_scalar_addition_by_return(const t_ftx_vector3i *vec, const int scalar);
t_ftx_vector4f	ftx_vector4f_scalar_addition_by_return(const t_ftx_vector4f *vec, const float scalar);
t_ftx_vector4i	ftx_vector4i_scalar_addition_by_return(const t_ftx_vector4i *vec, const int scalar);

/*Calculates the Squared magnitude of a vector*/
void	ftx_vector3f_square_magnitude(const t_ftx_vector3f *vec, float *dest);
void	ftx_vector3i_square_magnitude(const t_ftx_vector3i *vec, int *dest);
void	ftx_vector4f_square_magnitude(const t_ftx_vector4f *vec, float *dest);
void	ftx_vector4i_square_magnitude(const t_ftx_vector4i *vec, int *dest);

/*Calculates the Squared magnitue of a vector and return the result*/
float	ftx_vector3f_square_magnitude_by_return(const t_ftx_vector3f *vec);
int		ftx_vector3i_square_magnitude_by_return(const t_ftx_vector3i *vec);
float	ftx_vector4f_square_magnitude_by_return(const t_ftx_vector4f *vec);
int		ftx_vector4i_square_magnitude_by_return(const t_ftx_vector4i *vec);

/*Normalizes a vector*/
void	ftx_vector3f_normalize(const t_ftx_vector3f *vec, t_ftx_vector3f *dest);
void	ftx_vector3i_normalize(const t_ftx_vector3i *vec, t_ftx_vector3f *dest);
void	ftx_vector4f_normalize(const t_ftx_vector4f *vec, t_ftx_vector4f *dest);
void	ftx_vector4i_normalize(const t_ftx_vector4i *vec, t_ftx_vector4f *dest);

/*Normalizes the vector and return a normalized copy*/
t_ftx_vector3f	ftx_vector3f_normalize_by_return(const t_ftx_vector3f *vec);
t_ftx_vector3f	ftx_vector3i_normalize_by_return(const t_ftx_vector3i *vec);
t_ftx_vector4f	ftx_vector4f_normalize_by_return(const t_ftx_vector4f *vec);
t_ftx_vector4f	ftx_vector4i_normalize_by_return(const t_ftx_vector4i *vec);

/*Point*/
typedef struct s_ftx_point
{
	int		x;
	int		y;
}	t_ftx_point;

/*Point Array*/
typedef struct s_ftx_point_array
{
	t_ftx_point	*array;
	int			index;
	int			size;
}	t_ftx_point_array;

typedef struct s_mlx_info
{
	void	*mlx_ptr;
	void	*mlx_win;
}	t_mlx_info;

typedef struct s_mlx_pixel
{
	t_mlx_info	*mlx_info;
	int			color;
}	t_mlx_pixel;

/*
**Maths Functions
*/
float	ftx_fast_rsqrt(float number);
float	ftx_sse_rsqrt(float number);
int		ftx_absi(int number);

/*
**Drawing Functions
*/
void	ftx_calculate_line(const t_ftx_point *start, const t_ftx_point *end, void ftx_putpixel(const t_ftx_point pixel, const void *pixelData), void *pixelData);
void	ftx_put_mlx_pixel(const t_ftx_point pixel, const void *data);
void	ftx_put_point_toa(const t_ftx_point pixel, const void *data);
void	ftx_put_point_stdout(const t_ftx_point point, const void *data);
#endif /* !LIBFTX_h */
