/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/08 21:23:11 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(char *str, int c)
{
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	if (c == '\0')
		return ((char *)&str[ft_strlen_gnl(str)]);
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (NULL);
}

size_t	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str)
		i++;
	return (i);
}

size_t	ft_strlcpy_gnl(char *dest, char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (dstsize == 0)
		return (ft_strlen_gnl(src));
	while (src[++i] && dstsize - 1)
	{
		dest[i] = src[i];
		dstsize--;
	}
	dest[i] = '\0';
	return (ft_strlen_gnl(src));
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	s3 = malloc(sizeof(char) * ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!s1 || !s2 || !s3)
		return (NULL);
	if (s1)
	{
		while (s1[++i])
			s3[i] = s1[i];
	}
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = '\0';
	free(s1);
	return (s3);
}
