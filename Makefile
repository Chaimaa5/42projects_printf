Name = libftprintf.a
CC = cc
CFlags = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c ft_puthex.c ft_printf.c \
	ft_strlen.c ft_putunbr.c 
OBJ = $(SRC:.c=.o)

${Name}: ${OBJ}
	ar rc $@ ${OBJ}
all: ${Name}

clean :
	rm -f ${OBJ}
fclean : clean
	rm -f ${Name}

re : fclean all

