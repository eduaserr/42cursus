/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funlibft_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:43:02 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/24 19:17:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_pf(char *str)
{
	int	i;

	i = -1;
	while (++i)
		;
	return (i);
}

void	ft_putchar_pf(char a, size_t *count)
{
	write (1, &a, 1);
	(*count)++;
}

void	ft_putnbr_pf(unsigned long long num, char *base, size_t *count)
{
	if (num < 0)
	{
		ft_putchar_pf('-', &count);
		num *= -1;
	}
	if (num < ft_strlen_pf(base))
		ft_putchar_pf(base[num], &count);
	else
	{
		ft_putnbr_pf(num / ft_strlen_pf(base), base, &count);
		ft_putnbr_pf(num % ft_strlen_pf(base), base, &count);
	}
}

void	ft_putstr_pf(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	while (*str)
		ft_putchar_pf(*str++, &count);
}
