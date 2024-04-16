/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:24:06 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/16 16:23:49 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		l_dest;
	size_t		j;

	l_dest = ft_strlen(dest);
	if (size <= l_dest)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && size - 1 > l_dest + j)
	{
		dest[l_dest + j] = src[j];
		j++;
	}
	dest[l_dest] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
