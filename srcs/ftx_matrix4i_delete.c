 #include "../includes/libftx_priv.h"
 #include <stdlib.h>

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete)
 {
     int   i;

     i = 0;
     while(*matrixToDelete && *matrixToDelete[i][j] && i < FTX_MATRIX4_LENGTH)
     {
         free(*matrixToDelete[i]);
         *matrixToDelete[i] = NULL;
        i++;
     }
     free(*matrixToDelete);
     *matrixToDelete = NULL;
 }