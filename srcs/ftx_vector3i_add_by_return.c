 #include <libftx_priv.h>

 t_ftx_vector3i ftx_vector3i_add_by_return(const t_ftx_vector3i *a, const t_ftx_vector3i *b)
 {
    t_ftx_vector3i dest;

    ftx_vector3i_add(a, b, &dest);
    return (dest);
 }