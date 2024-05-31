/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/05/31 18:23:46 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	ft_read(int fd, char *buff)
{
	ssize_t		bytes_read;

	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (*buff != '\0')
		bytes_read = read(fd, buff, BUFFER_SIZE);
	if (bytes_read == -1 || bytes_read == 0)
		return (NULL);
	buff[BUFFER_SIZE] = '\0';
}

char	*ft_line(char *buff, char *stash)
{
	int	i;

	stash = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!stash)
		return (NULL);
	i = -1;
	while (buff[++i] != '\n' || buff[i] != '\0')
		stash[i] = buff[i];
	stash[i] = '\0';
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*stash;
	char		*rest;
	char		*line;

	if (fd < 0 || !fd)
		return (NULL);
	ft_read(fd, buff);
	line = ft_line(buff, stash);
	if (!rest)
		return (NULL);
	rest = ft_strchr(buff, '\n');
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