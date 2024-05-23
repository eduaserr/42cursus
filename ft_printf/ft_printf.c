/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:41:49 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/23 21:18:15 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	lst;

	count = -1;
	va_start(lst, str);
	while (str[++count])
	{
		if (str[count] == '%' && str[count + 1] == 'c')
			ft_putchar(va_arg(lst, char));
		if (str[count] == '%' && str[count + 1] == 's')
			ft_putstr(va_arg(lst, char *));
		if (str[count] == '%' && str[count + 1] == 'p')
			ft_putnbr(va_arg(lst, void *), "0123456789abcdef");
		if (str[count] == '%' && str[count + 1] == 'd' || str[count + 1] == 'i')
			ft_putnbr(va_arg(lst, int), "0123456789");
		if (str[count] == '%' && str[count + 1] == 'u')
			ft_putnbr(va_arg(lst, unsigned int), "0123456789");
		if (str[count] == '%' && str[count + 1] == 'x')
			ft_putnbr(va_arg(lst, unsigned int), "0123456789abcdef");
		if (str[count] == '%' && str[count + 1] == 'X')
			ft_putnbr(va_arg(lst, unsigned int), "0123456789ABCDEF");
		if (str[count] == '%' && str[count + 1] == '%')
			ft_putchar(va_arg(lst, char));
	}
	va_end(lst);
	return (0);
}

int	main(void)
{
	ft_printf("%%");
}
