/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 03:02:55 by cel-mhan          #+#    #+#             */
/*   Updated: 2021/12/03 03:04:15 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long long nb, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthexa(nb / 16, len);
		ft_puthexa(nb % 16, len);
	}
	else
		ft_putchar(base[nb], len);
}

void	ft_putptr(unsigned long long nb, int *len)
{
	ft_putstr("0x", len);
	ft_puthexa(nb, len);
}
