#include "libft.h"

void ft_putnbr(unsigned int   nb, int *len)
{
    if (nb >= 10)
    {
       ft_putnbr(nb / 10);
       ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
        *len++;
    }
}