 #include <libftx_priv.h>

 t_ftx_vector4f ftx_vector4f_add_by_return(const t_ftx_vector4f *a, const t_ftx_vector4f *b)
 {
    t_ftx_vector4f dest;

    ftx_vector4f_add(a, b, &dest);
    return (dest);
 }