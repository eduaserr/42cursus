/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:05:19 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/07 13:50:09 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	int		number;

	i = 0;
	sign = 1;
	number = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!n)
		return (NULL);

	str[i] = '\0';
}
