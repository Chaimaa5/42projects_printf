#include "libft.h"

void    ft_puthexa(unsigned long long nb, int *len)
{
    char            *base;

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

void    ft_putptr(unsigned long long nb)
{
    ft_putstr("0x");
    ft_puthexa(nb);
}