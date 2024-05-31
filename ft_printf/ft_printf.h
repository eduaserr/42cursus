/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:38:00 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/31 12:20:04 by eduaserr         ###   ########.fr       */
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

/**
 * @brief Returns the total lenght of the string.
 * 
 * @param str
 * @return (size_t)
 */
size_t	ft_strlen_pf(char *str);

/**
 * @brief Prints character and increments count.
 * 
 * @param c
 * @param count count bytes printed by printf function.
 */
void	ft_putchar_pf(char c, int *count);

/**
 * @brief Prints numbers in decimal base. It puts too numbers in
 * hexadecimal base.
 * 
 * @param nbr
 * @param count count bytes printed by printf function.
 */
void	ft_putnbr_pf(long long nbr, char *base, int *count);

/**
 * @brief Prints a string.
 * 
 * @param str
 * @param count count bytes printed by printf function.
 */
void	ft_putstr_pf(char *str, int *count);

/**
 * @brief Prints a pointer in hexadecimal base, adding "0x" before.
 * 
 * @param nbr
 * @param count count bytes printed by printf function.
 */
void	ft_putptr_pf(unsigned long long nbr, int *count);

/**
 * @brief Chooses what type of variable is going to print.
 * 
 * @param lst
 * @param str
 * @param count count bytes printed by printf function.
 * @return (int)
 */
int		ft_fillformat_pf(va_list lst, char str, int *count);

/**
 * @brief Recreates printf function.
 * 
 * @param str
 * @param ...
 * @return (int)
 */
int		ft_printf(char const *str, ...);

#endif
