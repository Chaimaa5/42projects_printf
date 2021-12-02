#include "libft.h"

int	check(const char *p)
{
	int n;
	int i;

	i = 0;
	n = 0;
	if (p[i] == '%')
	{
		i++;
		n++;
	}
	while (p[i])
	{
		if (*p == '%')
			n++;
		i++;
	}
	return (n)
}

void	ft_convert(va_list arg, char p, int *len)
{
	if (*p == '%')
	{
		p++;
		if (*p == 'c')
				ft_putchar(va_arg(arg, int), len);
		else if (*p == 's')
			ft_putstr(va_arg(arg, const char*), len);
		else if (*p == 'i' || *p == 'd')
			ft_putnbr(va_arg(arg, int), len);
		else if (*p == 'x' || *p == 'X')
			ft_puthex(va_arg(arg, const char), len);
		else if (*p == 'u')
			t_putunb(va_arg(arg, unsigned int), len);
		else if (*p == 'p')
			ft_putptr(va_arg(arg, unsigned long long), len);
		else if (*p == '%')
			ft_putchar('%');
	}
}
int ft_printf(const char *p, ...)
{
	va_list arg;
	int		len;
	int		num;

	len = 0;
	num = 0;
	va_start(arg, p);
	if (!n)
		ft_putchar(va_arg(arg, int), len);
	while (*p)
	{
		
	}
	va_end(arg);
	return (len);
}