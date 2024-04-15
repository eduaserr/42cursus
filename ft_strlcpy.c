/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:27:54 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/12 15:33:34 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && --size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int main() {
    char src[] = "Hello, world!";
    char dest[20]; // Tamaño suficiente para contener la cadena src

    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));

    printf("La cadena copiada es: %s\n", dest);
    printf("La longitud de la cadena original es: %u\n", length);

    return 0;
}
