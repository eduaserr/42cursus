/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/03 21:11:56 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *stash)
{
	ssize_t		bytes_read;
	char		*buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	if (bytes_read == -1)
		return (NULL);
	buff[bytes_read] = '\0';
	if (bytes_read < BUFFER_SIZE)
		stash = ft_strjoin(stash, buff);
	stash = ft_strdup(buff);
	return (stash);
}

char	*ft_line()
{
	int i;

	i = -1;
	while ( != '\n' ||  != '\0')
		
	[] = '\0';
	return ();
}

char	*get_next_line(int fd)
{
	char			*buff;
	static char		*stash;
	char			*line;

	stash = 0;
	line = 0;
	if (fd <= 0)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!line)
		return (NULL);
	return (stash);
}

int	main(void)
{
	int			fd;

	fd = open("txt", O_RDONLY);

	printf("1	%s", get_next_line(fd));
	printf("2	%s", get_next_line(fd));
}
/*
buff
buff copiar to variable estatica 
buscar saltos linea

while 
read
strjoin stash + buff
if salto d linea
 */