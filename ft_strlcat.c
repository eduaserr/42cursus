/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:24:06 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/16 11:33:37 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i]);
	return (i);
}

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	swp;

	i = ft_strlen(dest);
	swp = i;
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && size - 1 > i)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (swp + ft_strlen(src));
}
