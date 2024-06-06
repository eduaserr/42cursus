/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/06 18:33:17 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *str, int c)
{
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	while (str[++i])
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (NULL);
}

char	*ft_strdup_gnl(char *str)
{
	char	*dup;
	int		i;

	i = -1;
	dup = malloc(sizeof(char) * ft_strlen_gnl(str) + 1);
	if (!dup)
		return (NULL);
	while (str[++i])
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	s3 = (char *)malloc(sizeof(char) * ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!s1 || !s2 || !s3)
		return (NULL);
		if (s1)
		{
			while (s1[++i])
				s3[i] = s1[i];
			free(s1);
		}
	while (s2[++j])
		s3[i++] = s2[j];
	free(s2);
	s3[i] = '\0';
	return (s3);
}

char	*ft_read(int fd, char *buff)
{
	ssize_t		bytes_read;
	char		*add_buff;

	add_buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!add_buff)
		return (NULL);
	while (!ft_strchr_gnl(buff, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, add_buff, BUFFER_SIZE);
			if (bytes_read == -1)
		{
			free(add_buff);
			return (NULL);
		}
		add_buff[bytes_read] = '\0';
		if (!buff)
			buff = ft_strdup_gnl(add_buff);		//intentar usar solo strjoin para ambos casos
		buff = ft_strjoin_gnl(buff, add_buff);
	}
	return (buff);
}

char	*ft_line(char *stash, char *line)
{
	
}

char	*get_next_line(int fd)
{
	static char		*buff;
	char			*stash;
	char			*line;

	stash = 0;
	line = 0;
	if (fd <= 0)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_line(buff, line);
	if (!line)
		return (NULL);
	return (line);
}

int	main(void)
{
	int			fd;

	fd = open("txt", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}