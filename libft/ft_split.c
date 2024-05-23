/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:15:53 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/23 14:02:26 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**free_split(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static	int	wordcount(char const *s, char c)
{
	int		n_word;
	int		i;

	i = -1;
	n_word = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			n_word++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
	}
	return (n_word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		start;
	int		end;

	i = -1;
	start = 0;
	str = ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!str || !s)
		return (NULL);
	while (++i < wordcount(s, c) && s[start])
	{
		while (s[start] && ft_strchr(s + start, c) == s + start)
			start++;
		end = ft_strchr(s + start, c) - s;
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (free_split(str, i));
		start = end;
	}
	return (str);
}
