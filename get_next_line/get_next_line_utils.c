/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/31 14:41:43 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	if (s[i] == (char) c)
		return ((char *) &s[i]);
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str)
		i++;
	return (i);
}
