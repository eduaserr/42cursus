/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/10 21:58:19 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free_str(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

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
	if (c == '\0')
		return ((char *)&str[ft_strlen_gnl(str)]);
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (NULL);
}

char	*ft_substr_gnl(char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = -1;
	if (start >= ft_strlen_gnl(str))
		return (ft_strdup_gnl(""));
	if (len + start > ft_strlen_gnl(str))
		len = ft_strlen_gnl(str) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (++i < len)
		substr[i] = str[i + start];
	substr[i] = '\0';
	return (substr);
}

char	*ft_strdup_gnl(char *s1)
{
	char	*p;
	int		i;

	i = -1;
	p = (char *)malloc(sizeof(char) * ft_strlen_gnl(s1) + 1);
	if (!p)
		return (NULL);
	while (s1[++i])
		p[i] = s1[i];
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if(!s1)
			return (NULL);
		s1[0] = '\0';
	}
	s3 = malloc(sizeof(char) * ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!s1 || !s2)
		return (NULL);
	if (!s3)
		/*return (ft_free_str(&s1));*/
	while (s1[++i])
		s3[i] = s1[i];
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = '\0';
	/*free(&s1);*/
	return (s3);
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
	if (ft_strchr_gnl(buff, '\n'))
	{
		rest = ft_strchr_gnl(buff, '\n') + 1;
		(*line) = ft_substr_gnl(buff, 0, l_buff - (ft_strlen_gnl(rest)) - 1);
	}
	return (rest);
}

char	*get_next_line(int fd)
{
	static char		*buff;
	char			*line;

	if (fd <= 0)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	buff = ft_line(buff, &line);
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
