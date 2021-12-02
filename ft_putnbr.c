#include "libft.h"

void ft_putnbr(int   n, int *len)
{
    unsigned int nb;

    if (n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    nb = n;
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