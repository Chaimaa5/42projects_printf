Name = libft.a
CC = cc
CFlags = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr ft_puthex ft_printf.c
OBJ = $(SRC:.c=.o)

${Name}: ${OBJ}
	ar rc $@ ${OBJ}
all: ${Name}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -f libft.a

re: fclean all

