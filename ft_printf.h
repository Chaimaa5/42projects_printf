/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 03:07:26 by cel-mhan          #+#    #+#             */
/*   Updated: 2021/12/03 03:10:31 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
size_t	ft_strlen(char *str);
void	ft_putunbr(unsigned int nb, int *len);
void	ft_puthex(int n, char x, int *len);
void	ft_putptr(unsigned long long n, int *len);
int		ft_printf(const char *s, ...);
#endif
