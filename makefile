NAME:=ft_xlib.a
FILES:=	ftx_matrix4i_new \
		ftx_matrix4i_delete \
		ftx_matrix4i_print \
		ftx_matrix4i_new_by_return

IDIR:= includesa
FLAGS:=-Werror -Wextra -Wall
SRCSDIR=srcs/
BINS:=$(addsuffix .o, $(FILES))
BINS:=$(addprefix $(SRCSDIR), $(FILES))

$(NAME):$(BINS)

all:$(NAME)
	ar -rc $^
	ranlib $(NAME)

.c.o:
	gcc $(FLAGS) -Iincludes/ -o $@ $<

clean:
	rm -f $(BINS)

fclean: clean
	rm -f $(NAME)

re: fclean all
