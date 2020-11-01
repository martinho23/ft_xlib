NAME:=ft_xlib.a
FILES:=
IDIR:= includesa
FLAGS:=-Werror -Wextra -Wall
SRCSDIR=srcs
BINS:=$(addsuffix .o, $(FILES))
BINS:=$(addprefix $(SRCSDIR), $(FILES))

$(NAME):$(BINS)

all:$(NAME)
	ar -rc $^
	ranlib $(NAME)

.c.o:
	gcc $(FLAGS) -I$(IDIR) -o $@ $<

clean:
	rm -f $(BINS)

fclean: clean
	rm -f $(NAME)

re: fclean all
