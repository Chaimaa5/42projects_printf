#ifndef LIBFT_H
# define    LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
void    ft_putstr(char *str);
void     ft_putchar(char c);
void    ft_putnbr(int n);
size_t  ft_strlen(char  *str);
void    ft_putunb(unsigned int   nb);
void    ft_puthex(int n, char x);
void    ft_putptr(unsigned long long n, char x);

#endif