#ifndef LIBFTX_PRIV_H
#define LIBFTX_PRIV_H

/*
** Matrix's of Integers
*/
/*Costum type def for a Integers 4x4 Matrix*/
typedef	int		*t_ftx_matrix4i[4];
/*Allocate Integer 4x4 Matrix*/
void			ftx_matrix4i_new(t_ftx_matrix4i *matrixToInit);
t_ftx_matrix4i	ftx_matrix4i_new_by_return(void);
/*Delete allocated Integer 4x4 Matrix*/
void			ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete);
/*Print a Integer 4x4 Matrix*/
void			ftx_matrix4i_print(t_ftx_matrix4i matrixToPrint);

#endif /* !LIBFTX_h */
