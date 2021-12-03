/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 03:01:38 by cel-mhan          #+#    #+#             */
/*   Updated: 2021/12/03 03:02:49 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int n, char x, int *len)
{
	unsigned int	nb;
	char			*base;

	nb = n;
	if (x == 'X')
		base = "0123456789ABCDEF";
	else if (x == 'x')
		base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthex(nb / 16, x, len);
		ft_puthex(nb % 16, x, len);
	}
	else
		ft_putchar(base[nb], len);
}
