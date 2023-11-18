CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_puthex.c ft_puthexx.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_putadresse.c

OBJ =	$(SRC:.c=.o)

DEPS = libftprintf.h

NAME = libftprintf.a



all : $(NAME)
$(NAME) : $(OBJ) $(DEPS)
	$(CC) $(CFLAGS) -c $(SRC) -I.
	ar -rc $(NAME) $(OBJ)

clean:
		@rm -fr $(OBJ)

fclean: clean
		@rm -fr $(NAME)

re: fclean all
