/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:46:17 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/03 16:11:33 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = -1;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (++i < len)
		substr[i] = s[i + start];
	substr[i] = '\0';
	return (substr);
}
