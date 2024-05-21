/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:24:06 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/29 17:39:24 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t		l_dest;
	size_t		j;

	l_dest = ft_strlen(dest);
	j = 0;
	if (l_dest >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[j] && l_dest + j < dstsize - 1)
	{
		dest[l_dest + j] = src[j];
		j++;
	}
	dest[l_dest + j] = '\0';
	return (l_dest + ft_strlen(src));
}
