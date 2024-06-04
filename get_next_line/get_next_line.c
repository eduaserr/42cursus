/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/04 18:02:07 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str)
		i++;
	return (i);
}

char	*ft_strdup_gnl(char *str)
{
	char	*dup;
	int		i;

	i = -1;
	dup = (char *)malloc(sizeof(char) * ft_strlen_gnl(str) + 1);
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
		}
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = '\0';
	return (s3);
}

char	*ft_read(int fd, char *stash)
{
	ssize_t		bytes_read;
	char		*buff;

	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	if (bytes_read == -1)
		return (NULL);
	buff[bytes_read] = '\0';
	if (bytes_read < BUFFER_SIZE)
		stash = ft_strjoin_gnl(stash, buff);		//intentar usar solo strjoin para ambos casos
	stash = ft_strdup_gnl(buff);
	return (stash);
}

char	*ft_line(char *stash, )
{
	
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
	if (!buff)
		return (NULL);
	line = ft_line(stash, line);
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
