/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:41:49 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/28 20:00:11 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fillformat_pf(va_list lst, char c, int *count)
{
	if (c == 'c')
		ft_putchar_pf(va_arg(lst, int), count);
	else if (c == 's')
		ft_putstr_pf(va_arg(lst, char *), count);
	else if (c == 'p')
		ft_putptr_pf(va_arg(lst, unsigned long long), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr_pf(va_arg(lst, int), INT_BASE, count);
	else if (c == 'u')
		ft_putnbr_pf(va_arg(lst, unsigned int), INT_BASE, count);
	else if (c == 'x')
		ft_putnbr_pf(va_arg(lst, unsigned int), HEX_LOW_BASE, count);
	else if (c == 'X')
		ft_putnbr_pf(va_arg(lst, unsigned int), HEX_UPP_BASE, count);
	else if (c == '%')
		ft_putchar_pf(c, count);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	lst;
	int		count;
	int		i;

	count = 0;
	i = -1;
	va_start(lst, str);
	while (str[++i] && count != -1)
	{
		if (str[i] != '%')
			ft_putchar_pf(str[i], &count);
		else
			ft_fillformat_pf(lst, str[++i], &count);
	}
	va_end(lst);
	return (count);
}
