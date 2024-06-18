/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:47:18 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/18 16:34:34 by eduaserr         ###   ########.fr       */
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
	bytes_read = 1;
	add_buff[0] = '\0';
	while (!ft_strchr(add_buff, '\n') && bytes_read != 0)
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

	*line = NULL;
	l_buff = ft_strlen(buff);
	if (!buff || !line)
		return (NULL);
	if (ft_strchr(buff, '\n'))
	{
		rest = ft_strdup(ft_strchr(buff, '\n') + 1);
		(*line) = ft_substr_gnl(buff, 0, l_buff - ft_strlen(rest));
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
	if (!buff || !ft_strchr(buff, '\n'))
		buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	buff = ft_line(buff, &line);
	return (line);
}
/*
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