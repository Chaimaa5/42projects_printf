#include "libft.h"

void    ft_puthex(int n, char x, int *len)
{
    unsigned int    nb;
    char            *base;

    nb = n;
    if (x == 'X')
        base = "0123456789ABCDEF";
    else if (x == 'x')
        base = "0123456789abcdef";
    if (nb >= 16)
    {
        ft_puthexa(nb / 16);
        ft_puthexa(nb % 16);
    }
    else
    {
        putchar(base[nb]);
        *len++;
    }
}