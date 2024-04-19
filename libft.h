/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr <eduaserr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:40:57 by eduaserr          #+#    #+#             */
/*   Updated: 2024/04/19 16:43:26 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
/**
 * @brief Tests for any character for which isupper or
	islower is true. 
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false and
	returns non-zero if tests true.
 */
int		ft_isalpha(int a);
/**
 * @brief Tests for a decimal digit character. 
 * 
 * @param a 
 * @return (int) Return zero if the character tests false and
	return non-zero if tests true.
 */
int		ft_isdigit(int a);
/**
 * @brief Function tests for any character for which isalpha(3) or
	isdigit(3) is true. 
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false
	and returns non-zero if tests true.
 */
int		ft_isalnum(int a);
/**
 * @brief Function tests for an ASCII character, which is any character
	between 0 and octal 0177 inclusive.
 * 
 * @param a 
 * @return (int) 
 */
int		ft_isascii(int a);
/**
 * @brief Tests for any printing character printable.
 * 
 * @param a 
 * @return (int) Returns zero if the character tests false and
     returns non-zero if tests true.
 */
int		ft_isprint(int a);
/**
 * @brief Computes the length of the string. Function attempts to
	compute the length of s, but never scans beyond the first maxlen bytes of s.
 * 
 * @param s 
 * @return (size_t) Returns the number of characters that precede the
     terminating NUL character.
 */
size_t	ft_strlen(const char *s);
/**
 * @brief Copy strings. Function take the full size of the
	destination buffer and guarantee NUL-termination if there is room.
	Copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.
 * 
 * @param dest 
 * @param src 
 * @param dstsize 
 * @return (size_t) Return the total length of the string it tried to create.
	(length of src).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
/**
 * @brief Concatenate strings. Function take the full size of the
	destination buffer and guarantee NUL-termination if there is room.
	Appends string src to the end of dst. It will append at most
	dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize.
	If the src and dst strings overlap, the behavior is undefined.
 * 
 * @param dest 
 * @param src 
 * @param dstsize 
 * @return (size_t) Return the total length of the string it tried to create.
	Means the initial length of dst plus the length of src. If the return value
	is >= dstsize, the output string has been truncated.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
/**
 * @brief Lower case to upper case letter conversion.
 * @param c 
 * @return (int) Returns the corresponding upper-case letter if there is one;
	otherwise, is returned unchanged.
 */
int		ft_toupper(int c);
/**
 * @brief Upper case to lower case letter conversion.
 * 
 * @param c 
 * @return (int) Returns the corresponding lower-case letter if there is one;
	otherwise, is returned unchanged.
 */
int		ft_tolower(int c);
/**
 * @brief Writes len bytes of value c (converted to an unsigned char)
	to the string b.
 * 
 * @param b 
 * @param c 
 * @param len 
 * @return (void*) Returns its first argument.
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, does nothing.
	Does not return a value.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief Copies n bytes from memory area src to memory area dst. If dst
	and src overlap, behavior is undefined.
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return (void*) Returns the original value of dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif