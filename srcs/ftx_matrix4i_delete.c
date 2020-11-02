 #include "../includes/libftx_priv.h"
 #include <stdlib.h>

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDel)
 {
     int   i;

     i = 0;
     while(i < FTX_MATRIX4_LENGTH)
     {
         free(*matrixToDel[i]);
         *matrixToDel[i] = NULL;
        i++;
     }
     free(*matrixToDel);
     *matrixToDel = NULL;
 }