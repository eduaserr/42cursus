/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:24:06 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/16 13:30:24 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int main() {
    char src[] = "World!";
    char dest[] = "Hello";
	char dest2[] = "Hello";

    unsigned int length = ft_strlcat(dest, src, 5);
	unsigned int length2 = strlcat(dest2, src, 5);

    printf("La cadena copiada es: %s\n", dest);
    printf("La longitud de la cadena original es: %u\n", length);
    printf("La cadena copiada es: %s\n", dest2);
    printf("La longitud de la cadena original es: %u\n", length2);
	return (0);
}
