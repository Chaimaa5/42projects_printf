#include "libft.h"

void    ft_putstr(char *str, int *len)
{
    int i;

    i = 0;
    if (!str)
        write(1, "(null)", 6);
    while (str[i])
    {
        write(1, &str[i], 1);
        *len++;
        i++;
    }
}