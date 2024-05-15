/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:52:35 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/15 20:51:23 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	len;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strrchr(set, s1[len - 1]))
		len--;
	p = (char *)malloc(sizeof(char) * len - i + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[j] = s1[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
