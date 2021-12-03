/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 03:05:22 by cel-mhan          #+#    #+#             */
/*   Updated: 2021/12/03 03:07:19 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_is_char(char *str, int *len)
{
	if (!str)
		ft_putstr("(null)", len);
	else
		ft_putstr(str, len);
}

static void	ft_convert(va_list arg, const char *p, int i, int *len)
{
	if (p[i] == 'i' || p[i] == 'd')
		ft_putnbr(va_arg(arg, int), len);
	else if (p[i] == 'u')
		ft_putunbr(va_arg(arg, unsigned int), len);
	else if (p[i] == 's')
		ft_is_char(va_arg(arg, char *), len);
	else if (p[i] == 'x' || p[i] == 'X')
		ft_puthex(va_arg(arg, int), p[i], len);
	else if (p[i] == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (p[i] == 'p')
		ft_putptr(va_arg(arg, unsigned long long), len);
	else if (p[i] == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		l;

	i = 0;
	l = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
			ft_convert(ptr, s, ++i, &l);
		else
			ft_putchar(s[i], &l);
		i++;
	}
	va_end(ptr);
	return (l);
}
