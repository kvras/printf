CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_puthex.c ft_puthexx.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_putadresse.c

OBJ =	$(SRC:.c=.o)
NAME = libftprintf.a

%.o:%.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)
$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
		@rm -fr $(OBJ)

fclean: clean
		@rm -fr $(NAME)

re: fclean all
