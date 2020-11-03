#ifndef LIBFTX_PRIV_H
#define LIBFTX_PRIV_H

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

void            ftx_matrixni_new(t_ftx_matrixni *matrixToInit, size_t matrixCollums, size_t matrixRows); /*Allocate Integer NxN Matrix*/
void            ftx_matrixni_print(t_ftx_matrixni *matrixToPrint, size_t matrixCollums, size_t matrixRows); /*Print a Integer NxN Matrix*/
void            ftx_matrixni_delete(t_ftx_matrixni *matrixToDelete, size_t matrixCollums, size_t matrixRows); /*Delete allocated Integer NxN Matrix*/

t_ftx_matrixni  ftx_matrixni_new_by_return(size_t matrixCollums, size_t matrixRows); /*Allocate Integer 4x4 Matrix by reference*/

/*Matrix4*/
typedef int     **t_ftx_matrix4i; /*Costum typedef for a Integers 4x4 Matrix*/

void			ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit); /*Allocate Integer 4x4 Matrix*/
void			ftx_matrix4i_print(t_ftx_matrix4i matrixToPrint, char *matrixName); /*Print a Integer 4x4 Matrix*/
void			ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete); /*Delete allocated Integer 4x4 Matrix*/

t_ftx_matrix4i	ftx_matrix4i_new_by_return(void); /*Allocate Integer 4x4 Matrix by reference*/


#endif /* !LIBFTX_h */
