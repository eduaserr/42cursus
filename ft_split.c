/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:15:53 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/13 22:12:53 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int	word;
	int		i;
	char	**str;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	str = (char **)malloc(sizeof(char *) * word + 1);
	if (!str)
		return (NULL);

	printf("%d",word);
	return(NULL);
}
int main()
{
	ft_split("     Hola que tal  hhug", ' ');
}
