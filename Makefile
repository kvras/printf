
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthex.c

OBJ =	$(SRC:.c=.o);

DEPS = libftprintf.h

NAME = libftprintf.a


all: $(OBJ) $(DEPS)
		@ar -rcs $(NAME) $(OBJ)

clean:
		@rm -fr $(OBJ)

fclean: clean
		@rm -fr $(NAME)

re: fclean all
