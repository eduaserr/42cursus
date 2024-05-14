/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:15:53 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/14 17:59:30 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	int		i;

// 	i = -1;
// 	while (s[++i])
// 		if (s[i] == (char) c)
// 			return ((char *) &s[i]);
// 	if (s[i] == (char) c)
// 		return ((char *) &s[i]);
// 	return (NULL);
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = -1;
// 	while (s[++i])
// 		;
// 	return (i);
// }

char	**free_split(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

int	wordcount(const char *s, char c)
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

char	*fillwords(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		start;
	int		end;

	i = -1;
	start = 0;
	str = (char **)malloc(sizeof(char *) * wordcount(s, c) + 1);
	if (!str)
		return (NULL);
	while (start < (int)ft_strlen(s))
	{
		while (ft_strchr(s + start, c) == s + start)
			start++;
		if (!ft_strchr(s + start, c))
			end = ft_strlen(s);
		else
			end = ft_strchr(s + start, c) - s;
		str[++i] = fillwords(s, start, end);
		if (!str[i])
			return (free_split(str, i));
		start = end;
	}
	str[++i] = NULL;
	return (str);
}

// int main(void)
// {
// 	char **split;
// 	int i;

// 	i = -1;
	
// 	split  = ft_split("     olol", ' ');
// 	while (split[++i])
// 		printf("%s\n", split[i]);
// }
