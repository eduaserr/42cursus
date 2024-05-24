/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:41:49 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/24 19:14:17 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fillformat_pf(va_list lst, char const *str, int count)
{
	while (str[++count])
	{
		if (str[count] == '%' && str[count + 1] == 'c')
			ft_putchar_pf(va_arg(lst, int), count);
		if (str[count] == '%' && str[count + 1] == 's')
			ft_putstr_pf(va_arg(lst, char *));
		if (str[count] == '%' && str[count + 1] == 'p')
			ft_putnbr_pf(va_arg(lst, unsigned long long), HEX_LOW_BASE);
		if (str[count] == '%' && str[count + 1] == 'd' || str[count + 1] == 'i')
			ft_putnbr_pf(va_arg(lst, int), INT_BASE);
		if (str[count] == '%' && str[count + 1] == 'u')
			ft_putnbr_pf(va_arg(lst, unsigned int), INT_BASE);
		if (str[count] == '%' && str[count + 1] == 'x')
			ft_putnbr_pf(va_arg(lst, unsigned int), HEX_LOW_BASE);
		if (str[count] == '%' && str[count + 1] == 'X')
			ft_putnbr_pf(va_arg(lst, unsigned int), HEX_UPP_BASE);
		if (str[count] == '%' && str[count + 1] == '%')
			ft_putchar_pf(va_arg(lst, int), count);
	}
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	lst;
	int		count;
	int		i;

	count = -1;
	i = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (*str == '%')
		{
			str[i++];
			ft_fillformat_pf(lst, (char *)str, &count);
		}
		else
			ft_putchar_pf(str[i], &count);
		str[i++];
	}
	va_end(lst);
	return (count);
}

int	main(void)
{
	ft_printf("hello, %i", 42);
}
