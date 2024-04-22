/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:16:13 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/22 16:38:19 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)b;
	while (len > 0)
	{
		p[i++] = (unsigned char )c;
		len--;
	}
	return (b);
}
