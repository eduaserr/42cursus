/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/14 19:57:14 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free_str(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_read(int fd, char *buff)
{
	ssize_t		bytes_read;
	char		*add_buff;
	
	add_buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!add_buff)
		return (NULL);
	while (!ft_strchr_gnl(add_buff, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, add_buff, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(add_buff);
			return (NULL);
		}
		add_buff[bytes_read] = '\0';
		buff = ft_strjoin_gnl(buff, add_buff);
	}
	free(add_buff);
	return (buff);
}

char	*ft_line(char *buff, char **line)
{
	char	*rest;
	int		l_buff;

	l_buff = ft_strlen_gnl(buff);
	if (!line || !buff)
		return (NULL);
	if (ft_strchr_gnl(buff, '\n'))
	{
		rest = ft_strchr_gnl(buff, '\n') + 1;
		(*line) = ft_substr_gnl(buff, 0, l_buff - (ft_strlen_gnl(rest)));
		return (rest);
	}
	else
	{
		(*line) = ft_substr_gnl(buff, 0, l_buff);
		free(buff);
		return (NULL);
	}
}

char	*get_next_line(int fd)
{
	static char		*buff;
	char			*line;

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	buff = ft_line(buff, &line);
	if (!line)
		return (NULL);
	return (line);
}
