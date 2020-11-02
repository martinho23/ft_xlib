 #include "../includes/libftx_priv.h"
 #include <stdlib.h>

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDel)
 {
     int   i;

     i = 0;
     while(i < 4)
     {
         free(*matrixToDel[i]);
         *matrixToDel[i] = NULL;
        i++;
     }
     free(*matrixToDel);
     *matrixToDel = NULL;
 }