 #include <libftx_priv.h>

 t_ftx_vector4f ftx_vector3i_add_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b)
 {
    t_ftx_vector4f dest;

    ftx_vector3i_add(a, b, &dest);
    return (dest);
 }