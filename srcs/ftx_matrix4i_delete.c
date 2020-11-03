 #include "../includes/libftx_priv.h"
 #include "../includes/libft.h"
 #include <stdlib.h>

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete)
 {
     ftx_matrixni_delete((t_ftx_matrixni *)matrixToDelete, FTX_MATRIX4_LENGTH);
 }