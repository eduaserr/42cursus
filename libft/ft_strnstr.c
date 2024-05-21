/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:36:44 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/29 20:00:53 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			l_need;
	size_t			i;
	char			*p_hays;
	char			*p_need;

	i = 0;
	p_hays = (char *)haystack;
	p_need = (char *)needle;
	l_need = ft_strlen(p_need);
	if (!needle[0])
		return (p_hays);
	while (p_hays[i] && p_need && i < len)
	{
		if (ft_strncmp(&p_hays[i], p_need, l_need) == 0 && i + l_need <= len)
			return (&p_hays[i]);
		i++;
	}
	return (NULL);
}
