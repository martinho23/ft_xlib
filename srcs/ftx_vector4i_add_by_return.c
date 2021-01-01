 #include <libftx_priv.h>

 t_ftx_vector4i ftx_vector3i_add_by_return(const t_ftx_vector4i *a, const t_ftx_vector4i *b)
 {
    t_ftx_vector4i dest;

    ftx_vector3i_add(a, b, &dest);
    return (dest);
 }