NAME:=libftx.a
FILES:=	ftx_matrix4i_new \
		ftx_matrix4i_delete \
		ftx_matrix4i_print \
		ftx_matrix4i_new_by_return \
		ftx_matrixni_new \
		ftx_matrixni_delete \
		ftx_matrixni_print \
		ftx_matrixni_new_by_return \
		ftx_vector3f_populate \
		ftx_vector3f_add \
		ftx_vector3f_add_by_return \
		ftx_vector3f_sub \
		ftx_vector3f_sub_by_return \
		ftx_vector3f_normalize \
		ftx_vector3f_normalize_by_return \
		ftx_vector3f_scalar_multiplication \
		ftx_vector3f_scalar_multiplication_by_return \
		ftx_vector3f_square_magnitude \
		ftx_vector3f_square_magnitude_by_return \
		ftx_vector3i_populate \
		ftx_vector3i_add \
		ftx_vector3i_add_by_return \
		ftx_vector3i_sub \
		ftx_vector3i_sub_by_return \
		ftx_vector3i_normalize \
		ftx_vector3i_normalize_by_return \
		ftx_vector3i_scalar_multiplication \
		ftx_vector3i_scalar_multiplication_by_return \
		ftx_vector3i_square_magnitude \
		ftx_vector3i_square_magnitude_by_return \
		ftx_vector4f_populate \
		ftx_vector4f_add \
		ftx_vector4f_add_by_return \
		ftx_vector4f_sub \
		ftx_vector4f_sub_by_return \
		ftx_vector4f_normalize \
		ftx_vector4f_normalize_by_return \
		ftx_vector4f_scalar_multiplication \
		ftx_vector4f_scalar_multiplication_by_return \
		ftx_vector4f_square_magnitude \
		ftx_vector4f_square_magnitude_by_return \
		ftx_vector4i_populate \
		ftx_vector4i_add \
		ftx_vector4i_add_by_return \
		ftx_vector4i_sub \
		ftx_vector4i_sub_by_return \
		ftx_vector4i_normalize \
		ftx_vector4i_normalize_by_return \
		ftx_vector4i_scalar_multiplication \
		ftx_vector4i_scalar_multiplication_by_return \
		ftx_vector4i_square_magnitude \
		ftx_vector4i_square_magnitude_by_return \
		ftx_fast_rsqrt \
		ftx_sse_rsqrt

IDIR:=includes
CFLAGS:=-Werror -Wextra -Wall -g -O3
SRCSDIR=srcs/
BINS:=$(addsuffix .o, $(FILES))
BINS:=$(addprefix $(SRCSDIR), $(BINS))
SRCS:=$(addsuffix .c, $(FILES))
SRCS:=$(addprefix $(SRCSDIR), $(SRCS))

$(NAME):$(BINS)
	ar -rc $(NAME) $^
	ranlib $(NAME)

all:$(NAME)

%.o: %.c
	gcc $(CFLAGS) -I $(IDIR) -c $< -o $@

.PHONI:

clean:
	rm -f $(BINS)

fclean: clean
	rm -f $(NAME)

re: fclean all

runTests:
	@sh tests_d/test.sh

makeTestsClean:
	@make fclean -C tests_d -f makefile.tests
