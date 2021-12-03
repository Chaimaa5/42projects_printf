/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 03:00:48 by cel-mhan          #+#    #+#             */
/*   Updated: 2021/12/03 03:01:31 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putunbr(nb / 10, len);
		ft_putunbr(nb % 10, len);
	}
	else
		ft_putchar(nb + '0', len);
}
