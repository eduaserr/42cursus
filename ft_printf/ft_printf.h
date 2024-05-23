/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:38:00 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/23 21:25:27 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

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
int		ft_strlen(char *str);

/**
 * @brief 
 * 
 * @param c
 */
void	ft_putchar(char c);

/**
 * @brief 
 * 
 * @param num
 */
void	ft_putnbr(long long num, char *base);

/**
 * @brief 
 * 
 * @param str 
 */
void	ft_putstr(char *str);

/**
 * @brief 
 * 
 * @param str
 * @param ... 
 * @return (int)
 */
int		ft_printf(char const *str, ...);


#endif