/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/17 21:25:45 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
char	*ft_strchr_gnl(char *str, int c)
{
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (NULL);
}

ssize_t	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr_gnl(char *str, unsigned int start, ssize_t len)
{
	char	*substr;
	ssize_t	i;

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

char	*ft_strdup_gnl(char *str)
{
	char	*p;
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	p = (char *)malloc(sizeof(char) * ft_strlen_gnl(str) + 1);
	if (!p)
		return (NULL);
	while (str[++i])
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	ssize_t	i;
	ssize_t	j;

	i = -1;
	j = -1;
	if (!s1)
		s1 = ft_strdup_gnl("");
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[++i])
		s3[i] = s1[i];
	while (s2[++j])
		s3[i++] = s2[j];
	s3[i] = '\0';
	return (ft_free_str(&s1), s3);
} */

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
	bytes_read = 1;
	add_buff[0] = '\0';
	while (!ft_strchr_gnl(add_buff, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, add_buff, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			ft_free_str(&add_buff);
			ft_free_str(&buff);
			return (NULL);
		}
		add_buff[bytes_read] = '\0';
		if (bytes_read > 0)
			buff = ft_strjoin_gnl(buff, add_buff);
	}
	ft_free_str(&add_buff);
	return (buff);
}

char	*ft_line(char *buff, char **line)
{
	char	*rest;
	int		l_buff;

	l_buff = ft_strlen_gnl(buff);
	if (!buff || !line)
		return (NULL);
	if (ft_strchr_gnl(buff, '\n'))
	{
		rest = ft_strdup_gnl(ft_strchr_gnl(buff, '\n') + 1);
		(*line) = ft_substr_gnl(buff, 0, l_buff - ft_strlen_gnl(rest));
		ft_free_str(&buff);
		return (rest);
	}
	else
	{
		(*line) = ft_substr_gnl(buff, 0, l_buff);
		ft_free_str(&buff);
		return (NULL);
	}
}

char	*get_next_line(int fd)
{
	static char		*buff;
	char			*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buff || !ft_strchr_gnl(buff, '\n'))
		buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	buff = ft_line(buff, &line);
	return (line);
}

/* #include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

void	delay(float sec)
{
	time_t start, current;
	time(&start);
	do {
		time(&current);
	} while (difftime(current, start) < sec);
}

int main(void) {
	int fd;
	char *line;
	fd = open("txt", O_RDONLY);
	line = get_next_line(fd);
	while (line) {
		printf("%s", line);
		free(line);
		fflush(stdout); // Limpia el búfer de salida
		line = get_next_line(fd);
        if (!line) {
            printf("(null)\n");
            fflush(stdout); // Limpia el búfer de salida
        }
		delay(1); // Retraso de 1 segundo
    }
    close(fd);
    return 0;
}
 */