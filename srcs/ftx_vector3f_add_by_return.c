 #include <libftx_priv.h>

 t_ftx_vector3f ftx_vector3f_add_by_return(const t_ftx_vector3f *a, const t_ftx_vector3f *b)
 {
    t_ftx_vector3f dest;

    ftx_vector3f_add(a, b, &dest);
    return (dest);
 }