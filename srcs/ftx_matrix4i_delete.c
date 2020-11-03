 #include "../includes/libftx_priv.h"
 #include "../includes/libft.h"
 #include <stdlib.h>

 void   ftx_matrix4i_delete(t_ftx_matrix4i *matrixToDelete)
 {
     int   i;

     i = 0;
     if (!(*matrixToDelete))
     {
        ft_putstr("/!\\ WARNING: You're trying to delete a NULL t_ftx_matrix4i\n");
        return ;
     }
     while(i < FTX_MATRIX4_LENGTH)
     {
        if (!(*matrixToDelete)[i])
        {
            ft_putstr("/!\\ WARNING: You're trying to delete a NULL t_ftx_matrix4i\n");
            return ;
        }
         free((*matrixToDelete)[i]);
         (*matrixToDelete)[i] = NULL;
        i++;
     }
     free(*matrixToDelete);
     *matrixToDelete = NULL;
 }