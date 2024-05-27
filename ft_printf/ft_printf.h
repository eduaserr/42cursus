/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:38:00 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/27 19:54:58 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define INT_BASE "0123456789"
# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/**
 * @brief Returns the total lenght of the string.
 * 
 * @param str 
 * @return (int) 
 */
size_t	ft_strlen_pf(char *str);

/**
 * @brief 
 * 
 * @param a
 */
void	ft_putchar_pf(char a, int *count);

/**
 * @brief 
 * 
 * @param nbr
 */
void	ft_putnbr_pf(long long nbr, char *base, int *count);

/**
 * @brief 
 * 
 * @param str 
 */
void	ft_putstr_pf(char *str, int *count);

/**
 * @brief 
 * 
 * @param nbr 
 * @param count 
 */
void	ft_putptr_pf(unsigned long long nbr, int *count);

/**
 * @brief 
 * 
 * @param lst 
 * @param str 
 * @param count 
 * @return (int)
 */
int		ft_fillformat_pf(va_list lst, char str, int *count);

/**
 * @brief 
 * 
 * @param str
 * @param ... 
 * @return (int)
 */
int		ft_printf(char const *str, ...);

#endif