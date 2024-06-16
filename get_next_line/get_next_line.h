/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:59 by eduaserr          #+#    #+#             */
/*   Updated: 2024/06/16 21:51:19 by eduaserr         ###   ########.fr       */
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
# include <time.h>

char	*ft_free_str(char **str);

ssize_t	ft_strlen_gnl(char *str);

char	*ft_strchr_gnl(char *str, int c);

char	*ft_strdup_gnl(char *str);

char	*ft_substr_gnl(char *str, unsigned int start, ssize_t len);

char	*ft_strjoin_gnl(char *s1, char *s2);

char	*get_next_line(int fd);

#endif