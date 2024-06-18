/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/18 16:24:07 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (NULL);
}

ssize_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr_gnl(char *str, unsigned int start, ssize_t len)
{
	char	*substr;
	ssize_t	i;

	i = -1;
	if (start >= ft_strlen(str))
		return (NULL);
	if (len + start > ft_strlen(str))
		len = ft_strlen(str) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (++i < len)
		substr[i] = str[i + start];
	substr[i] = '\0';
	return (substr);
}

char	*ft_strdup(char *str)
{
	char	*p;
	int		i;

	i = -1;
	p = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!p)
		return (NULL);
	while (str[++i])
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	ssize_t	i;
	ssize_t	j;

	i = -1;
	j = -1;
	if (!s1)
		s1 = ft_strdup("");
	if (!s1)
		return (NULL);
	s3 = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[++i])
		s3[i] = s1[i];
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = '\0';
	return (ft_free_str(&s1), s3);
}
