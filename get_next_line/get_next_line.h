/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:59 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/26 16:18:23 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_free_str(char **str);

ssize_t	ft_strlen(char *str);

char	*ft_strchr(char *str, int c);

char	*ft_strdup(char *str);

char	*ft_substr_gnl(char *str, unsigned int start, ssize_t len);

char	*ft_strjoin_gnl(char *s1, char *s2);

char	*get_next_line(int fd);

#endif