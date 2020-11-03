NAME:=ft_xlib.a
FILES:=	ftx_matrix4i_new \
		ftx_matrix4i_delete \
		ftx_matrix4i_print \
		ftx_matrix4i_new_by_return

IDIR:=includes
CFLAGS:=-Werror -Wextra -Wall -g
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

clean:
	rm -f $(BINS)

fclean: clean
	rm -f $(NAME)

re: fclean all
