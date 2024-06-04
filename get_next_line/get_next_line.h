/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:59 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/04 16:21:31 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

size_t	ft_strlen_gnl(char *str);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup_gnl(char *str);

char	*ft_strjoin_gnl(char *s1, char *s2);

char	*get_next_line(int fd);


#endif