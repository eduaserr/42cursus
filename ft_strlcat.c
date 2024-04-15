/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:24:06 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/12 15:33:08 by eduaserr         ###   ########.fr       */
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
