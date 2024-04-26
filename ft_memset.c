/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:16:13 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/24 17:24:17 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)b;
	while (len > 0)
	{
		p[i++] = (unsigned char )c;
		len--;
	}
	return (b);
}

int	main(void)
{
	char	src[] = "Hello";

	printf("%s\n", ft_memset(src, 'a', sizeof(src)));
	return (0);
}
