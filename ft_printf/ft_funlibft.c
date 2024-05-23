/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funlibft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:43:02 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/23 21:21:31 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (++i)
		;
	return (i);
}

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(long long num, char *base)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < ft_strlen(base))
		ft_putchar(base[num]);
	else
	{
		ft_putnbr(num / ft_strlen(base), base);
		ft_putnbr(num % ft_strlen(base), base);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
