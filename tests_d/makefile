EXEC := test_vector3f.exe test_vector4f.exe test_vector3i.exe test_vector4i.exe

SRCDIR := src/
FILES := $(addsuffix .c, $(EXEC))
FILES := $(addprefix $(SRCDIR), $(FILES))
CXX := gcc
CFLAGS := -Wall -Wextra -Wall
LIBSD := -L .. -L libft
LIB := -lft -lm -lftx
LIBFT := libft.a
LIBFTX := libftx.a
INCLUDE := -I ../includes -I .
BIND :=BIND
all:tests

$(LIBFT):
	git submodule init
	git submodule update
	make -C libft

$(LIBFTX):
	make -C ..

.PHONY:

tests : $(EXEC)

$(EXEC) : %.exe : %.c
	$(CXX) $(CFLAGS) -o$@ $< $(LIBSD) $(INCLUDE) $(LIB)

clean:
	rm -rf $(EXEC)

re: clean all

#run: $(EXEC)
#	chmod 755 $(EXEC)
#	./test_vector3f.exe
#	./test_vector4f.exe
#	./test_vector3i.exe
#	./test_vector4i.exe
