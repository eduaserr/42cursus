/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funlibft_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:43:02 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/28 19:44:10 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_pf(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_putchar_pf(char c, int *count)
{
	if (*count != -1)
	{
		if (write (1, &c, 1) == -1)
			*count = -1;
		else
			(*count)++;
	}
}

void	ft_putnbr_pf(long long nbr, char *base, int *count)
{
	if (nbr < 0)
	{
		ft_putchar_pf('-', count);
		nbr *= -1;
	}
	if (nbr < (int)ft_strlen_pf(base))
		ft_putchar_pf(base[nbr], count);
	else
	{
		ft_putnbr_pf(nbr / ft_strlen_pf(base), base, count);
		ft_putnbr_pf(nbr % ft_strlen_pf(base), base, count);
	}
}

void	ft_putstr_pf(char *str, int *count)
{
	if (!str)
		str = "(null)";
	while (*str)
		ft_putchar_pf(*str++, count);
}

void	ft_putptr_pf(unsigned long long nbr, int *count)
{
	if (nbr == 0)
		ft_putstr_pf("(nil)", count);
	else
	{
		ft_putstr_pf("0x", count);
		if (nbr > ft_strlen_pf(HEX_LOW_BASE))
		{
			ft_putnbr_pf(nbr / ft_strlen_pf(HEX_LOW_BASE), HEX_LOW_BASE, count);
			ft_putnbr_pf(nbr % ft_strlen_pf(HEX_LOW_BASE), HEX_LOW_BASE, count);
		}
		else
			ft_putnbr_pf(nbr, HEX_LOW_BASE, count);
	}
}
