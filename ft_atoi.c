/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:35:32 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/29 21:39:41 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return ();
}

int	main(void)
{
	printf("%d\n", atoi("12"));
	return (0);
}
