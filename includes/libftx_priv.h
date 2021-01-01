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
void            ftx_matrixni_print(t_ftx_matrixni matrixToPrint, char *matricName, size_t matrixCollums, size_t matrixRows); /*Print a Integer NxN Matrix*/

t_ftx_matrixni  ftx_matrixni_new_by_return(size_t matrixCollums, size_t matrixRows); /*Allocate Integer NxN Matrix by reference*/

/*Matrix4*/
typedef int     **t_ftx_matrix4i; /*Costum typedef for a Integers 4x4 Matrix*/

void			ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit); /*Allocate Integer 4x4 Matrix*/
void			ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete); /*Delete allocated Integer 4x4 Matrix*/
void			ftx_matrix4i_print(t_ftx_matrix4i matrixToPrint, char *matrixName); /*Print a Integer 4x4 Matrix*/

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
}	t_ftx_vextor4i;

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

/*Add a and b vector to src by pointer*/
void	ftx_vector3i_add(const t_ftx_vector3i *a, const t_ftx_vector3i *b, t_ftx_vector3i *src);
void	ftx_vector3f_add(const t_ftx_vector3f *a, const t_ftx_vector3f *b, t_ftx_vector3f *src);
void	ftx_vector4f_add(const t_ftx_vector4f *a, const t_ftx_vector4f *b, t_ftx_vector4f *src);
void	ftx_vector4i_add(const t_ftx_vector4i *a, const t_ftx_vector4i *b, t_ftx_vector4i *src);

/*Add a and b vectors and get the result by return value*/
t_ftx_vector3f ftx_vector3f_add_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b);
t_ftx_vertor3i ftx_vector3i_add_by_return(const t_ftx_vector3i *a, const t_ftx_vector3i *b);
t_ftx_vector4f ftx_vector4f_add_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b);
t_ftx_vector4i ftx_vector4i_add_by_return(const t_ftx_vector4i *a, const t_ftx_vector4i *b);
#endif /* !LIBFTX_h */
