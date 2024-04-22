/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:39:19 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/22 22:01:19 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char)s;
	i = 0;
	if (s[i] == c)
		return (c);
	else
		return (NULL);
}

int	main(void)
{
	char	s[] = "Hello";
	printf("%d\n", ft_strchr(s, 'H'));
	return (0);
}
